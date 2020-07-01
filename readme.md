# Blowfish encryption
according to https://en.wikipedia.org/wiki/Blowfish_(cipher)
## completion
it can complete the demanded function:
```$xslt
$ ./c2 --encrypt "mysecretmessage" --key keyfile.txt
00001000101101001111111001100110100011010110111011100001011011001101101110110110011101000011110010001010001000001011111111100100
i$ ./c2 --decrypt "00001000101101001111111001100110100011010110111011100001011011001101101110110110011101000011110010001010001000001011111111100100" --key keyfile.txt
mysecretmessage
```
Because the ciphertext is only allowed to be alphabet, so I didn't transfer the binary code to ascii char, since anyway there will be some "illegal" characters.

## generate key:
- The `--generate` function will first generate a number between 1~14, which is the key size. And according to the generated key size, it will generate some keys.
- The keys must be 32-bit unsigned integer, here the data type is uint32_t.
- If you want to specify the keyfile, please follow the rule: 
    + the first line is key size n
    + the next n lines are the key, which must be 32-bit integer.


