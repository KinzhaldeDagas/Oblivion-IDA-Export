0x6EB750: push    esi
0x6EB751: mov     esi, ecx
0x6EB753: mov     cl, [esi+0Eh]
0x6EB756: xor     al, al
0x6EB758: cmp     cl, 1
0x6EB75B: jnz     short loc_6EB781
0x6EB75D: mov     eax, [esp+4+arg_8]
0x6EB761: fld     [esp+4+arg_0]
0x6EB765: mov     ecx, [esp+4+arg_4]
0x6EB769: push    eax; int
0x6EB76A: push    ecx; int
0x6EB76B: push    ecx
0x6EB76C: mov     ecx, esi
0x6EB76E: fstp    [esp+10h+var_10]; float
0x6EB771: call    sub_6EB570
0x6EB776: fld     [esp+4+arg_0]
0x6EB77A: fstp    dword ptr [esi+8]
0x6EB77D: pop     esi
0x6EB77E: retn    0Ch
0x6EB781: test    cl, cl
0x6EB783: jbe     short loc_6EB7A5
0x6EB785: mov     ecx, esi
0x6EB787: call    sub_6CD0F0
0x6EB78C: fld     [esp+4+arg_0]
0x6EB790: mov     edx, [esp+4+arg_8]
0x6EB794: mov     eax, [esp+4+arg_4]
0x6EB798: push    edx; int
0x6EB799: push    eax; int
0x6EB79A: push    ecx
0x6EB79B: mov     ecx, esi
0x6EB79D: fstp    [esp+10h+var_10]; float
0x6EB7A0: call    sub_6EB5E0
0x6EB7A5: fld     [esp+4+arg_0]
0x6EB7A9: fstp    dword ptr [esi+8]
0x6EB7AC: pop     esi
0x6EB7AD: retn    0Ch
