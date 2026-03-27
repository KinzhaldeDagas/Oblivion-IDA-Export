0x7D21F0: push    ebx
0x7D21F1: mov     ebx, ecx
0x7D21F3: push    edi
0x7D21F4: mov     edi, [ebx+0E8h]
0x7D21FA: test    edi, edi
0x7D21FC: jz      short loc_7D2250
0x7D21FE: push    esi
0x7D21FF: nop
0x7D2200: lea     eax, [edi+8]
0x7D2203: mov     eax, [eax]
0x7D2205: mov     edi, [edi]
0x7D2207: push    4
0x7D2209: mov     ecx, eax
0x7D220B: call    NiNode_GetNiPropertyByID
0x7D2210: mov     esi, eax
0x7D2212: test    esi, esi
0x7D2214: jz      short loc_7D224B
0x7D2216: mov     eax, [esi]
0x7D2218: mov     edx, [eax+54h]
0x7D221B: mov     ecx, esi
0x7D221D: call    edx
0x7D221F: cmp     eax, 1
0x7D2222: jl      short loc_7D2239
0x7D2224: mov     eax, [esi]
0x7D2226: mov     edx, [eax+54h]
0x7D2229: mov     ecx, esi
0x7D222B: call    edx
0x7D222D: cmp     eax, 0Ah
0x7D2230: jg      short loc_7D2239
0x7D2232: mov     eax, 1
0x7D2237: jmp     short loc_7D223B
0x7D2239: xor     eax, eax
0x7D223B: neg     eax
0x7D223D: sbb     eax, eax
0x7D223F: and     eax, esi
0x7D2241: jz      short loc_7D224B
0x7D2243: push    ebx
0x7D2244: mov     ecx, eax
0x7D2246: call    sub_7EE720
0x7D224B: test    edi, edi
0x7D224D: jnz     short loc_7D2200
0x7D224F: pop     esi
0x7D2250: lea     ecx, [ebx+0E4h]
0x7D2256: mov     dword ptr ds:0B42E90h, 0FFFFFFFFh
0x7D2260: mov     dword ptr ds:0B42EB8h, 0
0x7D226A: call    NiTPointerList__FreeAllNodes
0x7D226F: pop     edi
0x7D2270: lea     ecx, [ebx+134h]
0x7D2276: pop     ebx
0x7D2277: jmp     NiTPointerList__FreeAllNodes
