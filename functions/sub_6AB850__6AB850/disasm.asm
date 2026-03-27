0x6AB850: push    ecx
0x6AB851: cmp     byte ptr ds:0B16178h, 0
0x6AB858: jz      short loc_6AB882
0x6AB85A: mov     edx, [esp+4+arg_0]
0x6AB85E: mov     ecx, [ecx+300h]
0x6AB864: lea     eax, [esp+4+var_4]
0x6AB867: push    eax
0x6AB868: push    edx
0x6AB869: mov     [esp+0Ch+var_4], 0
0x6AB871: call    NiTMap_GetAt
0x6AB876: mov     ecx, [esp+4+var_4]
0x6AB879: test    ecx, ecx
0x6AB87B: jz      short loc_6AB882
0x6AB87D: call    sub_6B6AA0
0x6AB882: xor     eax, eax
0x6AB884: pop     ecx
0x6AB885: retn    4
