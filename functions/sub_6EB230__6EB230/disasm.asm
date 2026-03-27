0x6EB230: push    esi
0x6EB231: mov     esi, ecx
0x6EB233: mov     cl, [esi+0Eh]
0x6EB236: xor     al, al
0x6EB238: cmp     cl, 1
0x6EB23B: jnz     short loc_6EB261
0x6EB23D: mov     eax, [esp+4+arg_8]
0x6EB241: fld     [esp+4+arg_0]
0x6EB245: mov     ecx, [esp+4+arg_4]
0x6EB249: push    eax; int
0x6EB24A: push    ecx; int
0x6EB24B: push    ecx
0x6EB24C: mov     ecx, esi
0x6EB24E: fstp    [esp+10h+var_10]; float
0x6EB251: call    sub_6EAF50
0x6EB256: fld     [esp+4+arg_0]
0x6EB25A: fstp    dword ptr [esi+8]
0x6EB25D: pop     esi
0x6EB25E: retn    0Ch
0x6EB261: test    cl, cl
0x6EB263: jbe     short loc_6EB285
0x6EB265: mov     ecx, esi
0x6EB267: call    sub_6CD0F0
0x6EB26C: fld     [esp+4+arg_0]
0x6EB270: mov     edx, [esp+4+arg_8]
0x6EB274: mov     eax, [esp+4+arg_4]
0x6EB278: push    edx; int
0x6EB279: push    eax; int
0x6EB27A: push    ecx
0x6EB27B: mov     ecx, esi
0x6EB27D: fstp    [esp+10h+var_10]; float
0x6EB280: call    sub_6EB000
0x6EB285: fld     [esp+4+arg_0]
0x6EB289: fstp    dword ptr [esi+8]
0x6EB28C: pop     esi
0x6EB28D: retn    0Ch
