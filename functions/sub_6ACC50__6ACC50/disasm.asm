0x6ACC50: push    ecx
0x6ACC51: cmp     byte ptr ds:0B16178h, 0
0x6ACC58: jz      short loc_6ACC96
0x6ACC5A: mov     edx, [esp+4+arg_0]
0x6ACC5E: mov     ecx, [ecx+300h]
0x6ACC64: lea     eax, [esp+4+var_4]
0x6ACC67: push    eax
0x6ACC68: push    edx
0x6ACC69: mov     [esp+0Ch+var_4], 0
0x6ACC71: call    NiTMap_GetAt
0x6ACC76: mov     ecx, [esp+4+var_4]
0x6ACC79: test    ecx, ecx
0x6ACC7B: jz      short loc_6ACC96
0x6ACC7D: fld     [esp+4+arg_8]
0x6ACC81: push    0; int
0x6ACC83: sub     esp, 8
0x6ACC86: fstp    [esp+10h+var_C]; float
0x6ACC8A: fld     [esp+10h+arg_4]
0x6ACC8E: fstp    [esp+10h+var_10]; float
0x6ACC91: call    sub_6B6D40
0x6ACC96: pop     ecx
0x6ACC97: retn    0Ch
