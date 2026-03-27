0x6A5B70: push    ecx
0x6A5B71: mov     ecx, ds:0B333C4h
0x6A5B77: mov     eax, [ecx+68h]
0x6A5B7A: mov     edx, [eax+8]
0x6A5B7D: add     ecx, 68h ; 'h'
0x6A5B80: push    edi
0x6A5B81: call    edx
0x6A5B83: fld     dword ptr ds:0A3B888h
0x6A5B89: xor     ecx, ecx
0x6A5B8B: fstp    [esp+8+var_4]
0x6A5B8F: xor     edi, edi
0x6A5B91: test    eax, eax
0x6A5B93: jz      short SummonCreatureEffect_DispelOtherSummons___Done
0x6A5B95: push    esi
