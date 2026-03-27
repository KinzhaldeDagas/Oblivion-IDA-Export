0x590580: push    0FFFFFFFFh
0x590582: push    offset ??1Extra@Tile@@UAE@XZ_SEH
0x590587: mov     eax, large fs:0
0x59058D: push    eax
0x59058E: push    ecx
0x59058F: push    esi
0x590590: mov     eax, ds:0B30AACh
0x590595: xor     eax, esp
0x590597: push    eax
0x590598: lea     eax, [esp+18h+var_C]
0x59059C: mov     large fs:0, eax
0x5905A2: mov     esi, ecx
0x5905A4: mov     [esp+18h+var_10], esi
0x5905A8: call    sub_721350
0x5905AD: mov     ecx, [esp+18h+arg_4]
0x5905B1: mov     eax, [esp+18h+arg_0]
0x5905B5: mov     [esi+10h], ecx
0x5905B8: push    offset aTileptr; "Tileptr"
0x5905BD: mov     ecx, esi
0x5905BF: mov     [esp+1Ch+var_4], 0
0x5905C7: mov     dword ptr [esi], offset ??_7Extra@Tile@@6B@; const Tile::Extra::`vftable'
0x5905CD: mov     [esi+0Ch], eax
0x5905D0: call    sub_721440
0x5905D5: mov     eax, esi
0x5905D7: mov     ecx, [esp+18h+var_C]
0x5905DB: mov     large fs:0, ecx
0x5905E2: pop     ecx
0x5905E3: pop     esi
0x5905E4: add     esp, 10h
0x5905E7: retn    8
