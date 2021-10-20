print("MAKE SURE DON'T USE ANY NUMBER")

email = input("Enter you email the following pattern : (firstname.lastname@example.com)")


result = email.split(".")


if "@" in result[1]:
    index = result[1].index('@')
    last_name = result[1][:index]
    
    first_name = result[0]
    
    print("Hi, "+first_name.capitalize()+" "+last_name.capitalize())
