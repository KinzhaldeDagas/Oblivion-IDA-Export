0x981B21: cmp     [ebp-20h], edi
0x981B24: jnz     short loc_981B36
0x981B26: push    ebx; lpMem
0x981B27: push    edi; dwFlags
0x981B28: push    dword ptr ds:0BAA2ACh; hHeap
0x981B2E: call    dword ptr ds:0A281A0h
0x981B34: mov     esi, eax
0x981B36: mov     eax, esi
0x981B38: call    __SEH_epilog4
0x981B3D: retn
