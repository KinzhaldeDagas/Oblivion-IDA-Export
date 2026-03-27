0x436CB0: push    0FFFFFFFFh
0x436CB2: push    offset SEH_436CB0
0x436CB7: mov     eax, large fs:0
0x436CBD: push    eax
0x436CBE: push    ecx
0x436CBF: push    ebp
0x436CC0: push    esi
0x436CC1: push    edi
0x436CC2: mov     eax, ___security_cookie
0x436CC7: xor     eax, esp
0x436CC9: push    eax
0x436CCA: lea     eax, [esp+20h+var_C]
0x436CCE: mov     large fs:0, eax
0x436CD4: mov     esi, ecx
0x436CD6: mov     [esp+20h+var_10], esi
0x436CDA: mov     eax, [esi]
0x436CDC: push    eax
0x436CDD: mov     [esp+24h+var_4], 1
0x436CE5: call    FormHeapFree
0x436CEA: mov     edi, [esi+4]
0x436CED: mov     ebp, ds:InterlockedDecrement
0x436CF3: add     esp, 4
0x436CF6: test    edi, edi
0x436CF8: jz      short loc_436D19
0x436CFA: lea     eax, [edi+4]
0x436CFD: push    eax; lpAddend
0x436CFE: call    ebp ; InterlockedDecrement
0x436D00: test    eax, eax
0x436D02: jnz     short loc_436D12
0x436D04: test    edi, edi
0x436D06: jz      short loc_436D12
0x436D08: mov     edx, [edi]
0x436D0A: mov     eax, [edx]
0x436D0C: push    1
0x436D0E: mov     ecx, edi
0x436D10: call    eax
0x436D12: mov     dword ptr [esi+4], 0
0x436D19: mov     edi, [esi+8]
0x436D1C: test    edi, edi
0x436D1E: jz      short loc_436D3F
0x436D20: lea     ecx, [edi+4]
0x436D23: push    ecx; lpAddend
0x436D24: call    ebp ; InterlockedDecrement
0x436D26: test    eax, eax
0x436D28: jnz     short loc_436D38
0x436D2A: test    edi, edi
0x436D2C: jz      short loc_436D38
0x436D2E: mov     edx, [edi]
0x436D30: mov     eax, [edx]
0x436D32: push    1
0x436D34: mov     ecx, edi
0x436D36: call    eax
0x436D38: mov     dword ptr [esi+8], 0
0x436D3F: mov     edi, [esi+8]
0x436D42: test    edi, edi
0x436D44: mov     byte ptr [esp+20h+var_4], 0
0x436D49: jz      short loc_436D63
0x436D4B: lea     ecx, [edi+4]
0x436D4E: push    ecx; lpAddend
0x436D4F: call    ebp ; InterlockedDecrement
0x436D51: test    eax, eax
0x436D53: jnz     short loc_436D63
0x436D55: test    edi, edi
0x436D57: jz      short loc_436D63
0x436D59: mov     edx, [edi]
0x436D5B: mov     eax, [edx]
0x436D5D: push    1
0x436D5F: mov     ecx, edi
0x436D61: call    eax
0x436D63: mov     esi, [esi+4]
0x436D66: test    esi, esi
0x436D68: mov     [esp+20h+var_4], 0FFFFFFFFh
0x436D70: jz      short loc_436D8A
0x436D72: lea     ecx, [esi+4]
0x436D75: push    ecx; lpAddend
0x436D76: call    ebp ; InterlockedDecrement
0x436D78: test    eax, eax
0x436D7A: jnz     short loc_436D8A
0x436D7C: test    esi, esi
0x436D7E: jz      short loc_436D8A
0x436D80: mov     edx, [esi]
0x436D82: mov     eax, [edx]
0x436D84: push    1
0x436D86: mov     ecx, esi
0x436D88: call    eax
0x436D8A: mov     ecx, dword ptr [esp+20h+var_C]
0x436D8E: mov     large fs:0, ecx
0x436D95: pop     ecx
0x436D96: pop     edi
0x436D97: pop     esi
0x436D98: pop     ebp
0x436D99: add     esp, 10h
0x436D9C: retn
