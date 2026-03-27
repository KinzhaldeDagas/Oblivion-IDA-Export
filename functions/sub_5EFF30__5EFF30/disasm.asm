0x5EFF30: push    edi
0x5EFF31: mov     edi, ecx
0x5EFF33: cmp     dword ptr [edi+58h], 0
0x5EFF37: jz      loc_5EFFBD
0x5EFF3D: mov     ecx, [edi+58h]
0x5EFF40: mov     eax, [ecx]
0x5EFF42: mov     edx, [eax+184h]
0x5EFF48: call    edx
0x5EFF4A: test    eax, eax
0x5EFF4C: jz      short loc_5EFFBD
0x5EFF4E: cmp     byte ptr [eax+20h], 10h
0x5EFF52: jnz     short loc_5EFFBD
0x5EFF54: cmp     dword ptr [edi+58h], 0
0x5EFF58: jz      short loc_5EFFBD
0x5EFF5A: mov     ecx, [edi+58h]
0x5EFF5D: mov     eax, [ecx]
0x5EFF5F: mov     edx, [eax+184h]
0x5EFF65: push    esi; int
0x5EFF66: call    edx
0x5EFF68: mov     esi, eax
0x5EFF6A: test    esi, esi
0x5EFF6C: jz      short loc_5EFFBC
0x5EFF6E: cmp     dword ptr [esi+58h], 0
0x5EFF72: jnz     short loc_5EFF7A
0x5EFF74: cmp     dword ptr [esi+54h], 0
0x5EFF78: jz      short loc_5EFFBC
0x5EFF7A: mov     eax, [esp+8+arg_0]
0x5EFF7E: push    eax
0x5EFF7F: mov     ecx, esi
0x5EFF81: call    sub_627D60
0x5EFF86: cmp     dword ptr [esi+58h], 0
0x5EFF8A: jnz     short loc_5EFFBC
0x5EFF8C: cmp     dword ptr [esi+54h], 0
0x5EFF90: jnz     short loc_5EFFBC
0x5EFF92: mov     edx, [edi]
0x5EFF94: mov     eax, [edx+334h]
0x5EFF9A: push    1
0x5EFF9C: mov     ecx, edi
0x5EFF9E: call    eax
0x5EFFA0: test    al, al
0x5EFFA2: mov     ecx, edi; int
0x5EFFA4: jz      short loc_5EFFB7
0x5EFFA6: mov     edx, [edi]
0x5EFFA8: mov     eax, [edx+340h]
0x5EFFAE: push    0
0x5EFFB0: call    eax
0x5EFFB2: pop     esi
0x5EFFB3: pop     edi
0x5EFFB4: retn    4
0x5EFFB7: call    sub_5EAE70
0x5EFFBC: pop     esi
0x5EFFBD: pop     edi
0x5EFFBE: retn    4
