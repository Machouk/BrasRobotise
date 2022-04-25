import numpy as np
import scipy as scy
import scipy.optimize

#
# Cinématique inverse d'un bras 2D 
#

# matrice de rotation
def rotation(angle):
    return np.array([
        [np.cos(angle), - np.sin(angle)],
        [np.sin(angle),   np.cos(angle)]
    ])

# Vecteur 2D
def vec(x, y):
    return np.array([[x], [y]])

def bras(a1, a2, a3, l1, l2, l3, l4):
    return vec(0,l1) + rotation(a1) @ (
        vec(0, l2) + rotation(a2) @ ( vec(0, l3) + rotation(a3) @ vec(0, l4) )
    )

l1, l2, l3, l4 = 2, 3, 1, 2
cible = vec(3, 4)

def erreur(X):
    a1, a2, a3 = X
    vecteur_erreur = cible - bras(a1, a2, a3, l1, l2, l3, l4)
    return np.linalg.norm(vecteur_erreur)

starting_point_for_a1_a2_a3 = np.zeros(3)
a1_a2_a3 = scy.optimize.minimize(erreur, starting_point_for_a1_a2_a3).x

print("")
print("Cible : ")
print(cible)
print("")

print("Angles calculés : ")
print("a1 : " + str(a1_a2_a3[0]))
print("a2 : " + str(a1_a2_a3[1]))
print("a3 : " + str(a1_a2_a3[2]))
print("")

print("Position atteinte : ")
print( bras( *a1_a2_a3, l1, l2, l3, l4) )
print("")

print("Erreur de positionnement : " + str(erreur(a1_a2_a3)))
