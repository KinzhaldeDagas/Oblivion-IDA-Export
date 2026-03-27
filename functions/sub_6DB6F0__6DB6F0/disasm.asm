0x6DB6F0: push    ecx
0x6DB6F1: fldz
0x6DB6F3: push    ebx
0x6DB6F4: mov     ebx, [esp+8+arg_0]
0x6DB6F8: fstp    [esp+8+var_4]
0x6DB6FC: push    ebp
0x6DB6FD: push    esi
0x6DB6FE: push    edi
0x6DB6FF: mov     edi, [esp+14h+arg_4]
0x6DB703: mov     ebp, ecx
0x6DB705: xor     esi, esi
0x6DB707: jmp     short loc_6DB710
0x6DB709: align 10h
0x6DB710: fld     dword ptr [esi+0B246F4h]
0x6DB716: push    ecx
0x6DB717: fmul    [esp+18h+arg_8]
0x6DB71B: mov     ecx, ebp
0x6DB71D: fstp    [esp+18h+arg_4]
0x6DB721: fld     [esp+18h+arg_4]
0x6DB725: fstp    [esp+18h+var_18]; float
0x6DB728: push    edi; int
0x6DB729: push    ebx; int
0x6DB72A: call    sub_6DB660
0x6DB72F: fmul    dword ptr [esi+0B246E0h]
0x6DB735: add     esi, 4
0x6DB738: cmp     esi, 14h
0x6DB73B: fadd    [esp+14h+var_4]
0x6DB73F: fstp    [esp+14h+var_4]
0x6DB743: jl      short loc_6DB710
0x6DB745: fld     [esp+14h+var_4]
0x6DB749: pop     edi
0x6DB74A: fmul    [esp+10h+arg_8]
0x6DB74E: pop     esi
0x6DB74F: pop     ebp
0x6DB750: pop     ebx
0x6DB751: fstp    [esp+4+arg_8]
0x6DB755: fld     [esp+4+arg_8]
0x6DB759: pop     ecx
0x6DB75A: retn    0Ch
