0x9854E0: cmp     ecx, 100h
0x9854E6: jb      short unknown_libname_16___unknown_libname_18
0x9854E8: cmp     dword ptr ds:0BAABE0h, 0
0x9854EF: jz      short unknown_libname_16___unknown_libname_18
0x9854F1: push    edi
0x9854F2: push    esi
0x9854F3: and     edi, 0Fh
0x9854F6: and     esi, 0Fh
0x9854F9: cmp     edi, esi
0x9854FB: pop     esi
0x9854FC: pop     edi
0x9854FD: jnz     short unknown_libname_16___unknown_libname_18
0x9854FF: pop     esi
0x985500: pop     edi
0x985501: pop     ebp
0x985502: jmp     __VEC_memcpy
