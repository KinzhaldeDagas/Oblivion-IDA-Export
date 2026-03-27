0x563E30: mov     eax, [ecx+0E8h]
0x563E36: test    eax, eax
0x563E38: jnz     short loc_563E3F
0x563E3A: xor     al, al
0x563E3C: retn    4
0x563E3F: push    ebx
0x563E40: mov     bl, [esp+4+arg_0]
0x563E44: cmp     bl, 0FFh
0x563E47: jnz     short loc_563E54
0x563E49: or      word ptr [eax+18h], 1
0x563E4E: mov     al, 1
0x563E50: pop     ebx
0x563E51: retn    4
0x563E54: and     word ptr [eax+18h], 0FFFEh
0x563E5A: mov     ecx, [ecx+0E8h]
0x563E60: push    0
0x563E62: call    NiNode_GetNiPropertyByID
0x563E67: test    eax, eax
0x563E69: jz      short loc_563E6E
0x563E6B: mov     [eax+1Ah], bl
0x563E6E: mov     al, 1
0x563E70: pop     ebx
0x563E71: retn    4
