0x7F2420: push    0FFFFFFFFh
0x7F2422: push    offset ??1SpeedTreeShaderPPLightingProperty@@UAE@XZ_SEH
0x7F2427: mov     eax, large fs:0
0x7F242D: push    eax
0x7F242E: push    ecx
0x7F242F: push    ebx
0x7F2430: push    esi
0x7F2431: push    edi
0x7F2432: mov     eax, ds:0B30AACh
0x7F2437: xor     eax, esp
0x7F2439: push    eax
0x7F243A: lea     eax, [esp+20h+var_C]
0x7F243E: mov     large fs:0, eax
0x7F2444: mov     esi, ecx
0x7F2446: mov     [esp+20h+var_10], esi
0x7F244A: call    ??0BSShaderPPLightingProperty@@QAE@XZ; BSShaderPPLightingProperty::BSShaderPPLightingProperty(void)
0x7F244F: mov     dword ptr [esi], offset ??_7SpeedTreeShaderPPLightingProperty@@6B@; const SpeedTreeShaderPPLightingProperty::`vftable'
0x7F2455: mov     [esp+20h+var_4], 0
0x7F245D: mov     dword ptr [esi+0F0h], 0
0x7F2467: mov     edi, [esi+0F0h]
0x7F246D: mov     ebx, [esp+20h+arg_0]
0x7F2471: cmp     edi, ebx
0x7F2473: mov     byte ptr [esp+20h+var_4], 1
0x7F2478: jz      short loc_7F24AE
0x7F247A: test    edi, edi
0x7F247C: jz      short loc_7F249A
0x7F247E: lea     eax, [edi+4]
0x7F2481: push    eax; lpAddend
0x7F2482: call    dword ptr ds:0A2807Ch
0x7F2488: test    eax, eax
0x7F248A: jnz     short loc_7F249A
0x7F248C: test    edi, edi
0x7F248E: jz      short loc_7F249A
0x7F2490: mov     edx, [edi]
0x7F2492: mov     eax, [edx]
0x7F2494: push    1
0x7F2496: mov     ecx, edi
0x7F2498: call    eax
0x7F249A: test    ebx, ebx
0x7F249C: mov     [esi+0F0h], ebx
0x7F24A2: jz      short loc_7F24AE
0x7F24A4: add     ebx, 4
0x7F24A7: push    ebx; lpAddend
0x7F24A8: call    dword ptr ds:0A28078h
0x7F24AE: mov     eax, esi
0x7F24B0: mov     ecx, dword ptr [esp+20h+var_C]
0x7F24B4: mov     large fs:0, ecx
0x7F24BB: pop     ecx
0x7F24BC: pop     edi
0x7F24BD: pop     esi
0x7F24BE: pop     ebx
0x7F24BF: add     esp, 10h
0x7F24C2: retn    4
