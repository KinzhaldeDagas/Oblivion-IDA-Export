0x9DBF80: xor     ecx, ecx
0x9DBF82: mov     eax, 0FA1h
0x9DBF87: mov     edx, 4
0x9DBF8C: mul     edx
0x9DBF8E: seto    cl
0x9DBF91: neg     ecx
0x9DBF93: or      ecx, eax
0x9DBF95: push    ecx; Size
0x9DBF96: call    FormHeapAlloc
0x9DBF9B: mov     ecx, dword_B06168
0x9DBFA1: lea     edx, ds:0[ecx*4]
0x9DBFA8: push    edx
0x9DBFA9: push    0
0x9DBFAB: push    eax
0x9DBFAC: mov     dword_B0616C, eax
0x9DBFB1: call    __memset
0x9DBFB6: push    offset sub_A18530; void (__cdecl *)()
0x9DBFBB: mov     byte_B06174, 0
0x9DBFC2: mov     off_B06164, offset ??_7?$BSTCaseInsensitiveStringMap@PAVTESForm@@@@6B@; const BSTCaseInsensitiveStringMap<TESForm *>::`vftable' ...
0x9DBFCC: call    _atexit
0x9DBFD1: add     esp, 14h
0x9DBFD4: retn
