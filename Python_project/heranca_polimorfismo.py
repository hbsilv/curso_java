class Conta:

    def __init__(self, cpf, nome, saldo):
        self.cpf = cpf
        self.nome = nome
        self.saldo = saldo
        
    def atualiza(self, taxa):
        self.saldo += self.saldo * taxa

class ContaCorrente(Conta):
  pass

class ContaCorrente(Conta):

    def atualiza(self, taxa):
      self._saldo += self._saldo * taxa * 2

    def deposita(self, valor):
        self._saldo += valor - 0.10

class ContaPoupanca(Conta):
    pass

class ContaPoupanca(Conta):

    def atualiza(self, taxa):
        self._saldo += self._saldo * taxa * 3
        
class AtualizadorDeContas:

    def __init__(self, selic, saldo_total=0):
        self.selic = selic
        self.saldo_total = saldo_total

    def roda(self, conta):
        

        
        c = Conta('123-4', 'Joao', 1000.0)
        cc = ContaCorrente('123-5', 'Jose', 1000.0)
        cp = ContaPoupanca('123-6', 'Maria', 1000.0)

        c.atualiza(0.01)
        cc.atualiza(0.01)
        cp.atualiza(0.01)     
        
        print(c.saldo)     
        print(cc.saldo)     
        print(cp.saldo)


        adc = AtualizadorDeContas(0.01)     
        
        adc.roda(c)     
        adc.roda(cc)     
        adc.roda(cp)     

        print('Saldo total: {}'.format(adc.saldo_total))
