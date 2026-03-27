0x563DE0: mov     eax, [ecx]
0x563DE2: mov     edx, [esp+arg_0]
0x563DE6: mov     eax, [eax+0B0h]
0x563DEC: push    edx
0x563DED: call    eax
0x563DEF: test    eax, eax
0x563DF1: jnz     short loc_563DF8
0x563DF3: xor     al, al
0x563DF5: retn    8
0x563DF8: push    ebx
0x563DF9: mov     bl, [esp+4+arg_4]
0x563DFD: cmp     bl, 0FFh
0x563E00: jnz     short loc_563E0D
0x563E02: or      word ptr [eax+18h], 1
0x563E07: mov     al, 1
0x563E09: pop     ebx
0x563E0A: retn    8
0x563E0D: and     word ptr [eax+18h], 0FFFEh
0x563E13: push    0
0x563E15: mov     ecx, eax
0x563E17: call    NiNode_GetNiPropertyByID
0x563E1C: test    eax, eax
0x563E1E: jz      short loc_563E23
0x563E20: mov     [eax+1Ah], bl
0x563E23: mov     al, 1
0x563E25: pop     ebx
0x563E26: retn    8
