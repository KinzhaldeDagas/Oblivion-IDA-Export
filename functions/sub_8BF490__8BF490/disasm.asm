0x8BF490: push    esi
0x8BF491: mov     esi, ecx
0x8BF493: cmp     dword ptr [esi+0Ch], 0
0x8BF497: jnz     short loc_8BF50D
0x8BF499: push    14h; Size
0x8BF49B: call    FormHeapAlloc
0x8BF4A0: add     esp, 4
0x8BF4A3: test    eax, eax
0x8BF4A5: jz      short loc_8BF4CD
0x8BF4A7: lea     ecx, [eax+4]
0x8BF4AA: mov     dword ptr [ecx], 0
0x8BF4B0: mov     dword ptr [eax+0Ch], 0
0x8BF4B7: mov     dword ptr [eax+10h], 0
0x8BF4BE: mov     dword ptr [eax+8], 1
0x8BF4C5: mov     dword ptr [eax], offset ??_7hkMalleableConstraintCinfo@@6B@; const hkMalleableConstraintCinfo::`vftable'
0x8BF4CB: jmp     short loc_8BF4CF
0x8BF4CD: xor     ecx, ecx
0x8BF4CF: cmp     dword ptr [esi+8], 0
0x8BF4D3: mov     [esi+0Ch], ecx
0x8BF4D6: jz      short loc_8BF4FF
0x8BF4D8: test    ecx, ecx
0x8BF4DA: jz      short loc_8BF4F5
0x8BF4DC: lea     eax, [ecx-4]
0x8BF4DF: push    eax
0x8BF4E0: mov     ecx, esi
0x8BF4E2: call    sub_8A07E0
0x8BF4E7: mov     eax, [esp+4+arg_0]
0x8BF4EB: mov     byte ptr [eax], 1
0x8BF4EE: mov     eax, [esi+0Ch]
0x8BF4F1: pop     esi
0x8BF4F2: retn    4
0x8BF4F5: xor     eax, eax
0x8BF4F7: push    eax
0x8BF4F8: mov     ecx, esi
0x8BF4FA: call    sub_8A07E0
0x8BF4FF: mov     eax, [esp+4+arg_0]
0x8BF503: mov     byte ptr [eax], 1
0x8BF506: mov     eax, [esi+0Ch]
0x8BF509: pop     esi
0x8BF50A: retn    4
0x8BF50D: mov     ecx, [esp+4+arg_0]
0x8BF511: mov     byte ptr [ecx], 0
0x8BF514: mov     eax, [esi+0Ch]
0x8BF517: pop     esi
0x8BF518: retn    4
