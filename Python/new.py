CREATE TABLE images (
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(255) NOT NULL,
    image_data LONGBLOB NOT NULL
);
import mysql.connector

# Connect to the MySQL database
conn = mysql.connector.connect(
    host='localhost',
    user='your_username',
    password='your_password',
    database='your_database'
)

# Function to convert image to binary data
def convert_to_binary(filename):
    with open(filename, 'rb') as file:
        binary_data = file.read()
    return binary_data

# Insert image into the database
cursor = conn.cursor()
image_data = convert_to_binary('path_to_image.jpg')
sql = "INSERT INTO images (name, image_data) VALUES (%s, %s)"
cursor.execute(sql, ('image_name', image_data))
conn.commit()

cursor.close()
conn.close()
