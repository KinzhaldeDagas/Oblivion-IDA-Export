0x4A1C70: push    0FFFFFFFFh
0x4A1C72: push    offset SEH_6E10B0
0x4A1C77: mov     eax, large fs:0
0x4A1C7D: push    eax
0x4A1C7E: push    ebx
0x4A1C7F: push    ebp
0x4A1C80: push    esi
0x4A1C81: push    edi
0x4A1C82: mov     eax, ds:0B30AACh
0x4A1C87: xor     eax, esp
0x4A1C89: push    eax
0x4A1C8A: lea     eax, [esp+20h+var_C]
0x4A1C8E: mov     large fs:0, eax
0x4A1C94: mov     ebx, [esp+20h+arg_0]
0x4A1C98: mov     eax, [esp+20h+arg_4]
0x4A1C9C: mov     edi, [esp+20h+arg_8]
0x4A1CA0: mov     ebp, ds:0A2807Ch
0x4A1CA6: mov     [ebx+4], eax
0x4A1CA9: mov     esi, [ebx+8]
0x4A1CAC: cmp     esi, edi
0x4A1CAE: mov     [esp+20h+var_4], 0
0x4A1CB6: jz      short loc_4A1CE5
0x4A1CB8: test    esi, esi
0x4A1CBA: jz      short loc_4A1CD4
0x4A1CBC: lea     ecx, [esi+4]
0x4A1CBF: push    ecx; lpAddend
0x4A1CC0: call    ebp ; InterlockedDecrement
0x4A1CC2: test    eax, eax
0x4A1CC4: jnz     short loc_4A1CD4
0x4A1CC6: test    esi, esi
0x4A1CC8: jz      short loc_4A1CD4
0x4A1CCA: mov     edx, [esi]
0x4A1CCC: mov     eax, [edx]
0x4A1CCE: push    1
0x4A1CD0: mov     ecx, esi
0x4A1CD2: call    eax
0x4A1CD4: test    edi, edi
0x4A1CD6: mov     [ebx+8], edi
0x4A1CD9: jz      short loc_4A1CE5
0x4A1CDB: lea     ecx, [edi+4]
0x4A1CDE: push    ecx; lpAddend
0x4A1CDF: call    dword ptr ds:0A28078h
0x4A1CE5: test    edi, edi
0x4A1CE7: mov     [esp+20h+var_4], 0FFFFFFFFh
0x4A1CEF: jz      short loc_4A1D05
0x4A1CF1: lea     edx, [edi+4]
0x4A1CF4: push    edx; lpAddend
0x4A1CF5: call    ebp ; InterlockedDecrement
0x4A1CF7: test    eax, eax
0x4A1CF9: jnz     short loc_4A1D05
0x4A1CFB: mov     eax, [edi]
0x4A1CFD: mov     edx, [eax]
0x4A1CFF: push    1
0x4A1D01: mov     ecx, edi
0x4A1D03: call    edx
0x4A1D05: mov     ecx, dword ptr [esp+20h+var_C]
0x4A1D09: mov     large fs:0, ecx
0x4A1D10: pop     ecx
0x4A1D11: pop     edi
0x4A1D12: pop     esi
0x4A1D13: pop     ebp
0x4A1D14: pop     ebx
0x4A1D15: add     esp, 0Ch
0x4A1D18: retn    0Ch
