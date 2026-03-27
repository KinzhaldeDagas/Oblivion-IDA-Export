0x437BB0: push    esi
0x437BB1: mov     esi, ecx
0x437BB3: cmp     dword ptr [esi+0Ch], 6
0x437BB7: jz      short loc_437BF7
0x437BB9: mov     ecx, [esi+18h]
0x437BBC: test    ecx, ecx
0x437BBE: jz      short loc_437BF7
0x437BC0: cmp     dword ptr [ecx+3Ch], 0
0x437BC4: jnz     short loc_437BF7
0x437BC6: mov     eax, [esi+1Ch]
0x437BC9: push    eax
0x437BCA: call    sub_4D7D10
0x437BCF: mov     ecx, [esi+18h]; this
0x437BD2: push    0; a8
0x437BD4: push    0; a7
0x437BD6: call    TESObjectREFR_GetParentCell
0x437BDB: mov     ecx, [esi+18h]
0x437BDE: push    eax; a6
0x437BDF: push    ecx; a1
0x437BE0: mov     ecx, TES; ecx0
0x437BE6: call    sub_441EF0
0x437BEB: mov     ecx, [esi+18h]
0x437BEE: push    1
0x437BF0: call    sub_4D7010
0x437BF5: pop     esi
0x437BF6: retn
0x437BF7: push    edi
0x437BF8: mov     edi, [esi+1Ch]
0x437BFB: test    edi, edi
0x437BFD: jz      short loc_437C22
0x437BFF: lea     edx, [edi+4]
0x437C02: push    edx; lpAddend
0x437C03: call    ds:InterlockedDecrement
0x437C09: test    eax, eax
0x437C0B: jnz     short loc_437C1B
0x437C0D: test    edi, edi
0x437C0F: jz      short loc_437C1B
0x437C11: mov     eax, [edi]
0x437C13: mov     edx, [eax]
0x437C15: push    1
0x437C17: mov     ecx, edi
0x437C19: call    edx
0x437C1B: mov     dword ptr [esi+1Ch], 0
0x437C22: pop     edi
0x437C23: pop     esi
0x437C24: retn
