0x4D7470: push    edi
0x4D7471: mov     edi, ecx
0x4D7473: mov     eax, [edi]
0x4D7475: mov     edx, [eax+170h]
0x4D747B: call    edx
0x4D747D: cmp     byte ptr [eax+4], 20h ; ' '
0x4D7481: jnz     short loc_4D74A9
0x4D7483: mov     eax, [edi]
0x4D7485: mov     edx, [eax+170h]
0x4D748B: mov     ecx, edi
0x4D748D: call    edx
0x4D748F: test    eax, eax
0x4D7491: jz      short loc_4D74A9
0x4D7493: push    esi
0x4D7494: xor     esi, esi
0x4D7496: push    0
0x4D7498: push    esi
0x4D7499: mov     ecx, edi
0x4D749B: call    sub_4D7300
0x4D74A0: add     esi, 1
0x4D74A3: cmp     esi, 1Eh
0x4D74A6: jb      short loc_4D7496
0x4D74A8: pop     esi
0x4D74A9: pop     edi
0x4D74AA: retn
