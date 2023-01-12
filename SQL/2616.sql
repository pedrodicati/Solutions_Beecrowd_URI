SELECT customers.id, customers.name FROM customers
WHERE NOT EXISTS (SELECT id_customers FROM locations WHERE customers.id = locations.id_customers);

SELECT customers.id, customers.name FROM customers
WHERE customers.id NOT IN (SELECT id_customers FROM locations);