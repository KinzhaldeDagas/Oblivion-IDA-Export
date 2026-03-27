0x4139B9: test    eax, eax
0x4139BB: jz      short EffectItem_SetSCITName___Done
0x4139BD: mov     ecx, [edi+18h]
0x4139C0: push    0; a3
0x4139C2: push    esi; a2
0x4139C3: add     ecx, 8; this
0x4139C6: call    BSStringT_Set
