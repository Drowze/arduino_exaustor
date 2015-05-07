# Exaustor de cozinha (arduino)  

Simulador de exaustor de cozinha utilizando Arduino, feito como primeiro projeto para a disciplina "Circuitos Lógicos" de Engenharia de Computação da PUC-Campinas (2015).

## Ideia:
O exaustor deve ser automaticamente ligado quando as seguintes condições são satisfeitas:
- Ambiente iluminado (cozinha em uso)
- Há algum tipo umidade no ambiente (panelas/frigideiras/etc em uso)

Para simular esta situação, utilizamos:
- Fan de computador para simular o exaustor de cozinha
- Sensor de chuva para simular um sensor de umidade
- Sensor de luz (fotoresistor)

## Materiais utilizados no projeto:
- Protoboard
- Arduino UNO (portas de entrada e saída definidas como constantes no código)
- Sensor de chuva (http://www.labdegaragem.org/loja/sensor-de-chuva.html)
- Sensor de luminosidade (LDR)
- Fan comum de computador (12v)
- Fonte externa (12v)
- Relé 5v
- 2 resistores (10K Ohms)
- 1 resistor (220 Ohms)
- Porta lógica AND (Circuito integrado) (uso requisitado pelo professor)
- Transistor NPN
- Muitos fios e jumpers

## Foto do projeto concluído:
https://i.imgur.com/XFlNDFs.jpg

---
##### Materiais de referência:
> http://labdegaragem.com/profiles/blogs/tutorial-como-utilizar-o-sensor-de-chuva-com-arduino
> http://labdegaragem.com/profiles/blogs/tutorial-como-utilizar-a-mini-fotocelula-ldr
