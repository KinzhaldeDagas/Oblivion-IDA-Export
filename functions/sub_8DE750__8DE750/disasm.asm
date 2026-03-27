0x8DE750: mov     eax, [ecx+58h]
0x8DE753: push    esi
0x8DE754: lea     esi, [ecx+50h]
0x8DE757: mov     ecx, [esi+4]
0x8DE75A: and     eax, 3FFFFFFFh
0x8DE75F: cmp     ecx, eax
0x8DE761: jnz     short loc_8DE76E
0x8DE763: push    4
0x8DE765: push    esi
0x8DE766: call    sub_8A6EE0
0x8DE76B: add     esp, 8
0x8DE76E: mov     ecx, [esi+4]
0x8DE771: mov     edx, [esi]
0x8DE773: mov     eax, [esp+4+arg_0]
0x8DE777: mov     [edx+ecx*4], eax
0x8DE77A: inc     dword ptr [esi+4]
0x8DE77D: pop     esi
0x8DE77E: retn    4
