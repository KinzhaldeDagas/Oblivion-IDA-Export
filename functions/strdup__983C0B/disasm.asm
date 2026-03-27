0x983C0B: push    ebx
0x983C0C: mov     ebx, [esp+4+Src]
0x983C10: push    ebp
0x983C11: xor     ebp, ebp
0x983C13: cmp     ebx, ebp
0x983C15: jnz     short loc_983C1B
0x983C17: xor     eax, eax
0x983C19: jmp     short loc_983C58
0x983C1B: push    esi
0x983C1C: push    edi; Src
0x983C1D: push    ebx; Str
0x983C1E: call    _strlen
0x983C23: mov     esi, eax
0x983C25: inc     esi
0x983C26: push    esi; Size
0x983C27: call    _malloc
0x983C2C: mov     edi, eax
0x983C2E: cmp     edi, ebp
0x983C30: pop     ecx
0x983C31: pop     ecx
0x983C32: jz      short loc_983C54
0x983C34: push    ebx; Src
0x983C35: push    esi; SizeInBytes
0x983C36: push    edi; Dst
0x983C37: call    _strcpy_s
0x983C3C: add     esp, 0Ch
0x983C3F: test    eax, eax
0x983C41: jz      short loc_983C50
0x983C43: push    ebp
0x983C44: push    ebp
0x983C45: push    ebp
0x983C46: push    ebp
0x983C47: push    ebp
0x983C48: call    __invoke_watson
0x983C4D: add     esp, 14h
0x983C50: mov     eax, edi
0x983C52: jmp     short loc_983C56
0x983C54: xor     eax, eax
0x983C56: pop     edi
0x983C57: pop     esi
0x983C58: pop     ebp
0x983C59: pop     ebx
0x983C5A: retn
