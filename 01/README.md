# Aufgabe 1 (4 Punkte)

Sie können die Aufgaben lokal auf Ihrem Rechner oder direkt in Artemis bearbeiten. Unabhängig davon wie bzw. wo Sie die
Aufgaben bearbeiten sollten Sie wissen, wie ein Programm kompiliert und ausgeführt werden kann.

## Vorlesungsfolien

* Einführung (02-Einfuehrung.pdf)

## Lokale Bearbeitung

### Source Code File erstellen

Erstellen Sie einen Ordner mit dem Namen `s01` in einem Verzeichnis Ihrer Wahl. Erzeugen Sie im Ordner `s01` eine
Textdatei mit dem Namen `s01e01.c`.

### Erstellen des Programms

Öffnen Sie die Datei `s01e01.c` mit einem Texteditor Ihrer Wahl (z.B. geany, kate, gedit, Visual Studio Code, …).
Kopieren Sie den folgenden Quellcode und fügen Sie ihn ein. Speichern Sie die Änderungen.

```c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("Hello World\n");
    return EXIT_SUCCESS;
}

```

**Hinweis**: Mit `Strg + s` können Sie mittels Shortcut in den meisten Programmen speichern

### Kommentare

Kommentieren Sie Ihren Code. Dies hilft den Übungsleitern, Ihre Gedankengänge nachzuvollziehen. Im Speziellen kann das
bei Klausuren hilfreich sein, da Sie dadurch Punkte bekommen könnten, wenn Ihre Idee korrekt ist, selbst wenn das
Programm nicht vollständig funktioniert. Weiters ist es auch für Sie sehr hilfreich, wenn die Programme länger werden.

### Kompilieren

Öffnen Sie ein Terminal und wechseln Sie in das entsprechende Codeverzeichnis. Kompilieren Sie das Programm mittels

```bash
gcc -Wall -Werror -Wextra -Wpedantic -std=c11 s01e01.c -o s01e01
```

Sie können das Programm nun mittels `./s01e01` ausführen.

## Bearbeitung in Artemis

Melden Sie sich an, navigieren Sie zum Kurs des Proseminars, starten Sie die Aufgabe und öffnen Sie den *Programmier
Editor*. Öffnen Sie die Datei `s01e01.c` in Artemis und fügen Sie folgenden Code ein.

```c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("Hello World\n");
    return EXIT_SUCCESS;
}

```

Wie auch beim lokalen Bearbeiten sollten Sie Ihren Code kommentieren.

## Abgabe

Stellen Sie sicher, dass Sie, unabhängig von der gewählten Ausarbeitungsart, Ihren Code in Artemis abgeben bzw. absenden
und auf das Testfeedback entsprechend reagieren (d.h. korrigieren Sie alle Fehler, die Artemis aufzeigt). Falls Sie
Fragen zum Feedback oder Probleme beim Bearbeiten der Aufgaben haben, können Sie Ihren Proseminarleiter gerne
kontaktieren.

Zudem müssen Sie die von Ihnen gelösten Aufgaben im [OLAT](https://lms.uibk.ac.at/dmz/) ankreuzen.

**Hinweis**: Wenn Sie eine gelöste Aufgabe nicht kreuzen, erhalten Sie keine Punkte dafür. Eine angekreuzte Aufgabe
bedeutet des Weiteren, dass Sie diese auch Präsentieren könnten.

# Aufgabe 2 (4 Punkte)

## Beschreibung

Im gegebenen Programm `s01e02.c` ist ein Fehler. Dieses Programm gibt auf der Standardausgabe (`stdout`) den
Text `HELLOWorld!` aus. Dieser Text entspricht nicht der Erwartung! Verwenden Sie Artemis um das Problem zu
identifizieren und zu korrigieren. Stellen Sie sicher, dass nach Ihrer Korrektur 100 % in Artemis erreicht werden.

## Hinweise

Öffnen Sie dafür die auf der linken Seite angezeigte Datei `s01e02.c` mit einem Klick. Zentral sehen Sie nun den Code,
welcher durch Artemis getestet werden kann. Beim Testen in Artemis können – je nach Konfiguration – folgende
Überprüfungen durchgeführt werden:

* *Kompilieren*: Testet, ob der abgegebene Code erfolgreich kompiliert. Sofern der Code nicht erfolgreich kompiliert,
  werden die Kompilierfehler angezeigt. **Sofern nicht ausdrücklich anders angegeben, wird im ganzen Kurs immer mit den
  Flags `-Wall -Werror -Wextra -Wpedantic -std=c11` kompiliert.**
* *Strukturtests*: Testet, ob das Programm die gewünschte Struktur aufweist (z.B. wird `printf` aufgerufen).
* *Ein-/Ausgabetests*: Testet, ob ein Programm die erwartete Ausgabe erzeugt und der Rückgabewert beim Beenden stimmt.
* *Funktionstests*: Testet, ob eine Funktion den erwarteten Rückgabewert und entsprechende Seiteneffekte hat. Diese
  Testart wird erst eingesetzt, wenn Funktionen in der Vorlesung besprochen wurden.

Weitere Details zu den Fehlerarten können Sie im FAQ finden.

Um die Überprüfung des Codes zu starten, klicken Sie rechts oben auf *Absenden*. Nach dem alle Tests in Artemis
ausgeführt wurden, erhalten Sie links neben dem Button *Aktualisieren* eine Bewertung. Sofern nicht 100 % erreicht
wurden, kann das Feedback angesehen werden, in dem auf diese Bewertung geklickt wird. In dieser Ansicht sehen Sie dann
ein individualisiertes Fehlerfeedback. Nachdem Sie das Fehlerfeedback angesehen haben, können Sie diese Ansicht
verlassen, Ihren Code entsprechend verändern und erneut absenden.

# Aufgabe 3 (4 Punkte)

## Beschreibung

Im gegebenen Programm `s01e03.c` ist ein Fehler. Verwenden Sie Artemis um das Problem zu identifizieren und zu
korrigieren. Stellen Sie sicher, dass nach Ihrer Korrektur 100 % in Artemis erreicht werden.

## Hinweise

Öffnen Sie dafür die auf der linken Seite angezeigte Datei `s01e03.c` mit einem Klick. Zentral sehen Sie nun den Code,
welcher durch Artemis getestet werden kann. Beim Testen in Artemis können – je nach Konfiguration – folgende
Überprüfungen durchgeführt werden:

* *Kompilieren*: Testet, ob der abgegebene Code erfolgreich kompiliert. Sofern der Code nicht erfolgreich kompiliert,
  werden die Kompilierfehler angezeigt. **Sofern nicht ausdrücklich anders angegeben, wird im ganzen Kurs immer mit den
  Flags `-Wall -Werror -Wextra -Wpedantic -std=c11` kompiliert.**
* *Strukturtests*: Testet, ob das Programm die gewünschte Struktur aufweist (z.B. wird `printf` aufgerufen).
* *Ein-/Ausgabetests*: Testet, ob ein Programm die erwartete Ausgabe erzeugt und der Rückgabewert beim Beenden stimmt.
* *Funktionstests*: Testet, ob eine Funktion den erwarteten Rückgabewert und entsprechende Seiteneffekte hat. Diese
  Testart wird erst eingesetzt, wenn Funktionen in der Vorlesung besprochen wurden.

Weitere Details zu den Fehlerarten können Sie im FAQ finden.

Um die Überprüfung des Codes zu starten, klicken Sie rechts oben auf *Absenden*. Nach dem alle Tests in Artemis
ausgeführt wurden, erhalten Sie links neben dem Button *Aktualisieren* eine Bewertung. Sofern nicht 100 % erreicht
wurden, kann das Feedback angesehen werden, in dem auf diese Bewertung geklickt wird. In dieser Ansicht sehen Sie dann
ein individualisiertes Fehlerfeedback. Nachdem Sie das Fehlerfeedback angesehen haben, können Sie diese Ansicht
verlassen, Ihren Code entsprechend verändern und erneut absenden.

# Aufgabe 4 (9 Punkte)

## Vorlesungsfolien

* Einführung (02-Einfuehrung.pdf)

## Beschreibung

In dieser Aufgabe sollen Sie sich mit einigen Grundlagen vertraut machen. Finden Sie dafür einen Rechner mit einer Linux
Distribution Ihrer Wahl. Stellen Sie sicher, dass `gcc` auf diesem Rechner installiert ist. Testen Sie erneut, ob das im
Proseminar besprochene *Hello World*-Programm kompiliert.

### Arbeitsschritte

Beantworten Sie die folgenden Fragen in der Textdatei `s01e04.txt`.

1. Was ist `gcc`? Wozu wird es gebraucht? Gibt es Alternativen?
2. Welche `gcc` Version ist auf Ihrem System installiert? Wie haben Sie diese Information ermittelt?
3. Welches ist die neueste `gcc` Version?
4. Erklären Sie die einzelnen Befehle Ihres *Hello World*-Programmcodes mithilfe von Kommentaren im Quellcode.
5. Was ist der Unterschied zwischen C-Quellcode und einem Executable? Ist `s01e04.c` ein Executable oder Quellcode?
6. Was passiert beim Kompilieren und warum ist dieser Schritt vor dem Ausführen notwendig?
7. Was bewirken die Flags (`-Wall`, `-Wextra`, `-Werror`, `-Wpedantic`, `-std=c11`, `-o s01e04`) beim
   gcc-Aufruf `gcc -Wall -Wextra -Werror -Wpedantic -std=c11 s01e04.c -o s01e04`?
8. Wie führt man das beim Kompilieren generierte Executable `s01e04` aus?

### Hinweise

- Während des gesamten Proseminars wird eine funktionierende Linux-Distribution vorausgesetzt. Sie ersparen sich jede
  Menge Arbeit, wenn Sie bereits jetzt eine Version installieren. Sie Können alle Aufgaben auch in *Artemis* lösen. Es
  wird jedoch vorausgesetzt, dass Sie Programme auch selbst in der Kommandozeile kompilieren können.
- Sollten Sie keinen eigenen PC besitzen, gibt es die Möglichkeit, die Linux-Rechner in den Rechnerräumen zu verwenden.
- Der Befehl `man gcc` könnte hilfreich sein.
- Sie können das *Hello-World*-Programm mittels des Befehls `gcc -Wall -Werror -std=c11 s01e04.c -o s01e04`
  kompilieren.

# Aufgabe 5 (9 Punkte)

## Beschreibung

In dieser Aufgabe sind zwei Programme vorgegeben. Bearbeiten Sie die folgenden Teilaufgaben.

## a)

Beim Kompilieren des Programms aus `s01e05_a.c` mit `gcc -Wall -Werror -Wextra -Wpedantic -std=c11 s01e05_a.c -o s01e05_a`
wird die nachfolgende Fehlermeldung ausgegeben:

```text
s01e05_a.c: In function 'main':
s01e05_a.c:5:28: error: expected ';' before 'return'
    5 |     printf("Hello World\n")
      |                            ^
      |                            ;
    6 |     return EXIT_SUCCESS;
      |     ~~~~~~                  

```

Analysieren und erklären Sie jeden Teil der Fehlermeldung! Beheben Sie außerdem den Fehler in der Datei `s01e05_a.c` und
geben Sie eine korrigierte Version des Programms ab.

## b)

Beim Kompilieren des Programms `s01e05_b.c` mit `gcc -Wall -Werror -Wextra -Wpedantic -std=c11 s01e05_b.c -o s01e05_b`
werden die nachfolgenden Fehlermeldungen ausgegeben:

```text
s01e05_b.c: In function 'main':
s01e05_b.c:5:27: error: expected ')' before ';' token
    5 |     printf("Hello World\n";
      |                           ^
      |                           )
s01e05_b.c:6:25: error: expected ';' before '}' token
    6 |     return EXIT_SUCCESS;
      |                         ^
      |                         ;
    7 | }
      | ~                        

```

Arbeiten Sie die Fehlermeldungen von oben nach unten nacheinander ab. Kompilieren Sie Ihr Programm jeweils erneut,
nachdem Sie einen Fehler behoben haben. Notieren Sie alle notwendigen Schritte um zu einem kompilierenden Programm zu
gelangen und geben Sie am Ende die überarbeitete Version von `s01e05_b.c` ab.
