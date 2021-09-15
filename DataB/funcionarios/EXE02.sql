/* Retorne todos os registros dos funcionários com 2 filhos. */

SELECT * FROM cap16."TB_FUNC" WHERE numero_filhos = '2'
/* Esta dentro de aspas porque a coluna é do tipo string */

SELECT * FROM cap16."TB_FUNC" WHERE CAST(numero_filhos AS INTEGER) = 2 
/* Segunda solução é com a função CAST que é mais adequada*/