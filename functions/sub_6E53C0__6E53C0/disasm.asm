0x6E53C0: push    esi
0x6E53C1: push    edi
0x6E53C2: mov     edi, [esp+8+arg_0]
0x6E53C6: push    edi
0x6E53C7: mov     esi, ecx
0x6E53C9: call    sub_6ED500
0x6E53CE: push    edi
0x6E53CF: lea     ecx, [esi+1Ch]
0x6E53D2: call    sub_7094A0
0x6E53D7: mov     edi, [edi+220h]
0x6E53DD: mov     ecx, [edi+8]
0x6E53E0: push    1
0x6E53E2: lea     eax, [esp+0Ch+arg_0]
0x6E53E6: push    eax
0x6E53E7: push    4
0x6E53E9: add     esi, 28h ; '('
0x6E53EC: push    esi
0x6E53ED: push    edi
0x6E53EE: mov     [esp+1Ch+arg_0], 4
0x6E53F6: call    ecx
0x6E53F8: add     esp, 14h
0x6E53FB: pop     edi
0x6E53FC: pop     esi
0x6E53FD: retn    4
