0x5971C0: cmp     [esp+arg_0], 63h ; 'c'
0x5971C5: jl      short locret_5971CE
0x5971C7: push    0
0x5971C9: call    ClassMenu_RefreshClassDetails; Morrowind Leveling hook: refresh extended ClassMenu minor skill traits after vanilla class display update.
0x5971CE: retn    8
