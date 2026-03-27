0x42FDA0: push    esi
0x42FDA1: mov     esi, ecx
0x42FDA3: mov     eax, [esi+0Ch]
0x42FDA6: test    eax, eax
0x42FDA8: mov     dword ptr [esi], offset ??_7BackgroundLoader@@6B@; const BackgroundLoader::`vftable'
0x42FDAE: jz      short loc_42FDBD
0x42FDB0: mov     ecx, [eax+4]
0x42FDB3: push    offset unk_A2F830; lpCriticalSection
0x42FDB8: call    NiEnterCriticalSection
0x42FDBD: cmp     dword ptr [esi+8], 1
0x42FDC1: jnz     short loc_42FDCA
0x42FDC3: mov     dword ptr [esi+8], 2
0x42FDCA: mov     eax, [esi+0Ch]
0x42FDCD: test    eax, eax
0x42FDCF: jz      short loc_42FDD9
0x42FDD1: mov     ecx, [eax+4]; lpCriticalSection
0x42FDD4: call    NiLeaveCriticalSection_0
0x42FDD9: mov     eax, [esi+0Ch]
0x42FDDC: test    eax, eax
0x42FDDE: jz      short loc_42FE44
0x42FDE0: mov     ecx, [eax+4]
0x42FDE3: push    offset unk_A2F830; lpCriticalSection
0x42FDE8: call    NiEnterCriticalSection
0x42FDED: mov     eax, [esi+8]
0x42FDF0: cmp     eax, 1
0x42FDF3: jz      short loc_42FDFA
0x42FDF5: cmp     eax, 2
0x42FDF8: jnz     short loc_42FE39
0x42FDFA: mov     eax, [esi+0Ch]
0x42FDFD: test    eax, eax
0x42FDFF: jz      short loc_42FE20
0x42FE01: push    edi
0x42FE02: lea     edi, [eax+2Ch]
0x42FE05: mov     eax, [edi+8]
0x42FE08: push    0FFFFFFFFh; dwMilliseconds
0x42FE0A: push    eax; hHandle
0x42FE0B: call    ds:WaitForSingleObject
0x42FE11: cmp     eax, 102h
0x42FE16: jz      short loc_42FE1F
0x42FE18: push    edi; lpAddend
0x42FE19: call    ds:InterlockedDecrement
0x42FE1F: pop     edi
0x42FE20: mov     edx, [esi]
0x42FE22: mov     eax, [edx+8]
0x42FE25: mov     ecx, esi
0x42FE27: call    eax
0x42FE29: mov     edx, [esi]
0x42FE2B: mov     eax, [edx+0Ch]
0x42FE2E: mov     ecx, esi
0x42FE30: mov     dword ptr [esi+8], 0
0x42FE37: call    eax
0x42FE39: mov     ecx, [esi+0Ch]
0x42FE3C: mov     ecx, [ecx+4]; lpCriticalSection
0x42FE3F: call    NiLeaveCriticalSection_0
0x42FE44: mov     ecx, [esi+0Ch]
0x42FE47: test    ecx, ecx
0x42FE49: jz      short loc_42FE5A
0x42FE4B: mov     edx, [ecx]
0x42FE4D: mov     eax, [edx]
0x42FE4F: push    1
0x42FE51: call    eax
0x42FE53: mov     dword ptr [esi+0Ch], 0
0x42FE5A: pop     esi
0x42FE5B: retn
