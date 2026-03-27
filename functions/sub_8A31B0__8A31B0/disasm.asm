0x8A31B0: push    ecx
0x8A31B1: test    ecx, ecx
0x8A31B3: push    esi
0x8A31B4: jz      short loc_8A31DB
0x8A31B6: mov     esi, [ecx+8]
0x8A31B9: test    esi, esi
0x8A31BB: jz      short loc_8A31DB
0x8A31BD: mov     ecx, esi
0x8A31BF: call    sub_8A98D0
0x8A31C4: test    eax, eax
0x8A31C6: jnz     short loc_8A31CB
0x8A31C8: mov     eax, [esi+50h]
0x8A31CB: fld     dword ptr [eax+0B4h]
0x8A31D1: fstp    [esp+8+var_4]
0x8A31D5: fld     [esp+8+var_4]
0x8A31D9: jmp     short loc_8A31DD
0x8A31DB: fldz
0x8A31DD: fstp    [esp+8+var_4]
0x8A31E1: pop     esi
0x8A31E2: fld     [esp+4+var_4]
0x8A31E5: fmul    qword ptr ds:0A372E0h
0x8A31EB: fstp    [esp+4+var_4]
0x8A31EE: fld     [esp+4+var_4]
0x8A31F1: pop     ecx
0x8A31F2: retn
