0x910DC0: fld     dword ptr [ecx+0Ch]
0x910DC3: fcomp   dword ptr ds:0A2FAA8h
0x910DC9: fnstsw  ax
0x910DCB: test    ah, 41h
0x910DCE: mov     eax, [esp+arg_0]
0x910DD2: jp      short loc_910DDA
0x910DD4: mov     byte ptr [eax], 0
0x910DD7: retn    4
0x910DDA: mov     byte ptr [eax], 1
0x910DDD: retn    4
