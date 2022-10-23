# Aufgabe 1 (5 Punkte)

## Vorlesungsfolien

* Variablen und Datentypen (04-VariablenDatentypen.pdf)

## Beschreibung

Geben Sie den Datentyp und den Dezimalwert der folgenden C-Literale an:

1. `0xCull`
2. `'c'`
3. `.2f`
4. `1.3e-2f`
5. `30`
6. `0xB1LL`
7. `011`
8. `1e4L`
9. `4.`
10. `5u`
11. `2.l`
12. `0x1e5f`
13. `.7`
14. `5e2`
15. `0Xcaul`
16. `'\t'`
17. `80000`
18. `2f`
19. `0x1e5l`
20. `8l`
21. `0x1e5lf`

*Achtung:* Es haben sich ungültige Literale eingeschlichen! Markieren Sie diese mit "ungültig".

### Hinweise

- Nehmen Sie für Zeichen an, dass ein ASCII-Code kompatibler Zeichensatz verwendet wird!

# Aufgabe 2 (10 Punkte)

## Vorlesungsfolien

* Operatoren und Ausdrücke (05-OperatorenAusdruecke.pdf)

## Beschreibung

In dieser Aufgabe sollen das theoretische Verständnis für die Auswertung von C-Ausdrücken/Anweisungen gefestigt werden.
Lösen Sie dafür die folgenden Unteraufgaben.

### Teilaufgabe a)

Geben Sie den **C-Datentyp** des Ergebnisses der folgenden C-Ausdrücke an:

1. `5 == 3`
2. `2.0 * 4 / 5`
3. `41 / (float)17`
4. `5.0e-2 * .02f`
5. `0xC0DE`
6. `0.1f == 0.1`
7. `'E' + 'A' + 'S' + 'Y'`
8. `INT_MAX & 0xFFFF`
9. `12 | 5 ^ 4 & 3`
10. `0xBull`

### Teilaufgabe b)

Geben Sie das **Resultat** der folgenden C-Ausdrücke im Dezimalsystem an:

1. `0xFF`
2. `2.0f * 017`
3. `0.1f + 0.2f == 0.3`
4. `(1 << 1) & 3`
5. `(1 + DBL_MAX) / DBL_MAX`

### Teilaufgabe c)

Erklären Sie Schritt für Schritt die **Auswertungsreihenfolge** der folgenden C-Codefragmente und setzen Sie für jeden
Ausdruck Klammern, sodass die Auswertungsreihenfolge bereits durch die gesetzten Klammern ersichtlich ist:

1. `6 == (13 % 7) && (0 != 1)`
2. `(16 >> 1) == 8 || (0 != 1)`
3. `'D' - 'B' == 3 ? 0 : 1`
4. `double x = sizeof(float) * 2 && 25 / printf("abc\n") ^ 2 + 1;`
5. `1 + 2 - 3 * 5 / 2 & 4`

### Hinweise

- Verwenden Sie die bereitgestellte Datei `s03e02.txt` zum Lösen dieser Aufgabe.
- Die Konstante `INT_MAX` ist im Header `limits.h` definiert.
- Die Konstante `DBL_MAX` ist im Header `float.h` definiert.
- Nehmen Sie an, dass die Ausdrücke auf einer Rechnerarchitektur ausgeführt werden, welche Ganzzahlen im
  Zweierkomplement darstellt, und ein zum ASCII-Code kompatibler Zeichensatz verwendet wird.

# Aufgabe 3 (5 Punkte)

## Vorlesungsfolien

* Variablen und Datentypen (04-VariablenDatentypen.pdf)

## Teilaufgabe a)

### Beschreibung

In dieser Aufgabe sollen diverse Ausgaben mit `printf` durch entsprechende Formatstrings ausgegeben werden. Verwenden
Sie das vorgegebene C-Programm als Grundlage für die Ausarbeitung der Arbeitsschritte. Beachten Sie, dass jede der
Variablen in einer eigenen Zeile ausgegeben wird.

### Arbeitsschritte

1. Geben Sie den Inhalt der Variablen `a`, `b`, `c`, `d` und `e` auf der Konsole aus, sodass die Ausgabe genau dem bei
   der Variablendeklaration angegebenen Wert und Format entspricht. Vor jeder Zahl soll `<var_name> = ` als Präfix
   ausgegeben werden, wobei `<var_name>` mit dem entsprechenden Variablennamen substituiert werden soll (z.B. wird für
   die Variable `c` die Zeichenkette `c = Z` ausgegeben).
2. Geben Sie `b` mit 10 Nachkommastellen aus und verwenden Sie `b_10 = ` als Präfix. Was beobachten Sie bei dieser
   Ausgabe? Dokumentieren Sie Ihre Erkenntnisse mithilfe von Kommentaren im Code!
3. Geben Sie `c` als Hexadezimalzahl mit Präfix `0x` und Kleinbuchstaben für `a` - `f` aus und verwenden Sie `c_hex = `
   als Präfix.
4. Geben Sie `c` als Ganzzahl (`int`) mit einer Mindestbreite von `pad` Stellen aus. Sofern die Zahl `c` weniger als
   diese in der Variable `pad` angegebenen Stellen aufweist, werden von links Nullen eingefügt (engl. `zero padding`).
   Verwenden Sie das Präfix `c_pad = `.
5. Geben Sie `a`, `b`, `c`, `d` und `e` als Dezimalzahlen rechtsbündig aus, sodass die Dezimalstellen (z.B. Einer-,
   Zehner-, Hunderterstelle, usw.) der Zahlen untereinanderstehen. Für die rechtsbündige Ausgabe sollen 15
   Vorkommastellen angenommen werden. Für alle Gleitkommazahlen sollen 4 Nachkommastellen ausgegeben werden. Verwenden
   Sie wieder das Präfix `<var_name> = `.

### Hinweise

- Die Handbuchseite `man 3 printf` kann zum Identifizieren der notwendigen Formatspecifier behilflich sein.
- Verwenden Sie für alle Transformationen nur `printf` und keine eigens implementierte Logik.
- Verwenden Sie in den `printf`-Aufrufen ausschließlich die bereits deklarierten Variablen ohne jegliche Veränderung von
  den Werten dieser Variablen.
- Stellen Sie sicher, dass vor dem Zeilenumbruch kein Leerzeichen ausgegeben wird.
- Um die Korrektheit Ihres Programms zu überprüfen, werden bei Ein-/Ausgabetests mit Substitution teilweise die Werte
  von Variablen in Ihrem Programm verändert! Sofern in diesem Test Fehler auftreten, stellen Sie bitte sicher, dass Sie
  die entsprechenden Formatspecifier verwenden!

### Tests


## Teilaufgabe b)

Folgender Code ist gegeben.

```c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int zero;
    printf("zero = %hd\n", zero);
    return EXIT_SUCCESS;
}

```

Studieren Sie den Code und analysieren, ob bei diesem Programm Probleme auftreten können. Sie können das Programm
beispielsweise mehrfach ausführen. Dokumentieren Sie Ihre Erkenntnisse mithilfe von Kommentaren im Code!

### Hinweise

- Damit Sie den gegebenen Code kompilieren können muss auf das Flag `-Werror` verzichtet werden!

# Aufgabe 4 (10 Punkte)

## Vorlesungsfolien

* Variablen und Datentypen (04-VariablenDatentypen.pdf)
* Kontrollstrukturen (06-Kontrollstrukturen.pdf)

## Beschreibung

Erstellen Sie ein C-Programm, welches eine Zifferntreppe mit der Höhe `height` auf der Standardausgabe ausgibt. Die
Ganzzahl (`int`) `height` wird von dem\*der Benutzer\*in eingelesen. Sofern die Höhe negativ ist, wird eine
Fehlermeldung ausgegeben und das Programm nicht erfolgreich beendet.

## Hinweise

- Halten Sie sich genau an das Format der Beispiele und geben Sie keine weiteren Texte aus!
- Geben Sie die Zahlen mit einer Mindestbreite von zwei Stellen aus. Sofern die ausgegebene Zahl weniger als diese zwei
  Stellen aufweist, werden von links Leerzeichen eingefügt.

## Beispiele

Beispiel 1: Programmablauf bei der Eingabe `height` = `2`. Die Zahl `2` in der ersten Zeile der Beispielausgabe wurde
durch den\*die Benutzer\*in eingegeben und soll nicht von Ihrem Programm ausgegeben werden.

```text
height: 2

   1
 1 2
```

Beispiel 2: Programmablauf bei der Eingabe `height` = `4`. Die Zahl `4` in der ersten Zeile der Beispielausgabe wurde
durch den\*die Benutzer\*in eingegeben und soll nicht von Ihrem Programm ausgegeben werden.

```text
height: 4

       1
     1 2
   1 2 3
 1 2 3 4
```

Beispiel 3: Programmablauf bei der Eingabe `height` = `12`. Die Zahl `12` in der ersten Zeile der Beispielausgabe wurde
durch den\*die Benutzer\*in eingegeben und soll nicht von Ihrem Programm ausgegeben werden.

```text
height: 12

                       1
                     1 2
                   1 2 3
                 1 2 3 4
               1 2 3 4 5
             1 2 3 4 5 6
           1 2 3 4 5 6 7
         1 2 3 4 5 6 7 8
       1 2 3 4 5 6 7 8 9
     1 2 3 4 5 6 7 8 910
   1 2 3 4 5 6 7 8 91011
 1 2 3 4 5 6 7 8 9101112
```
