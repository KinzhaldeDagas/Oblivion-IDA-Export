0x700C00: push    esi
0x700C01: push    edi
0x700C02: mov     edi, [esp+8+arg_0]
0x700C06: xor     al, al
0x700C08: xor     esi, esi
0x700C0A: lea     edx, [ecx+1Ch]
0x700C0D: lea     ecx, [ecx+0]
0x700C10: cmp     [edx-8], edi
0x700C13: jz      short loc_700C29
0x700C15: add     al, [edx]
0x700C17: add     esi, 1
0x700C1A: add     edx, 0Ch
0x700C1D: cmp     esi, 4
0x700C20: jb      short loc_700C10
0x700C22: xor     al, al
0x700C24: pop     edi
0x700C25: pop     esi
0x700C26: retn    4
0x700C29: test    byte ptr [ecx], 1
0x700C2C: jnz     short loc_700C24
0x700C2E: lea     edx, [esi+esi*2]
0x700C31: movzx   edx, byte ptr [ecx+edx*4+1Ch]
0x700C36: add     dl, al
0x700C38: movzx   eax, byte ptr [ecx+1]
0x700C3C: pop     edi
0x700C3D: pop     esi
0x700C3E: sub     eax, edx
0x700C40: retn    4
