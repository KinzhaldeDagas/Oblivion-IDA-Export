0x782D90: mov     edx, [esp+arg_8]
0x782D94: mov     eax, [ecx+0FF8h]
0x782D9A: mov     ecx, [eax]
0x782D9C: push    edx
0x782D9D: mov     edx, [esp+4+arg_4]
0x782DA1: push    edx
0x782DA2: mov     edx, [esp+8+arg_0]
0x782DA6: push    edx
0x782DA7: push    eax
0x782DA8: mov     eax, [ecx+1BCh]
0x782DAE: call    eax
0x782DB0: xor     ecx, ecx
0x782DB2: test    eax, eax
0x782DB4: setnl   cl
0x782DB7: mov     al, cl
0x782DB9: retn    10h
