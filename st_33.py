def score(c):
    return ord(c)-96
vocab=input()
vocab=list(vocab)
sco=0
for c in vocab:
    sco+=score(c.lower())
print(sco)
