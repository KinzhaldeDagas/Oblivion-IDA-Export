0x452FE0: push    ebx
0x452FE1: mov     ebx, [esp+4+a2]
0x452FE5: push    esi
0x452FE6: push    edi
0x452FE7: lea     eax, [esp+0Ch+a2]
0x452FEB: push    eax
0x452FEC: push    ebx
0x452FED: mov     edi, ecx
0x452FEF: call    NiTMap_GetAt
0x452FF4: test    al, al
0x452FF6: jnz     short loc_45302F
0x452FF8: push    8; Size
0x452FFA: call    FormHeapAlloc
0x452FFF: add     esp, 4
0x453002: test    eax, eax
0x453004: jz      short loc_453020
0x453006: push    eax; a3
0x453007: push    ebx; a2
0x453008: mov     ecx, edi; this
0x45300A: mov     dword ptr [eax], 0
0x453010: mov     dword ptr [eax+4], 0
0x453017: mov     esi, eax
0x453019: call    NiTMap_SetAt
0x45301E: jmp     short loc_453033
0x453020: xor     eax, eax
0x453022: push    eax; a3
0x453023: push    ebx; a2
0x453024: mov     ecx, edi; this
0x453026: mov     esi, eax
0x453028: call    NiTMap_SetAt
0x45302D: jmp     short loc_453033
0x45302F: mov     esi, [esp+0Ch+a2]
0x453033: push    0Ch; Size
0x453035: call    FormHeapAlloc
0x45303A: mov     ecx, [esp+10h+arg_4]
0x45303E: mov     edx, [esp+10h+arg_8]
0x453042: mov     edi, eax
0x453044: mov     eax, [esp+10h+arg_C]
0x453048: add     esp, 4
0x45304B: mov     [edi], ecx
0x45304D: mov     [edi+4], edx
0x453050: mov     [edi+8], eax
0x453053: cmp     dword ptr [esi], 0
0x453056: jz      short loc_45308D
0x453058: push    8; Size
0x45305A: call    FormHeapAlloc
0x45305F: add     esp, 4
0x453062: test    eax, eax
0x453064: jz      short loc_453082
0x453066: mov     ecx, [esi]
0x453068: mov     [eax], ecx
0x45306A: mov     dword ptr [eax+4], 0
0x453071: mov     edx, [esi+4]
0x453074: mov     [eax+4], edx
0x453077: mov     [esi], edi
0x453079: pop     edi
0x45307A: mov     [esi+4], eax
0x45307D: pop     esi
0x45307E: pop     ebx
0x45307F: retn    10h
0x453082: mov     edx, [esi+4]
0x453085: xor     eax, eax
0x453087: mov     [eax+4], edx
0x45308A: mov     [esi+4], eax
0x45308D: mov     [esi], edi
0x45308F: pop     edi
0x453090: pop     esi
0x453091: pop     ebx
0x453092: retn    10h
