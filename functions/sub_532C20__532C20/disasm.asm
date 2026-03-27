0x532C20: sub     esp, 8
0x532C23: fld     [esp+8+arg_0]
0x532C27: fsincos
0x532C29: fstp    [esp+8+var_4]
0x532C2D: fstp    [esp+8+var_8]
0x532C30: fld     [esp+8+var_8]
0x532C33: mov     eax, [esp+8+arg_4]
0x532C37: mov     ecx, [esp+8+arg_8]
0x532C3B: fstp    dword ptr [eax]
0x532C3D: fld     [esp+8+var_4]
0x532C41: fstp    dword ptr [ecx]
0x532C43: add     esp, 8
0x532C46: retn
