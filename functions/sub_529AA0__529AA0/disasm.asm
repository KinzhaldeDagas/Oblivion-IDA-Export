0x529AA0: mov     eax, ecx
0x529AA2: mov     ecx, [eax+1Ch]; int
0x529AA5: test    ecx, ecx
0x529AA7: jz      short locret_529AB8
0x529AA9: mov     eax, [eax+58h]
0x529AAC: push    0; ArgList
0x529AAE: push    0; int
0x529AB0: push    eax; int
0x529AB1: push    0; int
0x529AB3: call    Script_Run
0x529AB8: retn
