from cmath import pi
class FormaGeometrica():
    
    def calc_area(self):
        pass

class Quadrado(FormaGeometrica):
    
    def __init__(self, base):
        self.base = base
    
    def calc_area(self):
        return self.base * self.base
    
class Circulo(FormaGeometrica):
        
    def __init__(self,raio):
        self.raio = raio
    
    def calc_area(self):
        return self.raio * self.raio * pi
    
quad1 = Quadrado(3)
quad2 = Quadrado(2)
circ1 = Circulo(1)
circ2 = Circulo(2)

formas_geometricas = [quad1,quad2,circ1,circ2]

soma = 0

for forma in formas_geometricas:
    soma = soma + forma.calc_area()
    
print("Area total: {}".format(soma))