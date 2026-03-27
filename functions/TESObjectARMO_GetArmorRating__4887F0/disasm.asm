0x4887F0: push    ecx
0x4887F1: movzx   eax, word ptr [ecx+0E4h]
0x4887F8: mov     [esp+4+var_4], eax
0x4887FB: fild    [esp+4+var_4]
0x4887FE: fdiv    qword ptr ds:0A309F0h
0x488804: fstp    [esp+4+var_4]
0x488807: fld     [esp+4+var_4]
0x48880A: pop     ecx
0x48880B: retn
