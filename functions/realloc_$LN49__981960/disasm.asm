0x981960: cmp     dword ptr [ebp-20h], 0
0x981964: jnz     short loc_981997
0x981966: test    esi, esi
0x981968: jnz     short loc_98196B
0x98196A: inc     esi
0x98196B: add     esi, 0Fh
0x98196E: and     esi, 0FFFFFFF0h
0x981971: mov     [ebp+0Ch], esi
0x981974: push    esi; dwBytes
0x981975: push    ebx; lpMem
0x981976: push    0; dwFlags
0x981978: push    dword ptr ds:0BAA2ACh; hHeap
0x98197E: call    dword ptr ds:0A2819Ch
0x981984: mov     edi, eax
0x981986: jmp     short loc_98199A
