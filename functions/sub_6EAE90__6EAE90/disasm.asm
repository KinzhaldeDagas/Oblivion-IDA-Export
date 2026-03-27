0x6EAE90: push    0FFFFFFFFh
0x6EAE92: push    offset SEH_8C62B0
0x6EAE97: mov     eax, large fs:0
0x6EAE9D: push    eax
0x6EAE9E: push    ecx
0x6EAE9F: push    esi
0x6EAEA0: mov     eax, ds:0B30AACh
0x6EAEA5: xor     eax, esp
0x6EAEA7: push    eax
0x6EAEA8: lea     eax, [esp+18h+var_C]
0x6EAEAC: mov     large fs:0, eax
0x6EAEB2: push    44h ; 'D'; Size
0x6EAEB4: call    FormHeapAlloc
0x6EAEB9: mov     esi, eax
0x6EAEBB: add     esp, 4
0x6EAEBE: mov     [esp+18h+var_10], esi
0x6EAEC2: test    esi, esi
0x6EAEC4: mov     [esp+18h+var_4], 0
0x6EAECC: jz      short loc_6EAF14
0x6EAECE: mov     ecx, esi
0x6EAED0: call    sub_6CC4E0
0x6EAED5: mov     dword ptr [esi], offset ??_7NiBlendColorInterpolator@@6B@; const NiBlendColorInterpolator::`vftable'
0x6EAEDB: mov     eax, ds:0B24FD4h
0x6EAEE0: mov     [esi+30h], eax
0x6EAEE3: mov     ecx, ds:0B24FD8h
0x6EAEE9: mov     [esi+34h], ecx
0x6EAEEC: mov     edx, ds:0B24FDCh
0x6EAEF2: mov     [esi+38h], edx
0x6EAEF5: mov     eax, ds:0B24FE0h
0x6EAEFA: mov     [esi+3Ch], eax
0x6EAEFD: mov     byte ptr [esi+40h], 0
0x6EAF01: mov     eax, esi
0x6EAF03: mov     ecx, [esp+18h+var_C]
0x6EAF07: mov     large fs:0, ecx
0x6EAF0E: pop     ecx
0x6EAF0F: pop     esi
0x6EAF10: add     esp, 10h
0x6EAF13: retn
0x6EAF14: xor     eax, eax
0x6EAF16: mov     ecx, [esp+18h+var_C]
0x6EAF1A: mov     large fs:0, ecx
0x6EAF21: pop     ecx
0x6EAF22: pop     esi
0x6EAF23: add     esp, 10h
0x6EAF26: retn
