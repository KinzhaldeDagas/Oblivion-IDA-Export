0x889D00: mov     eax, [esp+arg_4]
0x889D04: cmp     dword ptr [eax+0Ch], 0
0x889D08: mov     eax, [esp+arg_0]
0x889D0C: jz      short loc_889D14
0x889D0E: or      word ptr [eax+0Ch], 1
0x889D13: retn
0x889D14: and     word ptr [eax+0Ch], 0FFFEh
0x889D1A: retn
