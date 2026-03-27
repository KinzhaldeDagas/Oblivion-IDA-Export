0x899C20: mov     eax, [ecx+0CCh]
0x899C26: push    esi
0x899C27: lea     esi, [ecx+0C4h]
0x899C2D: mov     ecx, [esi+4]
0x899C30: and     eax, 3FFFFFFFh
0x899C35: cmp     ecx, eax
0x899C37: jnz     short loc_899C44
0x899C39: push    4
0x899C3B: push    esi
0x899C3C: call    sub_8A6EE0
0x899C41: add     esp, 8
0x899C44: mov     ecx, [esi+4]
0x899C47: mov     edx, [esi]
0x899C49: mov     eax, [esp+4+arg_0]
0x899C4D: mov     [edx+ecx*4], eax
0x899C50: inc     dword ptr [esi+4]
0x899C53: pop     esi
0x899C54: retn    4
