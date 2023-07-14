import PyPDF2

main = PyPDF2.PdfFileReader(open('super.pdf','rb'))
water = PyPDF2.PdfFileReader(open('wtr.pdf','rb'))
output = PyPDF2.PdfFileWriter()

for i in range(main.getNumPages()):
 page= main.getPage(i)
 page.mergePage(water.getPage(0))
 output.addPage(page)


with open("result.pdf" , 'wb') as file:
	output.write(file)



# import PyPDF2

# main = PyPDF2.PdfFileReader(open('super.pdf','rb'))
# water = PyPDF2.PdfFileReader(open('wtr.pdf','rb'))
# output = PyPDF2.PdfFileWriter()

# for i in range(main.getNumPages()):
#  page= water.getPage(0)
#  page.mergePage(main.getPage(i))
#  output.addPage(page)


# with open("result.pdf" , 'wb') as file:
# 	output.write(file)

