0x4C98C0: push    ecx
0x4C98C1: test    byte ptr [ecx+24h], 1
0x4C98C5: jz      short loc_4C98D2
0x4C98C7: mov     eax, [ecx+3Ch]
0x4C98CA: test    eax, eax
0x4C98CC: jz      short loc_4C98D2
0x4C98CE: mov     eax, [eax]
0x4C98D0: jmp     short loc_4C98D4
0x4C98D2: xor     eax, eax
0x4C98D4: movzx   ecx, al
0x4C98D7: mov     [esp+4+var_4], ecx
0x4C98DA: mov     ecx, [esp+4+arg_0]
0x4C98DE: movzx   edx, ah
0x4C98E1: fild    [esp+4+var_4]
0x4C98E4: fld     qword ptr ds:0A3DDD8h
0x4C98EA: mov     [esp+4+arg_0], edx
0x4C98EE: fdiv    st(1), st
0x4C98F0: shr     eax, 10h
0x4C98F3: movzx   eax, al
0x4C98F6: fxch    st(1)
0x4C98F8: fstp    dword ptr [ecx]
0x4C98FA: fild    [esp+4+arg_0]
0x4C98FE: mov     [esp+4+arg_0], eax
0x4C9902: fdiv    st, st(1)
0x4C9904: fstp    dword ptr [ecx+4]
0x4C9907: fild    [esp+4+arg_0]
0x4C990B: fdivrp  st(1), st
0x4C990D: fstp    dword ptr [ecx+8]
0x4C9910: pop     ecx
0x4C9911: retn    4
