0x929D70: push    ebp
0x929D71: mov     ebp, esp
0x929D73: and     esp, 0FFFFFFF0h
0x929D76: sub     esp, 0Ch
0x929D79: push    esi
0x929D7A: mov     esi, ecx
0x929D7C: call    sub_9156C0
0x929D81: mov     ecx, [ebp+arg_4]
0x929D84: xor     eax, eax
0x929D86: mov     dword ptr [esi], offset off_AA1A84
0x929D8C: mov     [esi+24h], eax
0x929D8F: mov     [esi+28h], eax
0x929D92: mov     eax, [ebp+arg_0]
0x929D95: mov     dword ptr [esi+2Ch], 80000000h
0x929D9C: mov     [esp+10h+var_4], 3F800000h
0x929DA4: movss   xmm0, [esp+10h+var_4]
0x929DAA: mov     [esi+30h], eax
0x929DAD: shufps  xmm0, xmm0, 0
0x929DB1: movaps  xmmword ptr [esi+10h], xmm0
0x929DB5: mov     [esi+20h], ecx
0x929DB8: mov     eax, esi
0x929DBA: pop     esi
0x929DBB: mov     esp, ebp
0x929DBD: pop     ebp
0x929DBE: retn    8
