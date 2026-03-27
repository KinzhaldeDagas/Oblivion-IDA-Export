0x41489A: mov     edx, eax
0x41489C: shr     edx, 5
0x41489F: test    dl, 1
0x4148A2: jz      short EffectItem_Initialize___CheckOnTarget
0x4148A4: mov     dword ptr [esi+10h], 1
0x4148AB: jmp     short EffectItem_Initialize___Done
