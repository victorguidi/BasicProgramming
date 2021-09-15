/* Retorne a média de salário por estado */

/*Utilizando JOIN */

SELECT ROUND(AVG(f.salario_hora)), e.estado
FROM cap16."TB_FUNC" f, cap16."TB_ENDERECO" e
WHERE f.id_func = e.id_func
GROUP BY e.estado
