0x4C9920: push    ecx
0x4C9921: test    byte ptr [ecx+24h], 1
0x4C9925: jz      short loc_4C9933
0x4C9927: mov     eax, [ecx+3Ch]
0x4C992A: test    eax, eax
0x4C992C: jz      short loc_4C9933
0x4C992E: mov     eax, [eax+4]
0x4C9931: jmp     short loc_4C9935
0x4C9933: xor     eax, eax
0x4C9935: movzx   ecx, al
0x4C9938: mov     [esp+4+var_4], ecx
0x4C993B: mov     ecx, [esp+4+arg_0]
0x4C993F: movzx   edx, ah
0x4C9942: fild    [esp+4+var_4]
0x4C9945: fld     qword ptr ds:0A3DDD8h
0x4C994B: mov     [esp+4+arg_0], edx
0x4C994F: fdiv    st(1), st
0x4C9951: shr     eax, 10h
0x4C9954: movzx   eax, al
0x4C9957: fxch    st(1)
0x4C9959: fstp    dword ptr [ecx]
0x4C995B: fild    [esp+4+arg_0]
0x4C995F: mov     [esp+4+arg_0], eax
0x4C9963: fdiv    st, st(1)
0x4C9965: fstp    dword ptr [ecx+4]
0x4C9968: fild    [esp+4+arg_0]
0x4C996C: fdivrp  st(1), st
0x4C996E: fstp    dword ptr [ecx+8]
0x4C9971: pop     ecx
0x4C9972: retn    4
