0x56A340: mov     eax, [esp+arg_0]
0x56A344: cmp     eax, 4
0x56A347: ja      short loc_56A357
0x56A349: mov     eax, ds:0B12B38h[eax*4]
0x56A350: test    eax, eax
0x56A352: jz      short loc_56A357
0x56A354: mov     eax, [eax]
0x56A356: retn
0x56A357: xor     eax, eax
0x56A359: retn
