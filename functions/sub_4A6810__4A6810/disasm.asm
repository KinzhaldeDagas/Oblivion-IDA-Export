0x4A6810: sub     esp, 0Ch
0x4A6813: mov     ecx, [esp+0Ch+arg_4]
0x4A6817: mov     eax, [esp+0Ch+arg_0]
0x4A681B: mov     edx, [esp+0Ch+arg_8]
0x4A681F: mov     [esp+0Ch+var_8], ecx
0x4A6823: lea     ecx, [esp+0Ch+var_C]
0x4A6826: mov     [esp+0Ch+var_C], eax
0x4A6829: mov     [esp+0Ch+var_4], edx
0x4A682D: call    sub_43F350
0x4A6832: fstp    [esp+0Ch+arg_0]
0x4A6836: fld     [esp+0Ch+var_4]
0x4A683A: fdiv    [esp+0Ch+arg_0]
0x4A683E: fstp    [esp+0Ch+arg_0]
0x4A6842: fld     [esp+0Ch+arg_0]
0x4A6846: call    __CIacos
0x4A684B: fstp    [esp+0Ch+arg_0]
0x4A684F: fld     [esp+0Ch+arg_0]
0x4A6853: add     esp, 0Ch
0x4A6856: retn
