0x715E70: push    ebx
0x715E71: push    ebp
0x715E72: mov     ebp, [esp+8+arg_0]
0x715E76: push    esi
0x715E77: push    edi
0x715E78: mov     edi, ecx
0x715E7A: mov     ecx, ebp
0x715E7C: call    sub_7124A0
0x715E81: mov     esi, [edi+34h]
0x715E84: mov     ebx, eax
0x715E86: cmp     esi, ebx
0x715E88: jz      short loc_715EBB
0x715E8A: test    esi, esi
0x715E8C: jz      short loc_715EAA
0x715E8E: lea     eax, [esi+4]
0x715E91: push    eax; lpAddend
0x715E92: call    dword ptr ds:0A2807Ch
0x715E98: test    eax, eax
0x715E9A: jnz     short loc_715EAA
0x715E9C: test    esi, esi
0x715E9E: jz      short loc_715EAA
0x715EA0: mov     edx, [esi]
0x715EA2: mov     eax, [edx]
0x715EA4: push    1
0x715EA6: mov     ecx, esi
0x715EA8: call    eax
0x715EAA: test    ebx, ebx
0x715EAC: mov     [edi+34h], ebx
0x715EAF: jz      short loc_715EBB
0x715EB1: add     ebx, 4
0x715EB4: push    ebx; lpAddend
0x715EB5: call    dword ptr ds:0A28078h
0x715EBB: mov     ecx, ebp
0x715EBD: call    sub_7124A0
0x715EC2: mov     [edi+30h], eax
0x715EC5: cmp     dword ptr [ebp+0D8h], 0A000110h
0x715ECF: jnb     short loc_715EFD
0x715ED1: mov     edx, [edi]
0x715ED3: mov     eax, [edx+60h]
0x715ED6: mov     ecx, edi
0x715ED8: call    eax
0x715EDA: test    al, al
0x715EDC: jz      short loc_715EFD
0x715EDE: mov     edi, [edi+30h]
0x715EE1: test    edi, edi
0x715EE3: jz      short loc_715EFD
0x715EE5: mov     edi, [edi+0B4h]
0x715EEB: mov     cx, [edi+2Eh]
0x715EEF: and     cx, 0FFFh
0x715EF4: or      cx, 8000h
0x715EF9: mov     [edi+2Eh], cx
0x715EFD: pop     edi
0x715EFE: pop     esi
0x715EFF: pop     ebp
0x715F00: pop     ebx
0x715F01: retn    4
