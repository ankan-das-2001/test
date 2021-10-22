import pyttsx3

alexa = pyttsx3.init()
"""VOICE"""
voices = alexa.getProperty('voices')       #getting details of current voice
#engine.setProperty('voice', voices[0].id)  #changing index, changes voices. o for male
alexa.setProperty('voice', voices[1].id)   #changing index, changes voices. 1 for female

""" RATE"""
rate = alexa.getProperty('rate')   # getting details of current speaking rate
alexa.setProperty('rate', 170)     # setting up new voice rate
print (rate)                        #printing current voice rate

alexa.say("Hi Mitsu.... How are you? I'm Your Alexa")
alexa.runAndWait()