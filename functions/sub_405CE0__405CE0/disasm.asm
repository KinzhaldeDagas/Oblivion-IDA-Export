0x405CE0: push    ebx
0x405CE1: mov     ebx, ds:InterlockedDecrement
0x405CE7: push    esi
0x405CE8: push    edi
0x405CE9: mov     edi, ecx
0x405CEB: mov     esi, [edi+1D4h]
0x405CF1: test    esi, esi
0x405CF3: jz      short loc_405D17
0x405CF5: lea     eax, [esi+4]
0x405CF8: push    eax; lpAddend
0x405CF9: call    ebx ; InterlockedDecrement
0x405CFB: test    eax, eax
0x405CFD: jnz     short loc_405D0D
0x405CFF: test    esi, esi
0x405D01: jz      short loc_405D0D
0x405D03: mov     edx, [esi]
0x405D05: mov     eax, [edx]
0x405D07: push    1
0x405D09: mov     ecx, esi
0x405D0B: call    eax
0x405D0D: mov     dword ptr [edi+1D4h], 0
0x405D17: mov     esi, [edi+1D8h]
0x405D1D: cmp     esi, [edi+1D4h]
0x405D23: jz      short loc_405D5B
0x405D25: test    esi, esi
0x405D27: jz      short loc_405D41
0x405D29: lea     ecx, [esi+4]
0x405D2C: push    ecx; lpAddend
0x405D2D: call    ebx ; InterlockedDecrement
0x405D2F: test    eax, eax
0x405D31: jnz     short loc_405D41
0x405D33: test    esi, esi
0x405D35: jz      short loc_405D41
0x405D37: mov     edx, [esi]
0x405D39: mov     eax, [edx]
0x405D3B: push    1
0x405D3D: mov     ecx, esi
0x405D3F: call    eax
0x405D41: mov     eax, [edi+1D4h]
0x405D47: test    eax, eax
0x405D49: mov     [edi+1D8h], eax
0x405D4F: jz      short loc_405D5B
0x405D51: add     eax, 4
0x405D54: push    eax; lpAddend
0x405D55: call    ds:InterlockedIncrement
0x405D5B: pop     edi
0x405D5C: pop     esi
0x405D5D: pop     ebx
0x405D5E: retn
