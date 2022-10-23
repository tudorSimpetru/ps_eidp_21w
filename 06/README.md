# Aufgabe 1 (5 Punkte)

## Vorlesungsfolien

* Funktionen (07-Funktionen.pdf)

## Beschreibung

In dieser Aufgabe sind drei Programme vorgegeben. Bearbeiten Sie die folgenden Teilaufgaben.

### Teilaufgabe a)

Welche Änderungen sind nötig, damit das Programm ohne Fehler kompiliert?

```c
#include <stdio.h>
#include <stdlib.h>

int f1(int a, int b) { return f2(a + b); }

int f2(int a) { return a * a; }

int main(void) {
    printf("%d\t%d\n", f1(1, 2), f2(3));
    printf("%d\t%d\n", f1(4, 5), f2(6));
    return EXIT_SUCCESS;
}

```

### Teilaufgabe b)

Betrachten Sie folgendes Programm. In welchen Zeilen werden lokale bzw. globale Variablen deklariert? Geben Sie für jede
Zuweisung die Zeile der Variablendeklaration und den Dezimalwert vor sowie nach der Verwendung an, indem Sie die Tabelle
in der Datei `s06e01_b.txt` ausfüllen.

Verzichten Sie beim Kompilieren dieser Teilaufgabe auf die Flags `-Wall -Werror -Wextra -Wpedantic`!

```c
#include <stdlib.h>

int a;

int main(void) {
    a = 1;
    {
        a = 2;
        char a;
        a = 3;
        {
            int a;
            a = 4;
        }
        {
            a = 5;
        }
        a = 6;
    }
    a = 7;
    return EXIT_SUCCESS;
}

```

### Teilaufgabe c)

Welche vier Gültigkeitsbereiche von Namen gibt es in einer Datei? Geben Sie die Gültigkeitsbereiche aller Variablen des
folgenden Programms an, indem Sie die Tabelle in der Datei `s06e01_c.txt` ausfüllen.

```c
#include <stdlib.h>

int a;

long fun(long b, long c) { return b + c; }

int main(void) {
    short d;
    {
        char e;
    }
    return EXIT_SUCCESS;
}

```

### Hinweise

- Nehmen Sie für alle Teilaufgaben an, dass ein ASCII-Code kompatibler Zeichensatz verwendet wird!

# Aufgabe 2 (10 Punkte)

## Vorlesungsfolien

* Zeiger (09-Zeiger.pdf)

## Beschreibung

Gegeben ist folgender Ausschnitt des Speichers.

| Speicheradresse | Inhalt (Binär) |
|----------------:|---------------:|
|             ... |            ... |
|              08 |     `00011110` |
|              09 |     `00011001` |
|              10 |     `00000000` |
|              11 |     `00000010` |
|              12 |     `00001110` |
|              13 |     `00001101` |
|              14 |     `00001011` |
|              15 |     `00000000` |
|              16 |     `00000000` |
|              17 |     `00000000` |
|              18 |     `01111000` |
|              19 |     `00000000` |
|              20 |     `00100110` |
|              21 |     `00000000` |
|              22 |     `00010000` |
|              23 |     `00000000` |
|              24 |     `00000000` |
|              25 |     `00100000` |
|              26 |     `00000000` |
|              27 |     `00010010` |
|              28 |     `01000000` |
|              29 |     `01110001` |
|              30 |     `10001000` |
|             ... |            ... |

Links steht die Speicheradresse und rechts der Inhalt des Bytes an dieser Speicheradresse. Gehen Sie davon aus, dass
sowohl der Datentyp `int`, als auch Zeiger 8 Bit groß sind. Zudem wird angenommen, dass der Datentyp `long int` 16 Bit
groß ist. **Beantworten Sie die nachfolgenden Fragen und füllen Sie die dazu notwendigen Zellen in der
Tabelle `s06e02.txt` aus**.

1. Die Variable `int a` liegt auf Speicheradresse 13.
    - Was gibt `printf("%d", a)` aus?
2. Gegeben sei die Variable `int b`. Der Befehl `printf("%d", b)` gibt `113` aus.
    - Was wird für `printf("%p", &b)` ausgeben?
3. Der Zeiger `int *pc` liegt auf Speicheradresse 22.
    - Auf welche Speicheradresse verweist der Zeiger `pc`?
    - Was wird bei `printf("%p", &pc)` ausgegeben?
    - Was wird bei `printf("%d", *pc)` ausgegeben?
4. Gegeben sei der Zeiger `int *pd`. Der Befehl `printf("%d", *pd)` gibt `136` auf dem Bildschirm aus.
    - Auf welche Speicheradresse verweist der Zeiger `pd`?
    - An welcher Speicheradresse liegt der Zeiger?
5. Der Zeiger `long int *pe` liegt auf der Speicheradresse 9.
    - Welche Länge in Bytes hat der Zeiger `pe`.
    - Welche Länge hat der Speicherbereich, auf den er verweist?
    - Was gibt der Befehl `printf("%ld", *pe)` aus?
6. Der Zeiger `int **ppf` liegt auf der Speicheradresse 12.
    - Was wird für `printf("%p", *ppf)` ausgegeben?
    - Was wird für `printf("%d", **ppf)` ausgegeben?
7. Gehen Sie davon aus, dass alle Speicherbereiche mit dem Wert 0, welche bisher nicht verwendet wurden, frei sind. Es
   wird eine neue Variable `int g = 64` erzeugt und der Compiler legt diese auf die Speicheradresse 28. Anschließend
   wird einen Zeiger `int *pg = &g` erzeugt.
    - Spielen Sie Compiler und überlegen Sie sich eine gültige Speicheradresse für den Zeiger und füllen Sie den
      festgelegten Speicher mit dem korrekten Wert.

### Hinweise

- Sofern notwendig können Sie in der Tabelle Zellen verbinden.
- Auf realen Systemen schreibt der C-Standard vor, dass der Datentyp `int` bzw. `long int` eine Minimalgröße von 16 bzw.
  32 Bits haben muss!
  Die Annahme, dass `int`s 8 Bit und `long int`s 16 Bit lang sind, wird hier zugunsten der Lesbarkeit getroffen.
- Weiters wird angenommen, dass der Rechner Sequenzen von Bytes als big-endian speichert.

# Aufgabe 3 (5 Punkte)

## Vorlesungsfolien

* Zeiger (09-Zeiger.pdf)

## Beschreibung

Implementieren Sie in der Datei `s06e03.c` die Funktion mit der
Signatur `bool safe_division(const int *x, const int *y, int *result)` welche den Wert von `x` durch den Wert von `y`
dividiert. Sofern mindestens einer der drei Zeiger (`x`, `y`, `result`) ein `NULL`-Pointer oder der Divisor (`y`)
gleich `0` ist, wird `false` zurückgegeben und die Division wird nicht durchgeführt. Anderenfalls soll das berechnete
Ergebnis in den Speicherbereich, auf welchen `result` zeigt, gespeichert werden. Testen Sie Ihre Funktion in der `main`
-Funktion mit einigen Beispielaufrufen.

# Aufgabe 4 (10 Punkte)

## Vorlesungsfolien

* Arrays (08-Arrays.pdf)
* Zeiger (09-Zeiger.pdf)


## Beschreibung

Sie haben folgendes Programm gegeben:

```c
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int cmp(int x, int y) {
    if (x < y) {
        return 1;
    } else if (x > y) {
        return 0;
    } else {
        return -1;
    }
}

void bubblesort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = n; j >= i; j--) {
            if (cmp(a[j], a[j - 1]) < 0)
                swap(&a[j], &a[j - 1]);
        }
    }
}

int main(void) {
    int a[] = {5, 10, 11, 9, 7, 8, 4, 5, 7, 2, 45, 1, 4, 20};
    int n = sizeof(a) / sizeof(*a);
    bubblesort(a, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return EXIT_SUCCESS;
}

```

Dieses Programm sollte ein Array aufsteigend sortieren, ist aber fehlerhaft. Finden Sie die fehlerhaften Stellen und
korrigieren Sie diese. Verwenden Sie dazu auch den `gdb`. Sie sollten in der Übung die einfachsten Schritte (Breakpoint
setzen, `run`, `step`, `next`, `continue`, Variablen inspizieren etc.) im `gdb` erklären können!

### Hinweise

- Eine kurze Einführung in den gdb finden Sie
  beispielsweise [hier](https://sourceware.org/gdb/current/onlinedocs/gdb/Sample-Session.html#Sample-Session)
  oder [hier](http://www.unknownroad.com/rtfm/gdbtut/gdbinfloop.html).
