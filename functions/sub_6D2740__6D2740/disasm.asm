0x6D2740: push    esi
0x6D2741: mov     esi, ecx
0x6D2743: mov     cl, [esi+0Eh]
0x6D2746: xor     al, al
0x6D2748: cmp     cl, 1
0x6D274B: jnz     short loc_6D2771
0x6D274D: mov     eax, [esp+4+arg_8]
0x6D2751: fld     [esp+4+arg_0]
0x6D2755: mov     ecx, [esp+4+arg_4]
0x6D2759: push    eax; int
0x6D275A: push    ecx; int
0x6D275B: push    ecx
0x6D275C: mov     ecx, esi
0x6D275E: fstp    [esp+10h+var_10]; float
0x6D2761: call    sub_6D2580
0x6D2766: fld     [esp+4+arg_0]
0x6D276A: fstp    dword ptr [esi+8]
0x6D276D: pop     esi
0x6D276E: retn    0Ch
0x6D2771: test    cl, cl
0x6D2773: jbe     short loc_6D2795
0x6D2775: mov     ecx, esi
0x6D2777: call    sub_6CD0F0
0x6D277C: fld     [esp+4+arg_0]
0x6D2780: mov     edx, [esp+4+arg_8]
0x6D2784: mov     eax, [esp+4+arg_4]
0x6D2788: push    edx; int
0x6D2789: push    eax; int
0x6D278A: push    ecx
0x6D278B: mov     ecx, esi
0x6D278D: fstp    [esp+10h+var_10]; float
0x6D2790: call    sub_6D2600
0x6D2795: fld     [esp+4+arg_0]
0x6D2799: fstp    dword ptr [esi+8]
0x6D279C: pop     esi
0x6D279D: retn    0Ch
