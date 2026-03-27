0x5221C0: push    esi
0x5221C1: push    edi
0x5221C2: mov     edi, [esp+8+arg_0]
0x5221C6: push    edi
0x5221C7: mov     esi, ecx
0x5221C9: call    sub_552880
0x5221CE: add     esp, 4
0x5221D1: cmp     dword ptr [esi+0E8h], 0
0x5221D8: jnz     short loc_5221EE
0x5221DA: push    edi
0x5221DB: call    sub_5538D0
0x5221E0: push    eax
0x5221E1: call    sub_5528F0
0x5221E6: add     esp, 8
0x5221E9: pop     edi
0x5221EA: pop     esi
0x5221EB: retn    4
0x5221EE: mov     eax, [esi]
0x5221F0: mov     edx, [eax+128h]
0x5221F6: push    45h ; 'E'
0x5221F8: mov     ecx, esi
0x5221FA: call    edx
0x5221FC: test    eax, eax
0x5221FE: lea     eax, [esi+168h]
0x522204: jnz     short loc_52220C
0x522206: lea     eax, [esi+108h]
0x52220C: fldz
0x52220E: push    ecx
0x52220F: fstp    [esp+0Ch+var_C]; float
0x522212: push    0; char
0x522214: push    edi; int
0x522215: push    eax; int
0x522216: mov     eax, [esi+0E8h]
0x52221C: add     eax, 29Ch
0x522221: push    eax; int
0x522222: call    sub_552990
0x522227: add     esp, 14h
0x52222A: pop     edi
0x52222B: pop     esi
0x52222C: retn    4
