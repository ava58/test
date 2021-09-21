import speech_recognition as sp
r = sp.Recognizer ()
harvard = sp.AudioFile('zapis.wav')
with harvard as source:
    audio = r.record(source)
    print(r.recognize_google(audio,language="ru-RU"))
# test
