0x9E2F50: xor     ecx, ecx
0x9E2F52: mov     eax, 25h ; '%'
0x9E2F57: mov     edx, 4
0x9E2F5C: mul     edx
0x9E2F5E: seto    cl
0x9E2F61: neg     ecx
0x9E2F63: or      ecx, eax
0x9E2F65: push    ecx; Size
0x9E2F66: call    FormHeapAlloc
0x9E2F6B: mov     ecx, dword_B09418
0x9E2F71: lea     edx, ds:0[ecx*4]
0x9E2F78: push    edx
0x9E2F79: push    0
0x9E2F7B: push    eax
0x9E2F7C: mov     dword_B0941C, eax
0x9E2F81: call    __memset
0x9E2F86: push    offset sub_A1BA80; void (__cdecl *)()
0x9E2F8B: mov     off_B09414, offset ??_7?$NiTMap@PAVNiSourceTexture@@I@@6B@; const NiTMap<NiSourceTexture *,uint>::`vftable' ...
0x9E2F95: call    _atexit
0x9E2F9A: add     esp, 14h
0x9E2F9D: retn
