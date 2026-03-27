0x782D30: mov     edx, [esp+arg_8]
0x782D34: mov     eax, [ecx+0FF8h]
0x782D3A: mov     ecx, [eax]
0x782D3C: push    edx
0x782D3D: mov     edx, [esp+4+arg_4]
0x782D41: push    edx
0x782D42: mov     edx, [esp+8+arg_0]
0x782D46: push    edx
0x782D47: push    eax
0x782D48: mov     eax, [ecx+1C4h]
0x782D4E: call    eax
0x782D50: xor     ecx, ecx
0x782D52: test    eax, eax
0x782D54: setnl   cl
0x782D57: mov     al, cl
0x782D59: retn    10h
