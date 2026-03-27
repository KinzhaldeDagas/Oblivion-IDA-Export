0x435A10: push    esi
0x435A11: mov     esi, [esp+4+arg_0]
0x435A15: cmp     word ptr [esi+4], 0
0x435A1A: jnz     short loc_435A57
0x435A1C: mov     eax, SaveLoad_CurrentSavegame
0x435A21: test    eax, eax
0x435A23: jz      short loc_435A39
0x435A25: mov     eax, [eax+18h]
0x435A28: mov     edx, eax
0x435A2A: shr     edx, 0Bh
0x435A2D: test    dl, 1
0x435A30: jz      short loc_435A39
0x435A32: shr     eax, 0Eh
0x435A35: test    al, 1
0x435A37: jz      short loc_435A57
0x435A39: mov     ecx, [ecx]
0x435A3B: mov     eax, [ecx]
0x435A3D: mov     edx, [esp+4+arg_4]
0x435A41: mov     eax, [eax+10h]
0x435A44: push    edx
0x435A45: call    eax
0x435A47: mov     ecx, esi
0x435A49: call    sub_4349B0
0x435A4E: push    esi
0x435A4F: call    FormHeapFree
0x435A54: add     esp, 4
0x435A57: pop     esi
0x435A58: retn    8
