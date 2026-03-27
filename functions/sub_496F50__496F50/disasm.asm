0x496F50: sub     esp, 8
0x496F53: push    ebx
0x496F54: push    esi
0x496F55: mov     esi, ecx
0x496F57: push    edi
0x496F58: lea     ebx, [esi+80h]
0x496F5E: push    offset unk_A2F830; lpCriticalSection
0x496F63: mov     ecx, ebx
0x496F65: call    NiEnterCriticalSection
0x496F6A: mov     edi, [esp+14h+arg_0]
0x496F6E: xor     eax, eax
0x496F70: mov     [esp+14h+var_8], eax
0x496F74: mov     [esp+14h+var_4], eax
0x496F78: lea     eax, [esp+14h+var_8]
0x496F7C: push    eax
0x496F7D: push    edi
0x496F7E: mov     ecx, esi
0x496F80: call    sub_496DF0
0x496F85: test    al, al
0x496F87: jz      short loc_496FB8
0x496F89: mov     eax, [esp+14h+var_4]
0x496F8D: sub     eax, 1
0x496F90: jnz     short loc_496FAA
0x496F92: push    edi
0x496F93: mov     ecx, esi
0x496F95: call    NiTMap_RemoveAt
0x496F9A: mov     ecx, ebx; lpCriticalSection
0x496F9C: call    NiLeaveCriticalSection_0
0x496FA1: pop     edi
0x496FA2: pop     esi
0x496FA3: pop     ebx
0x496FA4: add     esp, 8
0x496FA7: retn    4
0x496FAA: mov     ecx, [esp+14h+var_8]
0x496FAE: push    eax
0x496FAF: push    ecx
0x496FB0: push    edi
0x496FB1: mov     ecx, esi
0x496FB3: call    sub_496D50
0x496FB8: mov     ecx, ebx; lpCriticalSection
0x496FBA: call    NiLeaveCriticalSection_0
0x496FBF: pop     edi
0x496FC0: pop     esi
0x496FC1: pop     ebx
0x496FC2: add     esp, 8
0x496FC5: retn    4
