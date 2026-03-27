0x72BF40: push    esi
0x72BF41: push    edi
0x72BF42: mov     edi, [esp+8+a2]
0x72BF46: push    edi; a2
0x72BF47: mov     esi, ecx
0x72BF49: call    sub_700670
0x72BF4E: test    al, al
0x72BF50: jnz     short loc_72BF59
0x72BF52: pop     edi
0x72BF53: xor     al, al
0x72BF55: pop     esi
0x72BF56: retn    4
0x72BF59: mov     ecx, [esi+8]
0x72BF5C: mov     eax, [edi+8]
0x72BF5F: mov     edx, [ecx]
0x72BF61: push    eax
0x72BF62: mov     eax, [edx+2Ch]
0x72BF65: call    eax
0x72BF67: test    al, al
0x72BF69: jz      short loc_72BF52
0x72BF6B: mov     ecx, [esi+0Ch]
0x72BF6E: test    ecx, ecx
0x72BF70: jz      short loc_72BF81
0x72BF72: mov     eax, [edi+0Ch]
0x72BF75: mov     edx, [ecx]
0x72BF77: push    eax
0x72BF78: mov     eax, [edx+2Ch]
0x72BF7B: call    eax
0x72BF7D: test    al, al
0x72BF7F: jz      short loc_72BF52
0x72BF81: cmp     dword ptr [esi+0Ch], 0
0x72BF85: jnz     short loc_72BF8D
0x72BF87: cmp     dword ptr [edi+0Ch], 0
0x72BF8B: jnz     short loc_72BF52
0x72BF8D: pop     edi
0x72BF8E: mov     al, 1
0x72BF90: pop     esi
0x72BF91: retn    4
