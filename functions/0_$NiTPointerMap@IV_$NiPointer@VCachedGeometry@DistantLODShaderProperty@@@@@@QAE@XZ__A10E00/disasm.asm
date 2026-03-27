0xA10E00: xor     ecx, ecx
0xA10E02: mov     eax, 25h ; '%'
0xA10E07: mov     edx, 4
0xA10E0C: mul     edx
0xA10E0E: seto    cl
0xA10E11: neg     ecx
0xA10E13: or      ecx, eax
0xA10E15: push    ecx; Size
0xA10E16: call    FormHeapAlloc
0xA10E1B: mov     ecx, dword_B2C350
0xA10E21: lea     edx, ds:0[ecx*4]
0xA10E28: push    edx
0xA10E29: push    0
0xA10E2B: push    eax
0xA10E2C: mov     dword_B2C354, eax
0xA10E31: call    __memset
0xA10E36: push    offset sub_A27110; void (__cdecl *)()
0xA10E3B: mov     off_B2C34C, offset ??_7?$NiTPointerMap@IV?$NiPointer@VCachedGeometry@DistantLODShaderProperty@@@@@@6B@; const NiTPointerMap<uint,NiPointer<DistantLODShaderProperty::CachedGeometry>>::`vftable' ...
0xA10E45: call    _atexit
0xA10E4A: add     esp, 14h
0xA10E4D: retn
