def getFullName(first, last, middle=""):
    if middle:
        fullName = f"{first.title()} {middle.title()} {last.title()}"
    else:
        fullName = f"{first.title()} {last.title()}"
    return fullName
