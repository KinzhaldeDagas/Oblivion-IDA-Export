0x6BF070: mov     eax, [esp+arg_8]
0x6BF074: fld     dword ptr [eax+4]
0x6BF077: mov     ecx, [esp+arg_4]
0x6BF07B: fstp    [esp+arg_8]
0x6BF07F: sub     esp, 0Ch
0x6BF082: fld     dword ptr [ecx+4]
0x6BF085: fstp    [esp+0Ch+arg_4]
0x6BF089: fld     [esp+0Ch+arg_8]
0x6BF08D: fstp    [esp+0Ch+var_4]; float
0x6BF091: fld     [esp+0Ch+arg_4]
0x6BF095: fstp    [esp+0Ch+var_8]; float
0x6BF099: fld     [esp+0Ch+arg_0]
0x6BF09D: fstp    [esp+0Ch+var_C]; float
0x6BF0A0: call    sub_6D3690
0x6BF0A5: mov     edx, [esp+0Ch+arg_C]
0x6BF0A9: fstp    dword ptr [edx]
0x6BF0AB: add     esp, 0Ch
0x6BF0AE: retn
