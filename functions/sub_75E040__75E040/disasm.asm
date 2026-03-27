0x75E040: push    esi
0x75E041: mov     esi, ecx
0x75E043: mov     ecx, [esi+0Ch]
0x75E046: test    ecx, ecx
0x75E048: jz      short loc_75E090
0x75E04A: cmp     byte ptr ds:0B3F944h, 0
0x75E051: jnz     short loc_75E090
0x75E053: mov     eax, [ecx]
0x75E055: fld     dword ptr [esi+10h]
0x75E058: mov     edx, [eax+9Ch]
0x75E05E: push    edi
0x75E05F: push    ecx
0x75E060: fstp    [esp+0Ch+var_C]
0x75E063: call    edx
0x75E065: mov     edi, [esi+0Ch]
0x75E068: test    edi, edi
0x75E06A: jz      short loc_75E08F
0x75E06C: lea     eax, [edi+4]
0x75E06F: push    eax; lpAddend
0x75E070: call    dword ptr ds:0A2807Ch
0x75E076: test    eax, eax
0x75E078: jnz     short loc_75E088
0x75E07A: test    edi, edi
0x75E07C: jz      short loc_75E088
0x75E07E: mov     edx, [edi]
0x75E080: mov     eax, [edx]
0x75E082: push    1
0x75E084: mov     ecx, edi
0x75E086: call    eax
0x75E088: mov     dword ptr [esi+0Ch], 0
0x75E08F: pop     edi
0x75E090: mov     edx, [esi]
0x75E092: mov     eax, [edx+54h]
0x75E095: mov     ecx, esi
0x75E097: pop     esi
0x75E098: jmp     eax
