0x7F24E0: push    0FFFFFFFFh
0x7F24E2: push    offset ??1SpeedTreeShaderPPLightingProperty@@UAE@XZ_SEH
0x7F24E7: mov     eax, large fs:0
0x7F24ED: push    eax
0x7F24EE: push    ecx
0x7F24EF: push    ebp
0x7F24F0: push    esi
0x7F24F1: push    edi
0x7F24F2: mov     eax, ds:0B30AACh
0x7F24F7: xor     eax, esp
0x7F24F9: push    eax
0x7F24FA: lea     eax, [esp+20h+var_C]
0x7F24FE: mov     large fs:0, eax
0x7F2504: mov     edi, ecx
0x7F2506: mov     [esp+20h+var_10], edi
0x7F250A: mov     dword ptr [edi], offset ??_7SpeedTreeShaderPPLightingProperty@@6B@; const SpeedTreeShaderPPLightingProperty::`vftable'
0x7F2510: mov     esi, [edi+0F0h]
0x7F2516: test    esi, esi
0x7F2518: mov     ebp, ds:0A2807Ch
0x7F251E: mov     [esp+20h+var_4], 1
0x7F2526: jz      short loc_7F254A
0x7F2528: lea     eax, [esi+4]
0x7F252B: push    eax; lpAddend
0x7F252C: call    ebp ; InterlockedDecrement
0x7F252E: test    eax, eax
0x7F2530: jnz     short loc_7F2540
0x7F2532: test    esi, esi
0x7F2534: jz      short loc_7F2540
0x7F2536: mov     edx, [esi]
0x7F2538: mov     eax, [edx]
0x7F253A: push    1
0x7F253C: mov     ecx, esi
0x7F253E: call    eax
0x7F2540: mov     dword ptr [edi+0F0h], 0
0x7F254A: mov     esi, [edi+0F0h]
0x7F2550: test    esi, esi
0x7F2552: mov     byte ptr [esp+20h+var_4], 0
0x7F2557: jz      short loc_7F2571
0x7F2559: lea     ecx, [esi+4]
0x7F255C: push    ecx; lpAddend
0x7F255D: call    ebp ; InterlockedDecrement
0x7F255F: test    eax, eax
0x7F2561: jnz     short loc_7F2571
0x7F2563: test    esi, esi
0x7F2565: jz      short loc_7F2571
0x7F2567: mov     edx, [esi]
0x7F2569: mov     eax, [edx]
0x7F256B: push    1
0x7F256D: mov     ecx, esi
0x7F256F: call    eax
0x7F2571: mov     ecx, edi; this
0x7F2573: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7F257B: call    ??1BSShaderPPLightingProperty@@UAE@XZ; BSShaderPPLightingProperty::~BSShaderPPLightingProperty(void)
0x7F2580: mov     ecx, [esp+20h+var_C]
0x7F2584: mov     large fs:0, ecx
0x7F258B: pop     ecx
0x7F258C: pop     edi
0x7F258D: pop     esi
0x7F258E: pop     ebp
0x7F258F: add     esp, 10h
0x7F2592: retn
