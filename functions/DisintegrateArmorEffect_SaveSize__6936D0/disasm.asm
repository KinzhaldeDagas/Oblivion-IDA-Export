0x6936D0: mov     eax, [esp+arg_0]
0x6936D4: push    eax
0x6936D5: call    ActiveEffect_Base_SaveSize
0x6936DA: mov     ecx, ds:0B33B00h
0x6936E0: cmp     byte ptr [ecx+7Ch], 37h ; '7'
0x6936E4: movzx   eax, ax
0x6936E7: jb      short locret_6936EC
0x6936E9: add     eax, 4
0x6936EC: retn    4
