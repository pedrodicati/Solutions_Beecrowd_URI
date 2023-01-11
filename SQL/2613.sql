SELECT movies.id, movies.name FROM movies
INNER JOIN Prices ON prices.id = movies.id_prices
WHERE prices.categorie LIKE 'Promotion';

/*
or

SELECT movies.id, movies.name FROM Movies
WHERE movies.id_prices = 5;
*/