0x64ADC0: push    ebx
0x64ADC1: mov     ebx, [esp+4+arg_0]
0x64ADC5: push    esi
0x64ADC6: mov     esi, ecx
0x64ADC8: cmp     dword ptr [esi+2Ch], 0
0x64ADCC: jz      short loc_64AE0C
0x64ADCE: mov     eax, [ebx]
0x64ADD0: mov     edx, [eax+120h]
0x64ADD6: push    edi
0x64ADD7: mov     ecx, ebx
0x64ADD9: call    edx
0x64ADDB: cmp     dword ptr [esi+2Ch], 0
0x64ADDF: mov     edi, eax
0x64ADE1: jz      short loc_64ADF2
0x64ADE3: mov     ecx, [esi+2Ch]
0x64ADE6: mov     eax, [ecx]
0x64ADE8: mov     edx, [eax+124h]
0x64ADEE: call    edx
0x64ADF0: jmp     short loc_64ADF4
0x64ADF2: xor     eax, eax
0x64ADF4: push    0
0x64ADF6: push    eax
0x64ADF7: mov     eax, [esi]
0x64ADF9: mov     edx, [eax+2A8h]
0x64ADFF: mov     ecx, esi
0x64AE01: call    edx
0x64AE03: push    eax
0x64AE04: mov     ecx, edi
0x64AE06: call    MagicCaster_CastMagicItem
0x64AE0B: pop     edi
0x64AE0C: mov     eax, [esi]
0x64AE0E: mov     edx, [eax+188h]
0x64AE14: push    1
0x64AE16: push    ebx
0x64AE17: mov     ecx, esi
0x64AE19: call    edx
0x64AE1B: pop     esi
0x64AE1C: pop     ebx
0x64AE1D: retn    4
