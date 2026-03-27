0x68DC46: mov     al, [ecx+7Ch]
0x68DC49: cmp     al, 48h ; 'H'
0x68DC4B: jb      short ActiveEffect_Base_SaveEffect___LowbitUnk14
0x68DC4D: push    4; Size
0x68DC4F: add     ebp, 14h
0x68DC52: push    ebp; Src
0x68DC53: call    SaveLoad_SaveData
0x68DC58: pop     edi
0x68DC59: pop     ebp
0x68DC5A: add     esp, 14h
0x68DC5D: retn    4
