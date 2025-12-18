// 13. Roman to Integer

class Solution {
    public int romanToInt(String s) {
        Map<Character, Integer> m = Map.of(
            'I', 1, 'V', 5, 'X', 10, 'L', 50,
            'C', 100, 'D', 500, 'M', 1000
        );

        int sum = 0;

        for (int i = 0; i < s.length(); i++) {
            int val = m.get(s.charAt(i));
            if (i + 1 < s.length() && val < m.get(s.charAt(i + 1))) {
                sum -= val;
            } else {
                sum += val;
            }
        }

        return sum;
    }
}

