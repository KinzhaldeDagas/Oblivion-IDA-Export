0x8A2D20: push    ecx
0x8A2D21: test    ecx, ecx
0x8A2D23: push    esi
0x8A2D24: jz      short loc_8A2D50
0x8A2D26: mov     esi, [ecx+8]
0x8A2D29: test    esi, esi
0x8A2D2B: jz      short loc_8A2D50
0x8A2D2D: mov     ecx, esi
0x8A2D2F: call    sub_8A98D0
0x8A2D34: test    eax, eax
0x8A2D36: jnz     short loc_8A2D3B
0x8A2D38: mov     eax, [esi+50h]
0x8A2D3B: fld     dword ptr [eax+0B8h]
0x8A2D41: pop     esi
0x8A2D42: fstp    [esp+4+var_4]
0x8A2D45: fld     [esp+4+var_4]
0x8A2D48: fstp    [esp+4+var_4]
0x8A2D4B: fld     [esp+4+var_4]
0x8A2D4E: pop     ecx
0x8A2D4F: retn
0x8A2D50: fldz
0x8A2D52: pop     esi
0x8A2D53: fstp    [esp+4+var_4]
0x8A2D56: fld     [esp+4+var_4]
0x8A2D59: pop     ecx
0x8A2D5A: retn
