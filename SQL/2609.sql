SELECT categories.name, sum(products.amount) FROM categories, products
WHERE products.id_categories = categories.id
GROUP BY categories.name;