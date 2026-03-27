0x43FE30: push    ebx
0x43FE31: mov     bl, [esp+4+arg_0]
0x43FE35: push    ebp
0x43FE36: push    esi
0x43FE37: push    edi
0x43FE38: xor     ebp, ebp
0x43FE3A: mov     edi, ecx
0x43FE3C: xor     esi, esi
0x43FE3E: mov     edi, edi
0x43FE40: cmp     esi, ds:0B051D4h
0x43FE46: jnb     short loc_43FE92
0x43FE48: mov     eax, [edi+38h]
0x43FE4B: lea     edx, [eax+esi*4]
0x43FE4E: mov     eax, [edx]
0x43FE50: test    eax, eax
0x43FE52: jz      short loc_43FE8D
0x43FE54: test    bl, bl
0x43FE56: jz      short loc_43FE63
0x43FE58: mov     ecx, [edi+34h]
0x43FE5B: test    ecx, ecx
0x43FE5D: jz      short loc_43FE63
0x43FE5F: cmp     eax, ecx
0x43FE61: jz      short loc_43FE8D
0x43FE63: mov     ecx, eax
0x43FE65: call    sub_4CA030
0x43FE6A: test    eax, eax
0x43FE6C: jnz     short loc_43FE8D
0x43FE6E: mov     ecx, [edi+38h]
0x43FE71: mov     edx, [ecx+esi*4]
0x43FE74: mov     ecx, ds:0B33A98h
0x43FE7A: push    edx; a1
0x43FE7B: call    sub_447BA0
0x43FE80: mov     eax, [edi+38h]
0x43FE83: mov     dword ptr [eax+esi*4], 0
0x43FE8A: add     ebp, 1
0x43FE8D: add     esi, 1
0x43FE90: jmp     short loc_43FE40
0x43FE92: pop     edi
0x43FE93: pop     esi
0x43FE94: mov     eax, ebp
0x43FE96: pop     ebp
0x43FE97: pop     ebx
0x43FE98: retn    4
