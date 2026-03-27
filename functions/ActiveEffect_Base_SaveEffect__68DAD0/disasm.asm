0x68DAD0: sub     esp, 14h
0x68DAD3: push    ebp
0x68DAD4: push    edi
0x68DAD5: mov     ebp, ecx
0x68DAD7: mov     ecx, ds:0B33B00h
0x68DADD: push    4; Size
0x68DADF: lea     eax, [ebp+4]
0x68DAE2: push    eax; Src
0x68DAE3: call    SaveLoad_SaveData
0x68DAE8: push    1; Size
0x68DAEA: lea     ecx, [ebp+10h]
0x68DAED: push    ecx; Src
0x68DAEE: mov     ecx, ds:0B33B00h
0x68DAF4: call    SaveLoad_SaveData
0x68DAF9: mov     ecx, ds:0B33B00h
0x68DAFF: push    1; Size
0x68DB01: lea     edx, [ebp+11h]
0x68DB04: push    edx; Src
0x68DB05: call    SaveLoad_SaveData
0x68DB0A: mov     ecx, ds:0B33B00h
0x68DB10: push    1; Size
0x68DB12: lea     eax, [ebp+13h]
0x68DB15: push    eax; Src
0x68DB16: call    SaveLoad_SaveData
0x68DB1B: push    4; Size
0x68DB1D: lea     ecx, [ebp+18h]
0x68DB20: push    ecx; Src
0x68DB21: mov     ecx, ds:0B33B00h
0x68DB27: call    SaveLoad_SaveData
0x68DB2C: mov     ecx, ds:0B33B00h
0x68DB32: push    4; Size
0x68DB34: lea     edx, [ebp+1Ch]
0x68DB37: push    edx; Src
0x68DB38: call    SaveLoad_SaveData
