0x4FA580: push    esi
0x4FA581: mov     esi, offset dword_B361CC
0x4FA586: cmp     dword ptr [esi+4], 0
0x4FA58A: jnz     short loc_4FA591
0x4FA58C: cmp     dword ptr [esi], 0
0x4FA58F: jz      short loc_4FA59F
0x4FA591: mov     ecx, [esi]
0x4FA593: call    sub_4E4690
0x4FA598: mov     esi, [esi+4]
0x4FA59B: test    esi, esi
0x4FA59D: jnz     short loc_4FA586
0x4FA59F: mov     eax, ds:0B361D0h
0x4FA5A4: test    eax, eax
0x4FA5A6: jz      short loc_4FA5C7
0x4FA5A8: jmp     short loc_4FA5B0
0x4FA5AA: align 10h
0x4FA5B0: mov     esi, [eax+4]
0x4FA5B3: push    eax
0x4FA5B4: call    FormHeapFree
0x4FA5B9: add     esp, 4
0x4FA5BC: test    esi, esi
0x4FA5BE: mov     eax, esi
0x4FA5C0: mov     ds:0B361D0h, eax
0x4FA5C5: jnz     short loc_4FA5B0
0x4FA5C7: mov     dword ptr ds:0B361CCh, 0
0x4FA5D1: pop     esi
0x4FA5D2: retn
