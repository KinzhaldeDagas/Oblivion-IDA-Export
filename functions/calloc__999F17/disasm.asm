0x999F17: push    ebp
0x999F18: mov     ebp, esp
0x999F1A: push    ecx
0x999F1B: and     [ebp+var_4], 0
0x999F1F: push    edi
0x999F20: lea     eax, [ebp+var_4]
0x999F23: push    eax
0x999F24: push    [ebp+SizeOfElements]
0x999F27: push    [ebp+NumOfElements]
0x999F2A: call    __calloc_impl
0x999F2F: mov     edi, eax
0x999F31: add     esp, 0Ch
0x999F34: test    edi, edi
0x999F36: jnz     short loc_999F51
0x999F38: push    esi
0x999F39: mov     esi, [ebp+var_4]
0x999F3C: test    esi, esi
0x999F3E: jz      short loc_999F50
0x999F40: call    __errno
0x999F45: test    eax, eax
0x999F47: jz      short loc_999F50
0x999F49: call    __errno
0x999F4E: mov     [eax], esi
0x999F50: pop     esi
0x999F51: mov     eax, edi
0x999F53: pop     edi
0x999F54: leave
0x999F55: retn
