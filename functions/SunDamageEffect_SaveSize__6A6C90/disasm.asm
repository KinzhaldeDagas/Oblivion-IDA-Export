0x6A6C90: mov     eax, [esp+arg_0]
0x6A6C94: push    eax
0x6A6C95: call    ActiveEffect_Base_SaveSize
0x6A6C9A: mov     ecx, ds:0B33B00h
0x6A6CA0: cmp     byte ptr [ecx+7Ch], 71h ; 'q'
0x6A6CA4: movzx   eax, ax
0x6A6CA7: jb      short locret_6A6CAC
0x6A6CA9: add     eax, 4
0x6A6CAC: retn    4
