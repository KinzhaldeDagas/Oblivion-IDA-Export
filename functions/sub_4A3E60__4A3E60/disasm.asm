0x4A3E60: push    esi
0x4A3E61: push    edi
0x4A3E62: mov     edi, ecx
0x4A3E64: mov     edx, [edi+8]
0x4A3E67: test    edx, edx
0x4A3E69: jz      short loc_4A3ECB
0x4A3E6B: movzx   eax, word ptr [edx+8]
0x4A3E6F: cmp     ax, 0FFFFh
0x4A3E73: jnz     short loc_4A3E8D
0x4A3E75: mov     eax, [edx+4]
0x4A3E78: lea     esi, [eax+1]
0x4A3E7B: jmp     short loc_4A3E80
0x4A3E7D: align 10h
0x4A3E80: mov     cl, [eax]
0x4A3E82: add     eax, 1
0x4A3E85: test    cl, cl
0x4A3E87: jnz     short loc_4A3E80
0x4A3E89: sub     eax, esi
0x4A3E8B: jmp     short loc_4A3E90
0x4A3E8D: movzx   eax, ax
0x4A3E90: test    eax, eax
0x4A3E92: mov     esi, [esp+8+arg_0]
0x4A3E96: jz      short loc_4A3EB4
0x4A3E98: mov     eax, [edx+4]
0x4A3E9B: test    eax, eax
0x4A3E9D: mov     ecx, [esi]
0x4A3E9F: jnz     short loc_4A3EA6
0x4A3EA1: mov     eax, offset EmptyString
0x4A3EA6: push    ecx; Str2
0x4A3EA7: push    eax; Str1
0x4A3EA8: call    __strcmp
0x4A3EAD: add     esp, 8
0x4A3EB0: test    eax, eax
0x4A3EB2: jz      short loc_4A3ECB
0x4A3EB4: mov     eax, [esi]
0x4A3EB6: mov     ecx, [edi+8]
0x4A3EB9: push    0; a3
0x4A3EBB: push    eax; a2
0x4A3EBC: add     ecx, 4; this
0x4A3EBF: call    BSStringT_Set
0x4A3EC4: pop     edi
0x4A3EC5: mov     al, 1
0x4A3EC7: pop     esi
0x4A3EC8: retn    4
0x4A3ECB: pop     edi
0x4A3ECC: xor     al, al
0x4A3ECE: pop     esi
0x4A3ECF: retn    4
