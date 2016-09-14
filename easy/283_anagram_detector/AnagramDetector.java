import java.util.Arrays;

/**********************************************************************
 * --------------------------------------------------------------------
 * Anagram Detector
 * --------------------------------------------------------------------
 *
 * Distributed under the BSD 2-clause "Simplified" License. (See accompanying
 * file LICENSE or copy at http://opensource.org/licenses/BSD-2-Clause)
 *
 * File: AnagramDetector.java Author: Tiziana Sellitto Created: 2016.09.14
 * Description: Given two words or sets of words separated by a question mark.
 *              Find if they are an anagram.
 **********************************************************************/

/*
 * You'll be given two words or sets of words separated by a question mark.
 * Your task is to replace the question mark with information about the validity of the anagram. 
 *
 * Example:
 * 
 *     "Clint Eastwood" ? "Old West Action"
 *     "parliament" ? "partial man"
 * 
 * Output Description:
 *
 * You should replace the question mark with some marker about the validity of the anagram proposed.
 * Example:
 *      "Clint Eastwood" is an anagram of "Old West Action
 *      "parliament" is NOT an anagram of "partial man"
 *
 */

/*
     Challenge Input

        "wisdom" ? "mid sow"
        "Seth Rogan" ? "Gathers No"
        "Reddit" ? "Eat Dirt"
        "Schoolmaster" ? "The classroom"
        "Astronomers" ? "Moon starer"
        "Vacation Times" ? "I'm Not as Active"
        "Dormitory" ? "Dirty Rooms"

      Challenge Output

        "wisdom" is an anagram of "mid sow"
        "Seth Rogan" is an anagram of "Gathers No"
        "Reddit" is NOT an anagram of "Eat Dirt"
        "Schoolmaster" is an anagram of "The classroom"
        "Astronomers" is NOT an anagram of "Moon starer"
        "Vacation Times" is an anagram of "I'm Not as Active"
        "Dormitory" is NOT an anagram of "Dirty Rooms"
*/

public class AnagramDetector {
    public static void main(String[] args) {
        String inputs[] = {"wisdom ? mid sow",
                           "Seth Rogan ? Gathers No",
                           "Reddit ? Eat Dirt",
                           "Schoolmaster ? The classroom",
                           "Astronomers ? Moon starer",
                           "Vacation Times ? I'm Not as Active",
                           "Dormitory ? Dirty Rooms"};
        for (int i = 0; i < inputs.length; i++) {
            String words[] = inputs[i].split("\\?");
            System.out.println(isAnagram(words[0], words[1]));
        } 
    }
    public static String isAnagram(String left, String right) {
        int[] l = left.toLowerCase().chars().filter(Character::isAlphabetic).sorted().toArray();
        int[] r = right.toLowerCase().chars().filter(Character::isAlphabetic).sorted().toArray();

        if (l.length != r.length) return left + " is NOT an anagram of " + right;
        String midText = Arrays.equals(l, r) ? " is an anagram of " : " is NOT an anagram of ";
        return left + midText + right;
    }
}