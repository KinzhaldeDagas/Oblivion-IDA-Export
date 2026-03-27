0x6B6700: push    esi
0x6B6701: mov     esi, ecx
0x6B6703: test    dword ptr [esi], 4000h
0x6B6709: mov     eax, 1
0x6B670E: jz      short loc_6B6716
0x6B6710: sub     ds:0B3C20Ch, eax
0x6B6716: sub     ds:0B3C210h, eax
0x6B671C: mov     eax, [esi+4Ch]
0x6B671F: test    eax, eax
0x6B6721: jz      short loc_6B672C
0x6B6723: push    eax
0x6B6724: call    FormHeapFree
0x6B6729: add     esp, 4
0x6B672C: cmp     dword ptr [esi+50h], 0
0x6B6730: jz      short loc_6B6744
0x6B6732: mov     eax, [esi+50h]
0x6B6735: mov     ecx, [eax]
0x6B6737: mov     edx, [ecx+8]
0x6B673A: push    eax
0x6B673B: call    edx
0x6B673D: test    eax, eax
0x6B673F: jnz     short loc_6B6732
0x6B6741: mov     [esi+50h], eax
0x6B6744: cmp     dword ptr [esi+54h], 0
0x6B6748: jz      short loc_6B6762
0x6B674A: lea     ebx, [ebx+0]
0x6B6750: mov     eax, [esi+54h]
0x6B6753: mov     ecx, [eax]
0x6B6755: mov     edx, [ecx+8]
0x6B6758: push    eax
0x6B6759: call    edx
0x6B675B: test    eax, eax
0x6B675D: jnz     short loc_6B6750
0x6B675F: mov     [esi+54h], eax
0x6B6762: pop     esi
0x6B6763: retn
