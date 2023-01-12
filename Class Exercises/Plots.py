import numpy as np
import matplotlib.pyplot as plt

plt.style.use(['science', 'notebook', 'grid'])


x = np.linspace(0, 15, 30)

y = y = np.sin(x) + 0.1 * np.random.random(len(x))


res=np.random.randn(1000)*0.2+0.4
#res2=np.random.randn(1000)*0.2+0.4

#plt.hist(res, bins=30, density=True, histtype='step')
#plt.hist(res2, bins=30, density=True, histtype='step')*#

fig, axes=plt.subplots(3,2, figsize=(12,12))
ax=axes[0][0]
ax.plot(x, y, 'o--')
ax.set_xlabel('time')
ax.set_ylabel('volts')
ax=axes[1][1]
ax.hist(res, bins=30, density=True, histtype='step')



