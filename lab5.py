from PIL import Image

# Open the image file
image = Image.open('test.jpg')

# Compress the image
image.save('compressed_image.jpg', quality=50)
