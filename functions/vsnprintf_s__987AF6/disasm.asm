0x987AF6: push    ebp; Locale
0x987AF7: mov     ebp, esp
0x987AF9: push    [ebp+ArgList]; Format
0x987AFC: push    0; Locale
0x987AFE: push    [ebp+Format]; MaxCount
0x987B01: push    [ebp+MaxCount]; MaxCount
0x987B04: push    [ebp+SizeInBytes]; DstSize
0x987B07: push    [ebp+DstBuf]; DstBuf
0x987B0A: call    __vsnprintf_s_l
0x987B0F: add     esp, 18h
0x987B12: pop     ebp
0x987B13: retn
