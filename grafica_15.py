import numpy as np
import matplotlib.pyplot as plt

data = np.loadtxt("elemento.dat")

plt.figure(figsize=(8,8))
plt.plot(data[:,1], data[:,2], label="trayectoria")

plt.title("grafica ejercicio 15")
plt.xlabel("x")
plt.ylabel("Y")
plt.savefig("SalazarDaniel_final_15.pdf")