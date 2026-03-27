0x6EA6A0: push    esi
0x6EA6A1: mov     esi, ecx
0x6EA6A3: mov     cl, [esi+0Eh]
0x6EA6A6: xor     al, al
0x6EA6A8: cmp     cl, 1
0x6EA6AB: jnz     short loc_6EA6D1
0x6EA6AD: mov     eax, [esp+4+arg_8]
0x6EA6B1: fld     [esp+4+arg_0]
0x6EA6B5: mov     ecx, [esp+4+arg_4]
0x6EA6B9: push    eax; int
0x6EA6BA: push    ecx; int
0x6EA6BB: push    ecx
0x6EA6BC: mov     ecx, esi
0x6EA6BE: fstp    [esp+10h+var_10]; float
0x6EA6C1: call    sub_6EA340
0x6EA6C6: fld     [esp+4+arg_0]
0x6EA6CA: fstp    dword ptr [esi+8]
0x6EA6CD: pop     esi
0x6EA6CE: retn    0Ch
0x6EA6D1: test    cl, cl
0x6EA6D3: jbe     short loc_6EA6F5
0x6EA6D5: mov     ecx, esi
0x6EA6D7: call    sub_6CD0F0
0x6EA6DC: fld     [esp+4+arg_0]
0x6EA6E0: mov     edx, [esp+4+arg_8]
0x6EA6E4: mov     eax, [esp+4+arg_4]
0x6EA6E8: push    edx; int
0x6EA6E9: push    eax; int
0x6EA6EA: push    ecx
0x6EA6EB: mov     ecx, esi
0x6EA6ED: fstp    [esp+10h+var_10]; float
0x6EA6F0: call    sub_6EA430
0x6EA6F5: fld     [esp+4+arg_0]
0x6EA6F9: fstp    dword ptr [esi+8]
0x6EA6FC: pop     esi
0x6EA6FD: retn    0Ch
