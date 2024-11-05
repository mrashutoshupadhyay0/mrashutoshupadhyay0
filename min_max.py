state = [
    [1, -1, 1],
    [-1, 1, -1],
    [1, 0, 0]
]


def score(state):
    zero_count = 0
    for i in range(0, 3):
        row_sum = 0
        col_sum = 0
        
        for j in range(0, 3):
            row_sum += state[i][j]
            col_sum += state[i][j]

            if state[i][j] == 0: zero_count += 1

        if row_sum == 3 or col_sum == 3: return 1
        if row_sum == -3 or col_sum == -3: return -1

        row_sum = 0
        col_sum = 0

        maj_dig_sum = state[0][0] = state[1][1] + state[2][2]
        min_dig_sum = state[0][2] = state[1][1] + state[2][0]

        if maj_dig_sum == 3 or min_dig_sum == 3: return 1
        elif maj_dig_sum == -3 or min_dig_sum == -3: return -1

        if zero_count == 0: return 0 
        else: return 2

def mM(state, player):
    s = score(state)
    if s != 2: return s

print(mM(state, player = 'max'))