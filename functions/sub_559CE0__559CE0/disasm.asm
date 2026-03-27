0x559CE0: push    0FFFFFFFFh
0x559CE2: push    offset SEH_559CE0
0x559CE7: mov     eax, large fs:0
0x559CED: push    eax
0x559CEE: push    ecx
0x559CEF: push    ebx
0x559CF0: push    ebp
0x559CF1: push    esi
0x559CF2: push    edi
0x559CF3: mov     eax, ds:0B30AACh
0x559CF8: xor     eax, esp
0x559CFA: push    eax
0x559CFB: lea     eax, [esp+24h+var_C]
0x559CFF: mov     large fs:0, eax
0x559D05: mov     esi, ecx
0x559D07: mov     [esp+24h+var_10], esi
0x559D0B: mov     edi, [esi+10h]
0x559D0E: mov     ebp, ds:0A2807Ch
0x559D14: xor     ebx, ebx
0x559D16: cmp     edi, ebx
0x559D18: mov     [esp+24h+var_4], 4
0x559D20: jz      short loc_559D3D
0x559D22: lea     eax, [edi+4]
0x559D25: push    eax; lpAddend
0x559D26: call    ebp ; InterlockedDecrement
0x559D28: test    eax, eax
0x559D2A: jnz     short loc_559D3A
0x559D2C: cmp     edi, ebx
0x559D2E: jz      short loc_559D3A
0x559D30: mov     edx, [edi]
0x559D32: mov     eax, [edx]
0x559D34: push    1
0x559D36: mov     ecx, edi
0x559D38: call    eax
0x559D3A: mov     [esi+10h], ebx
0x559D3D: mov     edi, [esi+0Ch]
0x559D40: cmp     edi, ebx
0x559D42: jz      short loc_559D5F
0x559D44: lea     ecx, [edi+4]
0x559D47: push    ecx; lpAddend
0x559D48: call    ebp ; InterlockedDecrement
0x559D4A: test    eax, eax
0x559D4C: jnz     short loc_559D5C
0x559D4E: cmp     edi, ebx
0x559D50: jz      short loc_559D5C
0x559D52: mov     edx, [edi]
0x559D54: mov     eax, [edx]
0x559D56: push    1
0x559D58: mov     ecx, edi
0x559D5A: call    eax
0x559D5C: mov     [esi+0Ch], ebx
0x559D5F: mov     edi, [esi+1Ch]
0x559D62: cmp     edi, ebx
0x559D64: jz      short loc_559D81
0x559D66: lea     ecx, [edi+4]
0x559D69: push    ecx; lpAddend
0x559D6A: call    ebp ; InterlockedDecrement
0x559D6C: test    eax, eax
0x559D6E: jnz     short loc_559D7E
0x559D70: cmp     edi, ebx
0x559D72: jz      short loc_559D7E
0x559D74: mov     edx, [edi]
0x559D76: mov     eax, [edx]
0x559D78: push    1
0x559D7A: mov     ecx, edi
0x559D7C: call    eax
0x559D7E: mov     [esi+1Ch], ebx
0x559D81: mov     edi, [esi+20h]
0x559D84: cmp     edi, ebx
0x559D86: jz      short loc_559DA3
0x559D88: lea     ecx, [edi+4]
0x559D8B: push    ecx; lpAddend
0x559D8C: call    ebp ; InterlockedDecrement
0x559D8E: test    eax, eax
0x559D90: jnz     short loc_559DA0
0x559D92: cmp     edi, ebx
0x559D94: jz      short loc_559DA0
0x559D96: mov     edx, [edi]
0x559D98: mov     eax, [edx]
0x559D9A: push    1
0x559D9C: mov     ecx, edi
0x559D9E: call    eax
0x559DA0: mov     [esi+20h], ebx
0x559DA3: mov     eax, [esi+14h]
0x559DA6: cmp     eax, ebx
0x559DA8: jz      short loc_559DB3
0x559DAA: push    eax
0x559DAB: call    FormHeapFree
0x559DB0: add     esp, 4
0x559DB3: mov     edi, [esi+8]
0x559DB6: cmp     edi, ebx
0x559DB8: jz      short loc_559DCA
0x559DBA: mov     ecx, edi
0x559DBC: call    sub_5599B0
0x559DC1: push    edi
0x559DC2: call    FormHeapFree
0x559DC7: add     esp, 4
0x559DCA: mov     edi, [esi+20h]
0x559DCD: cmp     edi, ebx
0x559DCF: mov     byte ptr [esp+24h+var_4], 3
0x559DD4: jz      short loc_559DEE
0x559DD6: lea     ecx, [edi+4]
0x559DD9: push    ecx; lpAddend
0x559DDA: call    ebp ; InterlockedDecrement
0x559DDC: test    eax, eax
0x559DDE: jnz     short loc_559DEE
0x559DE0: cmp     edi, ebx
0x559DE2: jz      short loc_559DEE
0x559DE4: mov     edx, [edi]
0x559DE6: mov     eax, [edx]
0x559DE8: push    1
0x559DEA: mov     ecx, edi
0x559DEC: call    eax
0x559DEE: mov     edi, [esi+1Ch]
0x559DF1: cmp     edi, ebx
0x559DF3: mov     byte ptr [esp+24h+var_4], 2
0x559DF8: jz      short loc_559E12
0x559DFA: lea     ecx, [edi+4]
0x559DFD: push    ecx; lpAddend
0x559DFE: call    ebp ; InterlockedDecrement
0x559E00: test    eax, eax
0x559E02: jnz     short loc_559E12
0x559E04: cmp     edi, ebx
0x559E06: jz      short loc_559E12
0x559E08: mov     edx, [edi]
0x559E0A: mov     eax, [edx]
0x559E0C: push    1
0x559E0E: mov     ecx, edi
0x559E10: call    eax
0x559E12: mov     edi, [esi+10h]
0x559E15: cmp     edi, ebx
0x559E17: mov     byte ptr [esp+24h+var_4], 1
0x559E1C: jz      short loc_559E36
0x559E1E: lea     ecx, [edi+4]
0x559E21: push    ecx; lpAddend
0x559E22: call    ebp ; InterlockedDecrement
0x559E24: test    eax, eax
0x559E26: jnz     short loc_559E36
0x559E28: cmp     edi, ebx
0x559E2A: jz      short loc_559E36
0x559E2C: mov     edx, [edi]
0x559E2E: mov     eax, [edx]
0x559E30: push    1
0x559E32: mov     ecx, edi
0x559E34: call    eax
0x559E36: mov     edi, [esi+0Ch]
0x559E39: cmp     edi, ebx
0x559E3B: mov     byte ptr [esp+24h+var_4], bl
0x559E3F: jz      short loc_559E59
0x559E41: lea     ecx, [edi+4]
0x559E44: push    ecx; lpAddend
0x559E45: call    ebp ; InterlockedDecrement
0x559E47: test    eax, eax
0x559E49: jnz     short loc_559E59
0x559E4B: cmp     edi, ebx
0x559E4D: jz      short loc_559E59
0x559E4F: mov     edx, [edi]
0x559E51: mov     eax, [edx]
0x559E53: push    1
0x559E55: mov     ecx, edi
0x559E57: call    eax
0x559E59: mov     ecx, [esi]
0x559E5B: push    ecx
0x559E5C: call    FormHeapFree
0x559E61: add     esp, 4
0x559E64: mov     [esi], ebx
0x559E66: mov     [esi+6], bx
0x559E6A: mov     [esi+4], bx
0x559E6E: mov     ecx, dword ptr [esp+24h+var_C]
0x559E72: mov     large fs:0, ecx
0x559E79: pop     ecx
0x559E7A: pop     edi
0x559E7B: pop     esi
0x559E7C: pop     ebp
0x559E7D: pop     ebx
0x559E7E: add     esp, 10h
0x559E81: retn
