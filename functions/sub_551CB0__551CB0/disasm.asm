0x551CB0: push    ebx
0x551CB1: mov     ebx, ds:0A2807Ch
0x551CB7: push    esi
0x551CB8: push    edi
0x551CB9: mov     edi, [esp+0Ch+arg_0]
0x551CBD: mov     esi, [edi+8]
0x551CC0: test    esi, esi
0x551CC2: jz      short loc_551CE3
0x551CC4: lea     eax, [esi+4]
0x551CC7: push    eax; lpAddend
0x551CC8: call    ebx ; InterlockedDecrement
0x551CCA: test    eax, eax
0x551CCC: jnz     short loc_551CDC
0x551CCE: test    esi, esi
0x551CD0: jz      short loc_551CDC
0x551CD2: mov     edx, [esi]
0x551CD4: mov     eax, [edx]
0x551CD6: push    1
0x551CD8: mov     ecx, esi
0x551CDA: call    eax
0x551CDC: mov     dword ptr [edi+8], 0
0x551CE3: test    edi, edi
0x551CE5: jz      short loc_551D0F
0x551CE7: mov     esi, [edi+8]
0x551CEA: test    esi, esi
0x551CEC: jz      short loc_551D06
0x551CEE: lea     ecx, [esi+4]
0x551CF1: push    ecx; lpAddend
0x551CF2: call    ebx ; InterlockedDecrement
0x551CF4: test    eax, eax
0x551CF6: jnz     short loc_551D06
0x551CF8: test    esi, esi
0x551CFA: jz      short loc_551D06
0x551CFC: mov     edx, [esi]
0x551CFE: mov     eax, [edx]
0x551D00: push    1
0x551D02: mov     ecx, esi
0x551D04: call    eax
0x551D06: push    edi
0x551D07: call    FormHeapFree
0x551D0C: add     esp, 4
0x551D0F: pop     edi
0x551D10: pop     esi
0x551D11: pop     ebx
0x551D12: retn    4
