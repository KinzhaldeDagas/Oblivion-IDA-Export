0x987D1D: push    ebp
0x987D1E: mov     ebp, esp
0x987D20: push    ebx
0x987D21: push    esi
0x987D22: mov     esi, [ebp+Dst]
0x987D25: xor     ebx, ebx
0x987D27: cmp     [ebp+MaxCount], ebx
0x987D2A: push    edi
0x987D2B: jnz     short loc_987D3D
0x987D2D: cmp     esi, ebx
0x987D2F: jnz     short loc_987D41
0x987D31: cmp     [ebp+SizeInBytes], ebx
0x987D34: jnz     short loc_987D48
0x987D36: xor     eax, eax
0x987D38: pop     edi
0x987D39: pop     esi
0x987D3A: pop     ebx
0x987D3B: pop     ebp
0x987D3C: retn
0x987D3D: cmp     esi, ebx
0x987D3F: jz      short loc_987D48
0x987D41: mov     edi, [ebp+SizeInBytes]
0x987D44: cmp     edi, ebx
0x987D46: ja      short loc_987D63
0x987D48: call    __errno
0x987D4D: push    16h
0x987D4F: pop     esi
0x987D50: mov     [eax], esi
0x987D52: push    ebx
0x987D53: push    ebx
0x987D54: push    ebx
0x987D55: push    ebx
0x987D56: push    ebx
0x987D57: call    __invalid_parameter
0x987D5C: add     esp, 14h
0x987D5F: mov     eax, esi
0x987D61: jmp     short loc_987D38
0x987D63: cmp     [ebp+MaxCount], ebx
0x987D66: jnz     short loc_987D6C
0x987D68: mov     [esi], bl
0x987D6A: jmp     short loc_987D36
0x987D6C: mov     edx, [ebp+Src]
0x987D6F: cmp     edx, ebx
0x987D71: jnz     short loc_987D77
0x987D73: mov     [esi], bl
0x987D75: jmp     short loc_987D48
0x987D77: cmp     [ebp+MaxCount], 0FFFFFFFFh
0x987D7B: mov     eax, esi
0x987D7D: jnz     short loc_987D8E
0x987D7F: mov     cl, [edx]
0x987D81: mov     [eax], cl
0x987D83: inc     eax
0x987D84: inc     edx
0x987D85: cmp     cl, bl
0x987D87: jz      short loc_987DA7
0x987D89: dec     edi
0x987D8A: jnz     short loc_987D7F
0x987D8C: jmp     short loc_987DA7
0x987D8E: mov     cl, [edx]
0x987D90: mov     [eax], cl
0x987D92: inc     eax
0x987D93: inc     edx
0x987D94: cmp     cl, bl
0x987D96: jz      short loc_987DA0
0x987D98: dec     edi
0x987D99: jz      short loc_987DA0
0x987D9B: dec     [ebp+MaxCount]
0x987D9E: jnz     short loc_987D8E
0x987DA0: cmp     [ebp+MaxCount], ebx
0x987DA3: jnz     short loc_987DA7
0x987DA5: mov     [eax], bl
0x987DA7: cmp     edi, ebx
0x987DA9: jnz     short loc_987D36
0x987DAB: cmp     [ebp+MaxCount], 0FFFFFFFFh
0x987DAF: jnz     short loc_987DC0
0x987DB1: mov     eax, [ebp+SizeInBytes]
0x987DB4: push    50h ; 'P'
0x987DB6: mov     [esi+eax-1], bl
0x987DBA: pop     eax
0x987DBB: jmp     loc_987D38
0x987DC0: mov     [esi], bl
0x987DC2: call    __errno
0x987DC7: push    22h ; '"'
0x987DC9: pop     ecx
0x987DCA: mov     [eax], ecx
0x987DCC: mov     esi, ecx
0x987DCE: jmp     short loc_987D52
