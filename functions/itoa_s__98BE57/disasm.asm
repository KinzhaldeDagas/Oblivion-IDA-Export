0x98BE57: push    ebp
0x98BE58: mov     ebp, esp
0x98BE5A: cmp     [ebp+Radix], 0Ah
0x98BE5E: mov     eax, [ebp+Value]
0x98BE61: jnz     short loc_98BE6D
0x98BE63: test    eax, eax
0x98BE65: jge     short loc_98BE6D
0x98BE67: push    1
0x98BE69: push    0Ah
0x98BE6B: jmp     short loc_98BE72
0x98BE6D: push    0
0x98BE6F: push    [ebp+Radix]
0x98BE72: push    [ebp+Size]
0x98BE75: mov     ecx, [ebp+DstBuf]
0x98BE78: call    _xtoa_s@20
0x98BE7D: pop     ebp
0x98BE7E: retn
