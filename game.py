def guess(n):
    while True:
        ans = int(input("Enter your guessed number: "))
        if ans > n:
            print("Too high")
        elif ans < n:
            print("Too low")
        else:
            print("Correct")
            break

if __name__ == "__main__":
    guess(61)
