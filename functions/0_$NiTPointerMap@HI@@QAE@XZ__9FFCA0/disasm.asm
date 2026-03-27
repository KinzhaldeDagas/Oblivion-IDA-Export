0x9FFCA0: xor     ecx, ecx
0x9FFCA2: mov     eax, 25h ; '%'
0x9FFCA7: mov     edx, 4
0x9FFCAC: mul     edx
0x9FFCAE: seto    cl
0x9FFCB1: neg     ecx
0x9FFCB3: or      ecx, eax
0x9FFCB5: push    ecx; Size
0x9FFCB6: call    FormHeapAlloc
0x9FFCBB: mov     ecx, dword_B16310
0x9FFCC1: lea     edx, ds:0[ecx*4]
0x9FFCC8: push    edx
0x9FFCC9: push    0
0x9FFCCB: push    eax
0x9FFCCC: mov     dword_B16314, eax
0x9FFCD1: call    __memset
0x9FFCD6: push    offset sub_A26730; void (__cdecl *)()
0x9FFCDB: mov     off_B1630C, offset ??_7?$NiTPointerMap@HI@@6B@; const NiTPointerMap<int,uint>::`vftable' ...
0x9FFCE5: call    _atexit
0x9FFCEA: add     esp, 14h
0x9FFCED: retn
