'''
  --------------------------------------------------------------------
  Entropy
  --------------------------------------------------------------------

  Distributed under the BSD 2-clause "Simplified" License.
  (See accompanying file LICENSE or copy at
            http://opensource.org/licenses/BSD-2-Clause)

  File:    entropy.py
  Author:  Tiziana Sellitto
  Created: 2016.04.20
  Description: Shannon Entropy of a String

 Formula for Entropy is:
                 n
                _   count(i)          count(i)
    H(X) = -1 * >   --------- * log  (--------)
                -       N          2      N
                i=1
'''
from collections import Counter
from math import log2

# This function calculate the entropy of a string.
# The count(i) part use the Counter 
def entropy(input_string):
    return -sum(i/len(input_string) * log2(i/len(input_string))
                for i in Counter(input_string).values())

print(entropy('Hello, world!'))
print(entropy('122333444455555666666777777788888888'))
print(entropy('563881467447538846567288767728553786'))
print(entropy('https://www.reddit.com/r/dailyprogrammer'))
print(entropy('int main(int argc, char *argv[])'))


'''
Output
3.180832987
2.794208683
2.794208683
4.056198332
3.866729296
'''
