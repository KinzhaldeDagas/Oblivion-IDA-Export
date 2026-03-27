0x651DD0: push    ecx
0x651DD1: cmp     byte ptr ds:0B33D80h, 0
0x651DD8: jnz     loc_651E6C
0x651DDE: mov     eax, [ecx+0FCh]
0x651DE4: fld1
0x651DE6: test    eax, eax
0x651DE8: jz      short loc_651DF7
0x651DEA: fld     st
0x651DEC: fabs
0x651DEE: fstp    [esp+4+var_4]
0x651DF1: fld     [esp+4+var_4]
0x651DF4: fstp    dword ptr [eax+60h]
0x651DF7: mov     eax, [ecx+100h]
0x651DFD: test    eax, eax
0x651DFF: jz      short loc_651E0E
0x651E01: fld     st
0x651E03: fabs
0x651E05: fstp    [esp+4+var_4]
0x651E08: fld     [esp+4+var_4]
0x651E0B: fstp    dword ptr [eax+60h]
0x651E0E: mov     eax, [ecx+104h]
0x651E14: test    eax, eax
0x651E16: jz      short loc_651E25
0x651E18: fld     st
0x651E1A: fabs
0x651E1C: fstp    [esp+4+var_4]
0x651E1F: fld     [esp+4+var_4]
0x651E22: fstp    dword ptr [eax+60h]
0x651E25: mov     eax, [ecx+108h]
0x651E2B: test    eax, eax
0x651E2D: jz      short loc_651E3C
0x651E2F: fld     st
0x651E31: fabs
0x651E33: fstp    [esp+4+var_4]
0x651E36: fld     [esp+4+var_4]
0x651E39: fstp    dword ptr [eax+60h]
0x651E3C: mov     eax, [ecx+10Ch]
0x651E42: test    eax, eax
0x651E44: jz      short loc_651E53
0x651E46: fld     st
0x651E48: fabs
0x651E4A: fstp    [esp+4+var_4]
0x651E4D: fld     [esp+4+var_4]
0x651E50: fstp    dword ptr [eax+60h]
0x651E53: mov     ecx, [ecx+110h]
0x651E59: test    ecx, ecx
0x651E5B: jz      short loc_651E6A
0x651E5D: fabs
0x651E5F: fstp    [esp+4+var_4]
0x651E62: fld     [esp+4+var_4]
0x651E65: fstp    dword ptr [ecx+60h]
0x651E68: pop     ecx
0x651E69: retn
0x651E6A: fstp    st
0x651E6C: pop     ecx
0x651E6D: retn
