# Aufgabe 1 (7 Punkte)

## Vorlesungsfolien

* Arrays (08-Arrays.pdf)

## Beschreibung

Implementieren Sie eine Funktion mit der Signatur `void sort(char array[], size_t length)` welche das Array `array`
sortiert. Sie können einen beliebigen [Sortieralgorithmus](https://en.wikipedia.org/wiki/Sorting_algorithm) wie
beispielsweise [Bubble sort](https://en.wikipedia.org/wiki/Bubble_sort)
oder [Gnome sort](https://en.wikipedia.org/wiki/Gnome_sort) verwenden.

Studieren Sie die folgenden Entscheidungsfragen. Sofern eine Frage mit *Ja* zu beantworten ist, implementieren Sie die
entsprechende Funktionalität in der `main`-Funktion.

- Können Sie diese Funktion verwenden, um eine beim Programmaufruf übergebene Zeichenkette zu sortieren?
- Können Sie die Zahlen `{83, 111, 114, 116, 32, 77, 69, 33}` mit dieser Funktion sortieren?

## Hinweis

- Der Datentyp `size_t` ist ein plattformabhängiger, vorzeichenloser Ganzzahltyp, welcher die maximale Größe eines Typs
  (Arrays inklusive) darstellt. Dieser Typ ist mindestens zwei Byte groß. `size_t` wird häufig als Datentyp für
  Schleifenindizes verwendet.

# Aufgabe 2 (11 Punkte)

## Vorlesungsfolien

* Arrays (08-Arrays.pdf)

## Beschreibung

Implementieren Sie eine Funktion mit der Signatur `size_t copy_distinct(int dst[], const int src[], size_t len)`, welche
die Werte aus dem Array `src` in das Array `dst` kopiert. Bei diesem Kopieren werden keine Duplikate in das Array `dst`
übertragen. Dadurch ist jeder Wert aus dem Array `src` im Array `dst` vorhanden. Allerdings kommen im Array `dst` nur
einzigartige Werte vor. Die Ordnung der Werte im Array `dst` kann beliebig sein und ist nur von Ihrer Implementierung
abhängig. Die Anzahl an kopierten bzw. eindeutigen Werten im Array `dst` wird durch die Funktion zurückgegeben.

## Hinweise

- Der Datentyp `size_t` ist ein plattformabhängiger, vorzeichenloser Ganzzahltyp, welcher die maximale Größe eines Typs
  (Arrays inklusive) darstellt. Dieser Typ ist mindestens zwei Byte groß. `size_t` wird häufig als Datentyp für
  Schleifenindizes verwendet.
- Beide Arrays (`dst` und `src`) haben die Länge `len`. Wobei im Array `dst` möglicherweise nicht die ganze Länge
  verwendet werden muss.
- Testen Sie Ihre `copy_distinct`-Implementierung in der `main`-Funktion.
- Für das Array `[5, 2, 4, 5, 2]` gibt die Funktion den Wert `3` zurück und die ersten drei Werte im `dst`-Array müssen
  einem der folgenden Beispiele entsprechen:
    - `[2, 4, 5]`
    - `[2, 5, 4]`
    - `[4, 2, 5]`
    - `[4, 5, 2]`
    - `[5, 2, 4]`
    - `[5, 4, 2]`

# Aufgabe 3 (12 Punkte)

## Vorlesungsfolien

* Arrays (08-Arrays.pdf)

## Beschreibung

Erstellen Sie ein Programm welches die in einem ASCII-Text vorkommenden Buchstaben zählt und alle gefundenen Buchstaben
lexikografisch geordnet zusammen mit den dazugehörigen Häufigkeiten ausgibt. Alle anderen Zeichen werden in der
Kategorie `other` zusammengefasst und zusammen mit der Häufigkeit am Schluss ausgegeben. Die Groß- und Kleinschreibung
von Buchstaben wird nicht gesondert berücksichtigt. Der ASCII-Text wird über die Kommandozeile übergeben.

### Arbeitsschritte

Bearbeiten Sie die folgenden Funktionen (verwenden Sie den bereitgestellten Quellcode als Vorlage und ändern Sie die
Signaturen der Funktionen nicht):

- `count_letter_occurrence`: Zählt wie oft jeder Buchstabe
  des [lateinischen Alphabets](https://de.wikipedia.org/wiki/Lateinisches_Alphabet) im Parameter `text` vorkommt. Die
  vorkommende Anzahl an `'a'`s wird dabei an Position `0` im `letters` Array gezählt, die Anzahl der `'b'`s an
  Position `1`, usw.!
  Alle Zeichen, welche nicht Buchstaben sind, werden an Position `26` im `letters` Array gezählt. Die Zählung in dieser
  Funktion soll unabhängig von Groß- und Kleinschreibung sein.
- `print_letter_occurrence`: Gibt das Array `letters` mit der im Beispiel aufgezeigten Formatierung aus. Es werden nur
  jene Einträge ausgegeben welche nicht `0` sind.
- `letters_to_lower`: Wandelt alle Buchstaben im Array `text` in Kleinbuchstaben um.
- `main`: Vervollständigen Sie die `main`-Funktion.

### Hinweise

- Der zu analysierende Text wird beim Programmaufruf als Parameter übergeben und nicht mit `scanf` eingelesen!
- Das Programm funktioniert für Buchstaben, welche nicht im lateinischen Alphabet vorkommen (beispielsweise ä, ö, ü),
  möglicherweise nicht. Solche Buchstaben müssen beim Testen nicht berücksichtigt werden.
- Vergessen Sie nicht, dass Zeichenketten nullterminiert sind. Z.B.: `"abc"` => `{'a', 'b', 'c', '\0'}`
- Stellen Sie sicher, dass die Funktion `count_letter_occurrence` für Texte mit Groß- und Kleinbuchstaben funktioniert.
- Die Häufigkeiten sollen rechtsbündig mit einer Feldbreite von 4 ausgegeben werden.
- Der Datentyp `size_t` ist ein plattformabhängiger, vorzeichenloser Ganzzahltyp, welcher die maximale Größe eines Typs
  (Arrays inklusive) darstellt. Dieser Typ ist mindestens zwei Byte groß. `size_t` wird häufig als Datentyp für
  Schleifenindizes verwendet.
- Durch den Aufruf `./s05e03 "$(cat example_text1.txt)"` können Sie die Buchstaben einer Textdatei `example_text1.txt`
  zählen lassen. Dieser Aufruf kann für das Testen von langen Texten hilfreich sein.

### Beispielaufrufe mit Ausgabe:

```text
./s05e03 "A lOnG tEsT sTrInG"
  'a':    1
  'e':    1
  'g':    2
  'i':    1
  'l':    1
  'n':    2
  'o':    1
  'r':    1
  's':    2
  't':    3
other:    3
```

```text
./s05e03 "aaaaaBBBaaaaa"
  'a':   10
  'b':    3
```
