0x8DE710: mov     eax, [ecx+64h]
0x8DE713: push    esi
0x8DE714: lea     esi, [ecx+5Ch]
0x8DE717: mov     ecx, [esi+4]
0x8DE71A: and     eax, 3FFFFFFFh
0x8DE71F: cmp     ecx, eax
0x8DE721: jnz     short loc_8DE72E
0x8DE723: push    4
0x8DE725: push    esi
0x8DE726: call    sub_8A6EE0
0x8DE72B: add     esp, 8
0x8DE72E: mov     ecx, [esi+4]
0x8DE731: mov     edx, [esi]
0x8DE733: mov     eax, [esp+4+arg_0]
0x8DE737: mov     [edx+ecx*4], eax
0x8DE73A: inc     dword ptr [esi+4]
0x8DE73D: pop     esi
0x8DE73E: retn    4
