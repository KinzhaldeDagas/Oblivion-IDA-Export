0x996686: dec     dword ptr [ebp-0Ch]
0x996689: jnz     short loc_996695
0x99668B: test    ecx, ecx
0x99668D: jz      short loc_996695
0x99668F: mov     byte ptr [ebp+3], 1
0x996693: jmp     short __input_l___$getnum$25615
0x996695: mov     edx, [ebp-14h]
0x996698: inc     dword ptr [ebp+4]
0x99669B: call    __inc
0x9966A0: mov     ebx, eax
0x9966A2: mov     [ebp-4], ebx
