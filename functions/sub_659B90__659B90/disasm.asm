0x659B90: push    esi
0x659B91: mov     esi, ecx
0x659B93: push    edi
0x659B94: mov     edi, [esi]
0x659B96: mov     eax, [edi+1E0h]
0x659B9C: call    eax
0x659B9E: fadd    [esp+8+arg_0]
0x659BA2: mov     edx, [edi+1E8h]
0x659BA8: push    ecx
0x659BA9: fstp    [esp+0Ch+arg_0]
0x659BAD: mov     ecx, esi
0x659BAF: fld     [esp+0Ch+arg_0]
0x659BB3: fstp    [esp+0Ch+var_C]
0x659BB6: call    edx
0x659BB8: pop     edi
0x659BB9: pop     esi
0x659BBA: retn    4
