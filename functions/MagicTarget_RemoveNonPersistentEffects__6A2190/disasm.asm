0x6A2190: mov     eax, [ecx]
0x6A2192: mov     edx, [eax+8]
0x6A2195: push    ebx
0x6A2196: call    edx
0x6A2198: mov     ebx, eax
0x6A219A: test    ebx, ebx
0x6A219C: jz      loc_6A2243
0x6A21A2: push    ebp
0x6A21A3: mov     ebp, [esp+8+arg_0]
0x6A21A7: push    esi
0x6A21A8: push    edi
0x6A21A9: lea     esp, [esp+0]
0x6A21B0: mov     eax, [ebx+4]
0x6A21B3: test    eax, eax
0x6A21B5: jnz     short loc_6A21BF
0x6A21B7: cmp     [ebx], eax
0x6A21B9: jz      loc_6A2240
0x6A21BF: mov     edi, [ebx]
0x6A21C1: test    edi, edi
0x6A21C3: mov     ebx, eax
0x6A21C5: jz      short loc_6A2238
0x6A21C7: mov     esi, [edi+8]
0x6A21CA: mov     eax, [esi]
0x6A21CC: mov     edx, [eax+18h]
0x6A21CF: mov     ecx, esi
0x6A21D1: call    edx
0x6A21D3: test    eax, eax
0x6A21D5: jz      short loc_6A2230
0x6A21D7: mov     eax, [esi]
0x6A21D9: mov     edx, [eax+18h]
0x6A21DC: mov     ecx, esi
0x6A21DE: call    edx
0x6A21E0: cmp     eax, 2
0x6A21E3: jz      short loc_6A2230
0x6A21E5: mov     eax, [esi]
0x6A21E7: mov     edx, [eax+18h]
0x6A21EA: mov     ecx, esi
0x6A21EC: call    edx
0x6A21EE: cmp     eax, 3
0x6A21F1: jz      short loc_6A2230
0x6A21F3: mov     eax, [esi]
0x6A21F5: mov     edx, [eax+18h]
0x6A21F8: mov     ecx, esi
0x6A21FA: call    edx
0x6A21FC: cmp     eax, 7
0x6A21FF: jz      short loc_6A2230
0x6A2201: mov     eax, [esi]
0x6A2203: mov     edx, [eax+18h]
0x6A2206: mov     ecx, esi
0x6A2208: call    edx
0x6A220A: cmp     eax, 8
0x6A220D: jz      short loc_6A2230
0x6A220F: push    0; int
0x6A2211: push    offset ??_R0?AVEnchantmentItem@@@8; struct TypeDescriptor *
0x6A2216: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x6A221B: push    0; int
0x6A221D: push    esi; void *
0x6A221E: call    OblivionDynamicCast
0x6A2223: add     esp, 14h
0x6A2226: test    eax, eax
0x6A2228: jz      short loc_6A2238
0x6A222A: cmp     dword ptr [eax+34h], 0
0x6A222E: jnz     short loc_6A2238
0x6A2230: push    ebp
0x6A2231: mov     ecx, edi
0x6A2233: call    ActiveEffect_Base_Remove
0x6A2238: test    ebx, ebx
0x6A223A: jnz     loc_6A21B0
0x6A2240: pop     edi
0x6A2241: pop     esi
0x6A2242: pop     ebp
0x6A2243: pop     ebx
0x6A2244: retn    4
