# Aufgabe 1 (5 Punkte)

## Vorlesungsfolien

* Strukturen, Unions, Bitfelder (10-StrukturenUnionsBitfelder.pdf)
* Dynamische Speicherverwaltung (12-DynamischeSpeicherverwaltung.pdf)

## Beschreibung

Sie haben folgende Programme gegeben. Benutzen Sie `valgrind` und zeigen Sie, wie Sie mit `valgrind` Fehler in den
gegebenen Programmen ausfindig machen können. Fügen Sie Ihrer Erklärung auch die Ausgabe von `valgrind` hinzu!

### Teilaufgabe a)

```c
#include <stdlib.h>

int *p;

int main(void) {
    *p = 42;
    return EXIT_SUCCESS;
}

```

### Teilaufgabe b)

```c
#include <stdlib.h>

int main(void) {
    int *p = malloc(sizeof(*p));
    *p = 1;
    free(p);
    *p = 2;
    return EXIT_SUCCESS;
}

```

### Teilaufgabe c)

```c
#include <stdlib.h>

struct my_array {
    int *array;
    int len;
};

int main(void) {
    int len = 10;
    struct my_array *arr = malloc(sizeof(*arr));
    arr->len = len;
    arr->array = malloc(sizeof(*arr->array * len));
    free(arr);
    return EXIT_SUCCESS;
}

```

# Aufgabe 2 (5 Punkte)

## Vorlesungsfolien

* Strukturen, Unions, Bitfelder (10-StrukturenUnionsBitfelder.pdf)
* Dynamische Speicherverwaltung (12-DynamischeSpeicherverwaltung.pdf)

## Beschreibung

In der Datei `s09e02.c` wurden die zwei Funktionen `free_linked_list` und `int_to_linked_list` für Sie bereitgestellt.
Die Funktion `int_to_linked_list` speichert die einzelnen Ziffern einer übergebenen positiven ganzzahl (inklusive 0) in
umgekehrter Reihenfolge in einer verketteten Liste. Die Funktion `free_linked_list` gibt den Speicher, welcher für die
verkettete Liste reserviert wurde wieder frei.

Implementieren Sie folgende Funktionen:

- `print_linked_list`: Gibt die Elemente der verketteten Liste startend vom Kopf der Liste bis zum Ende der Liste auf
  der Standardausgabe aus. Die einzelnen Elemente sollen als Zahlen ausgegeben werden. Zwischen den einzelnen Zahlen
  werden keine Trennzeichen eingefügt.
- `print_number_rec`: Gibt, basierend auf Elementen der verketteten Liste, die gespeicherte Zahl aus. Die Berechnung
  bzw. Ausgabe der gespeicherten Zahl muss rekursiv erfolgen.
- `print_number_iter`: Gibt, basierend auf Elementen der verketteten Liste, die gespeicherte Zahl aus. Die Berechnung
  bzw. Ausgabe der gespeicherten Zahl muss iterativ erfolgen.

Stellen Sie außerdem sicher, dass Sie Ihre Implementierung in der `main`-Funktion testen!

### Beispiele

| Zahl repräsentiert durch die verkettete Liste | Ausgabe `print_linked_list` | Ausgabe `print_number_rec`/`print_number_iter` |
|----------------------------------------------:|--------------------------:|-------------------------------------------:|
|                                            10 |                        01 |                                         10 |
|                                           504 |                       405 |                                        504 |
|                                         12345 |                     54321 |                                      12345 |

### Hinweise

- Bitte beachten Sie, dass die geforderten Funktionen auch für Listen, welche Zahlen repräsentieren, die nicht
  durch `int_to_linked_list` umgewandelt wurden und somit möglicherweise über dem Wertebereich von `int` bzw. `long`
  liegen, funktionieren müssen!

# Aufgabe 3 (6 Punkte)

## Vorlesungsfolien

* Strukturen, Unions, Bitfelder (10-StrukturenUnionsBitfelder.pdf)
* Dynamische Speicherverwaltung (12-DynamischeSpeicherverwaltung.pdf)

## Beschreibung

In der Datei `s09e03.c` wurden die zwei Funktionen `free_linked_list` und `int_to_linked_list` für Sie bereitgestellt.
Die Funktion `int_to_linked_list` speichert die einzelnen Ziffern einer übergebenen Zahl in umgekehrter Reihenfolge in
einer verketteten Liste. Die Funktion `free_linked_list` gibt den Speicher, welcher für die verkettete Liste reserviert
wurde wieder frei.

Implementieren Sie folgende Funktionen:

- `int number_of_digits(struct linked_list *list)`: Gibt die Anzahl der Ziffern der Zahl, welche durch die verkettete
  Liste `list` repräsentiert wird, zurück.
- `int digit_sum(struct linked_list *list)`: Gibt die Ziffernsumme der Zahl, welche durch die verkettete Liste `list`
  repräsentiert wird, zurück.
- `int highest_digit(struct linked_list *list)`: Gibt die größte Ziffer der Zahl, welche durch die verkettete
  Liste `list` repräsentiert wird, zurück.
- `struct linked_list *add(struct linked_list *list_a, struct linked_list *list_b)`: Addiert die zwei Zahlen, welche
  durch die zwei verkettete Listen `list_a` und `list_b` repräsentiert werden und gibt das Ergebnis als neue verkettete
  Liste zurück.

Stellen Sie sicher, dass Sie Ihre Implementierung in der `main`-Funktion testen.

## Beispiele `number_of_digits`, `digit_sum`, `highest_digit`

<table>
<thead>
  <tr>
    <th rowspan="2">Zahl repräsentiert durch die verkettete Liste <code>list_a</code></th>
    <th colspan="3">Rückgabewert</th>
  </tr>
  <tr>
    <th><code>number_of_digits(list_a)</code></th>
    <th><code>digit_sum(list_a)</code></th>
    <th><code>highest_digit(list_a)</code></th>
  </tr>
</thead>
<tbody>
  <tr>
    <td align="right">10</td>
    <td align="right">2</td>
    <td align="right">1</td>
    <td align="right">1</td>
  </tr>
  <tr>
    <td align="right">12345</td>
    <td align="right">5</td>
    <td align="right">15</td>
    <td align="right">5</td>
  </tr>
</tbody>
</table>

## Beispiele `add`

| Zahl repräsentiert durch `list_a` | Zahl repräsentiert durch `list_b` | Zahl repräsentiert durch die resultierende verkettet Liste |
|----------------------------------:|----------------------------------:|-----------------------------------------------------------:|
|                                 0 |                                11 |                                                         11 |
|                               999 |                                 1 |                                                       1000 |

## Hinweise

- Die übergebenen verketteten Listen dürfen nicht verändert werden.
- Als Vorbereitung ist es ratsam die vorherige Aufgabe vor dieser Aufgabe zu bearbeiten.
- Bitte beachten Sie, dass die geforderten Funktionen auch für Listen, welche Zahlen repräsentieren, die nicht
  durch `int_to_linked_list` umgewandelt wurden und somit möglicherweise über dem Wertebereich von `int` bzw. `long`
  liegen, funktionieren müssen!


# Aufgabe 4 (14 Punkte)

## Vorlesungsfolien

* Strukturen, Unions, Bitfelder (10-StrukturenUnionsBitfelder.pdf)
* Dynamische Speicherverwaltung (12-DynamischeSpeicherverwaltung.pdf)

## Beschreibung

Implementieren Sie eine auf Arrays basierte generische Liste. Der für die Liste reservierte Speicher soll je nach Bedarf
dynamisch vergrößert bzw. verkleinert werden.

### Arbeitsschritte

Bearbeiten Sie die folgenden Funktionen (verwenden Sie den bereitgestellten Quellcode als Vorlage und ändern sie die
Signaturen der Funktionen sowie die Typdefinition nicht):

- `my_list_init`: Reserviert Speicher für eine neue Liste mit ausreichend Speicherplatz für `ARRAY_INIT_CAPACITY`
  Elemente und es wird ein Zeiger auf die Liste zurückgegeben.
- `my_list_size`: Gibt die Anzahl der Elemente in der Liste zurück.
- `my_list_insert`: Fügt das Element `item` an Position `idx` der übergebenen Liste ein und verschiebt alle
  nachfolgenden Elemente um eine Position nach hinten, sofern die Position `idx` gültig ist. Eine Position ist
  für `my_list_insert` gültig, wenn sie zwischen 0 (inklusive) und `size` (inklusive) liegt. Wurde das Element eingefügt
  wird 0, ansonsten wird -1 zurückgegeben. Sollte der momentan für die Liste reservierte Speicher nicht ausreichen, um
  das neue Element einfügen zu können, wird der für die Liste reservierte Speicher verdoppelt und das Element
  anschließend eingefügt.
- `my_list_append`: Fügt das neue Element `item` hinter dem aktuell letzten Element in die Liste ein.
- `my_list_get`: Gibt das Element an der Position `idx` zurück.
- `my_list_delete`: Löscht das Element an Position `idx` aus der übergebenen Liste und verschiebt alle nachfolgenden
  Elemente um eine Position nach vorne. Sollte der nach dem Löschen von Listenelementen belegte Speicher ein Viertel der
  maximalen Listengröße unterschreiten soll der für die Liste reservierte Speicher halbiert werden. Die minimale
  Kapazität sollte aber `ARRAY_INIT_CAPACITY` nicht unterschreiten.
- `my_list_free`: Gibt den gesamten reservierten Speicher wieder frei.

Testen Sie die Funktionalität der von Ihnen implementierten Funktionen in der `main` Funktion.

### Hinweise

- Überlegen Sie wie sich die Schnittstelle verhalten soll wenn `NULL`-Pointer als Parameter übergeben werden oder andere
  spezielle Fälle auftreten.
- Die Datenstrukturen sollten unter keinen Umständen Debug-Information ausgeben.
- Testen Sie mit `valgrind` ob jeglicher von der Implementierung verwendeter Speicher wieder freigegeben wird.
- **In einem folgenden Übungsblatt wird eine korrekte Implementierung vorausgesetzt. Stellen Sie sicher, dass Sie diese
  Aufgabe bearbeiten bzw. nach dem Proseminar entsprechend nachbearbeiten!**
