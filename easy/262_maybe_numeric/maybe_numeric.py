'''
  --------------------------------------------------------------------
  Maybe Numeric
  --------------------------------------------------------------------

  Distributed under the BSD 2-clause "Simplified" License.
  (See accompanying file LICENSE or copy at
            http://opensource.org/licenses/BSD-2-Clause)

  File:    maybe_numberic.py
  Author:  Tiziana Sellitto
  Created: 2016.04.20
  Description: maybe_numeric is a function that returns either a number
               or a string depending on whether the input (string) is a valid
               description of a number.

  Sample input
    123
    44.234
    0x123N

  Bonus 1 (finding arrays, exponent notation, bignumber)
    123 234 345
    3.23e5
    1293712938712938172938172391287319237192837329
    .25
  Sample Output
    123 (number)
    44.234 (number)
    0x123N (string)
'''


def maybe_numeric(input_string):
    for word in input_string.split():
        try:
            if word.isnumeric():
                print(word + "(number)")
            elif float(word):
                print(word + "(number)")
            else:
                print(word + "(string)")
        except (ValueError, TypeError):
            print(word + "(string)")


maybe_numeric('123')
maybe_numeric('44.234')
maybe_numeric('0x123N')
maybe_numeric('123 234 345')
maybe_numeric('3.23e5')
maybe_numeric('1293712938712938172938172391287319237192837329')
