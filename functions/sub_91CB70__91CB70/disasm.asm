0x91CB70: mov     eax, [ecx+10h]
0x91CB73: push    esi
0x91CB74: lea     esi, [ecx+8]
0x91CB77: mov     ecx, [esi+4]
0x91CB7A: and     eax, 3FFFFFFFh
0x91CB7F: cmp     ecx, eax
0x91CB81: jnz     short loc_91CB8E
0x91CB83: push    4
0x91CB85: push    esi
0x91CB86: call    sub_8A6EE0
0x91CB8B: add     esp, 8
0x91CB8E: mov     ecx, [esi+4]
0x91CB91: mov     edx, [esi]
0x91CB93: mov     eax, [esp+4+arg_0]
0x91CB97: mov     [edx+ecx*4], eax
0x91CB9A: inc     dword ptr [esi+4]
0x91CB9D: pop     esi
0x91CB9E: retn    4
