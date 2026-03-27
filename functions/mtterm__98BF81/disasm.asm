0x98BF81: mov     eax, dword_B310AC
0x98BF86: cmp     eax, 0FFFFFFFFh
0x98BF89: jz      short loc_98BFA1
0x98BF8B: push    eax
0x98BF8C: push    dword_BA9E24
0x98BF92: call    __decode_pointer
0x98BF97: pop     ecx
0x98BF98: call    eax
0x98BF9A: or      dword_B310AC, 0FFFFFFFFh
0x98BFA1: mov     eax, dwTlsIndex
0x98BFA6: cmp     eax, 0FFFFFFFFh
0x98BFA9: jz      short loc_98BFB9
0x98BFAB: push    eax; dwTlsIndex
0x98BFAC: call    ds:TlsFree
0x98BFB2: or      dwTlsIndex, 0FFFFFFFFh
0x98BFB9: jmp     __mtterm_____mtdeletelocks
