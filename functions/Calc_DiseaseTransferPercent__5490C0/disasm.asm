0x5490C0: mov     eax, [esp+arg_0]
0x5490C4: cmp     eax, 64h ; 'd'
0x5490C7: jl      short loc_5490CE
0x5490C9: mov     eax, 64h ; 'd'
0x5490CE: mov     ecx, 64h ; 'd'
0x5490D3: sub     ecx, eax
0x5490D5: mov     [esp+arg_0], ecx
0x5490D9: fild    [esp+arg_0]
0x5490DD: fmul    dword ptr ds:0B380F0h
0x5490E3: fadd    dword ptr ds:0B380E8h
0x5490E9: fstp    [esp+arg_0]
0x5490ED: fld     [esp+arg_0]
0x5490F1: retn
