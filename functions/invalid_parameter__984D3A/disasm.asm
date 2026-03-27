0x984D3A: push    ebp
0x984D3B: mov     ebp, esp
0x984D3D: push    dword ptr ds:0BA9DE8h
0x984D43: call    __decode_pointer
0x984D48: test    eax, eax
0x984D4A: pop     ecx
0x984D4B: jz      short loc_984D50
0x984D4D: pop     ebp
0x984D4E: jmp     eax
0x984D50: push    2
0x984D52: call    sub_9933A9
0x984D57: pop     ecx
0x984D58: pop     ebp
0x984D59: jmp     __invoke_watson
