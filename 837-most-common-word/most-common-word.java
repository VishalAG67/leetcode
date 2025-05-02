class Solution {
    public String mostCommonWord(String paragraph, String[] banned) {
        String lower = paragraph.replaceAll("[^a-zA-Z]", " ").toLowerCase();
        String[] words = lower.split("\\s+");
        HashSet<String> bannedSet = new HashSet<>();
        for (String word : banned) {
            bannedSet.add(word);
        }
        HashMap<String, Integer> wordCount = new HashMap<>();
        for (String word : words) {
            if (!bannedSet.contains(word)) {
                wordCount.put(word, wordCount.getOrDefault(word, 0) + 1);
            }
        }
        String mostCommon = "";
        int maxCount = 0;
        for (Map.Entry<String, Integer> e : wordCount.entrySet()) {
            if (e.getValue() > maxCount) {
                mostCommon = e.getKey();
                maxCount = e.getValue();
            }
        }
        return mostCommon;
    }
}