# Aufgabe 1 (5 Punkte)

## Vorlesungsfolien

* Vorschau (03-Vorschau.pdf)

## Beschreibung

Erstellen Sie ein C-Programm, welches überprüft, ob die Variable `value` vom Datentyp `int` positiv oder negativ ist.

### Arbeitsschritte

Verwenden Sie das bereitgestellte Codefragment und führen Sie folgende Schritte durch:

- Weisen Sie der Variable `value` eine beliebige, von Ihnen gewählte Ganzzahl zu.
- Sofern der von Ihnen gewählte Wert von `value` positiv ist, geben Sie mittels `printf` den Text `positive` aus.
- Sollte der Wert negativ sein, muss `negative` ausgegeben werden.
- Nach der Ausgabe wird das Programm erfolgreich (`EXIT_SUCCESS`) beendet.

### Hinweise

- Testen Sie die Ausgabe Ihres Programms mit einigen verschiedenen Werten für die Variable `value`. Achten Sie dabei
  darauf, dass Sie beide Fälle abdecken (Zahl ist positiv bzw. negativ).
- Verwenden Sie `if` und `printf`.
- Für diese Aufgabe soll die Zahl 0 als positive Zahl gesehen werden.
- Bei den Ein-/Ausgabetests wird beim Testen der Wert der Variable `value` in Ihrem Programm verändert!
- Artemis setzt beim Testen für die Variable `value` nur Werte zwischen -32767 und 32767 ($`-32767 <= value <= 32767 `$) ein.

### Beispielausgaben

Beispiel 1: `value = 35`

```text
positive
```

Beispiel 2: `value = -10`

```text
negative
```

# Aufgabe 2 (5 Punkte)

## Vorlesungsfolien

* Vorschau (03-Vorschau.pdf)

## Beschreibung

Erstellen Sie ein C-Programm, welches überprüft, ob die Variable `value` vom Datentyp `int` durch die Zahl dreizehn
teilbar ist.

### Arbeitsschritte

Verwenden Sie das bereitgestellte Codefragment und führen Sie folgende Schritte durch:

- Weisen Sie der Variable `value` eine beliebige, von Ihnen gewählten Ganzzahl zu.
- Sofern der von Ihnen gewählte Wert von `value` durch dreizehn teilbar ist, geben Sie mittels `printf` den
  Text `The given value <value> is divisible by thirteen!` aus.
- Sollte der Wert nicht durch dreizehn teilbar sein, muss `The given value <value> is not divisible by thirteen!` 
  ausgegeben werden.
- Beachten Sie, dass anstelle von `<value>` der Wert der Variable `value` ausgegeben wird!
- Nach der Ausgabe wird das Programm erfolgreich (`EXIT_SUCCESS`) beendet.

### Hinweise

- Verwenden Sie für das Ausgeben von Zahlen den entsprechenden Platzhalter in den Formatstrings.
- Mithilfe des Rest-Operators (`%`) kann der Rest einer Division bestimmt werden. Beispielsweise ist das Ergebnis der
  Berechnung `5 % 2` Eins. Ob eine Variable `a` ohne Rest durch zwei teilbar ist, kann beispielsweise mit der
  Bedingung `(a % 2) == 0` überprüft werden.
- Testen Sie die Ausgabe Ihres Programms mit einigen verschiedenen Werten für die Variable `value`. Achten Sie dabei 
  darauf, dass Sie beide Fälle abdecken (Zahl ist teilbar bzw. nicht teilbar).
- Verwenden Sie `if` und `printf`.
- Bei den Ein-/Ausgabetests wird beim Testen der Wert der Variable `value` in Ihrem Programm verändert!
- Artemis setzt beim Testen für die Variable `value` nur Werte zwischen -32767 und 32767 ($`-32767 <= value <= 32767 `$) ein.

### Beispielausgaben

Beispiel 1: `value = 39`

```text
The given value 39 is divisible by thirteen!
```

Beispiel 2: `value = 74`

```text
The given value 74 is not divisible by thirteen!
```

# Aufgabe 3 (6 Punkte)

## Vorlesungsfolien

* Vorschau (03-Vorschau.pdf)

## Beschreibung

Erstellen Sie ein C-Programm, berechnet wie viele Stunden, Minuten und Sekunden einem eingelesenen Wert `seconds` in
Sekunden entsprechen. Die Ganzzahl (`int`) `seconds` wird von dem\*der Benutzer\*in eingelesen. Die berechneten Werte 
(Stunden, Minuten und Sekunden) werden mit Doppelpunkten getrennt ausgegeben.

### Beispielausgaben

Beispiel 1: Programmablauf bei der Eingabe der Zahl `60`

```
60
0:1:0
```

Beispiel 2: Programmablauf bei der Eingabe der Zahl `3601`

```
3601
1:0:1
```

Beispiel 3: Programmablauf bei der Eingabe der Zahl `93200`

```
93200
25:53:20
```

### Hinweise

- Sofern für den Sekundenwert `seconds` eine negative Zahl eingegeben wird, wird ein Fehler ausgegeben und das Programm
  nicht erfolgreich beendet.
- Sie können das Programm `s02e03.c` als Grundlage für Ihre Implementierung heranziehen. Dieses Programm liest eine
  Ganzzahl `seconds` vom Typ `int` ein und gibt den Wert von `seconds` anschließend auf der Standardausgabe aus (sofern
  beim Einlesen kein Fehler auftrat).

# Aufgabe 4 (7 Punkte)

## Vorlesungsfolien

* Vorschau (03-Vorschau.pdf)

## Beschreibung

Erstellen Sie ein C-Programm, welches mithilfe einer `while`-Schleife die ersten `quantity`-Vielfachen der Zahl `value`
untereinander auf der Standardausgabe ausgibt. Verwenden Sie für die Variablen `quantity` und `value` den Datentyp `int`
und wählen Sie für beide Variablen einen beliebigen nicht negativen Wert!

## Hinweise

- Bei den Ein-/Ausgabetests werden beim Testen die Werte der Variablen `quantity` und `value` in Ihrem Programm
  verändert!
- Artemis setzt beim Testen für die Variable `quantity` nur Werte zwischen 0 und 100 ($`0 <= quantity <= 100 `$) ein.
- Artemis setzt beim Testen für die Variable `value` nur Werte zwischen 0 und 50 ($`0 <= value <= 50 `$) ein.

### Beispielausgaben

Beispiel 1: `quantity = 4` und `value = 3`

```
3
6
9
12
```

Beispiel 2: `quantity = 1` und `value = 5`

```
5
```

# Aufgabe 5 (7 Punkte)

## Vorlesungsfolien

* Vorschau (03-Vorschau.pdf)

## Beschreibung

Erstellen Sie ein C-Programm, welches mithilfe einer `while`-Schleife die Ziffern einer eingelesenen Zahl `number` in umgekehrter
Reihenfolge auf der Standardausgabe ausgibt. Die Ganzzahl (`int`) `number` wird von dem\*der Benutzer\*in eingelesen.

### Beispielausgaben

Beispiel 1: Programmablauf bei der Eingabe der Zahlen `1234`. Die Zahl `1234` in der Beispielausgabe wurde durch
den\*die Benutzer\*in eingegeben und soll nicht von Ihrem Programm ausgegeben werden.

```
1234
4321
```

Beispiel 2: Programmablauf bei der Eingabe der Zahlen `510`. Die Zahl `510` in der Beispielausgabe wurde durch den\*die
Benutzer\*in eingegeben und soll nicht von Ihrem Programm ausgegeben werden.

```
510
015
```

Beispiel 3: Programmablauf bei der Eingabe der Zahlen `9023`. Die Zahl `9023` in der Beispielausgabe wurde durch
den\*die Benutzer\*in eingegeben und soll nicht von Ihrem Programm ausgegeben werden.

```
9023
3209
```

### Hinweise

- Sofern für den Wert `number` eine negative Zahl eingegeben wird, wird ein Fehler ausgegeben und das Programm nicht
  erfolgreich beendet.
- Sie können das Programm `s02e05.c` als Grundlage für Ihre Implementierung heranziehen. Dieses Programm liest eine
  Ganzzahl `number` vom Typ `int` ein und gibt den Wert von `number` anschließend auf der Standardausgabe aus (sofern
  beim Einlesen kein Fehler auftrat).
- Die letzte Ziffer der Dezimalzahl `number` können Sie mithilfe des Ausdrucks `n % 10` berechnen.
- Die letzte Ziffer der Dezimalzahl `number` können Sie mithilfe des Ausdrucks `n / 10` "abschneiden".
