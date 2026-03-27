0x6A72B0: mov     eax, [esp+arg_0]
0x6A72B4: push    eax
0x6A72B5: call    ActiveEffect_Base_SaveSize
0x6A72BA: mov     ecx, ds:0B33B00h
0x6A72C0: add     ax, 4
0x6A72C4: cmp     byte ptr [ecx+7Ch], 40h ; '@'
0x6A72C8: movzx   eax, ax
0x6A72CB: jb      short locret_6A72D0
0x6A72CD: add     eax, 8
0x6A72D0: retn    4
