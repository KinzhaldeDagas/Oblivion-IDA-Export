0x57D390: push    ecx
0x57D391: fild    dword ptr ds:0B06C50h
0x57D397: mov     [esp+4+var_4], 1
0x57D39E: fidiv   dword ptr ds:0B06C4Ch
0x57D3A4: fcomp   qword ptr ds:0A68D08h
0x57D3AA: fnstsw  ax
0x57D3AC: test    ah, 5
0x57D3AF: jnp     short loc_57D3B8
0x57D3B1: mov     [esp+4+var_4], 0
0x57D3B8: fild    [esp+4+var_4]
0x57D3BB: fcomp   dword ptr ds:0A2FAA8h
0x57D3C1: fnstsw  ax
0x57D3C3: test    ah, 44h
0x57D3C6: jnp     short loc_57D3D5
0x57D3C8: mov     eax, ds:0B13610h
0x57D3CD: mov     [esp+4+var_4], eax
0x57D3D0: fild    [esp+4+var_4]
0x57D3D3: pop     ecx
0x57D3D4: retn
0x57D3D5: mov     ecx, ds:0B13600h
0x57D3DB: mov     [esp+4+var_4], ecx
0x57D3DE: fild    [esp+4+var_4]
0x57D3E1: pop     ecx
0x57D3E2: retn
