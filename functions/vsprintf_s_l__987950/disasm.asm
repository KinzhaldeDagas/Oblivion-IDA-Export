0x987950: push    ebp
0x987951: mov     ebp, esp
0x987953: push    ebx
0x987954: xor     ebx, ebx
0x987956: cmp     [ebp+Format], ebx
0x987959: jnz     short loc_987978
0x98795B: call    __errno
0x987960: push    ebx
0x987961: push    ebx
0x987962: push    ebx
0x987963: push    ebx
0x987964: push    ebx
0x987965: mov     dword ptr [eax], 16h
0x98796B: call    __invalid_parameter
0x987970: add     esp, 14h
0x987973: or      eax, 0FFFFFFFFh
0x987976: jmp     short loc_9879D3
0x987978: push    esi
0x987979: mov     esi, [ebp+DstBuf]
0x98797C: cmp     esi, ebx
0x98797E: jz      short loc_987985
0x987980: cmp     [ebp+DstSize], ebx
0x987983: ja      short loc_987992
0x987985: call    __errno
0x98798A: mov     dword ptr [eax], 16h
0x987990: jmp     short loc_9879C2
0x987992: push    [ebp+ArgList]
0x987995: push    [ebp+Locale]
0x987998: push    [ebp+Format]
0x98799B: push    [ebp+DstSize]
0x98799E: push    esi
0x98799F: push    offset __output_s_l
0x9879A4: call    __vsnprintf_helper
0x9879A9: add     esp, 18h
0x9879AC: cmp     eax, ebx
0x9879AE: jge     short loc_9879B2
0x9879B0: mov     [esi], bl
0x9879B2: cmp     eax, 0FFFFFFFEh
0x9879B5: jnz     short loc_9879D2
0x9879B7: call    __errno
0x9879BC: mov     dword ptr [eax], 22h ; '"'
0x9879C2: push    ebx
0x9879C3: push    ebx
0x9879C4: push    ebx
0x9879C5: push    ebx
0x9879C6: push    ebx
0x9879C7: call    __invalid_parameter
0x9879CC: add     esp, 14h
0x9879CF: or      eax, 0FFFFFFFFh
0x9879D2: pop     esi
0x9879D3: pop     ebx
0x9879D4: pop     ebp
0x9879D5: retn
