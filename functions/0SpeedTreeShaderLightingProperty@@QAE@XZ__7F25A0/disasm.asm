0x7F25A0: push    0FFFFFFFFh
0x7F25A2: push    offset ??0SpeedTreeShaderLightingProperty@@QAE@XZ_SEH
0x7F25A7: mov     eax, large fs:0
0x7F25AD: push    eax
0x7F25AE: push    ecx
0x7F25AF: push    ebx
0x7F25B0: push    ebp
0x7F25B1: push    esi
0x7F25B2: push    edi
0x7F25B3: mov     eax, ds:0B30AACh
0x7F25B8: xor     eax, esp
0x7F25BA: push    eax
0x7F25BB: lea     eax, [esp+24h+var_C]
0x7F25BF: mov     large fs:0, eax
0x7F25C5: mov     esi, ecx
0x7F25C7: mov     [esp+24h+var_10], esi
0x7F25CB: call    ??0BSShaderLightingProperty@@QAE@XZ; BSShaderLightingProperty::BSShaderLightingProperty(void)
0x7F25D0: xor     ebp, ebp
0x7F25D2: mov     dword ptr [esi], offset ??_7SpeedTreeShaderLightingProperty@@6B@; const SpeedTreeShaderLightingProperty::`vftable'
0x7F25D8: mov     [esp+24h+var_4], ebp
0x7F25DC: mov     [esi+9Ch], ebp
0x7F25E2: mov     [esi+0A4h], ebp
0x7F25E8: mov     ebx, [esp+24h+arg_0]
0x7F25EC: mov     edi, ebp
0x7F25EE: cmp     edi, ebx
0x7F25F0: mov     byte ptr [esp+24h+var_4], 2
0x7F25F5: jz      short loc_7F262B
0x7F25F7: cmp     edi, ebp
0x7F25F9: jz      short loc_7F2617
0x7F25FB: lea     eax, [edi+4]
0x7F25FE: push    eax; lpAddend
0x7F25FF: call    dword ptr ds:0A2807Ch
0x7F2605: test    eax, eax
0x7F2607: jnz     short loc_7F2617
0x7F2609: cmp     edi, ebp
0x7F260B: jz      short loc_7F2617
0x7F260D: mov     edx, [edi]
0x7F260F: mov     eax, [edx]
0x7F2611: push    1
0x7F2613: mov     ecx, edi
0x7F2615: call    eax
0x7F2617: cmp     ebx, ebp
0x7F2619: mov     [esi+0A4h], ebx
0x7F261F: jz      short loc_7F262B
0x7F2621: add     ebx, 4
0x7F2624: push    ebx; lpAddend
0x7F2625: call    dword ptr ds:0A28078h
0x7F262B: mov     edi, [esi+9Ch]
0x7F2631: cmp     edi, ebp
0x7F2633: jz      short loc_7F2657
0x7F2635: lea     ecx, [edi+4]
0x7F2638: push    ecx; lpAddend
0x7F2639: call    dword ptr ds:0A2807Ch
0x7F263F: test    eax, eax
0x7F2641: jnz     short loc_7F2651
0x7F2643: cmp     edi, ebp
0x7F2645: jz      short loc_7F2651
0x7F2647: mov     edx, [edi]
0x7F2649: mov     eax, [edx]
0x7F264B: push    1
0x7F264D: mov     ecx, edi
0x7F264F: call    eax
0x7F2651: mov     [esi+9Ch], ebp
0x7F2657: mov     eax, esi
0x7F2659: mov     dword ptr [esi+0A0h], 1
0x7F2663: mov     ecx, dword ptr [esp+24h+var_C]
0x7F2667: mov     large fs:0, ecx
0x7F266E: pop     ecx
0x7F266F: pop     edi
0x7F2670: pop     esi
0x7F2671: pop     ebp
0x7F2672: pop     ebx
0x7F2673: add     esp, 10h
0x7F2676: retn    4
