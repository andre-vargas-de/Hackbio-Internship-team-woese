
name = "Prathyusha Cota"
email = "Prathyushacota@gmail.com"
slack_name = "Prathyusha"
biostack = "genomics"
twitter_handle = "cotaprathyusha"
hamming_distance = hamming_distance("Prathyusha", "cotaprathyusha")
print (name,email, slack_name, biostack, twitter_handle,hamming_distance)


def hamming_distance(string1, string2) :
  distance = 0
  L = len(string1)
  for i in range(L) :
    if string1[i] != string2[i] :
      distance +=1
      return distance
