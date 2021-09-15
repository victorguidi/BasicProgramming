/* 
Crie uma instrução SQL que retorne a média de idade, número de filhos e grau de 
intrução dos funcionários cujo salario_hora estiver acima da média de todos os 
funcionários

Retorne os dados somente de funcionários da capital e estado civil casado, com ordem
decrescente da média da idade. 
*/

SELECT ROUND(AVG(idade)), numero_filhos, grau_instrucao
FROM cap16."TB_FUNC" 
WHERE reg_procedencia = 'capital' 
	AND estado_civil = 'casado'
	AND salario_hora > (SELECT AVG(salario_hora) FROM cap16."TB_FUNC" )
GROUP BY numero_filhos, grau_instrucao
ORDER BY ROUND(AVG(idade)) DESC
