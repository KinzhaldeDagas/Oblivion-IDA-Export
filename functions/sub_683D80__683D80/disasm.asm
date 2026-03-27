0x683D80: mov     eax, [esp+arg_8]
0x683D84: fld     [esp+arg_4]
0x683D88: push    eax; int
0x683D89: push    ecx
0x683D8A: mov     ecx, [esp+8+arg_0]
0x683D8E: fstp    [esp+8+var_8]; float
0x683D91: mov     edx, [ecx]
0x683D93: mov     eax, [edx+1E0h]
0x683D99: call    eax
0x683D9B: push    ecx
0x683D9C: fstp    [esp+0Ch+var_C]; float
0x683D9F: call    sub_683AD0
0x683DA4: add     esp, 0Ch
0x683DA7: retn
