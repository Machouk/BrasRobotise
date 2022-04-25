from tkinter import *

from App import workDispatcher

#ajouter fontion qui quand on clique sur les boutons ça envoie carte etc
fenetre = Tk()
titre = LabelFrame(fenetre, padx=20, pady=20)
option = LabelFrame(fenetre, text="Options", padx=0, pady=0)
nb_card=0
cards=[]

def initialize():
    fenetre.geometry("600x400")
    titre.pack(fill="x",side=TOP)
    Label(titre,text="Choix des cartes").pack()
    option.pack(fill="x",side=TOP)
    Label(option).pack()
    Button(option,text='Ajouter une carte',command=add_card).pack(padx=5,pady=5,fill=BOTH,expand=1,side=LEFT)
    Button(option,text='Retirer une carte',command=remove_card).pack(padx=5,pady=5,fill=BOTH,expand=1,side=LEFT)
    add_card(3)

def add_card(nb=1):
    global nb_card
    global cards
    for i in range (nb):
        nb_card+=1
        b=Button(fenetre,text='Carte '+str(nb_card),command=lambda m=nb_card :choice_card(m))
        b.pack(padx=5,pady=5,fill=BOTH,expand=1,side=LEFT)
        cards.append(b)


def remove_card(nb=1):
    global nb_card
    for i in range(nb):
        b=cards[-1]
        cards.pop()
        nb_card-=1  
        b.destroy()

def choice_card(nb):
    workDispatcher(nb)

initialize()
fenetre.mainloop()