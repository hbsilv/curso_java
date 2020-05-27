class Conta:

    def __init__(self, cpf, nome, saldo):
        self.cpf = cpf
        self.nome = nome
        self.saldo = saldo
        
    def atualiza(self, taxa):
        self.saldo += self.saldo * taxa


class ContaCorrente(Conta):

    def atualiza(self, taxa):
        self._saldo += self._saldo * taxa * 2

    def deposita(self, valor):
        self._saldo += valor - 0.10


class ContaPoupanca(Conta):

    def atualiza(self, taxa):
        self._saldo += self._saldo * taxa * 3
        
class AtualizadorDeContas:

    def __init__(self, selic, saldo_total=0):
        self.selic = selic
        self.saldo_total = saldo_total

    def roda(self, conta):