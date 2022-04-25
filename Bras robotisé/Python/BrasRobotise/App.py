import os

#peut-être un truc qui précise combien l'user a mis de cartes sur le plateau
#voir pour mettre une limite de nb de cartes ou à le laisser fixe
#revoir la com entre les deux programmes car les deux s'appellent c'est pas ouf

#os.system("Interface.py")

def poserCarte(carte):
    print("je vais prendre la carte "+str(carte))

def workDispatcher(carte):
    poserCarte(carte)