0x983EF1: push    ebp
0x983EF2: mov     ebp, esp
0x983EF4: mov     eax, [ebp+MaxCount]
0x983EF7: push    esi
0x983EF8: push    edi
0x983EF9: xor     edi, edi
0x983EFB: cmp     eax, edi
0x983EFD: jz      short loc_983F46
0x983EFF: cmp     [ebp+Dst], edi
0x983F02: jnz     short loc_983F1F
0x983F04: call    __errno
0x983F09: push    16h
0x983F0B: pop     esi
0x983F0C: mov     [eax], esi
0x983F0E: push    edi
0x983F0F: push    edi
0x983F10: push    edi
0x983F11: push    edi
0x983F12: push    edi
0x983F13: call    __invalid_parameter
0x983F18: add     esp, 14h
0x983F1B: mov     eax, esi
0x983F1D: jmp     short loc_983F48
0x983F1F: cmp     [ebp+Src], edi
0x983F22: jz      short loc_983F04
0x983F24: cmp     [ebp+DstSize], eax
0x983F27: jnb     short loc_983F37
0x983F29: call    __errno
0x983F2E: push    22h ; '"'
0x983F30: pop     ecx
0x983F31: mov     [eax], ecx
0x983F33: mov     esi, ecx
0x983F35: jmp     short loc_983F0E
0x983F37: push    eax
0x983F38: push    [ebp+Src]
0x983F3B: push    [ebp+Dst]
0x983F3E: call    unknown_libname_16
0x983F43: add     esp, 0Ch
0x983F46: xor     eax, eax
0x983F48: pop     edi
0x983F49: pop     esi
0x983F4A: pop     ebp
0x983F4B: retn
