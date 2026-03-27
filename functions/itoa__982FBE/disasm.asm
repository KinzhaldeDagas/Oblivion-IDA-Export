0x982FBE: push    ebp
0x982FBF: mov     ebp, esp
0x982FC1: cmp     [ebp+Radix], 0Ah
0x982FC5: mov     eax, [ebp+Value]
0x982FC8: jnz     short loc_982FD4
0x982FCA: test    eax, eax
0x982FCC: jge     short loc_982FD4
0x982FCE: push    1
0x982FD0: push    0Ah
0x982FD2: jmp     short loc_982FD9
0x982FD4: push    0
0x982FD6: push    [ebp+Radix]
0x982FD9: mov     ecx, [ebp+Dest]
0x982FDC: call    _xtoa@16
0x982FE1: mov     eax, [ebp+Dest]
0x982FE4: pop     ebp
0x982FE5: retn
