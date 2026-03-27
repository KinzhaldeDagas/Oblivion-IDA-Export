0x4CA640: test    byte ptr [ecx+24h], 1
0x4CA644: jnz     short loc_4CA66F
0x4CA646: mov     eax, [ecx+3Ch]
0x4CA649: test    eax, eax
0x4CA64B: jz      short loc_4CA652
0x4CA64D: mov     ecx, [eax+4]
0x4CA650: jmp     short loc_4CA654
0x4CA652: xor     ecx, ecx
0x4CA654: test    eax, eax
0x4CA656: jz      short loc_4CA65C
0x4CA658: mov     eax, [eax]
0x4CA65A: jmp     short loc_4CA65E
0x4CA65C: xor     eax, eax
0x4CA65E: sar     ecx, 3
0x4CA661: push    ecx
0x4CA662: sar     eax, 3
0x4CA665: push    eax
0x4CA666: call    sub_4EF1D0
0x4CA66B: add     esp, 8
0x4CA66E: retn
0x4CA66F: mov     eax, [ecx+0Ch]
0x4CA672: and     eax, 0FFFFFFh
0x4CA677: xor     edx, edx
0x4CA679: mov     ecx, 64h ; 'd'
0x4CA67E: div     ecx
0x4CA680: mov     eax, 0CCCCCCCDh
0x4CA685: mul     edx
0x4CA687: mov     eax, edx
0x4CA689: shr     eax, 3
0x4CA68C: retn
