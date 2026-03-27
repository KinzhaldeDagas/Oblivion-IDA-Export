0x432630: mov     eax, dword ptr [esp+arg_0+4]
0x432634: cmp     eax, dword ptr [esp+arg_8+4]
0x432638: jl      short loc_43264E
0x43263A: jg      short loc_432646
0x43263C: mov     ecx, dword ptr [esp+arg_0]
0x432640: cmp     ecx, dword ptr [esp+arg_8]
0x432644: jb      short loc_43264E
0x432646: mov     eax, 1
0x43264B: retn    10h
0x43264E: xor     eax, eax
0x432650: retn    10h
