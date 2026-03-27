0x6A2431: mov     eax, [ebx+4]
0x6A2434: test    eax, eax
0x6A2436: jnz     short loc_6A243C
0x6A2438: cmp     [ebx], eax
0x6A243A: jz      short MagicTarget_ProcessEffectsFromItem___Done
0x6A243C: mov     esi, [ebx]
0x6A243E: test    esi, esi
0x6A2440: mov     ebp, eax
0x6A2442: jz      short MagicTarget_ProcessEffectsFromItem___ActiveEffectLoop_next
0x6A2444: mov     ecx, [esp+arg_10]
0x6A2448: cmp     [esi+8], ecx
0x6A244B: jnz     short MagicTarget_ProcessEffectsFromItem___ActiveEffectLoop_next
0x6A244D: cmp     byte ptr [esi+10h], 0
0x6A2451: jnz     short loc_6A2464
0x6A2453: fld     dword ptr ds:0A2FAACh
0x6A2459: push    ecx
0x6A245A: mov     ecx, esi
0x6A245C: fstp    [esp+4+var_4]
0x6A245F: call    ActiveEffect_Base_ProcessEffect
0x6A2464: cmp     byte ptr [esi+11h], 0
0x6A2468: jz      short MagicTarget_ProcessEffectsFromItem___ActiveEffectLoop_next
0x6A246A: mov     edx, [edi]
0x6A246C: mov     eax, [edx+8]
0x6A246F: mov     ecx, edi
0x6A2471: call    eax
0x6A2473: cmp     ebx, eax
0x6A2475: jnz     short loc_6A2479
0x6A2477: mov     ebp, ebx
0x6A2479: mov     edx, [edi]
0x6A247B: mov     eax, [edx+8]
0x6A247E: push    esi
0x6A247F: mov     ecx, edi
0x6A2481: call    eax
0x6A2483: mov     ecx, eax
0x6A2485: call    BSSimpleList_Remove
0x6A248A: mov     edx, [edi]
0x6A248C: mov     eax, [edx+14h]
0x6A248F: push    esi
0x6A2490: mov     ecx, edi
0x6A2492: call    eax
0x6A2494: mov     edx, [esi]
0x6A2496: mov     eax, [edx]
0x6A2498: push    1
0x6A249A: mov     ecx, esi
0x6A249C: call    eax
