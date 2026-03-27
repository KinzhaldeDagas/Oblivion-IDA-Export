0x983CF3: push    ebx
0x983CF4: mov     ebx, [esp+4+arg_0]
0x983CF8: push    esi
0x983CF9: mov     esi, ecx
0x983CFB: mov     dword ptr [esi], offset ??_7exception@std@@6B@
0x983D01: mov     eax, [ebx+8]
0x983D04: mov     [esi+8], eax
0x983D07: test    eax, eax
0x983D09: mov     eax, [ebx+4]
0x983D0C: push    edi; Src
0x983D0D: jz      short loc_983D40
0x983D0F: test    eax, eax
0x983D11: jz      short loc_983D3A
0x983D13: push    eax; Str
0x983D14: call    _strlen
0x983D19: mov     edi, eax
0x983D1B: inc     edi
0x983D1C: push    edi; Size
0x983D1D: call    _malloc
0x983D22: test    eax, eax
0x983D24: pop     ecx
0x983D25: pop     ecx
0x983D26: mov     [esi+4], eax
0x983D29: jz      short loc_983D43
0x983D2B: push    dword ptr [ebx+4]; Src
0x983D2E: push    edi; SizeInBytes
0x983D2F: push    eax; Dst
0x983D30: call    _strcpy_s
0x983D35: add     esp, 0Ch
0x983D38: jmp     short loc_983D43
0x983D3A: and     dword ptr [esi+4], 0
0x983D3E: jmp     short loc_983D43
0x983D40: mov     [esi+4], eax
0x983D43: pop     edi
0x983D44: mov     eax, esi
0x983D46: pop     esi
0x983D47: pop     ebx
0x983D48: retn    4
