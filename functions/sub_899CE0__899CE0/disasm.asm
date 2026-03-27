0x899CE0: mov     eax, [ecx+0E4h]
0x899CE6: push    esi
0x899CE7: lea     esi, [ecx+0DCh]
0x899CED: mov     ecx, [esi+4]
0x899CF0: and     eax, 3FFFFFFFh
0x899CF5: cmp     ecx, eax
0x899CF7: jnz     short loc_899D04
0x899CF9: push    4
0x899CFB: push    esi
0x899CFC: call    sub_8A6EE0
0x899D01: add     esp, 8
0x899D04: mov     ecx, [esi+4]
0x899D07: mov     edx, [esi]
0x899D09: mov     eax, [esp+4+arg_0]
0x899D0D: mov     [edx+ecx*4], eax
0x899D10: inc     dword ptr [esi+4]
0x899D13: pop     esi
0x899D14: retn    4
