mydict={
        "enthusiastic":"having interest",
        "apathetic": "no interest",
         "python":"a kind of snake",
        "marks":"[1,2,3,4,5]",
        1:10,
          "nested_dict":{"hritik":"student",
                          "age":"20"}
}
print(mydict['enthusiastic'])
print(mydict['marks'])
print(mydict['python'])
print(mydict['nested_dict']["hritik"])
mydict['marks']=[6,7,8,9]
print(mydict['marks'])
################ methods ##################
print(mydict)
print(mydict.keys())
print(type(mydict.keys()))
print(mydict.values())
print(list(mydict.keys()))
print(list(mydict.values()))
print(mydict)
updatedict={
    "dell":"american Computer company"
}
mydict.update(updatedict)
print(mydict)
a={} #EMPTY DICTIONARY
print(a)