class HashTable:
    def __init__(self, size):
        self.size = size
        self.items = [[] for _ in range(size)]

    def get_size(self):
        return self.size

    def hash(self, key):
        if isinstance(key, int):
            return key % self.size
        elif isinstance(key, str):
            sum_val = 0
            for char in key:
                char_code = ord(char)
                sum_val += char_code
            return sum_val % self.size

    def get_hash_value(self, key):
        if isinstance(key, int) or isinstance(key, str):
            return self.hash(key)
        return -1

    def add(self, key):
        hash_value = self.get_hash_value(key)
        if key not in self.items[hash_value]:
            self.items[hash_value].append(key)
            return (hash_value, self.items[hash_value].index(key))
        raise Exception("Key {} is already in the table :(".format(key))

    def contains(self, key):
        hash_value = self.get_hash_value(key)
        return key in self.items[hash_value]

    def get_position(self, key):
        if self.contains(key):
            hash_value = self.get_hash_value(key)
            return (hash_value, self.items[hash_value].index(key))
        return (-1, -1)

    def __str__(self):
        return "HashTable{" + "items=" + str(self.items) + "}"
