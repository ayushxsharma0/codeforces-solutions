x = int(input())

ls = []

for _ in range(x):
    s = input()
    ls.append(s)
ans = 0 
for i in ls:
    match i:
        case 'Tetrahedron':
            ans += 4
        case 'Cube':
            ans += 6
        case 'Octahedron':
            ans += 8
        case 'Dodecahedron':
            ans += 12
        case 'Icosahedron':
            ans += 20

print(ans)