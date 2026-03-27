0x7D5320: push    ebx
0x7D5321: push    ebp
0x7D5322: mov     ebp, ecx
0x7D5324: push    edi
0x7D5325: mov     edi, [ebp+144h]
0x7D532B: xor     ebx, ebx
0x7D532D: cmp     edi, ebx
0x7D532F: jz      short loc_7D5380
0x7D5331: push    esi
0x7D5332: mov     ecx, [edi+8]
0x7D5335: cmp     ecx, ebx
0x7D5337: lea     eax, [edi+8]
0x7D533A: mov     edi, [edi]
0x7D533C: jz      short loc_7D537B
0x7D533E: push    4
0x7D5340: call    NiNode_GetNiPropertyByID
0x7D5345: mov     esi, eax
0x7D5347: cmp     esi, ebx
0x7D5349: jz      short loc_7D537B
0x7D534B: mov     eax, [esi]
0x7D534D: mov     edx, [eax+54h]
0x7D5350: mov     ecx, esi
0x7D5352: call    edx
0x7D5354: cmp     eax, 1
0x7D5357: jl      short loc_7D536E
0x7D5359: mov     eax, [esi]
0x7D535B: mov     edx, [eax+54h]
0x7D535E: mov     ecx, esi
0x7D5360: call    edx
0x7D5362: cmp     eax, 0Ah
0x7D5365: jg      short loc_7D536E
0x7D5367: mov     eax, 1
0x7D536C: jmp     short loc_7D5370
0x7D536E: xor     eax, eax
0x7D5370: neg     eax
0x7D5372: sbb     eax, eax
0x7D5374: and     eax, esi
0x7D5376: jz      short loc_7D537B
0x7D5378: mov     [eax+24h], ebx
0x7D537B: cmp     edi, ebx
0x7D537D: jnz     short loc_7D5332
0x7D537F: pop     esi
0x7D5380: pop     edi
0x7D5381: mov     [ebp+144h], ebx
0x7D5387: pop     ebp
0x7D5388: pop     ebx
0x7D5389: retn
