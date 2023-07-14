import requests 
from bs4 import BeautifulSoup

res = requests.get('https://news.ycombinator.com/news')
information = BeautifulSoup(res.text, 'html.parser')
print(information)
