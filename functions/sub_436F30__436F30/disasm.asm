0x436F30: push    esi
0x436F31: mov     esi, ecx
0x436F33: cmp     dword ptr [esi+18h], 0
0x436F37: jz      short loc_436F91
0x436F39: cmp     dword ptr [esi+0Ch], 4
0x436F3D: jl      short loc_436F91
0x436F3F: cmp     dword ptr [esi+1Ch], 0
0x436F43: jz      short loc_436F5A
0x436F45: mov     eax, [esi+1Ch]
0x436F48: movzx   ecx, word ptr [eax+0Ch]
0x436F4C: mov     edx, [eax+10h]
0x436F4F: xor     eax, eax
0x436F51: cmp     ecx, edx
0x436F53: setz    al
0x436F56: test    al, al
0x436F58: jz      short loc_436F91
0x436F5A: mov     ecx, [esi+18h]
0x436F5D: mov     eax, [ecx]
0x436F5F: mov     edx, [eax+24h]
0x436F62: push    edi
0x436F63: push    esi
0x436F64: call    edx
0x436F66: mov     edi, [esi+18h]
0x436F69: test    edi, edi
0x436F6B: jz      short loc_436F90
0x436F6D: lea     eax, [edi+8]
0x436F70: push    eax; lpAddend
0x436F71: call    ds:InterlockedDecrement
0x436F77: test    eax, eax
0x436F79: jnz     short loc_436F89
0x436F7B: test    edi, edi
0x436F7D: jz      short loc_436F89
0x436F7F: mov     edx, [edi]
0x436F81: mov     eax, [edx]
0x436F83: push    1
0x436F85: mov     ecx, edi
0x436F87: call    eax
0x436F89: mov     dword ptr [esi+18h], 0
0x436F90: pop     edi
0x436F91: pop     esi
0x436F92: retn
