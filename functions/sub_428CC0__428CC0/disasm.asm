0x428CC0: push    0FFFFFFFFh
0x428CC2: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x428CC7: mov     eax, large fs:0
0x428CCD: push    eax
0x428CCE: push    ecx
0x428CCF: push    ebx
0x428CD0: push    esi
0x428CD1: push    edi
0x428CD2: mov     eax, ___security_cookie
0x428CD7: xor     eax, esp
0x428CD9: push    eax
0x428CDA: lea     eax, [esp+20h+var_C]
0x428CDE: mov     large fs:0, eax
0x428CE4: mov     edi, ecx
0x428CE6: push    30h ; '0'; a2
0x428CE8: call    BaseExtraList_GetExtraData
0x428CED: mov     ebx, eax
0x428CEF: test    ebx, ebx
0x428CF1: jz      short loc_428D43
0x428CF3: mov     edi, [ebx+0Ch]
0x428CF6: test    edi, edi
0x428CF8: jz      short loc_428D25
0x428CFA: mov     esi, [edi]
0x428CFC: test    esi, esi
0x428CFE: jz      short loc_428D1C
0x428D00: lea     eax, [esi+4]
0x428D03: push    eax; lpAddend
0x428D04: call    ds:InterlockedDecrement
0x428D0A: test    eax, eax
0x428D0C: jnz     short loc_428D1C
0x428D0E: test    esi, esi
0x428D10: jz      short loc_428D1C
0x428D12: mov     edx, [esi]
0x428D14: mov     eax, [edx]
0x428D16: push    1
0x428D18: mov     ecx, esi
0x428D1A: call    eax
0x428D1C: push    edi
0x428D1D: call    FormHeapFree
0x428D22: add     esp, 4
0x428D25: mov     ecx, [esp+20h+arg_0]
0x428D29: mov     [ebx+0Ch], ecx
0x428D2C: mov     eax, ebx
0x428D2E: mov     ecx, [esp+20h+var_C]
0x428D32: mov     large fs:0, ecx
0x428D39: pop     ecx
0x428D3A: pop     edi
0x428D3B: pop     esi
0x428D3C: pop     ebx
0x428D3D: add     esp, 10h
0x428D40: retn    4
0x428D43: push    10h; Size
0x428D45: call    FormHeapAlloc
0x428D4A: add     esp, 4
0x428D4D: mov     [esp+20h+var_10], eax
0x428D51: test    eax, eax
0x428D53: mov     [esp+20h+var_4], 0
0x428D5B: jz      short loc_428D6D
0x428D5D: mov     edx, [esp+20h+arg_0]
0x428D61: push    edx
0x428D62: mov     ecx, eax; this
0x428D64: call    ??0ExtraLight@@QAE@XZ; ExtraLight::ExtraLight(void)
0x428D69: mov     esi, eax
0x428D6B: jmp     short loc_428D6F
0x428D6D: xor     esi, esi
0x428D6F: push    esi; BSExtraData *
0x428D70: mov     ecx, edi; ExtraDataList *
0x428D72: mov     [esp+24h+var_4], 0FFFFFFFFh
0x428D7A: call    BaseExtraList_AddExtra
0x428D7F: mov     eax, esi
0x428D81: mov     ecx, [esp+20h+var_C]
0x428D85: mov     large fs:0, ecx
0x428D8C: pop     ecx
0x428D8D: pop     edi
0x428D8E: pop     esi
0x428D8F: pop     ebx
0x428D90: add     esp, 10h
0x428D93: retn    4
