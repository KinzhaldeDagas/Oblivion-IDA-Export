0x9FBA00: xor     ecx, ecx
0x9FBA02: mov     eax, 25h ; '%'
0x9FBA07: mov     edx, 4
0x9FBA0C: mul     edx
0x9FBA0E: seto    cl
0x9FBA11: neg     ecx
0x9FBA13: or      ecx, eax
0x9FBA15: push    ecx; Size
0x9FBA16: call    FormHeapAlloc
0x9FBA1B: mov     ecx, dword_B13960
0x9FBA21: lea     edx, ds:0[ecx*4]
0x9FBA28: push    edx
0x9FBA29: push    0
0x9FBA2B: push    eax
0x9FBA2C: mov     dword_B13964, eax
0x9FBA31: call    __memset
0x9FBA36: push    offset sub_A24940; void (__cdecl *)()
0x9FBA3B: mov     byte_B1396C, 1
0x9FBA42: mov     off_B1395C, offset ??_7?$NiTStringPointerMap@PAVBuildStorage@Tile@@@@6B@; const NiTStringPointerMap<Tile::BuildStorage *>::`vftable' ...
0x9FBA4C: call    _atexit
0x9FBA51: add     esp, 14h
0x9FBA54: retn
