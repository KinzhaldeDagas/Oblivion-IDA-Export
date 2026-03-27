0x6A4970: mov     eax, [esp+arg_0]
0x6A4974: push    eax
0x6A4975: call    ActiveEffect_Base_SaveSize
0x6A497A: mov     ecx, ds:0B33B00h
0x6A4980: cmp     byte ptr [ecx+7Ch], 6Eh ; 'n'
0x6A4984: movzx   eax, ax
0x6A4987: jb      short locret_6A498C
0x6A4989: add     eax, 4
0x6A498C: retn    4
