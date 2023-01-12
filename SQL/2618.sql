SELECT products.name, providers.name, categories.name FROM products
INNER JOIN Providers ON providers.id = products.id_providers
INNER JOIN Categories ON categories.id = products.id_categories
WHERE providers.name LIKE 'Sansul SA' AND categories.name LIKE 'Imported';