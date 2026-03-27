0x9DBF50: xor     ecx, ecx
0x9DBF52: mov     eax, 20h ; ' '
0x9DBF57: mov     edx, 4
0x9DBF5C: mul     edx
0x9DBF5E: seto    cl
0x9DBF61: neg     ecx
0x9DBF63: or      ecx, eax
0x9DBF65: push    ecx; Size
0x9DBF66: call    FormHeapAlloc
0x9DBF6B: push    offset sub_A18500; void (__cdecl *)()
0x9DBF70: mov     dword_B06150, eax
0x9DBF75: call    _atexit
0x9DBF7A: add     esp, 8
0x9DBF7D: retn
