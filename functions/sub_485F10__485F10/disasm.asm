0x485F10: push    ebx
0x485F11: push    ebp
0x485F12: mov     ebp, [ecx]
0x485F14: test    ebp, ebp
0x485F16: push    esi
0x485F17: push    edi
0x485F18: jz      short loc_485F87
0x485F1A: mov     bl, [esp+10h+arg_0]
0x485F1E: mov     edi, edi
0x485F20: mov     edi, [ebp+0]
0x485F23: test    edi, edi
0x485F25: jz      short loc_485F87
0x485F27: mov     eax, [edi+8]
0x485F2A: push    eax
0x485F2B: call    sub_4691B0
0x485F30: mov     esi, eax
0x485F32: add     esp, 4
0x485F35: test    esi, esi
0x485F37: jz      short loc_485F80
0x485F39: push    0
0x485F3B: push    7
0x485F3D: mov     ecx, esi
0x485F3F: call    TESBipedModelForm_CoversSlot
0x485F44: test    al, al
0x485F46: jnz     short loc_485F57
0x485F48: push    0
0x485F4A: push    6
0x485F4C: mov     ecx, esi
0x485F4E: call    TESBipedModelForm_CoversSlot
0x485F53: test    al, al
0x485F55: jz      short loc_485F80
0x485F57: mov     esi, [edi]
0x485F59: test    esi, esi
0x485F5B: jz      short loc_485F80
0x485F5D: lea     ecx, [ecx+0]
0x485F60: mov     ecx, [esi]; this
0x485F62: test    ecx, ecx
0x485F64: jz      short loc_485F80
0x485F66: test    bl, bl
0x485F68: jz      short loc_485F6E
0x485F6A: push    1Ch
0x485F6C: jmp     short loc_485F70
0x485F6E: push    1Bh; a2
0x485F70: call    BaseExtraList_GetExtraData
0x485F75: test    eax, eax
0x485F77: jnz     short loc_485F90
0x485F79: mov     esi, [esi+4]
0x485F7C: test    esi, esi
0x485F7E: jnz     short loc_485F60
0x485F80: mov     ebp, [ebp+4]
0x485F83: test    ebp, ebp
0x485F85: jnz     short loc_485F20
0x485F87: pop     edi
0x485F88: pop     esi
0x485F89: pop     ebp
0x485F8A: xor     eax, eax
0x485F8C: pop     ebx
0x485F8D: retn    4
0x485F90: mov     eax, edi
0x485F92: pop     edi
0x485F93: pop     esi
0x485F94: pop     ebp
0x485F95: pop     ebx
0x485F96: retn    4
