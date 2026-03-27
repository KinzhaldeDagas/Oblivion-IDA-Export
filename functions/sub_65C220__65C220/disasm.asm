0x65C220: push    ecx
0x65C221: mov     eax, [esp+4+Src]
0x65C225: test    eax, eax
0x65C227: jnz     short loc_65C22F
0x65C229: xor     al, al
0x65C22B: pop     ecx
0x65C22C: retn    4
0x65C22F: mov     cl, [eax]
0x65C231: fld     dword ptr [eax+4]
0x65C234: push    1; Size
0x65C236: fstp    [esp+8+var_4]
0x65C23A: lea     edx, [esp+8+Src]
0x65C23E: mov     byte ptr [esp+8+Src], cl
0x65C242: mov     ecx, ds:0B33B00h
0x65C248: push    edx; Src
0x65C249: call    SaveLoad_SaveData
0x65C24E: mov     ecx, ds:0B33B00h
0x65C254: push    4; Size
0x65C256: lea     eax, [esp+8+var_4]
0x65C25A: push    eax; Src
0x65C25B: call    SaveLoad_SaveData
0x65C260: mov     al, 1
0x65C262: pop     ecx
0x65C263: retn    4
