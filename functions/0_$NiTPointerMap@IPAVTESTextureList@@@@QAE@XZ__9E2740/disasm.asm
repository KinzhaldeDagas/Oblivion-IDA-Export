0x9E2740: xor     ecx, ecx
0x9E2742: mov     eax, 25h ; '%'
0x9E2747: mov     edx, 4
0x9E274C: mul     edx
0x9E274E: seto    cl
0x9E2751: neg     ecx
0x9E2753: or      ecx, eax
0x9E2755: push    ecx; Size
0x9E2756: call    FormHeapAlloc
0x9E275B: mov     ecx, dword_B08314
0x9E2761: lea     edx, ds:0[ecx*4]
0x9E2768: push    edx
0x9E2769: push    0
0x9E276B: push    eax
0x9E276C: mov     dword_B08318, eax
0x9E2771: call    __memset
0x9E2776: push    offset sub_A1B680; void (__cdecl *)()
0x9E277B: mov     off_B08310, offset ??_7?$NiTPointerMap@IPAVTESTextureList@@@@6B@; const NiTPointerMap<uint,TESTextureList *>::`vftable' ...
0x9E2785: call    _atexit
0x9E278A: add     esp, 14h
0x9E278D: retn
