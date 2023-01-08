from PIL import Image

# Open the image file
image = Image.open('test.jpg')

# Convert the image to grayscale
gray_image = image.convert('L')

# Save the grayscale image
gray_image.save('gray_image.jpg')
