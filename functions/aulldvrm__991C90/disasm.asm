0x991C90: push    esi
0x991C91: mov     eax, [esp+4+arg_C]
0x991C95: or      eax, eax
0x991C97: jnz     short loc_991CC1
0x991C99: mov     ecx, [esp+4+arg_8]
0x991C9D: mov     eax, [esp+4+arg_4]
0x991CA1: xor     edx, edx
0x991CA3: div     ecx
0x991CA5: mov     ebx, eax
0x991CA7: mov     eax, [esp+4+arg_0]
0x991CAB: div     ecx
0x991CAD: mov     esi, eax
0x991CAF: mov     eax, ebx
0x991CB1: mul     [esp+4+arg_8]
0x991CB5: mov     ecx, eax
0x991CB7: mov     eax, esi
0x991CB9: mul     [esp+4+arg_8]
0x991CBD: add     edx, ecx
0x991CBF: jmp     short loc_991D08
0x991CC1: mov     ecx, eax
0x991CC3: mov     ebx, [esp+4+arg_8]
0x991CC7: mov     edx, [esp+4+arg_4]
0x991CCB: mov     eax, [esp+4+arg_0]
0x991CCF: shr     ecx, 1
0x991CD1: rcr     ebx, 1
0x991CD3: shr     edx, 1
0x991CD5: rcr     eax, 1
0x991CD7: or      ecx, ecx
0x991CD9: jnz     short loc_991CCF
0x991CDB: div     ebx
0x991CDD: mov     esi, eax
0x991CDF: mul     [esp+4+arg_C]
0x991CE3: mov     ecx, eax
0x991CE5: mov     eax, [esp+4+arg_8]
0x991CE9: mul     esi
0x991CEB: add     edx, ecx
0x991CED: jb      short loc_991CFD
0x991CEF: cmp     edx, [esp+4+arg_4]
0x991CF3: ja      short loc_991CFD
0x991CF5: jb      short loc_991D06
0x991CF7: cmp     eax, [esp+4+arg_0]
0x991CFB: jbe     short loc_991D06
0x991CFD: dec     esi
0x991CFE: sub     eax, [esp+4+arg_8]
0x991D02: sbb     edx, [esp+4+arg_C]
0x991D06: xor     ebx, ebx
0x991D08: sub     eax, [esp+4+arg_0]
0x991D0C: sbb     edx, [esp+4+arg_4]
0x991D10: neg     edx
0x991D12: neg     eax
0x991D14: sbb     edx, 0
0x991D17: mov     ecx, edx
0x991D19: mov     edx, ebx
0x991D1B: mov     ebx, ecx
0x991D1D: mov     ecx, eax
0x991D1F: mov     eax, esi
0x991D21: pop     esi
0x991D22: retn    10h
