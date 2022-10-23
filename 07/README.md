# Aufgabe 1 (6 Punkte)

## Vorlesungsfolien

* Zeiger (09-Zeiger.pdf)

## Teilaufgabe a)

Gegeben sei ein zweidimensionales Array `matrix`. Geben Sie für folgende Punkte jeweils den Zeilen- und Spaltenindex des
Elementes, auf welches zugegriffen wird, an.

1. `matrix[4][2]`
2. `**matrix`
3. `*(*matrix + 3)`
4. `*matrix[1]`
5. `(*matrix)[1]`
6. `*(matrix[1])`
7. `*(*(matrix + 5) + 3)`


## Teilaufgabe b)

Gegeben sei das folgende Programm. Erklären und begründen Sie die Ausgabe des Programms in der Datei `s07e01_b.txt`!
```c
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char values[] = "abcdefg";
    char *p1 = values;
    char *p2 = values + strlen(values);
    char c1 = *(p1 + 2);
    char c2 = *p2;
    printf("1. %c\n", c1);
    printf("2. %c\n", c2);
    printf("3. %d\n", p1 < p2);
    printf("4. %d\n", (p1 + 4) < p2);
    printf("5. %d\n", (((int32_t *)p1) + 4) < (int32_t *)p2);
    return EXIT_SUCCESS;
}

```

# Aufgabe 2 (5 Punkte)

## Vorlesungsfolien

* Zeiger (09-Zeiger.pdf)

## Beschreibung

Implementieren Sie folgende Funktionen:

- `void my_pow_int(int *b, int n)`: Diese Funktion berechnet die Potenz $`b^n`$ für Ganzzahlen (`int`)
- `void my_pow_float(float *b, int n)`: Diese Funktion berechnet die Potenz $`b^n`$ für Gleitkommazahlen (`float`)
- `void my_pow_double(double *b, int n)`: Diese Funktion berechnet die Potenz $`b^n`$ für Gleitkommazahlen (`double`)
- `void my_pow(void *b, int n, enum base_type type)`: Diese Funktion berechnet die Potenz $`b^n`$ für `int`, `float`
  oder `double`-Werte. Warum wird hier ein zusätzlicher Parameter benötigt?

Testen Sie die Implementierung Ihrer Funktionen in der `main`-Funktion.

### Hinweise

- Das Ergebnis soll über den Zeiger `b` zurückgegeben werden!
- Die Funktion `pow()` aus `math.h` kann für die implementierung der Potenzfunkion hilfreich sein.
- Berücksichtigen Sie beim Implementieren Ihrer Funktionen mögliche Spezialfälle.
- Verändern Sie das gegebene Enum `base_type` nicht!

# Aufgabe 3 (6 Punkte)

## Vorlesungsfolien

* Zeiger (09-Zeiger.pdf)

## Beschreibung

In dieser Aufgabe soll mit Funktionszeigern gearbeitet werden.

### Arbeitsschritte

Führen Sie folgende Arbeitsschritte durch:

- Implementieren Sie eine Funktion `apply` welche ein Array vom Datentyp `int`, die Länge des Arrays vom
  Datentyp `size_t` sowie einen Funktionszeiger erwartet. Der Funktionszeiger verweist auf eine Funktion, welche eine
  Ganzzahl (`int`) als Parameter übernimmt und eine Ganzzahl (`int`) zurückgibt. Die Funktion `apply` soll für jedes
  Element des Arrays die übergebene Funktion aufrufen und den Rückgabewert an die Speicherstelle des originalen Elements
  im Array speichern.
- Implementieren Sie die Funktionen:
    - `mul2`: Gibt das Produkt aus der übergebenen Zahl und 2 zurück.
    - `pow2`: Gibt das Quadrat der übergebenen Zahl zurück.
    - `root2`: Gibt den ganzzahligen Anteil der Quadratwurzel der übergebenen Zahl zurück.
- Testen Sie die Implementierung Ihrer Funktionen in der `main`-Funktion.

### Hinweise

- Überlegen Sie sich nach diesen Vorgaben passende Signaturen für die Funktionen!
- Für die Funktion `root2` können Sie annehmen, dass immer nur nicht negative Werte übergeben werden!


# Aufgabe 4 (13 Punkte)

## Vorlesungsfolien

* Arrays (08-Arrays.pdf)

## Beschreibung

Implementieren Sie eine Funktion mit der Signatur `int length_longest_palindrome(char str[])`, welche die Länge eines
der längsten Palindrome in einem String ermittelt. Ein Palindrom ist eine Zeichenkette, welche von links und rechts
gelesen dieselbe Zeichenkette ergibt.

Testen Sie Ihre `length_longest_palindrome`-Implementierung in der `main`-Funktion.

### Beispiel

| Zeichenkette | Länge eines längsten Palindroms |
|--------------|--------------------------------:|
| ""           |                               0 |
| "a"          |                               1 |
| "ab"         |                               1 |
| "aba"        |                               3 |
| "abac"       |                               3 |
| "hello"      |                               2 |

### Hinweise

- In Artemis wird Ihre Lösung nur mit Zeichenketten getestet, welche aus Zahlen und Buchstaben besteht.
- Bei der Überprüfung von Palindromen soll die Groß- und Kleinschreibung berücksichtigt werden.
