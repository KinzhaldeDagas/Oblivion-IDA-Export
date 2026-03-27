0x7B26C0: push    0FFFFFFFFh
0x7B26C2: push    offset SEH_6E10B0
0x7B26C7: mov     eax, large fs:0
0x7B26CD: push    eax
0x7B26CE: push    ebx
0x7B26CF: push    ebp
0x7B26D0: push    esi
0x7B26D1: push    edi
0x7B26D2: mov     eax, ds:0B30AACh
0x7B26D7: xor     eax, esp
0x7B26D9: push    eax
0x7B26DA: lea     eax, [esp+20h+var_C]
0x7B26DE: mov     large fs:0, eax
0x7B26E4: mov     ebx, [esp+20h+arg_0]
0x7B26E8: mov     eax, [esp+20h+arg_4]
0x7B26EC: mov     edi, [esp+20h+arg_8]
0x7B26F0: mov     ebp, ds:0A2807Ch
0x7B26F6: mov     [ebx+4], eax
0x7B26F9: mov     esi, [ebx+8]
0x7B26FC: cmp     esi, edi
0x7B26FE: mov     [esp+20h+var_4], 0
0x7B2706: jz      short loc_7B2735
0x7B2708: test    esi, esi
0x7B270A: jz      short loc_7B2724
0x7B270C: lea     ecx, [esi+4]
0x7B270F: push    ecx; lpAddend
0x7B2710: call    ebp ; InterlockedDecrement
0x7B2712: test    eax, eax
0x7B2714: jnz     short loc_7B2724
0x7B2716: test    esi, esi
0x7B2718: jz      short loc_7B2724
0x7B271A: mov     edx, [esi]
0x7B271C: mov     eax, [edx]
0x7B271E: push    1
0x7B2720: mov     ecx, esi
0x7B2722: call    eax
0x7B2724: test    edi, edi
0x7B2726: mov     [ebx+8], edi
0x7B2729: jz      short loc_7B2735
0x7B272B: lea     ecx, [edi+4]
0x7B272E: push    ecx; lpAddend
0x7B272F: call    dword ptr ds:0A28078h
0x7B2735: test    edi, edi
0x7B2737: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7B273F: jz      short loc_7B2755
0x7B2741: lea     edx, [edi+4]
0x7B2744: push    edx; lpAddend
0x7B2745: call    ebp ; InterlockedDecrement
0x7B2747: test    eax, eax
0x7B2749: jnz     short loc_7B2755
0x7B274B: mov     eax, [edi]
0x7B274D: mov     edx, [eax]
0x7B274F: push    1
0x7B2751: mov     ecx, edi
0x7B2753: call    edx
0x7B2755: mov     ecx, dword ptr [esp+20h+var_C]
0x7B2759: mov     large fs:0, ecx
0x7B2760: pop     ecx
0x7B2761: pop     edi
0x7B2762: pop     esi
0x7B2763: pop     ebp
0x7B2764: pop     ebx
0x7B2765: add     esp, 0Ch
0x7B2768: retn    0Ch
