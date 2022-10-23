# Aufgabe 1 (8 Punkte)

## Vorlesungsfolien

* Strukturen, Unions, Bitfelder (10-StrukturenUnionsBitfelder.pdf)

## Teilaufgabe a)

Definieren Sie die folgenden Strukturen.

1. Definieren Sie eine Struktur, welche einen `float` und einen `char` enthält.
2. Definieren Sie eine Struktur, welche einen `int` und einen `unsigned` enthält. Der `int` Wert soll dabei 2 Bits und
   der `unsigned` 3 Bits breit sein.
3. Definieren Sie eine Struktur welche einen `int` und eine anonyme `union`, die einen `long` und einen `double`
   beinhaltet.
4. Definieren Sie eine mögliche Repräsentation einer verketteten Liste, welche zur dynamischen Speicherung von
   `int`s verwendet werden kann. Erstellen Sie dafür eine Struktur `list`, welche eine Variable `size`vom Typ `int` und
   einen Zeiger `head` auf eine Struktur `node` enthält. Die Struktur `node` enthält eine Variable `value`
   vom Typ `int`une einen Zeiger `next` auf die Struktur `node`.

## Teilaufgabe b)

Gegeben sei folgendes Programm. Welchen Speicherbedarf erwarten Sie sich für die Strukur `my_struct`, basierend auf den
verwendeten Datentypen der Elemente? Führen Sie anschließend das Programm aus. Dokumentieren Sie Ihre Beobachtungen.

```c
#include <stdio.h>
#include <stdlib.h>

struct my_struct {
    float x;
    double y;

};

int main(void) {
    printf("size of my_struct: %lu\n", sizeof(struct my_struct));
    return EXIT_SUCCESS;
}

```

## Teilaufgabe c)

1. Was ist der minimale Speicherbedarf (in Byte) der Struktur `my_struct` basierend auf den verwendeten Datentypen?

```c
struct my_struct {
    float x;
    float y;
    double z;
};
```

2. Was ist der minimale Speicherbedarf (in Byte) der Union `my_union` basierend auf den verwendeten Datentypen?

```c
union my_union {
    float x;
    float y;
    double z;
};
```

3. Gegeben sei folgender Code. Wie kann auf die Variable `x` von `p1` zugegriffen werden? Wie kann auf die Variable `y`
   von `p2` zugegriffen werden? Gibt es für diese Zugriffe alternativen?

```c
#include <stdlib.h>

struct point {
    int x;
    int y;
    int z;
};

int main(void) {
    struct point p1 = {1, 2, 3};
    struct point *p2 = &p1;
    // TODO: access variable x via p1
    // TODO: access variable y via p2
    // TODO: alternative syntax?
    return EXIT_SUCCESS;
}
```

# Aufgabe 2 (10 Punkte)

## Vorlesungsfolien

* Strukturen, Unions, Bitfelder (10-StrukturenUnionsBitfelder.pdf)

## Beschreibung

Erstellen Sie ein Programm, welches für eine übergebene Gleitkommazahl
die [IEEE 754 single-precision](https://en.wikipedia.org/wiki/Single-precision_floating-point_format) Binärdarstellung
ausgibt. Die Gleitkommazahl wird als Kommandozeilenparameter übergeben. Sofern beim Konvertierung des Strings in eine
Gleitkommazahl (`float`) ein Fehler auftritt oder nicht der ganze Parameter in eine Zahl transformiert werden kann, wird
eine Fehlermeldung auf der Standardfehlerausgabe ausgegeben und das Programm mit `EXIT_FAILURE` beendet. Anderenfalls
soll die Binärdarstellung der Zahl entsprechend der Beispiele ausgegeben und das Programm mit `EXIT_SUCCESS` beendet
werden.

## Hinweise

- Versuchen Sie die Umwandlung durch den Einsatz von `union` zu erreichen.
- Die Funktion `strtof` kann beim Umwandeln des übergebenen Parameters hilfreich sein.

## Beispiele

Beispiel 2: Beispielaufruf mit `4.1` als Parameter und Programmablauf

```text
./s08e02 4.1
Number: 4.100000
Binary representation:
   0  10000001  00000110011001100110011
sign  exponent                 mantissa

```

Beispiel 2: Beispielaufruf mit `-3.5` als Parameter und Programmablauf

```text
./s08e02 -3.5
Number: -3.500000
Binary representation:
   1  10000000  11000000000000000000000
sign  exponent                 mantissa

```

Beispiel 3: Beispielaufruf mit `5a` als Parameter und Programmablauf

```text
./s08e02 5a     
ERROR: 5a is not a valid float!
Extracted float component: 5.000000
Remaining: a

```

# Aufgabe 3 (12 Punkte)

## Vorlesungsfolien

* Strukturen, Unions, Bitfelder (10-StrukturenUnionsBitfelder.pdf)

## Beschreibung

In dieser Aufgabe wird Funktionalität zum Sortieren und Ausgeben von Personendaten implementiert. Führen Sie folgende
Arbeitsschritte aus.

### Arbeitsschritte

- Definieren Sie mittels `typedef` eine Struktur `person_t` um Personendaten zu speichern. Eine Person hat einen
  Vornamen `first_name`, einen Nachnamen `last_name` une ein Alter `age`. Es wird angenommen, dass der Vor- und Nachname
  maximal 64 Zeichen lang sind.
- Implementieren Sie eine Funktion `print_person`, welche die Daten einer Person in einer Zeile ausgibt.
- Lesen Sie die Manpage zu `qsort` und machen Sie sich mit der Funktion vertraut. Implementieren Sie anschließend
  folgende Vergleichsfunktionen, um ein Array von Personendaten sortieren zu können:
    - `age_comparator`: Sortiert Personendaten aufsteigend nach Alter.
    - `first_name_comparator`: Sortiert Personendaten lexikografisch nach Vornamen.
    - `last_name_comparator`: Sortiert Personendaten nach der Länge des Nachnamen.
    - `name_comparator`: Sortiert Personendaten lexikografisch nach Nachnamen, Vornamen. Sofern die Nachnamen zweier
      Personen gleich sind, wird zusätzlich der Vorname herangezogen.
    - `person_comparator`: Sortiert Personendaten lexikografisch nach Nachnamen, Vornamen und aufsteigend nach Alter.
- Implementieren Sie mithilfe von `qsort` die Funktion mit der
  Signatur `void sort_persons(person_t *persons, const int num_persons, int (*comparator)(const void *, const void *))`,
  welche ein Array `persons` mit der Länge `num_persons` durch die Vergleichsfunktion `comparator` sortiert.
- Erstellen Sie in der `main`-Funktion ein Array mit den Daten von mindestens 5 Personen und testen Sie die
  verschiedenen Vergleichsfunktionen mit `sort_persons`.

### Hinweise

- Stellen Sie sicher, dass Sie jeden Parameter der Funktion `qsort` erklären können.
