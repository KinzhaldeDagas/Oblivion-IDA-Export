0x6AB890: push    ecx
0x6AB891: cmp     byte ptr ds:0B16178h, 0
0x6AB898: jz      short loc_6AB8C2
0x6AB89A: mov     edx, [esp+4+arg_0]
0x6AB89E: mov     ecx, [ecx+300h]
0x6AB8A4: lea     eax, [esp+4+var_4]
0x6AB8A7: push    eax
0x6AB8A8: push    edx
0x6AB8A9: mov     [esp+0Ch+var_4], 0
0x6AB8B1: call    NiTMap_GetAt
0x6AB8B6: mov     ecx, [esp+4+var_4]
0x6AB8B9: test    ecx, ecx
0x6AB8BB: jz      short loc_6AB8C2
0x6AB8BD: call    sub_6B6AC0
0x6AB8C2: xor     eax, eax
0x6AB8C4: pop     ecx
0x6AB8C5: retn    4
