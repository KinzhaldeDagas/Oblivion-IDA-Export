0x982453: push    esi
0x982454: push    edi
0x982455: mov     edi, [esp+8+File]
0x982459: xor     esi, esi
0x98245B: cmp     edi, esi
0x98245D: jnz     short loc_98247A
0x98245F: call    __errno
0x982464: push    16h
0x982466: pop     edi
0x982467: push    esi
0x982468: push    esi
0x982469: push    esi
0x98246A: push    esi
0x98246B: push    esi
0x98246C: mov     [eax], edi
0x98246E: call    __invalid_parameter
0x982473: add     esp, 14h
0x982476: mov     eax, edi
0x982478: jmp     short loc_9824A0
0x98247A: push    80h ; '€'; ShFlag
0x98247F: push    [esp+0Ch+Mode]; Mode
0x982483: push    [esp+10h+Filename]; Filename
0x982487: call    __fsopen
0x98248C: add     esp, 0Ch
0x98248F: cmp     eax, esi
0x982491: mov     [edi], eax
0x982493: jz      short loc_982499
0x982495: xor     eax, eax
0x982497: jmp     short loc_9824A0
0x982499: call    __errno
0x98249E: mov     eax, [eax]
0x9824A0: pop     edi
0x9824A1: pop     esi
0x9824A2: retn
