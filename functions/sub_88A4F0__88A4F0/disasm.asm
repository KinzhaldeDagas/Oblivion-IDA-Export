0x88A4F0: push    esi
0x88A4F1: mov     esi, ecx
0x88A4F3: call    sub_8A9510
0x88A4F8: fldz
0x88A4FA: mov     dword ptr [esi], offset ??_7bhkWorldCinfo@@6BbhkWorldCinfo@@@; const bhkWorldCinfo::`vftable'{for `bhkWorldCinfo'}
0x88A500: fst     dword ptr [esi+10h]
0x88A503: fld     dword ptr ds:0A46B20h
0x88A509: fstp    dword ptr [esi+14h]
0x88A50C: fst     dword ptr [esi+18h]
0x88A50F: fstp    dword ptr [esi+1Ch]
0x88A512: fld     dword ptr ds:0A2FAACh
0x88A518: fstp    dword ptr [esi+50h]
0x88A51B: fld     dword ptr ds:0A95BF0h
0x88A521: fstp    dword ptr [esi+24h]
0x88A524: mov     al, ds:0B2E2DCh
0x88A529: mov     [esi+95h], al
0x88A52F: mov     byte ptr [esi+8Ch], 0
0x88A536: mov     byte ptr [esi+28h], 3
0x88A53A: mov     eax, esi
0x88A53C: pop     esi
0x88A53D: retn
