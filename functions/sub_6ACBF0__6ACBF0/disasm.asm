0x6ACBF0: push    ecx
0x6ACBF1: cmp     byte ptr ds:0B16178h, 0
0x6ACBF8: jnz     short loc_6ACC00
0x6ACBFA: xor     eax, eax
0x6ACBFC: pop     ecx
0x6ACBFD: retn    10h
0x6ACC00: mov     edx, [esp+4+arg_0]
0x6ACC04: mov     ecx, [ecx+300h]
0x6ACC0A: lea     eax, [esp+4+var_4]
0x6ACC0D: push    eax
0x6ACC0E: push    edx
0x6ACC0F: mov     [esp+0Ch+var_4], 0
0x6ACC17: call    NiTMap_GetAt
0x6ACC1C: mov     ecx, [esp+4+var_4]
0x6ACC1F: test    ecx, ecx
0x6ACC21: jz      short loc_6ACC46
0x6ACC23: fld     [esp+4+arg_C]
0x6ACC27: sub     esp, 0Ch
0x6ACC2A: fstp    [esp+10h+var_8]; float
0x6ACC2E: fld     [esp+10h+arg_8]
0x6ACC32: fstp    [esp+10h+var_C]; float
0x6ACC36: fld     [esp+10h+arg_4]
0x6ACC3A: fstp    [esp+10h+var_10]; float
0x6ACC3D: call    sub_6B6BE0
0x6ACC42: pop     ecx
0x6ACC43: retn    10h
0x6ACC46: mov     eax, 80004005h
0x6ACC4B: pop     ecx
0x6ACC4C: retn    10h
