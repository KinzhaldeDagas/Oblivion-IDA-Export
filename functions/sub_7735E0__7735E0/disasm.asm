0x7735E0: mov     ecx, ds:0B42838h
0x7735E6: cmp     dword ptr [ecx+8], 0
0x7735EA: push    esi
0x7735EB: lea     esi, [ecx+8]
0x7735EE: push    edi
0x7735EF: mov     edi, ecx
0x7735F1: jnz     short loc_773607
0x7735F3: mov     eax, [ecx+0Ch]
0x7735F6: push    ebx
0x7735F7: lea     ebx, [ecx+0Ch]
0x7735FA: push    eax
0x7735FB: call    sub_7734E0
0x773600: mov     ecx, [ebx]
0x773602: add     ecx, ecx
0x773604: mov     [ebx], ecx
0x773606: pop     ebx
0x773607: mov     ecx, [edi]
0x773609: mov     eax, [ecx]
0x77360B: add     dword ptr [esi], 0FFFFFFFFh
0x77360E: mov     esi, [esi]
0x773610: mov     edx, [ecx+esi*4]
0x773613: mov     [ecx], edx
0x773615: cmp     byte ptr [eax], 0
0x773618: pop     edi
0x773619: pop     esi
0x77361A: jnz     short locret_77361F
0x77361C: mov     byte ptr [eax], 1
0x77361F: retn
