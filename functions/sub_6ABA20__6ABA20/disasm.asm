0x6ABA20: push    ecx
0x6ABA21: cmp     byte ptr ds:0B16178h, 0
0x6ABA28: jz      short loc_6ABA5A
0x6ABA2A: mov     edx, [esp+4+arg_0]
0x6ABA2E: mov     ecx, [ecx+300h]
0x6ABA34: lea     eax, [esp+4+var_4]
0x6ABA37: push    eax
0x6ABA38: push    edx
0x6ABA39: mov     [esp+0Ch+var_4], 0
0x6ABA41: call    NiTMap_GetAt
0x6ABA46: mov     ecx, [esp+4+var_4]
0x6ABA49: test    ecx, ecx
0x6ABA4B: jz      short loc_6ABA5A
0x6ABA4D: fld     [esp+4+arg_4]
0x6ABA51: push    ecx
0x6ABA52: fstp    [esp+8+var_8]; float
0x6ABA55: call    sub_6B6F20
0x6ABA5A: xor     eax, eax
0x6ABA5C: pop     ecx
0x6ABA5D: retn    8
