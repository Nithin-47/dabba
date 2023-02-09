import math

def poisson_prob(lam, x):
    return math.pow(lam, x) * math.exp(-lam) / math.factorial(x)

lam = 2.5 
x = 0     

result = poisson_prob(lam, x)

print("The Required Probability is",result)
