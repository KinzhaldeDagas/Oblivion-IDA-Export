0x899DA0: mov     eax, [ecx+0FCh]
0x899DA6: push    esi
0x899DA7: lea     esi, [ecx+0F4h]
0x899DAD: mov     ecx, [esi+4]
0x899DB0: and     eax, 3FFFFFFFh
0x899DB5: cmp     ecx, eax
0x899DB7: jnz     short loc_899DC4
0x899DB9: push    4
0x899DBB: push    esi
0x899DBC: call    sub_8A6EE0
0x899DC1: add     esp, 8
0x899DC4: mov     ecx, [esi+4]
0x899DC7: mov     edx, [esi]
0x899DC9: mov     eax, [esp+4+arg_0]
0x899DCD: mov     [edx+ecx*4], eax
0x899DD0: inc     dword ptr [esi+4]
0x899DD3: pop     esi
0x899DD4: retn    4
