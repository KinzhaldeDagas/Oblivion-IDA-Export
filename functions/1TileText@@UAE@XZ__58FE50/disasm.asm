0x58FE50: push    0FFFFFFFFh
0x58FE52: push    offset ??1TileText@@UAE@XZ_SEH
0x58FE57: mov     eax, large fs:0
0x58FE5D: push    eax
0x58FE5E: push    ecx
0x58FE5F: push    esi
0x58FE60: mov     eax, ds:0B30AACh
0x58FE65: xor     eax, esp
0x58FE67: push    eax
0x58FE68: lea     eax, [esp+18h+var_C]
0x58FE6C: mov     large fs:0, eax
0x58FE72: mov     esi, ecx
0x58FE74: mov     [esp+18h+var_10], esi
0x58FE78: mov     dword ptr [esi], offset ??_7TileText@@6B@; const TileText::`vftable'
0x58FE7E: cmp     byte ptr [esi+4], 0
0x58FE82: mov     [esp+18h+var_4], 0
0x58FE8A: jnz     short loc_58FE91
0x58FE8C: call    sub_58DA70
0x58FE91: mov     ecx, esi; this
0x58FE93: mov     [esp+18h+var_4], 0FFFFFFFFh
0x58FE9B: call    ??1Tile@@UAE@XZ; Tile::~Tile(void)
0x58FEA0: mov     ecx, [esp+18h+var_C]
0x58FEA4: mov     large fs:0, ecx
0x58FEAB: pop     ecx
0x58FEAC: pop     esi
0x58FEAD: add     esp, 10h
0x58FEB0: retn
