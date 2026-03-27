0x7F2690: push    0FFFFFFFFh
0x7F2692: push    offset ??1SpeedTreeShaderLightingProperty@@UAE@XZ_SEH
0x7F2697: mov     eax, large fs:0
0x7F269D: push    eax
0x7F269E: push    ecx
0x7F269F: push    ebp
0x7F26A0: push    esi
0x7F26A1: push    edi
0x7F26A2: mov     eax, ds:0B30AACh
0x7F26A7: xor     eax, esp
0x7F26A9: push    eax
0x7F26AA: lea     eax, [esp+20h+var_C]
0x7F26AE: mov     large fs:0, eax
0x7F26B4: mov     esi, ecx
0x7F26B6: mov     [esp+20h+var_10], esi
0x7F26BA: mov     dword ptr [esi], offset ??_7SpeedTreeShaderLightingProperty@@6B@; const SpeedTreeShaderLightingProperty::`vftable'
0x7F26C0: mov     edi, [esi+0A4h]
0x7F26C6: test    edi, edi
0x7F26C8: mov     ebp, ds:0A2807Ch
0x7F26CE: mov     [esp+20h+var_4], 2
0x7F26D6: jz      short loc_7F26FA
0x7F26D8: lea     eax, [edi+4]
0x7F26DB: push    eax; lpAddend
0x7F26DC: call    ebp ; InterlockedDecrement
0x7F26DE: test    eax, eax
0x7F26E0: jnz     short loc_7F26F0
0x7F26E2: test    edi, edi
0x7F26E4: jz      short loc_7F26F0
0x7F26E6: mov     edx, [edi]
0x7F26E8: mov     eax, [edx]
0x7F26EA: push    1
0x7F26EC: mov     ecx, edi
0x7F26EE: call    eax
0x7F26F0: mov     dword ptr [esi+0A4h], 0
0x7F26FA: mov     edi, [esi+9Ch]
0x7F2700: test    edi, edi
0x7F2702: jz      short loc_7F2726
0x7F2704: lea     ecx, [edi+4]
0x7F2707: push    ecx; lpAddend
0x7F2708: call    ebp ; InterlockedDecrement
0x7F270A: test    eax, eax
0x7F270C: jnz     short loc_7F271C
0x7F270E: test    edi, edi
0x7F2710: jz      short loc_7F271C
0x7F2712: mov     edx, [edi]
0x7F2714: mov     eax, [edx]
0x7F2716: push    1
0x7F2718: mov     ecx, edi
0x7F271A: call    eax
0x7F271C: mov     dword ptr [esi+9Ch], 0
0x7F2726: mov     edi, [esi+0A4h]
0x7F272C: test    edi, edi
0x7F272E: mov     byte ptr [esp+20h+var_4], 1
0x7F2733: jz      short loc_7F274D
0x7F2735: lea     ecx, [edi+4]
0x7F2738: push    ecx; lpAddend
0x7F2739: call    ebp ; InterlockedDecrement
0x7F273B: test    eax, eax
0x7F273D: jnz     short loc_7F274D
0x7F273F: test    edi, edi
0x7F2741: jz      short loc_7F274D
0x7F2743: mov     edx, [edi]
0x7F2745: mov     eax, [edx]
0x7F2747: push    1
0x7F2749: mov     ecx, edi
0x7F274B: call    eax
0x7F274D: mov     edi, [esi+9Ch]
0x7F2753: test    edi, edi
0x7F2755: mov     byte ptr [esp+20h+var_4], 0
0x7F275A: jz      short loc_7F2774
0x7F275C: lea     ecx, [edi+4]
0x7F275F: push    ecx; lpAddend
0x7F2760: call    ebp ; InterlockedDecrement
0x7F2762: test    eax, eax
0x7F2764: jnz     short loc_7F2774
0x7F2766: test    edi, edi
0x7F2768: jz      short loc_7F2774
0x7F276A: mov     edx, [edi]
0x7F276C: mov     eax, [edx]
0x7F276E: push    1
0x7F2770: mov     ecx, edi
0x7F2772: call    eax
0x7F2774: mov     ecx, esi; this
0x7F2776: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7F277E: call    ??1BSShaderLightingProperty@@UAE@XZ; BSShaderLightingProperty::~BSShaderLightingProperty(void)
0x7F2783: mov     ecx, dword ptr [esp+20h+var_C]
0x7F2787: mov     large fs:0, ecx
0x7F278E: pop     ecx
0x7F278F: pop     edi
0x7F2790: pop     esi
0x7F2791: pop     ebp
0x7F2792: add     esp, 10h
0x7F2795: retn
