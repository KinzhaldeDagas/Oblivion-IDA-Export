0x918AA0: push    esi
0x918AA1: mov     esi, [esp+4+arg_0]
0x918AA5: push    edi
0x918AA6: mov     edi, ecx
0x918AA8: push    esi
0x918AA9: lea     ecx, [edi-8]
0x918AAC: call    sub_9186D0
0x918AB1: test    eax, eax
0x918AB3: jl      short loc_918ABC
0x918AB5: pop     edi
0x918AB6: xor     eax, eax
0x918AB8: pop     esi
0x918AB9: retn    4
0x918ABC: mov     ecx, ds:0BA950Ch
0x918AC2: lea     eax, [edi+3Ch]
0x918AC5: push    eax
0x918AC6: push    esi
0x918AC7: call    sub_947AC0
0x918ACC: mov     esi, eax
0x918ACE: test    esi, esi
0x918AD0: jz      short loc_918B31
0x918AD2: mov     ecx, [edi+0Ch]
0x918AD5: lea     eax, [edi-8]
0x918AD8: neg     eax
0x918ADA: mov     [esi+8], ecx
0x918ADD: mov     edx, [edi+10h]
0x918AE0: sbb     eax, eax
0x918AE2: and     eax, edi
0x918AE4: mov     [esi+0Ch], edx
0x918AE7: mov     edx, [esi]
0x918AE9: mov     [esi+14h], eax
0x918AEC: mov     eax, [edi+14h]
0x918AEF: push    ebx
0x918AF0: mov     ecx, esi
0x918AF2: mov     [esi+10h], eax
0x918AF5: call    dword ptr [edx+10h]
0x918AF8: mov     eax, [edi+38h]
0x918AFB: mov     ecx, [edi+34h]
0x918AFE: lea     ebx, [edi+30h]
0x918B01: and     eax, 3FFFFFFFh
0x918B06: cmp     ecx, eax
0x918B08: jnz     short loc_918B15
0x918B0A: push    4
0x918B0C: push    ebx
0x918B0D: call    sub_8A6EE0
0x918B12: add     esp, 8
0x918B15: mov     ecx, [ebx+4]
0x918B18: mov     edx, [ebx]
0x918B1A: mov     [edx+ecx*4], esi
0x918B1D: inc     dword ptr [ebx+4]
0x918B20: push    esi
0x918B21: lea     ecx, [edi+1Ch]
0x918B24: call    sub_947EE0
0x918B29: pop     ebx
0x918B2A: pop     edi
0x918B2B: xor     eax, eax
0x918B2D: pop     esi
0x918B2E: retn    4
0x918B31: pop     edi
0x918B32: mov     eax, 1
0x918B37: pop     esi
0x918B38: retn    4
