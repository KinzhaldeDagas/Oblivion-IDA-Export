0x581810: push    0FFFFFFFFh
0x581812: push    offset ??0TileImage@@QAE@XZ_SEH
0x581817: mov     eax, large fs:0
0x58181D: push    eax
0x58181E: push    ecx
0x58181F: push    ebx
0x581820: push    esi
0x581821: push    edi
0x581822: mov     eax, ds:0B30AACh
0x581827: xor     eax, esp
0x581829: push    eax
0x58182A: lea     eax, [esp+20h+var_C]
0x58182E: mov     large fs:0, eax
0x581834: mov     esi, ecx
0x581836: mov     [esp+20h+var_10], esi
0x58183A: xor     ebx, ebx
0x58183C: mov     [esi+8], ebx
0x58183F: mov     [esi+0Ch], bx
0x581843: mov     [esi+0Eh], bx
0x581847: mov     [esi+20h], ebx
0x58184A: mov     [esi+18h], ebx
0x58184D: mov     [esi+1Ch], ebx
0x581850: mov     dword ptr [esi+14h], offset ??_7?$NiTList@PAVValue@Tile@@@@6B@; const NiTList<Tile::Value *>::`vftable'
0x581857: mov     [esi+3Ch], ebx
0x58185A: mov     [esi+34h], ebx
0x58185D: mov     [esi+38h], ebx
0x581860: mov     dword ptr [esi+30h], offset ??_7?$NiTList@PAVTile@@@@6B@; const NiTList<Tile *>::`vftable'
0x581867: mov     [esi+24h], ebx
0x58186A: mov     [esi+10h], ebx
0x58186D: mov     [esi+4], bl
0x581870: mov     [esi+6], bl
0x581873: mov     dword ptr [esi], offset ??_7TileImage@@6B@; const TileImage::`vftable'
0x581879: mov     [esp+20h+var_4], ebx
0x58187D: mov     [esi+44h], ebx
0x581880: fld1
0x581882: fstp    dword ptr [esi+40h]
0x581885: mov     byte ptr [esp+20h+var_4], 1
0x58188A: mov     edi, [esi+44h]
0x58188D: cmp     edi, ebx
0x58188F: jz      short loc_5818B0
0x581891: lea     eax, [edi+4]
0x581894: push    eax; lpAddend
0x581895: call    dword ptr ds:0A2807Ch
0x58189B: test    eax, eax
0x58189D: jnz     short loc_5818AD
0x58189F: cmp     edi, ebx
0x5818A1: jz      short loc_5818AD
0x5818A3: mov     edx, [edi]
0x5818A5: mov     eax, [edx]
0x5818A7: push    1
0x5818A9: mov     ecx, edi
0x5818AB: call    eax
0x5818AD: mov     [esi+44h], ebx
0x5818B0: mov     eax, esi
0x5818B2: mov     [esi+48h], bl
0x5818B5: mov     ecx, dword ptr [esp+20h+var_C]
0x5818B9: mov     large fs:0, ecx
0x5818C0: pop     ecx
0x5818C1: pop     edi
0x5818C2: pop     esi
0x5818C3: pop     ebx
0x5818C4: add     esp, 10h
0x5818C7: retn
