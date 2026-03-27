0x9FD930: xor     ecx, ecx
0x9FD932: mov     eax, 25h ; '%'
0x9FD937: mov     edx, 4
0x9FD93C: mul     edx
0x9FD93E: seto    cl
0x9FD941: neg     ecx
0x9FD943: or      ecx, eax
0x9FD945: push    ecx; Size
0x9FD946: call    FormHeapAlloc
0x9FD94B: mov     ecx, dword_B14E28
0x9FD951: lea     edx, ds:0[ecx*4]
0x9FD958: push    edx
0x9FD959: push    0
0x9FD95B: push    eax
0x9FD95C: mov     dword_B14E2C, eax
0x9FD961: call    __memset
0x9FD966: push    offset sub_A257A0; void (__cdecl *)()
0x9FD96B: mov     off_B14E24, offset ??_7?$NiTMap@PAVLowProcess@@ULP_LOCK_DATA@@@@6B@; const NiTMap<LowProcess *,LP_LOCK_DATA>::`vftable' ...
0x9FD975: call    _atexit
0x9FD97A: add     esp, 14h
0x9FD97D: retn
