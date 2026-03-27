0x58FD90: push    0FFFFFFFFh
0x58FD92: push    offset ??0TileText@@QAE@XZ_SEH
0x58FD97: mov     eax, large fs:0
0x58FD9D: push    eax
0x58FD9E: push    ecx
0x58FD9F: push    ebx
0x58FDA0: push    esi
0x58FDA1: mov     eax, ds:0B30AACh
0x58FDA6: xor     eax, esp
0x58FDA8: push    eax
0x58FDA9: lea     eax, [esp+1Ch+var_C]
0x58FDAD: mov     large fs:0, eax
0x58FDB3: mov     esi, ecx
0x58FDB5: mov     [esp+1Ch+var_10], esi
0x58FDB9: xor     ebx, ebx
0x58FDBB: mov     [esi+8], ebx
0x58FDBE: mov     [esi+0Ch], bx
0x58FDC2: mov     [esi+0Eh], bx
0x58FDC6: mov     [esi+20h], ebx
0x58FDC9: mov     [esi+18h], ebx
0x58FDCC: mov     [esi+1Ch], ebx
0x58FDCF: mov     dword ptr [esi+14h], offset ??_7?$NiTList@PAVValue@Tile@@@@6B@; const NiTList<Tile::Value *>::`vftable'
0x58FDD6: mov     [esi+3Ch], ebx
0x58FDD9: mov     [esi+34h], ebx
0x58FDDC: mov     [esi+38h], ebx
0x58FDDF: mov     dword ptr [esi+30h], offset ??_7?$NiTList@PAVTile@@@@6B@; const NiTList<Tile *>::`vftable'
0x58FDE6: mov     [esi+24h], ebx
0x58FDE9: mov     [esi+10h], ebx
0x58FDEC: mov     [esi+4], bl
0x58FDEF: mov     [esi+6], bl
0x58FDF2: mov     eax, [esp+1Ch+arg_0]
0x58FDF6: cmp     eax, ebx
0x58FDF8: mov     [esp+1Ch+var_4], ebx
0x58FDFC: mov     dword ptr [esi], offset ??_7TileText@@6B@; const TileText::`vftable'
0x58FE02: jz      short loc_58FE0B
0x58FE04: push    ebx
0x58FE05: push    eax
0x58FE06: call    sub_58D1C0
0x58FE0B: mov     eax, esi
0x58FE0D: mov     [esi+50h], bl
0x58FE10: mov     ecx, [esp+1Ch+var_C]
0x58FE14: mov     large fs:0, ecx
0x58FE1B: pop     ecx
0x58FE1C: pop     esi
0x58FE1D: pop     ebx
0x58FE1E: add     esp, 10h
0x58FE21: retn    4
