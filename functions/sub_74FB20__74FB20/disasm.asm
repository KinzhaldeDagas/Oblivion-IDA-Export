0x74FB20: push    ecx
0x74FB21: push    esi
0x74FB22: mov     esi, ecx
0x74FB24: call    sub_6CE1B0
0x74FB29: test    al, al
0x74FB2B: jz      short loc_74FB6E
0x74FB2D: mov     eax, [esi+40h]
0x74FB30: mov     esi, [esi+30h]
0x74FB33: lea     ecx, [esp+8+var_4]
0x74FB37: push    ecx
0x74FB38: push    eax
0x74FB39: lea     ecx, [esi+0D4h]
0x74FB3F: call    NiTMap_GetAt
0x74FB44: test    al, al
0x74FB46: jz      short loc_74FB6E
0x74FB48: mov     ecx, [esp+8+var_4]
0x74FB4C: test    ecx, ecx
0x74FB4E: jz      short loc_74FB6E
0x74FB50: mov     edx, [ecx]
0x74FB52: mov     eax, [edx+4]
0x74FB55: call    eax
0x74FB57: test    eax, eax
0x74FB59: jz      short loc_74FB6E
0x74FB5B: jmp     short loc_74FB60
0x74FB5D: align 10h
0x74FB60: cmp     eax, offset dword_B40B50
0x74FB65: jz      short loc_74FB73
0x74FB67: mov     eax, [eax+4]
0x74FB6A: test    eax, eax
0x74FB6C: jnz     short loc_74FB60
0x74FB6E: xor     al, al
0x74FB70: pop     esi
0x74FB71: pop     ecx
0x74FB72: retn
0x74FB73: mov     al, 1
0x74FB75: pop     esi
0x74FB76: pop     ecx
0x74FB77: retn
