0x7332E0: push    ebx
0x7332E1: push    esi
0x7332E2: push    edi
0x7332E3: mov     edi, ds:0B3F928h
0x7332E9: xor     ebx, ebx
0x7332EB: cmp     edi, ebx
0x7332ED: mov     esi, ecx
0x7332EF: jz      loc_733371
0x7332F5: mov     eax, [esi]
0x7332F7: mov     edx, [eax+5Ch]
0x7332FA: call    edx
0x7332FC: mov     eax, [esi+20h]
0x7332FF: cmp     eax, ebx
0x733301: mov     [esi+30h], eax
0x733304: jz      short loc_733338
0x733306: mov     ecx, [esi+28h]
0x733309: add     eax, 0FFFFFFFFh
0x73330C: mov     [esi+30h], eax
0x73330F: mov     ecx, [ecx+eax*4]
0x733312: cmp     ecx, ebx
0x733314: jz      short loc_733338
0x733316: mov     edx, [ecx]
0x733318: mov     eax, [edx+84h]
0x73331E: push    edi
0x73331F: call    eax
0x733321: mov     eax, [esi+30h]
0x733324: cmp     eax, ebx
0x733326: jz      short loc_733338
0x733328: mov     ecx, [esi+28h]
0x73332B: add     eax, 0FFFFFFFFh
0x73332E: mov     [esi+30h], eax
0x733331: mov     ecx, [ecx+eax*4]
0x733334: cmp     ecx, ebx
0x733336: jnz     short loc_733316
0x733338: cmp     [esi+18h], ebx
0x73333B: jz      short loc_733367
0x73333D: lea     edi, [esi+0Ch]
0x733340: mov     ecx, [edi+4]
0x733343: mov     eax, [ecx]
0x733345: cmp     eax, ebx
0x733347: mov     [edi+4], eax
0x73334A: jz      short loc_733351
0x73334C: mov     [eax+4], ebx
0x73334F: jmp     short loc_733354
0x733351: mov     [edi+8], ebx
0x733354: mov     edx, [edi]
0x733356: mov     eax, [edx+8]
0x733359: push    ecx
0x73335A: mov     ecx, edi
0x73335C: call    eax
0x73335E: add     dword ptr [edi+0Ch], 0FFFFFFFFh
0x733362: cmp     [esi+18h], ebx
0x733365: jnz     short loc_733340
0x733367: pop     edi
0x733368: mov     ecx, esi
0x73336A: pop     esi
0x73336B: pop     ebx
0x73336C: jmp     sub_733830
0x733371: pop     edi
0x733372: pop     esi
0x733373: pop     ebx
0x733374: retn
