0x764040: push    esi
0x764041: mov     esi, ecx
0x764043: add     dword ptr [esi+17Ch], 0FFFFFFFFh
0x76404A: lea     eax, [esi+100h]
0x764050: push    edi
0x764051: jnz     short loc_76405A
0x764053: mov     dword ptr [eax+78h], 0
0x76405A: mov     edi, ds:0A28074h
0x764060: push    eax; lpCriticalSection
0x764061: call    edi ; LeaveCriticalSection
0x764063: cmp     dword ptr [esi+0FCh], 1
0x76406A: jnz     short loc_764078
0x76406C: mov     eax, [esi]
0x76406E: mov     edx, [eax+12Ch]
0x764074: mov     ecx, esi
0x764076: call    edx
0x764078: add     dword ptr [esi+0FCh], 0FFFFFFFFh
0x76407F: lea     eax, [esi+80h]
0x764085: jnz     short loc_76408E
0x764087: mov     dword ptr [eax+78h], 0
0x76408E: push    eax; lpCriticalSection
0x76408F: call    edi ; LeaveCriticalSection
0x764091: pop     edi
0x764092: pop     esi
0x764093: retn
