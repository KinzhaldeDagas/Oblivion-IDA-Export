0x435CE0: push    ebx
0x435CE1: mov     ebx, [esp+4+arg_0]
0x435CE5: push    esi
0x435CE6: mov     esi, ecx
0x435CE8: push    edi
0x435CE9: mov     edi, [esi+0A8h]
0x435CEF: cmp     edi, ebx
0x435CF1: jz      short loc_435D27
0x435CF3: test    edi, edi
0x435CF5: jz      short loc_435D13
0x435CF7: lea     eax, [edi+4]
0x435CFA: push    eax; lpAddend
0x435CFB: call    ds:InterlockedDecrement
0x435D01: test    eax, eax
0x435D03: jnz     short loc_435D13
0x435D05: test    edi, edi
0x435D07: jz      short loc_435D13
0x435D09: mov     edx, [edi]
0x435D0B: mov     eax, [edx]
0x435D0D: push    1
0x435D0F: mov     ecx, edi
0x435D11: call    eax
0x435D13: test    ebx, ebx
0x435D15: mov     [esi+0A8h], ebx
0x435D1B: jz      short loc_435D27
0x435D1D: add     ebx, 4
0x435D20: push    ebx; lpAddend
0x435D21: call    ds:InterlockedIncrement
0x435D27: mov     ecx, [esi+0A8h]
0x435D2D: test    ecx, ecx
0x435D2F: jz      short loc_435D48
0x435D31: call    sub_452A60
0x435D36: cmp     eax, esi
0x435D38: jz      short loc_435D48
0x435D3A: mov     ecx, [esi+0A8h]
0x435D40: mov     edx, [ecx]
0x435D42: mov     eax, [edx+4Ch]
0x435D45: push    esi
0x435D46: call    eax
0x435D48: pop     edi
0x435D49: pop     esi
0x435D4A: pop     ebx
0x435D4B: retn    4
