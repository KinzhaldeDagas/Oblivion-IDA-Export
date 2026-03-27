0x651F70: push    0FFFFFFFFh
0x651F72: push    offset ??1MiddleHighProcess@@UAE@XZ_SEH
0x651F77: mov     eax, large fs:0
0x651F7D: push    eax
0x651F7E: push    ecx
0x651F7F: push    ebx
0x651F80: push    ebp
0x651F81: push    esi
0x651F82: push    edi
0x651F83: mov     eax, ds:0B30AACh
0x651F88: xor     eax, esp
0x651F8A: push    eax
0x651F8B: lea     eax, [esp+24h+var_C]
0x651F8F: mov     large fs:0, eax
0x651F95: mov     esi, ecx
0x651F97: mov     [esp+24h+var_10], esi
0x651F9B: mov     dword ptr [esi], offset ??_7MiddleHighProcess@@6B@; const MiddleHighProcess::`vftable'
0x651FA1: mov     edi, [esi+174h]
0x651FA7: xor     ebx, ebx
0x651FA9: cmp     edi, ebx
0x651FAB: mov     [esp+24h+var_4], 2
0x651FB3: jz      short loc_651FE4
0x651FB5: mov     ecx, [edi]
0x651FB7: cmp     ecx, ebx
0x651FB9: jz      short loc_651FCA
0x651FBB: mov     eax, [ecx]
0x651FBD: mov     edx, [eax]
0x651FBF: push    1
0x651FC1: call    edx
0x651FC3: mov     edi, [edi+4]
0x651FC6: cmp     edi, ebx
0x651FC8: jnz     short loc_651FB5
0x651FCA: mov     ecx, [esi+174h]
0x651FD0: call    BSSimpleList_Clear
0x651FD5: mov     eax, [esi+174h]
0x651FDB: push    eax
0x651FDC: call    FormHeapFree
0x651FE1: add     esp, 4
0x651FE4: mov     edi, [esi+0E4h]
0x651FEA: cmp     edi, ebx
0x651FEC: jz      short loc_651FFE
0x651FEE: mov     ecx, edi
0x651FF0: call    ContainerEntryExtraData_DestroyDataTable
0x651FF5: push    edi
0x651FF6: call    FormHeapFree
0x651FFB: add     esp, 4
0x651FFE: mov     edi, [esi+0E8h]
0x652004: cmp     edi, ebx
0x652006: jz      short loc_652018
0x652008: mov     ecx, edi
0x65200A: call    ContainerEntryExtraData_DestroyDataTable
0x65200F: push    edi
0x652010: call    FormHeapFree
0x652015: add     esp, 4
0x652018: mov     edi, [esi+0ECh]
0x65201E: cmp     edi, ebx
0x652020: jz      short loc_652032
0x652022: mov     ecx, edi
0x652024: call    ContainerEntryExtraData_DestroyDataTable
0x652029: push    edi
0x65202A: call    FormHeapFree
0x65202F: add     esp, 4
0x652032: mov     edi, [esi+0F0h]
0x652038: cmp     edi, ebx
0x65203A: jz      short loc_65204C
0x65203C: mov     ecx, edi
0x65203E: call    ContainerEntryExtraData_DestroyDataTable
0x652043: push    edi
0x652044: call    FormHeapFree
0x652049: add     esp, 4
0x65204C: mov     ebp, ds:0A2807Ch
0x652052: mov     [esi+0E4h], ebx
0x652058: mov     [esi+0E8h], ebx
0x65205E: mov     [esi+0ECh], ebx
0x652064: mov     [esi+0F0h], ebx
0x65206A: mov     edi, [esi+118h]
0x652070: cmp     edi, ebx
0x652072: jz      short loc_652092
0x652074: lea     eax, [edi+4]
0x652077: push    eax; lpAddend
0x652078: call    ebp ; InterlockedDecrement
0x65207A: test    eax, eax
0x65207C: jnz     short loc_65208C
0x65207E: cmp     edi, ebx
0x652080: jz      short loc_65208C
0x652082: mov     edx, [edi]
0x652084: mov     eax, [edx]
0x652086: push    1
0x652088: mov     ecx, edi
0x65208A: call    eax
0x65208C: mov     [esi+118h], ebx
0x652092: cmp     [esi+0C0h], ebx
0x652098: jz      short loc_6520CA
0x65209A: mov     ecx, ds:0B33B00h
0x6520A0: call    sub_45A500
0x6520A5: test    al, al
0x6520A7: mov     ecx, [esi+0C0h]
0x6520AD: jz      short loc_6520BD
0x6520AF: push    ecx
0x6520B0: mov     ecx, ds:0B33B00h
0x6520B6: call    sub_45C7A0
0x6520BB: jmp     short loc_6520CA
0x6520BD: cmp     ecx, ebx
0x6520BF: jz      short loc_6520CA
0x6520C1: mov     edx, [ecx]
0x6520C3: mov     eax, [edx+10h]
0x6520C6: push    1
0x6520C8: call    eax
0x6520CA: cmp     [esi+0ACh], ebx
0x6520D0: lea     ecx, [esi+0A8h]
0x6520D6: jnz     short loc_6520DC
0x6520D8: cmp     [ecx], ebx
0x6520DA: jz      short loc_6520E1
0x6520DC: call    BSSimpleList_Clear
0x6520E1: mov     edi, [esi+17Ch]
0x6520E7: cmp     edi, ebx
0x6520E9: jz      short loc_6520FB
0x6520EB: mov     ecx, edi; this
0x6520ED: call    DisposeActorAnimData
0x6520F2: push    edi
0x6520F3: call    FormHeapFree
0x6520F8: add     esp, 4
0x6520FB: mov     [esi+17Ch], ebx
0x652101: mov     edi, [esi+184h]
0x652107: cmp     edi, ebx
0x652109: jz      short loc_652129
0x65210B: lea     ecx, [edi+4]
0x65210E: push    ecx; lpAddend
0x65210F: call    ebp ; InterlockedDecrement
0x652111: test    eax, eax
0x652113: jnz     short loc_652123
0x652115: cmp     edi, ebx
0x652117: jz      short loc_652123
0x652119: mov     edx, [edi]
0x65211B: mov     eax, [edx]
0x65211D: push    1
0x65211F: mov     ecx, edi
0x652121: call    eax
0x652123: mov     [esi+184h], ebx
0x652129: cmp     [esi+0B4h], ebx
0x65212F: jz      short loc_65214D
0x652131: mov     eax, [esi+0B4h]
0x652137: mov     edi, [eax+4]
0x65213A: push    eax
0x65213B: call    FormHeapFree
0x652140: add     esp, 4
0x652143: cmp     edi, ebx
0x652145: mov     [esi+0B4h], edi
0x65214B: jnz     short loc_652131
0x65214D: mov     [esi+0B0h], ebx
0x652153: mov     edi, [esi+170h]
0x652159: cmp     edi, ebx
0x65215B: jz      short loc_652195
0x65215D: lea     ecx, [ecx+0]
0x652160: cmp     [edi+4], ebx
0x652163: jnz     short loc_652169
0x652165: cmp     [edi], ebx
0x652167: jz      short loc_65217B
0x652169: mov     ecx, [edi]
0x65216B: cmp     ecx, ebx
0x65216D: jz      short loc_652174
0x65216F: call    sub_607730
0x652174: mov     edi, [edi+4]
0x652177: cmp     edi, ebx
0x652179: jnz     short loc_652160
0x65217B: mov     ecx, [esi+170h]
0x652181: call    BSSimpleList_Clear
0x652186: mov     eax, [esi+170h]
0x65218C: push    eax
0x65218D: call    FormHeapFree
0x652192: add     esp, 4
0x652195: mov     [esi+170h], ebx
0x65219B: mov     edi, [esi+184h]
0x6521A1: cmp     edi, ebx
0x6521A3: mov     byte ptr [esp+24h+var_4], 1
0x6521A8: jz      short loc_6521C2
0x6521AA: lea     ecx, [edi+4]
0x6521AD: push    ecx; lpAddend
0x6521AE: call    ebp ; InterlockedDecrement
0x6521B0: test    eax, eax
0x6521B2: jnz     short loc_6521C2
0x6521B4: cmp     edi, ebx
0x6521B6: jz      short loc_6521C2
0x6521B8: mov     edx, [edi]
0x6521BA: mov     eax, [edx]
0x6521BC: push    1
0x6521BE: mov     ecx, edi
0x6521C0: call    eax
0x6521C2: mov     edi, [esi+118h]
0x6521C8: cmp     edi, ebx
0x6521CA: mov     byte ptr [esp+24h+var_4], bl
0x6521CE: jz      short loc_6521E8
0x6521D0: lea     ecx, [edi+4]
0x6521D3: push    ecx; lpAddend
0x6521D4: call    ebp ; InterlockedDecrement
0x6521D6: test    eax, eax
0x6521D8: jnz     short loc_6521E8
0x6521DA: cmp     edi, ebx
0x6521DC: jz      short loc_6521E8
0x6521DE: mov     edx, [edi]
0x6521E0: mov     eax, [edx]
0x6521E2: push    1
0x6521E4: mov     ecx, edi
0x6521E6: call    eax
0x6521E8: mov     ecx, esi; this
0x6521EA: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6521F2: call    ??1MiddleLowProcess@@UAE@XZ; MiddleLowProcess::~MiddleLowProcess(void)
0x6521F7: mov     ecx, dword ptr [esp+24h+var_C]
0x6521FB: mov     large fs:0, ecx
0x652202: pop     ecx
0x652203: pop     edi
0x652204: pop     esi
0x652205: pop     ebp
0x652206: pop     ebx
0x652207: add     esp, 10h
0x65220A: retn
