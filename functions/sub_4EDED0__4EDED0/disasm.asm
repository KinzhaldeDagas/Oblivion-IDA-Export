0x4EDED0: push    esi
0x4EDED1: mov     esi, ecx
0x4EDED3: push    0A0h ; ' '
0x4EDED8: lea     eax, [esi+68h]
0x4EDEDB: push    0
0x4EDEDD: push    eax
0x4EDEDE: call    __memset
0x4EDEE3: xor     eax, eax
0x4EDEE5: mov     [esi+48h], eax
0x4EDEE8: mov     [esi+4Ch], eax
0x4EDEEB: mov     [esi+50h], eax
0x4EDEEE: mov     [esi+54h], ax
0x4EDEF2: mov     [esi+56h], al
0x4EDEF5: mov     [esi+58h], eax
0x4EDEF8: push    38h ; '8'
0x4EDEFA: mov     [esi+5Ch], eax
0x4EDEFD: push    eax
0x4EDEFE: lea     ecx, [esi+110h]
0x4EDF04: mov     [esi+60h], eax
0x4EDF07: push    ecx
0x4EDF08: mov     [esi+64h], eax
0x4EDF0B: call    __memset
0x4EDF10: add     esp, 18h
0x4EDF13: mov     ecx, esi
0x4EDF15: pop     esi
0x4EDF16: jmp     j_TESForm_InitializeComponents
