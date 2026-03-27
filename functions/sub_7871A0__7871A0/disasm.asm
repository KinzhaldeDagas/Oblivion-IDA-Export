0x7871A0: push    ecx
0x7871A1: mov     eax, [ecx+34h]
0x7871A4: test    eax, eax
0x7871A6: jz      short loc_7871B3
0x7871A8: fld     dword ptr [eax+10h]
0x7871AB: fstp    [esp+4+var_4]
0x7871AE: fld     [esp+4+var_4]
0x7871B1: pop     ecx
0x7871B2: retn
0x7871B3: mov     eax, [ecx]
0x7871B5: fld     dword ptr [eax+14h]
0x7871B8: fstp    [esp+4+var_4]
0x7871BB: fld     [esp+4+var_4]
0x7871BE: pop     ecx
0x7871BF: retn
