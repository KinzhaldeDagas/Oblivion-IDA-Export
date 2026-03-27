0x414870: mov     eax, [esi+1Ch]
0x414873: mov     eax, [eax+58h]
0x414876: mov     ecx, eax
0x414878: shr     ecx, 4
0x41487B: test    cl, 1
0x41487E: jz      short EffectItem_Initialize___CheckOnTouch
0x414880: mov     [esi+10h], ebx
