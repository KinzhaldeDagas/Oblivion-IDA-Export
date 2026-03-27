0x473D90: push    0FFFFFFFFh
0x473D92: push    offset ??0AnimSequenceMultiple@@QAE@XZ_SEH
0x473D97: mov     eax, large fs:0
0x473D9D: push    eax
0x473D9E: push    ecx
0x473D9F: push    ebx
0x473DA0: push    esi
0x473DA1: push    edi
0x473DA2: mov     eax, ds:0B30AACh
0x473DA7: xor     eax, esp
0x473DA9: push    eax
0x473DAA: lea     eax, [esp+20h+var_C]
0x473DAE: mov     large fs:0, eax
0x473DB4: mov     edi, ecx
0x473DB6: mov     [esp+20h+var_10], edi
0x473DBA: xor     ebx, ebx
0x473DBC: push    10h; Size
0x473DBE: mov     [esp+24h+var_4], ebx
0x473DC2: mov     dword ptr [edi], offset ??_7AnimSequenceMultiple@@6B@; const AnimSequenceMultiple::`vftable'
0x473DC8: call    FormHeapAlloc
0x473DCD: add     esp, 4
0x473DD0: cmp     eax, ebx
0x473DD2: jz      short loc_473DE5
0x473DD4: mov     [eax+0Ch], ebx
0x473DD7: mov     [eax+4], ebx
0x473DDA: mov     [eax+8], ebx
0x473DDD: mov     dword ptr [eax], offset ??_7?$NiTList@PBVBSAnimGroupSequence@@@@6B@; const NiTList<BSAnimGroupSequence const *>::`vftable'
0x473DE3: jmp     short loc_473DE7
0x473DE5: xor     eax, eax
0x473DE7: mov     esi, [esp+20h+arg_0]
0x473DEB: mov     [edi+4], eax
0x473DEE: mov     eax, [esi]
0x473DF0: mov     edx, [eax+10h]
0x473DF3: push    0FFFFFFFFh
0x473DF5: mov     ecx, esi
0x473DF7: call    edx
0x473DF9: push    eax
0x473DFA: mov     ecx, edi
0x473DFC: call    AddMultiple
0x473E01: mov     eax, [esi]
0x473E03: mov     edx, [eax+4]
0x473E06: push    ebx
0x473E07: mov     ecx, esi
0x473E09: call    edx
0x473E0B: mov     eax, [esi]
0x473E0D: mov     edx, [eax]
0x473E0F: push    1
0x473E11: mov     ecx, esi
0x473E13: call    edx
0x473E15: mov     eax, edi
0x473E17: mov     ecx, dword ptr [esp+20h+var_C]
0x473E1B: mov     large fs:0, ecx
0x473E22: pop     ecx
0x473E23: pop     edi
0x473E24: pop     esi
0x473E25: pop     ebx
0x473E26: add     esp, 10h
0x473E29: retn    4
