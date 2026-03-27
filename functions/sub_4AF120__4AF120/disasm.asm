0x4AF120: push    ecx
0x4AF121: movzx   eax, byte ptr [ecx+3Dh]
0x4AF125: mov     [esp+4+var_4], eax
0x4AF128: fild    [esp+4+var_4]
0x4AF12B: fmul    qword ptr ds:0A31C78h
0x4AF131: fstp    [esp+4+var_4]
0x4AF134: fld     [esp+4+var_4]
0x4AF137: pop     ecx
0x4AF138: retn
