import  string
def count():

    vowels = ["a","e","i","o","u", "A","E","I","O","U"]
    inp = input("Enter the string ")

    vow = 0
    con = 0

    for i in range(len(inp)):
        if inp[i] in vowels:
            vow+=1
        else:
            con+=1
    print(f"Vowels {vow}" )
    print(f"ConsonantS {con}" )


if __name__ == "__main__":
    count()
