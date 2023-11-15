class Transition:
    def __init__(self, _from, _to, label):
        self._from = _from
        self._to = _to
        self.label = label

    def get_from(self):
        return self._from

    def get_to(self):
        return self._to

    def get_label(self):
        return self.label

    def set_from(self, new_from):
        self._from = new_from

    def set_to(self, new_to):
        self._to = new_to

    def set_label(self, new_label):
        self.label = new_label
