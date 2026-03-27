0x4AA130: push    ecx
0x4AA131: push    esi
0x4AA132: mov     esi, ecx
0x4AA134: mov     eax, [esi]
0x4AA136: mov     edx, [eax+16Ch]
0x4AA13C: push    1
0x4AA13E: call    edx
0x4AA140: test    al, al
0x4AA142: jz      short loc_4AA15A
0x4AA144: mov     eax, [esi+94h]
0x4AA14A: test    eax, eax
0x4AA14C: jz      short loc_4AA15A
0x4AA14E: fld     dword ptr [eax+44h]
0x4AA151: pop     esi
0x4AA152: fstp    [esp+4+var_4]
0x4AA155: fld     [esp+4+var_4]
0x4AA158: pop     ecx
0x4AA159: retn
0x4AA15A: fld     dword ptr ds:0B35728h
0x4AA160: pop     esi
0x4AA161: fstp    [esp+4+var_4]
0x4AA164: fld     [esp+4+var_4]
0x4AA167: pop     ecx
0x4AA168: retn
