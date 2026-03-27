0x6285D0: mov     eax, [ecx]
0x6285D2: mov     edx, [esp+arg_0]
0x6285D6: mov     eax, [eax+3B0h]
0x6285DC: push    edx
0x6285DD: call    eax
0x6285DF: test    eax, eax
0x6285E1: jz      short loc_6285E9
0x6285E3: mov     eax, [eax+0Ch]
0x6285E6: retn    4
0x6285E9: mov     eax, 7FFFFFFFh
0x6285EE: retn    4
