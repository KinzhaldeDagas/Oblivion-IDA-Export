0x56BE10: fld     [esp+arg_0]
0x56BE14: push    esi
0x56BE15: push    ecx
0x56BE16: fstp    [esp+8+var_8]; float
0x56BE19: mov     esi, ecx
0x56BE1B: call    sub_56BC70
0x56BE20: fld     dword ptr [esi+10h]
0x56BE23: fdiv    dword ptr [esi+8]
0x56BE26: mov     ecx, [esi+18h]
0x56BE29: pop     esi
0x56BE2A: fstp    [esp+arg_0]
0x56BE2E: fld     [esp+arg_0]
0x56BE32: fstp    dword ptr [ecx+40h]
0x56BE35: retn    4
