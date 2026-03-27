0x4ED680: push    ecx
0x4ED681: movzx   eax, byte ptr [ecx+74h]
0x4ED685: mov     [esp+4+var_4], eax
0x4ED688: fild    [esp+4+var_4]
0x4ED68B: fdiv    qword ptr ds:0A309F0h
0x4ED691: fstp    [esp+4+var_4]
0x4ED694: fld     [esp+4+var_4]
0x4ED697: pop     ecx
0x4ED698: retn
