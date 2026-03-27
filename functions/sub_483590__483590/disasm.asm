0x483590: push    esi
0x483591: mov     esi, [esp+4+arg_0]
0x483595: test    esi, esi
0x483597: jz      short loc_4835BF
0x483599: push    6
0x48359B: mov     ecx, esi
0x48359D: call    sub_4A01B0
0x4835A2: fld     dword ptr ds:0B34414h
0x4835A8: sub     esp, 8
0x4835AB: fstp    [esp+0Ch+var_8]; float
0x4835AF: mov     ecx, esi
0x4835B1: fld     dword ptr ds:0B34410h
0x4835B7: fstp    [esp+0Ch+var_C]; float
0x4835BA: call    sub_4A02A0
0x4835BF: pop     esi
0x4835C0: retn
