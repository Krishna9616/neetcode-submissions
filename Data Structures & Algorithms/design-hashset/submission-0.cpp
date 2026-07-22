class MyHashSet {
private:
    vector<int> hashset;
public:
    MyHashSet() {}

    void add(int key) {
        if (find(hashset.begin(), hashset.end(), key) == hashset.end()) {
            hashset.push_back(key);
        }
    }

    void remove(int key) {
        auto it = find(hashset.begin(), hashset.end(), key);
        if (it != hashset.end()) {
            hashset.erase(it);
        }
    }

    bool contains(int key) {
        return find(hashset.begin(), hashset.end(), key) != hashset.end();
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */