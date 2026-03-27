0xA111D0: xor     ecx, ecx
0xA111D2: mov     eax, 25h ; '%'
0xA111D7: mov     edx, 4
0xA111DC: mul     edx
0xA111DE: seto    cl
0xA111E1: neg     ecx
0xA111E3: or      ecx, eax
0xA111E5: push    ecx; Size
0xA111E6: call    FormHeapAlloc
0xA111EB: mov     ecx, dword_B2CBC8
0xA111F1: lea     edx, ds:0[ecx*4]
0xA111F8: push    edx
0xA111F9: push    0
0xA111FB: push    eax
0xA111FC: mov     dword_B2CBCC, eax
0xA11201: call    __memset
0xA11206: push    offset sub_A27580; void (__cdecl *)()
0xA1120B: mov     off_B2CBC4, offset ??_7?$NiTPointerMap@KPAVCachedGrass@TallGrassShaderProperty@@@@6B@; const NiTPointerMap<ulong,TallGrassShaderProperty::CachedGrass *>::`vftable' ...
0xA11215: call    _atexit
0xA1121A: add     esp, 14h
0xA1121D: retn
