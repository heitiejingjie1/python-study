import requests as rq
import json

url = "https://api.github.com/search/repositories?q=language:python&sort=stars"
headers = {"Accept": "application/vnd.github.v3+json"}
r = rq.get(url, headers=headers)
print(f"Status code: {rq.status_codes}")
reponesDict = rq.json()
print(reponesDict.keys())
