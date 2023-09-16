# Zajęcia 12

## Źródło zadania: INFORMATOR MATURA INFORMATYKA 2023

Wyrażeniem nawiasowym nazywamy dowolny skończony ciąg nawiasów: „[” i „]”.
Przykładowo: [[ ] [ ] ]
Wyrażenie nawiasowe jest poprawne, jeśli:
– jest wyrażeniem pustym (nie zawiera żadnych nawiasów)
– jest postaci AB, gdzie A i B są poprawnymi wyrażeniami nawiasowymi
– jest postaci [ A ], gdzie A jest poprawnym wyrażeniem nawiasowym
Przykład: wyrażenia [ [ ] ] oraz [ [ ] [ ] ] są poprawne. Niepoprawne jest za to wyrażenie
[ ] ] [ ] ].
Niech w1, w2, …, wn będą kolejnymi nawiasami w pewnym wyrażeniu nawiasowym W.
Przyjmijmy teraz, że z każdym nawiasem otwierającym „[” wiążemy liczbę +1, a z każdym
nawiasem zamykającym „]” – liczbę -1. Niech si będzie liczbą związaną z nawiasem wi.
Wówczas głębokością nawiasu wk w wyrażeniu W nazywamy sumę:
Sk = s1 + s2 + … + sk
Głębokością wyrażenia W nazwiemy największą głębokość jego nawiasów, czyli maksimum
z liczb Sk.

## Wskaż, czy dane wyrażenie nawiasowe jest poprawne. Wpisz Tak, jeśli wyrażenie jest poprawne lub Nie – jeśli nie jest poprawne.

Wyrażenie nawiasowe Poprawne (Tak/Nie)
[ ] Tak
[ ] [ ]
[ [ ] [ ] ] [ ] ]
[ ] [ [ ] [ [ ] [ [ ] [ ] ] ] ]
[ [ ] [ ] [ [ [ ] [ ] ] [ ] ] ]

## Dla zadanych przykładów policz głębokość wyrażenia.
Wyrażenie nawiasowe Głębokość
[ ] 1
[ ] [ ]
[ [ ] [ ] ]
[ [ ] [ [ ] ] ]
[ [ [ [ ] [ ] ] [ ] ] ]


## Napisz funkcje, która dla zadanego wyrażenia nawiasowego zwróci wartość logiczną odpowiadającą pytaniu, czy dane wyrażenie jest poprawne.
## Napisz funkcję, która dla zadanego wyrażenia nawiasowego zwróci jego głębokość (o ile jest poprawne) lub -1, jeśli nie jest poprawne.
