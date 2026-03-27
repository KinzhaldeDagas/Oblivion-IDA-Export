0x777A50: sub     esp, 10h
0x777A53: push    esi
0x777A54: push    edi
0x777A55: lea     edi, [ecx+0Ch]
0x777A58: mov     ecx, [edi+4]
0x777A5B: xor     eax, eax
0x777A5D: test    ecx, ecx
0x777A5F: mov     [esp+18h+var_8], edi
0x777A63: jbe     short loc_777A83
0x777A65: mov     esi, [edi+8]
0x777A68: mov     edx, esi
0x777A6A: lea     ebx, [ebx+0]
0x777A70: cmp     dword ptr [edx], 0
0x777A73: jnz     loc_777B07
0x777A79: add     eax, 1
0x777A7C: add     edx, 4
0x777A7F: cmp     eax, ecx
0x777A81: jb      short loc_777A70
0x777A83: xor     eax, eax
0x777A85: test    eax, eax
0x777A87: mov     [esp+18h+var_10], eax
0x777A8B: jz      short loc_777AFB
0x777A8D: push    ebx
0x777A8E: push    ebp
0x777A8F: nop
0x777A90: lea     eax, [esp+20h+var_C]
0x777A94: push    eax
0x777A95: lea     ecx, [esp+24h+var_4]
0x777A99: push    ecx
0x777A9A: lea     edx, [esp+28h+var_10]
0x777A9E: push    edx
0x777A9F: mov     ecx, edi
0x777AA1: call    sub_452600
0x777AA6: mov     ebp, [esp+20h+var_C]
0x777AAA: test    ebp, ebp
0x777AAC: jz      short loc_777AF2
0x777AAE: lea     edi, [ebp+8]
0x777AB1: mov     ebx, 5
0x777AB6: mov     esi, [edi]
0x777AB8: test    esi, esi
0x777ABA: jz      short loc_777ADD
0x777ABC: cmp     dword ptr [esi+20h], 0
0x777AC0: jz      short loc_777ACD
0x777AC2: mov     eax, [esi+20h]
0x777AC5: mov     ecx, [eax]
0x777AC7: mov     edx, [ecx+8]
0x777ACA: push    eax
0x777ACB: call    edx
0x777ACD: mov     ecx, esi
0x777ACF: call    sub_77D1D0
0x777AD4: push    esi
0x777AD5: call    FormHeapFree
0x777ADA: add     esp, 4
0x777ADD: add     edi, 4
0x777AE0: sub     ebx, 1
0x777AE3: jnz     short loc_777AB6
0x777AE5: push    ebp
0x777AE6: call    FormHeapFree
0x777AEB: mov     edi, [esp+24h+var_8]
0x777AEF: add     esp, 4
0x777AF2: cmp     [esp+20h+var_10], 0
0x777AF7: jnz     short loc_777A90
0x777AF9: pop     ebp
0x777AFA: pop     ebx
0x777AFB: mov     ecx, edi
0x777AFD: pop     edi
0x777AFE: pop     esi
0x777AFF: add     esp, 10h
0x777B02: jmp     NiTMap_Clear
0x777B07: mov     eax, [esi+eax*4]
0x777B0A: jmp     loc_777A85
