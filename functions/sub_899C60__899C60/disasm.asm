0x899C60: mov     eax, [ecx+0F0h]
0x899C66: push    esi
0x899C67: lea     esi, [ecx+0E8h]
0x899C6D: mov     ecx, [esi+4]
0x899C70: and     eax, 3FFFFFFFh
0x899C75: cmp     ecx, eax
0x899C77: jnz     short loc_899C84
0x899C79: push    4
0x899C7B: push    esi
0x899C7C: call    sub_8A6EE0
0x899C81: add     esp, 8
0x899C84: mov     ecx, [esi+4]
0x899C87: mov     edx, [esi]
0x899C89: mov     eax, [esp+4+arg_0]
0x899C8D: mov     [edx+ecx*4], eax
0x899C90: inc     dword ptr [esi+4]
0x899C93: pop     esi
0x899C94: retn    4
