0x5239C0: sub     esp, 8
0x5239C3: push    ebx
0x5239C4: mov     ebx, ecx
0x5239C6: cmp     dword ptr [ebx+0Ch], 7
0x5239CA: jz      loc_523AE3
0x5239D0: fldz
0x5239D2: push    esi
0x5239D3: push    edi
0x5239D4: fstp    [esp+14h+var_8]
0x5239D8: lea     edi, [ebx+58h]
0x5239DB: test    edi, edi
0x5239DD: jz      short loc_523A49
0x5239DF: nop
0x5239E0: cmp     dword ptr [edi+4], 0
0x5239E4: jnz     short loc_5239EB
0x5239E6: cmp     dword ptr [edi], 0
0x5239E9: jz      short loc_523A49
0x5239EB: mov     esi, [edi]
0x5239ED: test    esi, esi
0x5239EF: jz      short loc_523A42
0x5239F1: mov     eax, [esi+18h]
0x5239F4: mov     edx, [eax+18h]
0x5239F7: lea     ecx, [esi+18h]
0x5239FA: call    edx
0x5239FC: cmp     eax, 4
0x5239FF: jnz     short loc_523A42
0x523A01: add     esi, 24h ; '$'
0x523A04: jz      short loc_523A42
0x523A06: cmp     dword ptr [esi+8], 0
0x523A0A: jnz     short loc_523A12
0x523A0C: cmp     dword ptr [esi+4], 0
0x523A10: jz      short loc_523A42
0x523A12: mov     ecx, [esi+4]
0x523A15: test    ecx, ecx
0x523A17: jz      short loc_523A36
0x523A19: cmp     dword ptr [ecx], 504D4156h
0x523A1F: jnz     short loc_523A36
0x523A21: call    EffectItem_GetMagnitude
0x523A26: mov     [esp+14h+var_4], eax
0x523A2A: fild    [esp+14h+var_4]
0x523A2E: fadd    [esp+14h+var_8]
0x523A32: fstp    [esp+14h+var_8]
0x523A36: mov     esi, [esi+8]
0x523A39: test    esi, esi
0x523A3B: jz      short loc_523A42
0x523A3D: add     esi, 0FFFFFFFCh
0x523A40: jnz     short loc_523A06
0x523A42: mov     edi, [edi+4]
0x523A45: test    edi, edi
0x523A47: jnz     short loc_5239E0
0x523A49: mov     eax, [ebx+0E8h]
0x523A4F: test    eax, eax
0x523A51: jz      short loc_523AC9
0x523A53: lea     edi, [eax+30h]
0x523A56: test    edi, edi
0x523A58: jz      short loc_523AC9
0x523A5A: lea     ebx, [ebx+0]
0x523A60: cmp     dword ptr [edi+4], 0
0x523A64: jnz     short loc_523A6B
0x523A66: cmp     dword ptr [edi], 0
0x523A69: jz      short loc_523AC9
0x523A6B: mov     esi, [edi]
0x523A6D: test    esi, esi
0x523A6F: jz      short loc_523AC2
0x523A71: mov     eax, [esi+18h]
0x523A74: mov     edx, [eax+18h]
0x523A77: lea     ecx, [esi+18h]
0x523A7A: call    edx
0x523A7C: cmp     eax, 4
0x523A7F: jnz     short loc_523AC2
0x523A81: add     esi, 24h ; '$'
0x523A84: jz      short loc_523AC2
0x523A86: cmp     dword ptr [esi+8], 0
0x523A8A: jnz     short loc_523A92
0x523A8C: cmp     dword ptr [esi+4], 0
0x523A90: jz      short loc_523AC2
0x523A92: mov     ecx, [esi+4]
0x523A95: test    ecx, ecx
0x523A97: jz      short loc_523AB6
0x523A99: cmp     dword ptr [ecx], 504D4156h
0x523A9F: jnz     short loc_523AB6
0x523AA1: call    EffectItem_GetMagnitude
0x523AA6: mov     [esp+14h+var_4], eax
0x523AAA: fild    [esp+14h+var_4]
0x523AAE: fadd    [esp+14h+var_8]
0x523AB2: fstp    [esp+14h+var_8]
0x523AB6: mov     esi, [esi+8]
0x523AB9: test    esi, esi
0x523ABB: jz      short loc_523AC2
0x523ABD: add     esi, 0FFFFFFFCh
0x523AC0: jnz     short loc_523A86
0x523AC2: mov     edi, [edi+4]
0x523AC5: test    edi, edi
0x523AC7: jnz     short loc_523A60
0x523AC9: fld     [esp+14h+var_8]
0x523ACD: mov     esi, [ebx]
0x523ACF: call    Double_To_SInt32
0x523AD4: push    eax
0x523AD5: mov     eax, [esi+134h]
0x523ADB: push    45h ; 'E'
0x523ADD: mov     ecx, ebx
0x523ADF: call    eax
0x523AE1: pop     edi
0x523AE2: pop     esi
0x523AE3: pop     ebx
0x523AE4: add     esp, 8
0x523AE7: retn
