0x69DB90: mov     ecx, ds:0B33B00h; Verified (Oblivion): base GetExtraSaveSize receives owner ActiveEffect* and target TESObjectREFR*; it returns 5 bytes before version 0x72 and 9 bytes from version 0x72.
0x69DB96: cmp     byte ptr [ecx+7Ch], 72h ; 'r'
0x69DB9A: mov     eax, 5
0x69DB9F: jb      short locret_69DBA6
0x69DBA1: mov     eax, 9
0x69DBA6: retn    8
