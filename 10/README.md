# Aufgabe 1 (4 Punkte)

## Vorlesungsfolien

* Präprozessor (13-Praeprozessor.pdf)

## Beschreibung

Es sind folgende Makros gegeben.

```c
#define TABLE_SIZE BUF_SIZE
#define BUF_SIZE 512

#define MAX(x, y) ((x) >= (y) ? (x) : (y))

#define MY_PRINT(n) printf("var" #n " = %d\n", var##n)

#define DEBUG 1

#define DEBUG_PRINT(...) printf("DEBUG: " __VA_ARGS__)
```

Zeigen Sie auf wie die folgenden Codeausschnitte nach dem Präprozessordurchlauf aussehen und erklären Sie die
dazugehörigen Makros.

### Codeausschnitt 1

```c
char *table = malloc(TABLE_SIZE);
```

### Codeausschnitt 2

```c
int a = 2;
printf("%d\n", MAX(MAX(a + 1, 4), 5));
```

### Codeausschnitt 3

```c
int var15 = 22;
MY_PRINT(15);
```

### Codeausschnitt 4

```c
#ifdef DEBUG
    printf("My debug messages\n");
#endif
```

### Codeausschnitt 5

```c
int x = 12;
int y = 61;
DEBUG_PRINT("x = %d, y = %d\n", x, y);
```

# Aufgabe 2 (4 Punkte)

## Vorlesungsfolien

* Präprozessor (13-Praeprozessor.pdf)

## Beschreibung

In dieser Aufgabe sollen das theoretische Verständnis von Makros und dem Präprozessor gefestigt werden. Lösen Sie dafür
die folgenden Unteraufgaben.

### Teilaufgabe a)

Geben Sie den Code (Inkludes ausgenommen) nach dem Präprozessordurchlauf durchlauf an. Sofern Sie Probleme in diesem
Programm finden, beschreiben Sie diese und geben Sie mögliche Lösungsvorschläge, welche nur die Makros verändern, an.
Erklären Sie Probleme mithilfe von Kommentaren.

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PRINT_COND(cond)                                                       \
    printf("'" #cond "' evaluates to '%s'\n", (cond) ? "true" : "false")
#define CNT_COND(cond, y)                                                      \
    PRINT_COND(cond);                                                          \
    if (cond)                                                                  \
        y++

int main(int argc, char **argv) {
    int a = 0;
    size_t b = 4;
    if (argc > 1)
        CNT_COND(strlen(argv[1]) > b, a);
    else {
        PRINT_COND(strlen(argv[0]) > b);
        --a;
    }
    printf("a = %d\n", a);
    return EXIT_SUCCESS;
}

```

### Teilaufgabe b)

Geben Sie den Code (Inkludes ausgenommen) nach dem Präprozessordurchlauf durchlauf an. Warum wird im Makro `PRINT_VAR`
eine `do`-`while`-Schleife verwendet? Erklären Sie mithilfe von Kommentaren.

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DEBUG 1

#ifdef DEBUG
#define PRINT_VAR(file, line, x)                                               \
    do {                                                                       \
        printf("%s:%d: ", file, line);                                         \
        printf(#x " = %d\n", x);                                               \
    } while (0)
#else
#define PRINT_VAR(file, line, x) printf(#x " = %d\n", x)
#endif

int main(void) {
    srand(time(NULL));
    int a = rand() % 2;
    PRINT_VAR(__FILE__, __LINE__, a);
    if (a)
        PRINT_VAR(__FILE__, __LINE__, a);
    return EXIT_SUCCESS;
}

```

## Hinweise
- Stellen Sie sicher, dass Ihre Lösungen für beide Teilaufgaben kompilieren.

# Aufgabe 3 (8 Punkte)

## Vorlesungsfolien

* Präprozessor (13-Praeprozessor.pdf)

## Beschreibung

Im Programmcode `s10e03.c` werden verschiedene symbolische Konstanten und Makros vorausgesetzt. Implementieren Sie
diese mithilfe von Präprozessor-Direktiven entsprechend den folgenden Vorgaben.

- Die Konstante `MY_VALUE` steht für den Wert `1`sofern `DEBUG` definiert ist, ansonsten ist ihr Wert `10`.
- Die Konstante `MY_TRUE` steht für den Wert `1`.
- Die Konstante `MY_FALSE` steht für den Wert `0`.
- Das Makro `MY_ASSERT` erwarten einen booleschen Ausdruck und einen Text. Im Makro wird der boolesche Ausdruck
  überprüft. Sofern dieser *wahr* ist, wird der Text ausgegeben und das Programm mit `EXIT_FAILURE` beendet.
- Das Makro `COND_TO_STR` erwartet einen booleschen Ausdruck. Sofern der boolesche Ausdruck *falsch* ist, evaluiert das
  Makro zu `"false"`. Ansonsten evaluiert es zu `"true"`.
- Das Makro `PRINT_COND` erwartet einen booleschen Ausdruck und gibt den booleschen Ausdruck sowie das Ergebnis des
  Ausdrucks mithilfe von `COND_TO_STR` aus. Für `COND_TO_STR(MY_TRUE)` wird beispielsweise
  `'MY_TRUE' evaluates to 'true'` auf der Standardausgabe ausgegeben.
- Das Makro `PRINT_DEBUG` soll nur Text ausgeben, wenn die Konstante `DEBUG` definiert ist.
- Das Makro `PRINT_STATUS` gibt die aktuelle Datei, Zeilennummer, Funktion sowie eine Nachricht aus. Für die Datei,
  Zeilennummer und Funktion sollen vordefinierte Makros herangezogen werden. Das Makro soll nur Text ausgeben, wenn die
  Konstante `DEBUG` gesetzt ist und den Wert `3` hat.

Des Weiteren sollen Sie ein Makefile, welches mindestens folgende Regeln enthält, bereitstellen:

- `s10e03`: Kompiliert `s10e03.c` mit den Flags `-Wall -Werror -Wextra -Wpedantic -std=c11`
- `s10e03_D`: Kompiliert `s10e03.c` mit den Flags `-Wall -Werror -Wextra -Wpedantic -std=c11` und definiert bei
  Compileraufruf zusätzlich das Flag `DEBUG`
- `s10e03_D3`: Kompiliert `s10e03.c` mit den Flags `-Wall -Werror -Wextra -Wpedantic -std=c11` und definiert bei
  Compileraufruf zusätzlich das Flag `DEBUG=3`

## Erwartete Ausgabe

### Target `s10e03`

```text
'MY_TRUE' evaluates to 'true'
'MY_FALSE' evaluates to 'false'
'y < x' evaluates to 'true'
'12 + 34 / 12 > 0' evaluates to 'true'
stop program, y < x.
```

### Target `s10e03_D`

```text
x: 1
y: 5
'MY_TRUE' evaluates to 'true'
'MY_FALSE' evaluates to 'false'
'y < x' evaluates to 'false'
'12 + 34 / 12 > 0' evaluates to 'true'
```

### Target `s10e03_D3`

```text
s10e03.c:42 | function: main | message: program start!
x: 1
y: 5
s10e03.c:47 | function: main | message: before first assertion
'MY_TRUE' evaluates to 'true'
'MY_FALSE' evaluates to 'false'
'y < x' evaluates to 'false'
'12 + 34 / 12 > 0' evaluates to 'true'
s10e03.c:55 | function: main | message: before second assertion
s10e03.c:58 | function: main | message: program end
```

## Hinweise

- Die Zeilennummern in Ihrer Abgabe können abweichen.

# Aufgabe 4 (14 Punkte)

## Vorlesungsfolien

* Strukturen, Unions, Bitfelder (10-StrukturenUnionsBitfelder.pdf)
* Dynamische Speicherverwaltung (12-DynamischeSpeicherverwaltung.pdf)
* Modulare Programmierung in C (14-ModulareProgrammierung.pdf)

## Beschreibung

In dieser Aufgabe soll ein [Stapelspeicher](https://de.wikipedia.org/wiki/Stapelspeicher) (
engl. [Stack](https://en.wikipedia.org/wiki/Stack_(abstract_data_type)))
implementiert werden. Stellen Sie vor der Bearbeitung der Aufgabe sicher, dass Sie das Funktionsprinzip eines Stacks
kennen.

### Arbeitsschritte

Definieren Sie eine geeignete Datenstruktur namens `my_stack` in `my_stack.c` um die, der Implementierung
zugrundeliegende, [verkettete Liste](https://en.wikipedia.org/wiki/Linked_list) aufzubauen. Implementieren Sie die Logik
für folgende Schnittstellen, welche in der Datei `my_stack.h` vorgegeben ist, mithilfe von verketteten Listen.

- `my_stack_init` reserviert Speicher und initialisiert die Datenstruktur.
- `my_stack_empty` gibt `true` zurück, falls der Stack leer ist, ansonsten wird `false` zurückgegeben.
- `my_stack_size` gibt die aktuelle Größe des Stacks zurück.
- `my_stack_top` gibt den zuletzt in den Stack eingefügten Wert zurück.
- `my_stack_push` fügt `val` in den Stack ein und gibt den eingefügten Wert oder `NULL` zurück.
- `my_stack_pop` gibt den zuletzt in den Stack eingefügten Wert zurück und entfernt ihn.
- `my_stack_free` gibt den gesamten, derzeit noch vom Stack verwendeten Speicher wieder frei.

Erstellen Sie ein Testprogramm (`s10e04.c`), welches die Basisfunktionalität Ihrer Stack-Implementierung testet.

### Hinweise

- Überlegen Sie wie sich die Schnittstelle verhalten soll wenn `NULL`-Pointer als Parameter übergeben werden oder andere
  spezielle Fälle auftreten.
- Die Datenstrukturen sollten unter keinen Umständen Debug-Information ausgeben.
- Testen Sie mit `valgrind` ob jeglicher von der Implementierung verwendeter Speicher wieder freigegeben wird.
