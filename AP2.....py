#This program will calc the area and perameter of a rectangle
#area = length * width
#perimeter = 2 * (l + w)

def main():
#------Def's
    def displayIntro():
        print("This program will calculate the area and perimeter of a recangle for you.")
        print()

    def area(width, length):
        area = length * width
        return area

    def perimeter(width, length):
        perimeter = 2 * (width + length)
        return perimeter

#------inputs
    width = float(input("Enter Width: "))
    length = float(input("Enter Length: "))

#------Final Print
    print("Area: " + str(area(width, length)) + " Perimeter: " + str(perimeter(width, length)))

while True:
    main()
    if input("Try A New Calculation? (Y/N): ").strip().upper() != "Y":
        break
    



