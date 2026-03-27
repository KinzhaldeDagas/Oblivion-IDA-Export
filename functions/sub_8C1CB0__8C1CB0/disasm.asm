0x8C1CB0: push    esi
0x8C1CB1: mov     esi, ecx
0x8C1CB3: cmp     dword ptr [esi+0Ch], 0
0x8C1CB7: jnz     short loc_8C1D2D
0x8C1CB9: push    14h; Size
0x8C1CBB: call    FormHeapAlloc
0x8C1CC0: add     esp, 4
0x8C1CC3: test    eax, eax
0x8C1CC5: jz      short loc_8C1CED
0x8C1CC7: lea     ecx, [eax+4]
0x8C1CCA: mov     dword ptr [ecx], 0
0x8C1CD0: mov     dword ptr [eax+0Ch], 0
0x8C1CD7: mov     dword ptr [eax+10h], 0
0x8C1CDE: mov     dword ptr [eax+8], 1
0x8C1CE5: mov     dword ptr [eax], offset ??_7hkPrismaticConstraintCinfo@@6B@; const hkPrismaticConstraintCinfo::`vftable'
0x8C1CEB: jmp     short loc_8C1CEF
0x8C1CED: xor     ecx, ecx
0x8C1CEF: cmp     dword ptr [esi+8], 0
0x8C1CF3: mov     [esi+0Ch], ecx
0x8C1CF6: jz      short loc_8C1D1F
0x8C1CF8: test    ecx, ecx
0x8C1CFA: jz      short loc_8C1D15
0x8C1CFC: lea     eax, [ecx-4]
0x8C1CFF: push    eax
0x8C1D00: mov     ecx, esi
0x8C1D02: call    sub_8A07E0
0x8C1D07: mov     eax, [esp+4+arg_0]
0x8C1D0B: mov     byte ptr [eax], 1
0x8C1D0E: mov     eax, [esi+0Ch]
0x8C1D11: pop     esi
0x8C1D12: retn    4
0x8C1D15: xor     eax, eax
0x8C1D17: push    eax
0x8C1D18: mov     ecx, esi
0x8C1D1A: call    sub_8A07E0
0x8C1D1F: mov     eax, [esp+4+arg_0]
0x8C1D23: mov     byte ptr [eax], 1
0x8C1D26: mov     eax, [esi+0Ch]
0x8C1D29: pop     esi
0x8C1D2A: retn    4
0x8C1D2D: mov     ecx, [esp+4+arg_0]
0x8C1D31: mov     byte ptr [ecx], 0
0x8C1D34: mov     eax, [esi+0Ch]
0x8C1D37: pop     esi
0x8C1D38: retn    4
