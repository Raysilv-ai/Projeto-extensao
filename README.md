Este código é um sistema embarcado que monitora o consumo de energia e controla uma luz com base nesse consumo. Aqui está uma descrição dos principais componentes e funcionalidades:
1. Biblioteca LiquidCrystal:
   - Utilizada para controlar um display LCD.
2. Configuração do Display LCD:
   - Define os pinos do Arduino conectados ao display LCD.
3. Definição dos Pinos dos Sensores e da Luz:
   - `currentSensorPin` e `voltageSensorPin` são usados para ler os sensores de corrente e tensão.
   - `lightPin` é usado para controlar uma luz.
4. Configuração Inicial:
   - Inicia o display LCD e a comunicação serial.
   - Configura o pino da luz como saída e a desliga inicialmente.
5. Loop Principal:
   - Lê os valores dos sensores de corrente e tensão.
   - Calcula a corrente, tensão e potência.
   - Exibe a potência no display LCD e no monitor serial.
   - Liga ou desliga a luz com base na potência medida.
Este sistema permite monitorar o consumo de energia em tempo real e ajustar a iluminação conforme necessário, proporcionando uma solução eficiente para controle de energia.
