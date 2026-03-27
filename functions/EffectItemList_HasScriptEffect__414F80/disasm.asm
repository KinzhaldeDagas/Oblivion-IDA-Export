0x414F80: push    esi
0x414F81: mov     esi, ecx
0x414F83: cmp     dword ptr [esi+8], 0
0x414F87: jnz     short loc_414F95
0x414F89: cmp     dword ptr [esi+4], 0
0x414F8D: jnz     short loc_414F95
0x414F8F: xor     al, al
0x414F91: pop     esi
0x414F92: retn    4
0x414F95: push    ebx
0x414F96: xor     bl, bl
0x414F98: test    esi, esi
0x414F9A: jz      short loc_414FD6
0x414F9C: push    ebp
0x414F9D: mov     ebp, [esp+0Ch+arg_0]
0x414FA1: push    edi
0x414FA2: test    bl, bl
0x414FA4: jnz     short loc_414FD4
0x414FA6: mov     edi, [esi+4]
0x414FA9: test    edi, edi
0x414FAB: jz      short loc_414FC8
0x414FAD: mov     ecx, edi
0x414FAF: call    EffectItem_GetScript
0x414FB4: cmp     eax, ebp
0x414FB6: jnz     short loc_414FC8
0x414FB8: mov     eax, [edi+1Ch]
0x414FBB: mov     ecx, [eax+58h]
0x414FBE: shr     ecx, 16h
0x414FC1: test    cl, 1
0x414FC4: jnz     short loc_414FC8
0x414FC6: mov     bl, 1
0x414FC8: mov     esi, [esi+8]
0x414FCB: test    esi, esi
0x414FCD: jz      short loc_414FD4
0x414FCF: add     esi, 0FFFFFFFCh
0x414FD2: jnz     short loc_414FA2
0x414FD4: pop     edi
0x414FD5: pop     ebp
0x414FD6: mov     al, bl
0x414FD8: pop     ebx
0x414FD9: pop     esi
0x414FDA: retn    4
