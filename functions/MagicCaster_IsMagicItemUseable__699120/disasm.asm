0x699120: mov     eax, [esp+arg_4]
0x699124: test    eax, eax
0x699126: jz      short loc_69912C
0x699128: fld1
0x69912A: fstp    dword ptr [eax]
0x69912C: mov     eax, [esp+arg_8]
0x699130: test    eax, eax
0x699132: jz      short loc_69913A
0x699134: mov     dword ptr [eax], 0
0x69913A: mov     al, 1
0x69913C: retn    10h
