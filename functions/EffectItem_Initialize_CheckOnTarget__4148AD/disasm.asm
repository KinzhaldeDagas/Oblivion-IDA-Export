0x4148AD: shr     eax, 6
0x4148B0: test    al, 1
0x4148B2: jz      short EffectItem_Initialize___NoValidRange
0x4148B4: mov     dword ptr [esi+10h], 2
0x4148BB: jmp     short EffectItem_Initialize___Done
