0x4AF140: push    ecx
0x4AF141: movzx   eax, byte ptr [ecx+3Eh]
0x4AF145: mov     [esp+4+var_4], eax
0x4AF148: fild    [esp+4+var_4]
0x4AF14B: fmul    qword ptr ds:0A31C78h
0x4AF151: fstp    [esp+4+var_4]
0x4AF154: fld     [esp+4+var_4]
0x4AF157: pop     ecx
0x4AF158: retn
