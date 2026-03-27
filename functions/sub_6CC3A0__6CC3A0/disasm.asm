0x6CC3A0: push    esi
0x6CC3A1: mov     esi, ecx
0x6CC3A3: mov     cl, [esi+0Eh]
0x6CC3A6: xor     al, al
0x6CC3A8: cmp     cl, 1
0x6CC3AB: jnz     short loc_6CC3D1
0x6CC3AD: mov     eax, [esp+4+arg_8]
0x6CC3B1: fld     [esp+4+arg_0]
0x6CC3B5: mov     ecx, [esp+4+arg_4]
0x6CC3B9: push    eax; int
0x6CC3BA: push    ecx; int
0x6CC3BB: push    ecx
0x6CC3BC: mov     ecx, esi
0x6CC3BE: fstp    [esp+10h+var_10]; float
0x6CC3C1: call    sub_6CBDF0
0x6CC3C6: fld     [esp+4+arg_0]
0x6CC3CA: fstp    dword ptr [esi+8]
0x6CC3CD: pop     esi
0x6CC3CE: retn    0Ch
0x6CC3D1: test    cl, cl
0x6CC3D3: jbe     short loc_6CC3F5
0x6CC3D5: mov     ecx, esi
0x6CC3D7: call    sub_6CD0F0
0x6CC3DC: fld     [esp+4+arg_0]
0x6CC3E0: mov     edx, [esp+4+arg_8]
0x6CC3E4: mov     eax, [esp+4+arg_4]
0x6CC3E8: push    edx; int
0x6CC3E9: push    eax; int
0x6CC3EA: push    ecx
0x6CC3EB: mov     ecx, esi
0x6CC3ED: fstp    [esp+10h+var_10]; float
0x6CC3F0: call    sub_6CBEE0
0x6CC3F5: fld     [esp+4+arg_0]
0x6CC3F9: fstp    dword ptr [esi+8]
0x6CC3FC: pop     esi
0x6CC3FD: retn    0Ch
