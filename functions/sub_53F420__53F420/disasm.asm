0x53F420: push    ebx
0x53F421: mov     ebx, ecx
0x53F423: cmp     dword ptr [ebx+8], 0
0x53F427: jnz     loc_53F4BA
0x53F42D: push    edi
0x53F42E: mov     edi, [esp+8+arg_0]
0x53F432: test    edi, edi
0x53F434: jz      short loc_53F4B0
0x53F436: movzx   eax, word ptr [edi+8]
0x53F43A: cmp     ax, 0FFFFh
0x53F43E: jnz     short loc_53F453
0x53F440: mov     eax, [edi+4]
0x53F443: lea     edx, [eax+1]
0x53F446: mov     cl, [eax]
0x53F448: add     eax, 1
0x53F44B: test    cl, cl
0x53F44D: jnz     short loc_53F446
0x53F44F: sub     eax, edx
0x53F451: jmp     short loc_53F456
0x53F453: movzx   eax, ax
0x53F456: test    eax, eax
0x53F458: jz      short loc_53F4B0
0x53F45A: mov     eax, [edi]
0x53F45C: mov     edx, [eax+14h]
0x53F45F: push    0
0x53F461: push    0
0x53F463: push    0
0x53F465: push    0
0x53F467: push    0
0x53F469: push    0
0x53F46B: mov     ecx, edi
0x53F46D: call    edx
0x53F46F: mov     ecx, ds:0B33A1Ch
0x53F475: push    eax
0x53F476: lea     eax, [esp+24h+arg_0]
0x53F47A: push    eax
0x53F47B: call    sub_43B420
0x53F480: mov     eax, [esp+8+arg_0]
0x53F484: test    eax, eax
0x53F486: jz      short loc_53F4A8
0x53F488: push    esi
0x53F489: mov     esi, eax
0x53F48B: add     eax, 8
0x53F48E: push    eax; lpAddend
0x53F48F: call    dword ptr ds:0A2807Ch
0x53F495: test    eax, eax
0x53F497: jnz     short loc_53F4A7
0x53F499: test    esi, esi
0x53F49B: jz      short loc_53F4A7
0x53F49D: mov     edx, [esi]
0x53F49F: mov     eax, [edx]
0x53F4A1: push    1
0x53F4A3: mov     ecx, esi
0x53F4A5: call    eax
0x53F4A7: pop     esi
0x53F4A8: mov     [ebx+14h], edi
0x53F4AB: pop     edi
0x53F4AC: pop     ebx
0x53F4AD: retn    4
0x53F4B0: push    0
0x53F4B2: mov     ecx, ebx
0x53F4B4: call    sub_53F1F0
0x53F4B9: pop     edi
0x53F4BA: pop     ebx
0x53F4BB: retn    4
