0x57D330: push    ecx
0x57D331: fild    dword ptr ds:0B06C50h
0x57D337: mov     [esp+4+var_4], 1
0x57D33E: fidiv   dword ptr ds:0B06C4Ch
0x57D344: fcomp   qword ptr ds:0A68D08h
0x57D34A: fnstsw  ax
0x57D34C: test    ah, 5
0x57D34F: jnp     short loc_57D358
0x57D351: mov     [esp+4+var_4], 0
0x57D358: fild    [esp+4+var_4]
0x57D35B: fcomp   dword ptr ds:0A2FAA8h
0x57D361: fnstsw  ax
0x57D363: test    ah, 44h
0x57D366: jnp     short loc_57D375
0x57D368: mov     eax, ds:0B13608h
0x57D36D: mov     [esp+4+var_4], eax
0x57D370: fild    [esp+4+var_4]
0x57D373: pop     ecx
0x57D374: retn
0x57D375: mov     ecx, ds:0B135F8h
0x57D37B: mov     [esp+4+var_4], ecx
0x57D37E: fild    [esp+4+var_4]
0x57D381: pop     ecx
0x57D382: retn
