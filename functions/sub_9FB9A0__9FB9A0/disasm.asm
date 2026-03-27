0x9FB9A0: xor     ecx, ecx
0x9FB9A2: mov     eax, 25h ; '%'
0x9FB9A7: mov     edx, 4
0x9FB9AC: mul     edx
0x9FB9AE: seto    cl
0x9FB9B1: neg     ecx
0x9FB9B3: or      ecx, eax
0x9FB9B5: push    ecx; Size
0x9FB9B6: call    FormHeapAlloc
0x9FB9BB: mov     ecx, dword_B1394C
0x9FB9C1: lea     edx, ds:0[ecx*4]
0x9FB9C8: push    edx
0x9FB9C9: push    0
0x9FB9CB: push    eax
0x9FB9CC: mov     dword_B13950, eax
0x9FB9D1: call    __memset
0x9FB9D6: push    offset sub_A24930; void (__cdecl *)()
0x9FB9DB: mov     byte_B13958, 1
0x9FB9E2: mov     off_B13948, offset ??_7?$NiTStringPointerMap@PAVXMLStorage@@@@6B@; const NiTStringPointerMap<XMLStorage *>::`vftable' ...
0x9FB9EC: call    _atexit
0x9FB9F1: add     esp, 14h
0x9FB9F4: retn
