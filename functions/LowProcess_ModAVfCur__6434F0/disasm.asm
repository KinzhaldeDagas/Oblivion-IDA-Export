0x6434F0: mov     eax, [esp+arg_4]
0x6434F4: cmp     eax, 8
0x6434F7: jl      short locret_643511
0x6434F9: cmp     eax, 0Ah
0x6434FC: jg      short locret_643511
0x6434FE: fld     [esp+arg_8]
0x643502: push    0
0x643504: push    ecx
0x643505: fstp    [esp+8+var_8]
0x643508: push    eax
0x643509: add     ecx, 70h ; 'p'
0x64350C: call    AVCollection_ModAVLimited
0x643511: retn    0Ch
