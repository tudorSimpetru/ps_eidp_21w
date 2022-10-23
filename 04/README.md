# Aufgabe 1 (8 Punkte)

## Vorlesungsfolien

* Kontrollstrukturen (06-Kontrollstrukturen.pdf)

## Beschreibung

In dieser Aufgabe muss die Erreichbarkeit von bestimmten Positionen ermittelt werden. Dafür ist der folgende Code
gegeben.

```c
#include <stdlib.h>

int main(void) {
    int a, b;
    // initialize variables
    if (a < b) {
        // position 1
        if (a > 10) {
            // position 2
        }
    } else if ((a > b) && !(a < 30)) {
        if (a > 50 && b <= 50) {
            // position 3
        } else {
            // position 4
        }
    } else {
        // position 5
        if (4 & 2) {
            // position 6
        } else if ((a = 2)) {
            // position 7
        }
    }
    if (++a == 3) {
        // position 8
    } else if (b) {
        // position 9 (challenge)
    }
    // position 10
    return EXIT_SUCCESS;
}

```

Beschreiben Sie unter welcher Bedingung die Positionen (1-8 und 10) im Code erreicht werden können, indem Sie die
Tabelle in der Datei `s04e01.txt` ausfüllen. Sofern die betrachtete Position erreichbar ist, geben Sie, neben der
Bedingung wie diese Position erreicht werden kann, eine mögliche Belegung der Variablen `a` und `b` an.

Sie können optional – als zusätzliche kleine Herausforderung – die notwendige Bedingung und eine mögliche
Beispielbelegung, um Position 9 zu erreichen, ermitteln.

# Aufgabe 2 (2 Punkte)

## Vorlesungsfolien

* Kontrollstrukturen (06-Kontrollstrukturen.pdf)

## Beschreibung

Erstellen Sie ein C-Programm, welches mithilfe einer `for`-Schleife die ersten `quantity`-Vielfachen der Zahl `value`
untereinander auf der Standardausgabe ausgibt. Die Ganzzahlen (`int`) `quantity` und `value` werden von dem\*der 
Benutzer\*in eingelesen.

## Hinweise

- Artemis gibt beim Testen für die Variable `quantity` nur Werte zwischen 0 und 100 ($`0 <= quantity <= 100 `$) ein.
- Artemis gibt beim Testen für die Variable `value` nur Werte zwischen 0 und 50 ($`0 <= value <= 50 `$) ein.

### Beispielausgaben

Beispiel 1: `quantity = 4` und `value = 3`. Die Zahlen `4` bzw. `3` in ersten beiden Zeilen der Beispielausgabe wurden
durch den\*die Benutzer\*in eingegeben und sollen nicht von Ihrem Programm ausgegeben werden.

```
quantity: 4
value: 3

3
6
9
12
```

Beispiel 2: `quantity = 1` und `value = 5`. Die Zahlen `1` bzw. `5` in ersten beiden Zeilen der Beispielausgabe wurden
durch den\*die Benutzer\*in eingegeben und sollen nicht von Ihrem Programm ausgegeben werden.


```
quantity: 1
value: 5

5
```

# Aufgabe 3 (6 Punkte)

## Vorlesungsfolien

* Funktionen (07-Funktionen.pdf)

## Beschreibung

Erstellen Sie ein C-Programm zum Lösen von quadratischen Gleichungen. Eine quadratische Gleichung ist durch 
$`ax^2 + bx + c = 0`$ gegeben.

## Arbeitsschritte

- Implementieren Sie eine Funktion mit der Signatur `double compute_discriminant(double a, double, b, double c)` welche
  die Diskriminante $`D = b^2 - 4ac`$ berechnet.
- Implementieren Sie eine weitere Funktion `is_solvable`, die zurückgibt, ob die quadratische Gleichung mindestens eine
  reelle Lösung ($`D \geq 0`$) hat. Überlegen Sie sich welche Parameter und Rückgabewerte die Funktion hat.
- Implementieren Sie weiters zwei Funktionen `double compute_x1(double a, double b, double c)`
  und `double compute_x2(double a, double b, double c)` welche die Lösungen $`x_1`$, $`x_2`$ der quadratischen
  Gleichung berechnet. Sollte keine reelle Lösung existieren, soll die Funktion 0 zurückgeben. Verwenden Sie für diese
  Überprüfung die bereits zuvor implementierten Funktionen.
- In der `main`-Funktion kann der\*die Benutzer\*in über `stdin` die drei reellen Zahlen (`double`) `a`, `b` und `c`
  eingeben und es wird die Diskriminante ausgegeben. Sofern die eingegebene quadratische Gleichung mindestens eine
  Lösung hat, werden auch die Lösungen $`x_1`$ und $`x_2`$ ausgegeben.

## Hinweise

- Beim Kompilieren eines Programms, welches den Header `math.h` verwendet, wird zusätzlich das Compiler-Flag `-lm`
  benötigt.
- Bei Funktionstests werden die Funktionen Ihrer Lösung individuell getestet. Wenn dieser Test fehlschlägt, kann es
  sein, dass zwar das Programm entsprechend Ihren Vorstellungen funktionieren, aber möglicherweise stellen nicht alle
  Funktionen die geforderte Funktionalität bereit.

# Aufgabe 4 (6 Punkte)

## Vorlesungsfolien

* Funktionen (07-Funktionen.pdf)

## Beschreibung

In dieser Aufgabe wird auf das Konzept der rekursiven Programmierung eingegangen.

### Arbeitsschritte

- Implementieren Sie eine Funktion mit der Signatur `unsigned sum(unsigned n)` welche rekursiv (nicht iterativ) die
  Summe der Zahl von `0` bis `n` berechnet.
- Implementieren Sie eine Funktion mit der Signatur `unsigned long long fac(unsigned char n)` welche rekursiv (nicht
  iterativ) die Fakultät der Zahl `n` berechnet.
- Implementieren Sie eine Funktion mit der Signatur `unsigned number_sequence(unsigned char n)` welche rekursiv (nicht
  iterativ) die nte-Zahl der folgenden Zahlenfolge berechnet

$`L_n := \begin{cases} 2 & \text{if } n = 0 \\ 1 & \text{if } n = 1 \\ L_{n-1} + L_{n-2} & \text{if } n > 1 \end{cases} `$

- Implementieren Sie eine Funktion mit der Signatur `unsigned digit_sum(int n)` welche rekursiv (nicht iterativ) die
  Quersumme der Zahl `n` berechnet.
- Testen Sie Ihre Implementierung in der `main`-Funktion mit einigen Werten.

## Hinweise

- Die Fakultät einer natürlichen Zahl $`n`$ ist $`n! = \prod_{k=1}^n = 1 \cdot 2 \cdots n`$ als das Produkt der
  natürlichen Zahlen von $`1`$ bis $`n`$ definiert (z.B. $`4! = 1 · 2 · 3 · 4 = 24`$, $`0! = 1`$).
- Die ersten Zahlen der Zahlenfolge $`L_n`$ sind 2, 1, 3, 4, …!

# Aufgabe 5 (8 Punkte)

## Vorlesungsfolien

* Funktionen (07-Funktionen.pdf)

## Beschreibung

In dieser Aufgabe wird die Binärdarstellung einer Zahl rekursiv ausgegeben.

### Arbeitsschritte

- Implementieren Sie eine Funktion mit der Signatur `void print_binary(uint32_t value)` welche rekursiv (nicht iterativ)
  die binärdarstellung der Zahl `value` auf `stdout` ausgibt.
- Lesen Sie in der `main`-Funktion mittels `scanf` eine positive Ganzzahl mit der festen Breite von 32 Bits ein und
  rufen Sie mit dieser Zahl als Argument `print_binary` auf.

### Hinweise

- Sie können in `print_binary` beliebige Hilfsfunktionen verwenden.
- In dieser Aufgabe dürfen Sie keine Schleifen verwenden!
- Informieren Sie sich bezüglich Integer mit fester Bitbreite (z.B. `uint32_t`)!
- Die Binärdarstellung der Zahl muss nur auf der Standardausgabe ausgegeben werden. Ein Zwischenspeichern der Zahl ist
  nicht erforderlich.
- Mithilfe des folgenden Codefragments können Sie mit `scanf` bzw. `printf` die Variable `value` vom Typ `uint32_t` einlesen
  bzw. ausgeben. Beachten Sie, dass Sie für die Konstanten `SCNu32` und `PRIu32` den Header `inttypes.h` inkludieren
  müssen.

  ```c
  scanf("%" SCNu32, &value);
  printf("%" PRIu32, value);
  ```

## Beispiele

Beispiel 1: Möglicher Programmablauf bei der Eingabe der Zahl `5`. Die Zahl 5 in der ersten Zeile der Beispielausgabe
wurde durch den\*die Benutzer\*in eingegeben und solle nicht von Ihrem Programm ausgegeben werden.

```text
value: 5

5 = 0b00000000000000000000000000000101
```

Beispiel 2: Möglicher Programmablauf bei der Eingabe der Zahl `16`. Die Zahl 16 in der ersten Zeile der Beispielausgabe
wurde durch den\*die Benutzer\*in eingegeben und solle nicht von Ihrem Programm ausgegeben werden.

```text
value: 16

16 = 0b00000000000000000000000000010000
```

Beispiel 1: Möglicher Programmablauf bei der Eingabe der Zahl `4294967294`. Die Zahl 4294967294 in der ersten Zeile der
Beispielausgabe wurde durch den\*die Benutzer\*in eingegeben und solle nicht von Ihrem Programm ausgegeben werden.

```text
value: 4294967294

4294967294 = 0b11111111111111111111111111111110
```
