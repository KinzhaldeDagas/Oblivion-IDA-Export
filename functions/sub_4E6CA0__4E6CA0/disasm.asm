0x4E6CA0: push    ecx
0x4E6CA1: push    esi
0x4E6CA2: push    edi
0x4E6CA3: mov     esi, ecx
0x4E6CA5: xor     edi, edi
0x4E6CA7: cmp     [esi+24h], edi
0x4E6CAA: jz      loc_4E6D52
0x4E6CB0: push    ebp
0x4E6CB1: push    offset stru_B36000; lpCriticalSection
0x4E6CB6: call    dword ptr ds:0A2806Ch
0x4E6CBC: call    dword ptr ds:0A2808Ch
0x4E6CC2: add     dword ptr ds:0B3607Ch, 1
0x4E6CC9: mov     ecx, esi
0x4E6CCB: mov     ds:0B36078h, eax
0x4E6CD0: call    sub_4E4F20
0x4E6CD5: mov     ecx, esi
0x4E6CD7: call    sub_4E5040
0x4E6CDC: mov     eax, [esi+24h]
0x4E6CDF: movzx   ebp, word ptr [eax+0Ah]
0x4E6CE3: cmp     ebp, edi
0x4E6CE5: jle     short loc_4E6D25
0x4E6CE7: mov     [esp+10h+var_4], edi
0x4E6CEB: push    ebx
0x4E6CEC: lea     esp, [esp+0]
0x4E6CF0: mov     ecx, [esi+24h]
0x4E6CF3: mov     edx, [ecx+4]
0x4E6CF6: mov     ebx, [edx+edi*4]
0x4E6CF9: test    ebx, ebx
0x4E6CFB: jz      short loc_4E6D0D
0x4E6CFD: mov     ecx, ebx
0x4E6CFF: call    sub_4E8200
0x4E6D04: push    ebx
0x4E6D05: call    FormHeapFree
0x4E6D0A: add     esp, 4
0x4E6D0D: mov     ecx, [esi+24h]
0x4E6D10: lea     eax, [esp+14h+var_4]
0x4E6D14: push    eax
0x4E6D15: push    edi
0x4E6D16: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x4E6D1B: add     edi, 1
0x4E6D1E: cmp     edi, ebp
0x4E6D20: jl      short loc_4E6CF0
0x4E6D22: xor     edi, edi
0x4E6D24: pop     ebx
0x4E6D25: mov     ecx, [esi+24h]
0x4E6D28: cmp     ecx, edi
0x4E6D2A: pop     ebp
0x4E6D2B: jz      short loc_4E6D35
0x4E6D2D: mov     edx, [ecx]
0x4E6D2F: mov     eax, [edx]
0x4E6D31: push    1
0x4E6D33: call    eax
0x4E6D35: mov     [esi+24h], edi
0x4E6D38: sub     dword ptr ds:0B3607Ch, 1
0x4E6D3F: jnz     short loc_4E6D47
0x4E6D41: mov     ds:0B36078h, edi
0x4E6D47: push    offset stru_B36000; lpCriticalSection
0x4E6D4C: call    dword ptr ds:0A28074h
0x4E6D52: pop     edi
0x4E6D53: pop     esi
0x4E6D54: pop     ecx
0x4E6D55: retn
