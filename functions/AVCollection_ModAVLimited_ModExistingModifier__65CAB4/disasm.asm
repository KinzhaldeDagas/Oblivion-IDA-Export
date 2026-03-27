0x65CAB4: cmp     [esp+arg_10], 0
0x65CAB9: fld     dword ptr [ecx+4]
0x65CABC: fadd    [esp+arg_C]
0x65CAC0: fstp    [esp+arg_C]
0x65CAC4: fldz
0x65CAC6: jnz     short loc_65CAD7
0x65CAC8: fcom    [esp+arg_C]
0x65CACC: fnstsw  ax
0x65CACE: test    ah, 5
0x65CAD1: jp      short loc_65CAD7
0x65CAD3: fst     [esp+arg_C]
0x65CAD7: fld     [esp+arg_C]
0x65CADB: fst     dword ptr [ecx+4]
0x65CADE: fucompp
0x65CAE0: fnstsw  ax
0x65CAE2: test    ah, 44h
0x65CAE5: jp      short AVCollection_ModAVLimited___Done
0x65CAE7: push    ecx
0x65CAE8: mov     ecx, esi
0x65CAEA: call    AVCollection_Remove
