0x6EABE0: push    esi
0x6EABE1: mov     esi, ecx
0x6EABE3: mov     cl, [esi+0Eh]
0x6EABE6: xor     al, al
0x6EABE8: cmp     cl, 1
0x6EABEB: jnz     short loc_6EAC11
0x6EABED: mov     eax, [esp+4+arg_8]
0x6EABF1: fld     [esp+4+arg_0]
0x6EABF5: mov     ecx, [esp+4+arg_4]
0x6EABF9: push    eax; int
0x6EABFA: push    ecx; int
0x6EABFB: push    ecx
0x6EABFC: mov     ecx, esi
0x6EABFE: fstp    [esp+10h+var_10]; float
0x6EAC01: call    sub_6EA970
0x6EAC06: fld     [esp+4+arg_0]
0x6EAC0A: fstp    dword ptr [esi+8]
0x6EAC0D: pop     esi
0x6EAC0E: retn    0Ch
0x6EAC11: test    cl, cl
0x6EAC13: jbe     short loc_6EAC35
0x6EAC15: mov     ecx, esi
0x6EAC17: call    sub_6CD0F0
0x6EAC1C: fld     [esp+4+arg_0]
0x6EAC20: mov     edx, [esp+4+arg_8]
0x6EAC24: mov     eax, [esp+4+arg_4]
0x6EAC28: push    edx; int
0x6EAC29: push    eax; int
0x6EAC2A: push    ecx
0x6EAC2B: mov     ecx, esi
0x6EAC2D: fstp    [esp+10h+var_10]; float
0x6EAC30: call    sub_6EAA10
0x6EAC35: fld     [esp+4+arg_0]
0x6EAC39: fstp    dword ptr [esi+8]
0x6EAC3C: pop     esi
0x6EAC3D: retn    0Ch
