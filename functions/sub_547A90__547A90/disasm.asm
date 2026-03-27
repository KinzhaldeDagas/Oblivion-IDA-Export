0x547A90: push    esi
0x547A91: mov     esi, [esp+4+arg_0]
0x547A95: test    esi, esi
0x547A97: jnz     short loc_547AA2
0x547A99: mov     esi, 1
0x547A9E: mov     [esp+4+arg_0], esi
0x547AA2: fild    [esp+4+arg_0]
0x547AA6: fld     qword ptr ds:0A309F0h
0x547AAC: fld     st
0x547AAE: fsubrp  st(2), st
0x547AB0: fdivp   st(1), st
0x547AB2: fstp    [esp+4+arg_0]
0x547AB6: fld     [esp+4+arg_0]
0x547ABA: fld     [esp+4+arg_10]
0x547ABE: call    __CIpow
0x547AC3: mov     eax, [esp+4+arg_4]
0x547AC7: sub     eax, [esp+4+arg_8]
0x547ACB: add     eax, 64h ; 'd'
0x547ACE: mov     [esp+4+arg_0], eax
0x547AD2: fild    [esp+4+arg_0]
0x547AD6: fmul    [esp+4+arg_C]
0x547ADA: fstp    [esp+4+arg_0]
0x547ADE: fmul    [esp+4+arg_0]
0x547AE2: call    Double_To_SInt32
0x547AE7: mov     ecx, 64h ; 'd'
0x547AEC: sub     ecx, esi
0x547AEE: cmp     eax, ecx
0x547AF0: pop     esi
0x547AF1: jle     short locret_547AF5
0x547AF3: mov     eax, ecx
0x547AF5: retn
