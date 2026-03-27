0x4BF060: push    ecx
0x4BF061: mov     eax, [ecx+24h]
0x4BF064: test    eax, eax
0x4BF066: jz      short loc_4BF079
0x4BF068: mov     eax, [eax+98h]
0x4BF06E: shl     eax, 0Ch
0x4BF071: mov     [esp+4+var_4], eax
0x4BF074: fild    [esp+4+var_4]
0x4BF077: pop     ecx
0x4BF078: retn
0x4BF079: mov     ecx, [ecx+20h]; this
0x4BF07C: test    ecx, ecx
0x4BF07E: jz      short loc_4BF090
0x4BF080: call    TESObjectCELL_GetXCoordinate
0x4BF085: shl     eax, 0Ch
0x4BF088: mov     [esp+4+var_4], eax
0x4BF08B: fild    [esp+4+var_4]
0x4BF08E: pop     ecx
0x4BF08F: retn
0x4BF090: xor     eax, eax
0x4BF092: shl     eax, 0Ch
0x4BF095: mov     [esp+4+var_4], eax
0x4BF098: fild    [esp+4+var_4]
0x4BF09B: pop     ecx
0x4BF09C: retn
