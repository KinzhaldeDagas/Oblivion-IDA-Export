0x7D8BA0: push    0FFFFFFFFh
0x7D8BA2: push    offset SEH_7D8BA0
0x7D8BA7: mov     eax, large fs:0
0x7D8BAD: push    eax
0x7D8BAE: sub     esp, 120h
0x7D8BB4: mov     eax, ds:0B30AACh
0x7D8BB9: xor     eax, esp
0x7D8BBB: mov     [esp+12Ch+var_10], eax
0x7D8BC2: push    ebx
0x7D8BC3: push    ebp
0x7D8BC4: push    esi
0x7D8BC5: push    edi
0x7D8BC6: mov     eax, ds:0B30AACh
0x7D8BCB: xor     eax, esp
0x7D8BCD: push    eax
0x7D8BCE: lea     eax, [esp+140h+var_C]
0x7D8BD5: mov     large fs:0, eax
0x7D8BDB: mov     ebp, ecx
0x7D8BDD: mov     eax, [ebp+0C0h]
0x7D8BE3: mov     ecx, [ebp+0C4h]
0x7D8BE9: mov     edi, [ebp+0BCh]
0x7D8BEF: or      ebx, 0FFFFFFFFh
0x7D8BF2: cmp     word ptr [ebp+0B8h], 0Ah
0x7D8BFA: mov     [esp+140h+var_128], ebp
0x7D8BFE: mov     [esp+140h+var_120], eax
0x7D8C02: mov     [esp+140h+var_118], ecx
0x7D8C06: jnb     loc_7D8DD3
0x7D8C0C: push    2Ch ; ','; Size
0x7D8C0E: call    FormHeapAlloc
0x7D8C13: add     esp, 4
0x7D8C16: mov     [esp+140h+var_124], eax
0x7D8C1A: test    eax, eax
0x7D8C1C: mov     [esp+140h+var_4], 0
0x7D8C27: jz      short loc_7D8C48
0x7D8C29: push    offset sub_7016A0; a5
0x7D8C2E: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7D8C33: push    0Ah; size
0x7D8C35: lea     esi, [eax+4]
0x7D8C38: push    4; a2
0x7D8C3A: push    esi; a1
0x7D8C3B: mov     dword ptr [eax], 0Ah
0x7D8C41: call    ArrayConstructor
0x7D8C46: jmp     short loc_7D8C4A
0x7D8C48: xor     esi, esi
0x7D8C4A: push    2Ch ; ','; Size
0x7D8C4C: mov     [esp+144h+var_12C], esi
0x7D8C50: mov     [esp+144h+var_4], ebx
0x7D8C57: mov     edi, esi
0x7D8C59: call    FormHeapAlloc
0x7D8C5E: add     esp, 4
0x7D8C61: mov     [esp+140h+var_124], eax
0x7D8C65: test    eax, eax
0x7D8C67: mov     [esp+140h+var_4], 1
0x7D8C72: jz      short loc_7D8C93
0x7D8C74: push    offset sub_7016A0; a5
0x7D8C79: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7D8C7E: push    0Ah; size
0x7D8C80: lea     esi, [eax+4]
0x7D8C83: push    4; a2
0x7D8C85: push    esi; a1
0x7D8C86: mov     dword ptr [eax], 0Ah
0x7D8C8C: call    ArrayConstructor
0x7D8C91: jmp     short loc_7D8C95
0x7D8C93: xor     esi, esi
0x7D8C95: push    2Ch ; ','; Size
0x7D8C97: mov     [esp+144h+var_11C], esi
0x7D8C9B: mov     [esp+144h+var_4], ebx
0x7D8CA2: mov     [esp+144h+var_120], esi
0x7D8CA6: call    FormHeapAlloc
0x7D8CAB: add     esp, 4
0x7D8CAE: mov     [esp+140h+var_124], eax
0x7D8CB2: test    eax, eax
0x7D8CB4: mov     [esp+140h+var_4], 2
0x7D8CBF: jz      short loc_7D8CE0
0x7D8CC1: push    offset sub_7016A0; a5
0x7D8CC6: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7D8CCB: push    0Ah; size
0x7D8CCD: lea     esi, [eax+4]
0x7D8CD0: push    4; a2
0x7D8CD2: push    esi; a1
0x7D8CD3: mov     dword ptr [eax], 0Ah
0x7D8CD9: call    ArrayConstructor
0x7D8CDE: jmp     short loc_7D8CE2
0x7D8CE0: xor     esi, esi
0x7D8CE2: push    0Ah; Size
0x7D8CE4: mov     [esp+144h+var_4], ebx
0x7D8CEB: mov     [esp+144h+var_118], esi
0x7D8CEF: call    FormHeapAlloc
0x7D8CF4: push    0Ah; Size
0x7D8CF6: mov     ebx, eax
0x7D8CF8: call    FormHeapAlloc
0x7D8CFD: mov     [esp+148h+var_124], eax
0x7D8D01: mov     eax, [ebp+0BCh]
0x7D8D07: add     esp, 8
0x7D8D0A: test    eax, eax
0x7D8D0C: jz      short loc_7D8D2F
0x7D8D0E: mov     edx, [eax-4]
0x7D8D11: lea     ebp, [eax-4]
0x7D8D14: push    offset sub_7016A0; void (__thiscall *)(void *)
0x7D8D19: push    edx; int
0x7D8D1A: push    4; unsigned int
0x7D8D1C: push    eax; void *
0x7D8D1D: call    $LN21
0x7D8D22: push    ebp
0x7D8D23: call    FormHeapFree
0x7D8D28: mov     ebp, [esp+144h+var_128]
0x7D8D2C: add     esp, 4
0x7D8D2F: mov     eax, [ebp+0C0h]
0x7D8D35: test    eax, eax
0x7D8D37: jz      short loc_7D8D5A
0x7D8D39: mov     ecx, [eax-4]
0x7D8D3C: lea     ebp, [eax-4]
0x7D8D3F: push    offset sub_7016A0; void (__thiscall *)(void *)
0x7D8D44: push    ecx; int
0x7D8D45: push    4; unsigned int
0x7D8D47: push    eax; void *
0x7D8D48: call    $LN21
0x7D8D4D: push    ebp
0x7D8D4E: call    FormHeapFree
0x7D8D53: mov     ebp, [esp+144h+var_128]
0x7D8D57: add     esp, 4
0x7D8D5A: mov     eax, [ebp+0C4h]
0x7D8D60: test    eax, eax
0x7D8D62: jz      short loc_7D8D85
0x7D8D64: mov     edx, [eax-4]
0x7D8D67: lea     ebp, [eax-4]
0x7D8D6A: push    offset sub_7016A0; void (__thiscall *)(void *)
0x7D8D6F: push    edx; int
0x7D8D70: push    4; unsigned int
0x7D8D72: push    eax; void *
0x7D8D73: call    $LN21
0x7D8D78: push    ebp
0x7D8D79: call    FormHeapFree
0x7D8D7E: mov     ebp, [esp+144h+var_128]
0x7D8D82: add     esp, 4
0x7D8D85: mov     eax, [ebp+0D0h]
0x7D8D8B: push    eax
0x7D8D8C: call    FormHeapFree
0x7D8D91: mov     eax, [ebp+0C8h]
0x7D8D97: push    eax
0x7D8D98: call    FormHeapFree
0x7D8D9D: mov     eax, [esp+148h+var_12C]
0x7D8DA1: mov     ecx, [esp+148h+var_11C]
0x7D8DA5: mov     edx, [esp+148h+var_124]
0x7D8DA9: add     esp, 8
0x7D8DAC: mov     [ebp+0BCh], eax
0x7D8DB2: mov     [ebp+0C0h], ecx
0x7D8DB8: mov     [ebp+0C4h], esi
0x7D8DBE: mov     [ebp+0D0h], ebx
0x7D8DC4: mov     [ebp+0C8h], edx
0x7D8DCA: mov     word ptr [ebp+0B8h], 0Ah
0x7D8DD3: mov     esi, [edi]
0x7D8DD5: mov     ebp, [esp+140h+arg_0]
0x7D8DDC: cmp     esi, ebp
0x7D8DDE: mov     ebx, ds:0A2807Ch
0x7D8DE4: jz      short loc_7D8E12
0x7D8DE6: test    esi, esi
0x7D8DE8: jz      short loc_7D8E02
0x7D8DEA: lea     eax, [esi+4]
0x7D8DED: push    eax; lpAddend
0x7D8DEE: call    ebx ; InterlockedDecrement
0x7D8DF0: test    eax, eax
0x7D8DF2: jnz     short loc_7D8E02
0x7D8DF4: test    esi, esi
0x7D8DF6: jz      short loc_7D8E02
0x7D8DF8: mov     edx, [esi]
0x7D8DFA: mov     eax, [edx]
0x7D8DFC: push    1
0x7D8DFE: mov     ecx, esi
0x7D8E00: call    eax
0x7D8E02: test    ebp, ebp
0x7D8E04: mov     [edi], ebp
0x7D8E06: jz      short loc_7D8E12
0x7D8E08: add     ebp, 4
0x7D8E0B: push    ebp; lpAddend
0x7D8E0C: call    dword ptr ds:0A28078h
0x7D8E12: mov     esi, [edi+4]
0x7D8E15: mov     ebp, [esp+140h+arg_4]
0x7D8E1C: cmp     esi, ebp
0x7D8E1E: jz      short loc_7D8E4D
0x7D8E20: test    esi, esi
0x7D8E22: jz      short loc_7D8E3C
0x7D8E24: lea     ecx, [esi+4]
0x7D8E27: push    ecx; lpAddend
0x7D8E28: call    ebx ; InterlockedDecrement
0x7D8E2A: test    eax, eax
0x7D8E2C: jnz     short loc_7D8E3C
0x7D8E2E: test    esi, esi
0x7D8E30: jz      short loc_7D8E3C
0x7D8E32: mov     edx, [esi]
0x7D8E34: mov     eax, [edx]
0x7D8E36: push    1
0x7D8E38: mov     ecx, esi
0x7D8E3A: call    eax
0x7D8E3C: test    ebp, ebp
0x7D8E3E: mov     [edi+4], ebp
0x7D8E41: jz      short loc_7D8E4D
0x7D8E43: add     ebp, 4
0x7D8E46: push    ebp; lpAddend
0x7D8E47: call    dword ptr ds:0A28078h
0x7D8E4D: mov     esi, [edi+8]
0x7D8E50: mov     ebp, [esp+140h+arg_8]
0x7D8E57: cmp     esi, ebp
0x7D8E59: jz      short loc_7D8E88
0x7D8E5B: test    esi, esi
0x7D8E5D: jz      short loc_7D8E77
0x7D8E5F: lea     ecx, [esi+4]
0x7D8E62: push    ecx; lpAddend
0x7D8E63: call    ebx ; InterlockedDecrement
0x7D8E65: test    eax, eax
0x7D8E67: jnz     short loc_7D8E77
0x7D8E69: test    esi, esi
0x7D8E6B: jz      short loc_7D8E77
0x7D8E6D: mov     edx, [esi]
0x7D8E6F: mov     eax, [edx]
0x7D8E71: push    1
0x7D8E73: mov     ecx, esi
0x7D8E75: call    eax
0x7D8E77: test    ebp, ebp
0x7D8E79: mov     [edi+8], ebp
0x7D8E7C: jz      short loc_7D8E88
0x7D8E7E: add     ebp, 4
0x7D8E81: push    ebp; lpAddend
0x7D8E82: call    dword ptr ds:0A28078h
0x7D8E88: mov     esi, [edi+0Ch]
0x7D8E8B: mov     ebp, [esp+140h+arg_C]
0x7D8E92: cmp     esi, ebp
0x7D8E94: jz      short loc_7D8EC3
0x7D8E96: test    esi, esi
0x7D8E98: jz      short loc_7D8EB2
0x7D8E9A: lea     ecx, [esi+4]
0x7D8E9D: push    ecx; lpAddend
0x7D8E9E: call    ebx ; InterlockedDecrement
0x7D8EA0: test    eax, eax
0x7D8EA2: jnz     short loc_7D8EB2
0x7D8EA4: test    esi, esi
0x7D8EA6: jz      short loc_7D8EB2
0x7D8EA8: mov     edx, [esi]
0x7D8EAA: mov     eax, [edx]
0x7D8EAC: push    1
0x7D8EAE: mov     ecx, esi
0x7D8EB0: call    eax
0x7D8EB2: test    ebp, ebp
0x7D8EB4: mov     [edi+0Ch], ebp
0x7D8EB7: jz      short loc_7D8EC3
0x7D8EB9: add     ebp, 4
0x7D8EBC: push    ebp; lpAddend
0x7D8EBD: call    dword ptr ds:0A28078h
0x7D8EC3: mov     esi, [edi+10h]
0x7D8EC6: mov     ebp, [esp+140h+arg_10]
0x7D8ECD: cmp     esi, ebp
0x7D8ECF: jz      short loc_7D8EFE
0x7D8ED1: test    esi, esi
0x7D8ED3: jz      short loc_7D8EED
0x7D8ED5: lea     ecx, [esi+4]
0x7D8ED8: push    ecx; lpAddend
0x7D8ED9: call    ebx ; InterlockedDecrement
0x7D8EDB: test    eax, eax
0x7D8EDD: jnz     short loc_7D8EED
0x7D8EDF: test    esi, esi
0x7D8EE1: jz      short loc_7D8EED
0x7D8EE3: mov     edx, [esi]
0x7D8EE5: mov     eax, [edx]
0x7D8EE7: push    1
0x7D8EE9: mov     ecx, esi
0x7D8EEB: call    eax
0x7D8EED: test    ebp, ebp
0x7D8EEF: mov     [edi+10h], ebp
0x7D8EF2: jz      short loc_7D8EFE
0x7D8EF4: add     ebp, 4
0x7D8EF7: push    ebp; lpAddend
0x7D8EF8: call    dword ptr ds:0A28078h
0x7D8EFE: mov     esi, [edi+14h]
0x7D8F01: mov     ebp, [esp+140h+arg_14]
0x7D8F08: cmp     esi, ebp
0x7D8F0A: jz      short loc_7D8F39
0x7D8F0C: test    esi, esi
0x7D8F0E: jz      short loc_7D8F28
0x7D8F10: lea     ecx, [esi+4]
0x7D8F13: push    ecx; lpAddend
0x7D8F14: call    ebx ; InterlockedDecrement
0x7D8F16: test    eax, eax
0x7D8F18: jnz     short loc_7D8F28
0x7D8F1A: test    esi, esi
0x7D8F1C: jz      short loc_7D8F28
0x7D8F1E: mov     edx, [esi]
0x7D8F20: mov     eax, [edx]
0x7D8F22: push    1
0x7D8F24: mov     ecx, esi
0x7D8F26: call    eax
0x7D8F28: test    ebp, ebp
0x7D8F2A: mov     [edi+14h], ebp
0x7D8F2D: jz      short loc_7D8F39
0x7D8F2F: add     ebp, 4
0x7D8F32: push    ebp; lpAddend
0x7D8F33: call    dword ptr ds:0A28078h
0x7D8F39: mov     esi, [edi+18h]
0x7D8F3C: mov     ebp, [esp+140h+arg_18]
0x7D8F43: cmp     esi, ebp
0x7D8F45: jz      short loc_7D8F74
0x7D8F47: test    esi, esi
0x7D8F49: jz      short loc_7D8F63
0x7D8F4B: lea     ecx, [esi+4]
0x7D8F4E: push    ecx; lpAddend
0x7D8F4F: call    ebx ; InterlockedDecrement
0x7D8F51: test    eax, eax
0x7D8F53: jnz     short loc_7D8F63
0x7D8F55: test    esi, esi
0x7D8F57: jz      short loc_7D8F63
0x7D8F59: mov     edx, [esi]
0x7D8F5B: mov     eax, [edx]
0x7D8F5D: push    1
0x7D8F5F: mov     ecx, esi
0x7D8F61: call    eax
0x7D8F63: test    ebp, ebp
0x7D8F65: mov     [edi+18h], ebp
0x7D8F68: jz      short loc_7D8F74
0x7D8F6A: add     ebp, 4
0x7D8F6D: push    ebp; lpAddend
0x7D8F6E: call    dword ptr ds:0A28078h
0x7D8F74: mov     esi, [edi+1Ch]
0x7D8F77: mov     ebp, [esp+140h+arg_1C]
0x7D8F7E: cmp     esi, ebp
0x7D8F80: jz      short loc_7D8FAF
0x7D8F82: test    esi, esi
0x7D8F84: jz      short loc_7D8F9E
0x7D8F86: lea     ecx, [esi+4]
0x7D8F89: push    ecx; lpAddend
0x7D8F8A: call    ebx ; InterlockedDecrement
0x7D8F8C: test    eax, eax
0x7D8F8E: jnz     short loc_7D8F9E
0x7D8F90: test    esi, esi
0x7D8F92: jz      short loc_7D8F9E
0x7D8F94: mov     edx, [esi]
0x7D8F96: mov     eax, [edx]
0x7D8F98: push    1
0x7D8F9A: mov     ecx, esi
0x7D8F9C: call    eax
0x7D8F9E: test    ebp, ebp
0x7D8FA0: mov     [edi+1Ch], ebp
0x7D8FA3: jz      short loc_7D8FAF
0x7D8FA5: add     ebp, 4
0x7D8FA8: push    ebp; lpAddend
0x7D8FA9: call    dword ptr ds:0A28078h
0x7D8FAF: mov     esi, [edi+20h]
0x7D8FB2: mov     ebp, [esp+140h+arg_20]
0x7D8FB9: cmp     esi, ebp
0x7D8FBB: jz      short loc_7D8FEA
0x7D8FBD: test    esi, esi
0x7D8FBF: jz      short loc_7D8FD9
0x7D8FC1: lea     ecx, [esi+4]
0x7D8FC4: push    ecx; lpAddend
0x7D8FC5: call    ebx ; InterlockedDecrement
0x7D8FC7: test    eax, eax
0x7D8FC9: jnz     short loc_7D8FD9
0x7D8FCB: test    esi, esi
0x7D8FCD: jz      short loc_7D8FD9
0x7D8FCF: mov     edx, [esi]
0x7D8FD1: mov     eax, [edx]
0x7D8FD3: push    1
0x7D8FD5: mov     ecx, esi
0x7D8FD7: call    eax
0x7D8FD9: test    ebp, ebp
0x7D8FDB: mov     [edi+20h], ebp
0x7D8FDE: jz      short loc_7D8FEA
0x7D8FE0: add     ebp, 4
0x7D8FE3: push    ebp; lpAddend
0x7D8FE4: call    dword ptr ds:0A28078h
0x7D8FEA: mov     esi, [edi+24h]
0x7D8FED: test    esi, esi
0x7D8FEF: jz      short loc_7D9010
0x7D8FF1: lea     ecx, [esi+4]
0x7D8FF4: push    ecx; lpAddend
0x7D8FF5: call    ebx ; InterlockedDecrement
0x7D8FF7: test    eax, eax
0x7D8FF9: jnz     short loc_7D9009
0x7D8FFB: test    esi, esi
0x7D8FFD: jz      short loc_7D9009
0x7D8FFF: mov     edx, [esi]
0x7D9001: mov     eax, [edx]
0x7D9003: push    1
0x7D9005: mov     ecx, esi
0x7D9007: call    eax
0x7D9009: mov     dword ptr [edi+24h], 0
0x7D9010: mov     edx, [esp+140h+var_128]
0x7D9014: mov     ecx, [edx+0C8h]
0x7D901A: xor     eax, eax
0x7D901C: mov     [ecx], eax
0x7D901E: mov     [ecx+4], eax
0x7D9021: mov     [ecx+8], al
0x7D9024: mov     ecx, [edx+0D0h]
0x7D902A: mov     [ecx], eax
0x7D902C: mov     [ecx+4], eax
0x7D902F: mov     [ecx+8], al
0x7D9032: mov     ecx, [esp+140h+var_118]
0x7D9036: mov     [esp+140h+var_12C], eax
0x7D903A: mov     eax, [esp+140h+var_120]
0x7D903E: sub     edi, eax
0x7D9040: sub     ecx, eax
0x7D9042: mov     ebp, eax
0x7D9044: mov     [esp+140h+var_124], edi
0x7D9048: mov     [esp+140h+var_120], ecx
0x7D904C: jmp     short loc_7D9054
0x7D904E: align 10h
0x7D9050: mov     edi, [esp+140h+var_124]
0x7D9054: mov     esi, [edi+ebp]
0x7D9057: test    esi, esi
0x7D9059: jz      loc_7D9264
0x7D905F: mov     edx, [esi]
0x7D9061: mov     eax, [edx+4]
0x7D9064: mov     ecx, esi
0x7D9066: call    eax
0x7D9068: test    eax, eax
0x7D906A: jz      short loc_7D9082
0x7D906C: lea     esp, [esp+0]
0x7D9070: cmp     eax, offset dword_B3F95C
0x7D9075: jz      loc_7D916A
0x7D907B: mov     eax, [eax+4]
0x7D907E: test    eax, eax
0x7D9080: jnz     short loc_7D9070
0x7D9082: xor     al, al
0x7D9084: neg     al
0x7D9086: sbb     eax, eax
0x7D9088: and     eax, esi
0x7D908A: jz      loc_7D924D
0x7D9090: mov     ebx, [eax+38h]
0x7D9093: push    offset a_n; "_n"
0x7D9098: lea     ecx, [esp+144h+Src]
0x7D909C: push    ebx
0x7D909D: push    ecx
0x7D909E: call    sub_7B4160
0x7D90A3: add     esp, 0Ch
0x7D90A6: cmp     [esp+140h+Src], 0
0x7D90AB: jz      loc_7D919F
0x7D90B1: push    1; char
0x7D90B3: push    1; char
0x7D90B5: lea     edx, [esp+148h+Src]
0x7D90B9: push    edx; Src
0x7D90BA: lea     eax, [esp+14Ch+var_118]
0x7D90BE: push    eax; int
0x7D90BF: call    sub_7B8200
0x7D90C4: add     esp, 10h
0x7D90C7: mov     edi, eax
0x7D90C9: mov     esi, [ebp+0]
0x7D90CC: cmp     esi, [edi]
0x7D90CE: mov     [esp+140h+var_4], 3
0x7D90D9: jz      short loc_7D910E
0x7D90DB: test    esi, esi
0x7D90DD: jz      short loc_7D90FB
0x7D90DF: lea     ecx, [esi+4]
0x7D90E2: push    ecx; lpAddend
0x7D90E3: call    dword ptr ds:0A2807Ch
0x7D90E9: test    eax, eax
0x7D90EB: jnz     short loc_7D90FB
0x7D90ED: test    esi, esi
0x7D90EF: jz      short loc_7D90FB
0x7D90F1: mov     edx, [esi]
0x7D90F3: mov     eax, [edx]
0x7D90F5: push    1
0x7D90F7: mov     ecx, esi
0x7D90F9: call    eax
0x7D90FB: mov     eax, [edi]
0x7D90FD: test    eax, eax
0x7D90FF: mov     [ebp+0], eax
0x7D9102: jz      short loc_7D910E
0x7D9104: add     eax, 4
0x7D9107: push    eax; lpAddend
0x7D9108: call    dword ptr ds:0A28078h
0x7D910E: mov     esi, [esp+140h+var_118]
0x7D9112: test    esi, esi
0x7D9114: mov     [esp+140h+var_4], 0FFFFFFFFh
0x7D911F: jz      short loc_7D913D
0x7D9121: lea     ecx, [esi+4]
0x7D9124: push    ecx; lpAddend
0x7D9125: call    dword ptr ds:0A2807Ch
0x7D912B: test    eax, eax
0x7D912D: jnz     short loc_7D913D
0x7D912F: test    esi, esi
0x7D9131: jz      short loc_7D913D
0x7D9133: mov     edx, [esi]
0x7D9135: mov     eax, [edx]
0x7D9137: push    1
0x7D9139: mov     ecx, esi
0x7D913B: call    eax
0x7D913D: mov     esi, [ebp+0]
0x7D9140: test    esi, esi
0x7D9142: jz      short loc_7D919F
0x7D9144: cmp     dword ptr [esi+24h], 0
0x7D9148: jz      short loc_7D919F
0x7D914A: mov     ecx, [esi+24h]
0x7D914D: mov     edx, [ecx]
0x7D914F: mov     eax, [edx+0Ch]
0x7D9152: call    eax
0x7D9154: test    eax, eax
0x7D9156: jz      short loc_7D919F
0x7D9158: cmp     dword ptr [esi+24h], 0
0x7D915C: jz      short loc_7D9171
0x7D915E: mov     ecx, [esi+24h]
0x7D9161: mov     edx, [ecx]
0x7D9163: mov     eax, [edx+0Ch]
0x7D9166: call    eax
0x7D9168: jmp     short loc_7D9173
0x7D916A: mov     al, 1
0x7D916C: jmp     loc_7D9084
0x7D9171: xor     eax, eax
0x7D9173: mov     eax, [eax+4]
0x7D9176: cmp     eax, 5
0x7D9179: jz      short loc_7D9189
0x7D917B: cmp     eax, 6
0x7D917E: jz      short loc_7D9189
0x7D9180: cmp     eax, 1
0x7D9183: jz      short loc_7D9189
0x7D9185: xor     eax, eax
0x7D9187: jmp     short loc_7D918E
0x7D9189: mov     eax, 1
0x7D918E: mov     ecx, [esp+140h+var_128]
0x7D9192: mov     edx, [ecx+0D0h]
0x7D9198: mov     ecx, [esp+140h+var_12C]
0x7D919C: mov     [ecx+edx], al
0x7D919F: push    offset a_g; "_g"
0x7D91A4: lea     edx, [esp+144h+Src]
0x7D91A8: push    ebx
0x7D91A9: push    edx
0x7D91AA: call    sub_7B4160
0x7D91AF: add     esp, 0Ch
0x7D91B2: cmp     [esp+140h+Src], 0
0x7D91B7: jz      loc_7D924D
0x7D91BD: push    1; char
0x7D91BF: push    1; char
0x7D91C1: lea     eax, [esp+148h+Src]
0x7D91C5: push    eax; Src
0x7D91C6: lea     ecx, [esp+14Ch+var_11C]
0x7D91CA: push    ecx; int
0x7D91CB: call    sub_7B8200
0x7D91D0: add     esp, 10h
0x7D91D3: mov     edi, eax
0x7D91D5: mov     ebx, [esp+140h+var_120]
0x7D91D9: mov     esi, [ebx+ebp]
0x7D91DC: cmp     esi, [edi]
0x7D91DE: mov     [esp+140h+var_4], 4
0x7D91E9: jz      short loc_7D921E
0x7D91EB: test    esi, esi
0x7D91ED: jz      short loc_7D920B
0x7D91EF: lea     edx, [esi+4]
0x7D91F2: push    edx; lpAddend
0x7D91F3: call    dword ptr ds:0A2807Ch
0x7D91F9: test    eax, eax
0x7D91FB: jnz     short loc_7D920B
0x7D91FD: test    esi, esi
0x7D91FF: jz      short loc_7D920B
0x7D9201: mov     eax, [esi]
0x7D9203: mov     edx, [eax]
0x7D9205: push    1
0x7D9207: mov     ecx, esi
0x7D9209: call    edx
0x7D920B: mov     eax, [edi]
0x7D920D: test    eax, eax
0x7D920F: mov     [ebx+ebp], eax
0x7D9212: jz      short loc_7D921E
0x7D9214: add     eax, 4
0x7D9217: push    eax; lpAddend
0x7D9218: call    dword ptr ds:0A28078h
0x7D921E: mov     esi, [esp+140h+var_11C]
0x7D9222: test    esi, esi
0x7D9224: mov     [esp+140h+var_4], 0FFFFFFFFh
0x7D922F: jz      short loc_7D924D
0x7D9231: lea     eax, [esi+4]
0x7D9234: push    eax; lpAddend
0x7D9235: call    dword ptr ds:0A2807Ch
0x7D923B: test    eax, eax
0x7D923D: jnz     short loc_7D924D
0x7D923F: test    esi, esi
0x7D9241: jz      short loc_7D924D
0x7D9243: mov     edx, [esi]
0x7D9245: mov     eax, [edx]
0x7D9247: push    1
0x7D9249: mov     ecx, esi
0x7D924B: call    eax
0x7D924D: mov     eax, [esp+140h+var_12C]
0x7D9251: add     eax, 1
0x7D9254: add     ebp, 4
0x7D9257: cmp     eax, 9
0x7D925A: mov     [esp+140h+var_12C], eax
0x7D925E: jl      loc_7D9050
0x7D9264: mov     eax, [esp+140h+var_12C]
0x7D9268: test    eax, eax
0x7D926A: jle     short loc_7D927C
0x7D926C: mov     ecx, [esp+140h+var_128]
0x7D9270: add     eax, 0FFFFFFFFh
0x7D9273: mov     [ecx+0CCh], ax
0x7D927A: jmp     short loc_7D9289
0x7D927C: mov     edx, [esp+140h+var_128]
0x7D9280: xor     eax, eax
0x7D9282: mov     [edx+0CCh], ax
0x7D9289: mov     ecx, dword ptr [esp+140h+var_C]
0x7D9290: mov     large fs:0, ecx
0x7D9297: pop     ecx
0x7D9298: pop     edi
0x7D9299: pop     esi
0x7D929A: pop     ebp
0x7D929B: pop     ebx
0x7D929C: mov     ecx, [esp+12Ch+var_10]
0x7D92A3: xor     ecx, esp
0x7D92A5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7D92AA: add     esp, 12Ch
0x7D92B0: retn    24h ; '$'
