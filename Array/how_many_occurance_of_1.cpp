vector<int> arr;
unordered_map<int, int> hashmap;
for (int i = 0; i < arr.size(); i++)
{
   // hashmap[arr[i]]=hashmap[arr[i]]+1;
   hashmap[arr[i]]++;
}
return hashmap[1];