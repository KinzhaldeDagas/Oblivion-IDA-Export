0x9DBF00: xor     ecx, ecx
0x9DBF02: mov     eax, 2008Dh
0x9DBF07: mov     edx, 4
0x9DBF0C: mul     edx
0x9DBF0E: seto    cl
0x9DBF11: neg     ecx
0x9DBF13: or      ecx, eax
0x9DBF15: push    ecx; Size
0x9DBF16: call    FormHeapAlloc
0x9DBF1B: mov     ecx, dword_B06140
0x9DBF21: lea     edx, ds:0[ecx*4]
0x9DBF28: push    edx
0x9DBF29: push    0
0x9DBF2B: push    eax
0x9DBF2C: mov     dword_B06144, eax
0x9DBF31: call    __memset
0x9DBF36: push    offset sub_A18520; void (__cdecl *)()
0x9DBF3B: mov     TESForm_FormIDMap, offset ??_7?$NiTPointerMap@IPAVTESForm@@@@6B@; const NiTPointerMap<uint,TESForm *>::`vftable' ...
0x9DBF45: call    _atexit
0x9DBF4A: add     esp, 14h
0x9DBF4D: retn
