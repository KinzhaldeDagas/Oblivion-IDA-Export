0x42C560: push    esi
0x42C561: mov     esi, ecx
0x42C563: mov     eax, [esi+154h]
0x42C569: test    eax, eax
0x42C56B: push    edi
0x42C56C: jz      short loc_42C57D
0x42C56E: lea     ecx, [eax+3Ch]
0x42C571: push    ecx
0x42C572: lea     ecx, [eax+200h]
0x42C578: call    NiEnterCriticalSection
0x42C57D: mov     ecx, [esi+30h]
0x42C580: cmp     ecx, 0FFFFFFFFh
0x42C583: jnz     short loc_42C58B
0x42C585: mov     ecx, [esi+148h]
0x42C58B: mov     eax, [esi+158h]
0x42C591: add     eax, ecx
0x42C593: mov     ecx, [esi+154h]
0x42C599: mov     edx, [ecx+30h]
0x42C59C: cmp     edx, 0FFFFFFFFh
0x42C59F: jnz     short loc_42C5A7
0x42C5A1: mov     edx, [ecx+148h]
0x42C5A7: cmp     edx, eax
0x42C5A9: jz      short loc_42C5B5
0x42C5AB: mov     edx, [ecx]
0x42C5AD: push    0
0x42C5AF: push    eax
0x42C5B0: mov     eax, [edx+0Ch]
0x42C5B3: call    eax
0x42C5B5: mov     eax, [esi+150h]
0x42C5BB: mov     ecx, [esi+154h]
0x42C5C1: mov     edx, [ecx]
0x42C5C3: mov     edx, [edx+24h]
0x42C5C6: push    eax
0x42C5C7: mov     eax, [esp+0Ch+arg_0]
0x42C5CB: push    eax; lpCriticalSection
0x42C5CC: call    edx
0x42C5CE: mov     edi, eax
0x42C5D0: add     [esi+148h], edi
0x42C5D6: mov     esi, [esi+154h]
0x42C5DC: test    esi, esi
0x42C5DE: jz      short loc_42C5EB
0x42C5E0: lea     ecx, [esi+200h]; lpCriticalSection
0x42C5E6: call    NiLeaveCriticalSection_0
0x42C5EB: mov     eax, edi
0x42C5ED: pop     edi
0x42C5EE: pop     esi
0x42C5EF: retn    8
