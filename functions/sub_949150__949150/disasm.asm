0x949150: push    esi
0x949151: mov     esi, ecx
0x949153: call    sub_948D90
0x949158: test    [esp+4+arg_0], 1
0x94915D: jz      short loc_949172
0x94915F: movzx   edx, word ptr [esi+4]
0x949163: mov     ecx, ds:0BA7D98h
0x949169: mov     eax, [ecx]
0x94916B: push    12h
0x94916D: push    edx
0x94916E: push    esi
0x94916F: call    dword ptr [eax+14h]
0x949172: mov     eax, esi
0x949174: pop     esi
0x949175: retn    4
