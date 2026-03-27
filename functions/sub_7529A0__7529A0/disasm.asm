0x7529A0: push    ebx
0x7529A1: push    esi
0x7529A2: mov     esi, [esp+8+arg_0]
0x7529A6: push    edi
0x7529A7: push    esi
0x7529A8: mov     edi, ecx
0x7529AA: call    sub_752EC0
0x7529AF: mov     eax, ds:0B40C84h
0x7529B4: push    eax; ArgList
0x7529B5: call    TESOutput_PrintString
0x7529BA: movzx   ebx, word ptr [esi+0Ah]
0x7529BE: movzx   ecx, word ptr [esi+8]
0x7529C2: add     esp, 4
0x7529C5: cmp     ebx, ecx
0x7529C7: mov     [esp+0Ch+arg_0], eax
0x7529CB: jb      short loc_7529DB
0x7529CD: movzx   edx, word ptr [esi+0Eh]
0x7529D1: add     edx, ebx
0x7529D3: push    edx
0x7529D4: mov     ecx, esi
0x7529D6: call    NiTArray_SetSize
0x7529DB: lea     eax, [esp+0Ch+arg_0]
0x7529DF: push    eax
0x7529E0: push    ebx
0x7529E1: mov     ecx, esi
0x7529E3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7529E8: movzx   ecx, word ptr [edi+18h]
0x7529EC: push    ecx; __int16
0x7529ED: push    offset aNumSpawnGenera; "Num Spawn Generations"
0x7529F2: call    TESOutput_PrintLabeledUnsignedShort
0x7529F7: movzx   ebx, word ptr [esi+0Ah]
0x7529FB: movzx   edx, word ptr [esi+8]
0x7529FF: add     esp, 8
0x752A02: cmp     ebx, edx
0x752A04: mov     [esp+0Ch+arg_0], eax
0x752A08: jb      short loc_752A18
0x752A0A: movzx   eax, word ptr [esi+0Eh]
0x752A0E: add     eax, ebx
0x752A10: push    eax
0x752A11: mov     ecx, esi
0x752A13: call    NiTArray_SetSize
0x752A18: lea     ecx, [esp+0Ch+arg_0]
0x752A1C: push    ecx
0x752A1D: push    ebx
0x752A1E: mov     ecx, esi
0x752A20: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x752A25: fld     dword ptr [edi+1Ch]
0x752A28: push    ecx
0x752A29: fstp    [esp+10h+var_10]; float
0x752A2C: push    offset aPercentageSpaw; "Percentage Spawned"
0x752A31: call    TESOutput_PrintLabeledFloat
0x752A36: movzx   ebx, word ptr [esi+0Ah]
0x752A3A: movzx   edx, word ptr [esi+8]
0x752A3E: add     esp, 8
0x752A41: cmp     ebx, edx
0x752A43: mov     [esp+0Ch+arg_0], eax
0x752A47: jb      short loc_752A57
0x752A49: movzx   eax, word ptr [esi+0Eh]
0x752A4D: add     eax, ebx
0x752A4F: push    eax
0x752A50: mov     ecx, esi
0x752A52: call    NiTArray_SetSize
0x752A57: lea     ecx, [esp+0Ch+arg_0]
0x752A5B: push    ecx
0x752A5C: push    ebx
0x752A5D: mov     ecx, esi
0x752A5F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x752A64: movzx   edx, word ptr [edi+20h]
0x752A68: push    edx; __int16
0x752A69: push    offset aMinNumToSpawn; "Min Num to Spawn"
0x752A6E: call    TESOutput_PrintLabeledUnsignedShort
0x752A73: movzx   ebx, word ptr [esi+0Ah]
0x752A77: mov     [esp+14h+arg_0], eax
0x752A7B: movzx   eax, word ptr [esi+8]
0x752A7F: add     esp, 8
0x752A82: cmp     ebx, eax
0x752A84: jb      short loc_752A94
0x752A86: movzx   ecx, word ptr [esi+0Eh]
0x752A8A: add     ecx, ebx
0x752A8C: push    ecx
0x752A8D: mov     ecx, esi
0x752A8F: call    NiTArray_SetSize
0x752A94: lea     edx, [esp+0Ch+arg_0]
0x752A98: push    edx
0x752A99: push    ebx
0x752A9A: mov     ecx, esi
0x752A9C: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x752AA1: movzx   eax, word ptr [edi+22h]
0x752AA5: push    eax; __int16
0x752AA6: push    offset aMaxNumToSpawn; "Max Num to Spawn"
0x752AAB: call    TESOutput_PrintLabeledUnsignedShort
0x752AB0: movzx   ebx, word ptr [esi+0Ah]
0x752AB4: movzx   ecx, word ptr [esi+8]
0x752AB8: add     esp, 8
0x752ABB: cmp     ebx, ecx
0x752ABD: mov     [esp+0Ch+arg_0], eax
0x752AC1: jb      short loc_752AD1
0x752AC3: movzx   edx, word ptr [esi+0Eh]
0x752AC7: add     edx, ebx
0x752AC9: push    edx
0x752ACA: mov     ecx, esi
0x752ACC: call    NiTArray_SetSize
0x752AD1: lea     eax, [esp+0Ch+arg_0]
0x752AD5: push    eax
0x752AD6: push    ebx
0x752AD7: mov     ecx, esi
0x752AD9: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x752ADE: fld     dword ptr [edi+24h]
0x752AE1: push    ecx
0x752AE2: fstp    [esp+10h+var_10]; float
0x752AE5: push    offset aSpawnSpeedChao; "Spawn Speed Chaos"
0x752AEA: call    TESOutput_PrintLabeledFloat
0x752AEF: movzx   ebx, word ptr [esi+0Ah]
0x752AF3: movzx   ecx, word ptr [esi+8]
0x752AF7: add     esp, 8
0x752AFA: cmp     ebx, ecx
0x752AFC: mov     [esp+0Ch+arg_0], eax
0x752B00: jb      short loc_752B10
0x752B02: movzx   edx, word ptr [esi+0Eh]
0x752B06: add     edx, ebx
0x752B08: push    edx
0x752B09: mov     ecx, esi
0x752B0B: call    NiTArray_SetSize
0x752B10: lea     eax, [esp+0Ch+arg_0]
0x752B14: push    eax
0x752B15: push    ebx
0x752B16: mov     ecx, esi
0x752B18: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x752B1D: fld     dword ptr [edi+28h]
0x752B20: push    ecx
0x752B21: fstp    [esp+10h+var_10]; float
0x752B24: push    offset aSpawnDirChaos; "Spawn Dir Chaos"
0x752B29: call    TESOutput_PrintLabeledFloat
0x752B2E: movzx   ebx, word ptr [esi+0Ah]
0x752B32: movzx   ecx, word ptr [esi+8]
0x752B36: add     esp, 8
0x752B39: cmp     ebx, ecx
0x752B3B: mov     [esp+0Ch+arg_0], eax
0x752B3F: jb      short loc_752B4F
0x752B41: movzx   edx, word ptr [esi+0Eh]
0x752B45: add     edx, ebx
0x752B47: push    edx
0x752B48: mov     ecx, esi
0x752B4A: call    NiTArray_SetSize
0x752B4F: lea     eax, [esp+0Ch+arg_0]
0x752B53: push    eax
0x752B54: push    ebx
0x752B55: mov     ecx, esi
0x752B57: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x752B5C: fld     dword ptr [edi+2Ch]
0x752B5F: push    ecx
0x752B60: fstp    [esp+10h+var_10]; float
0x752B63: push    offset aLifeSpan; "Life Span"
0x752B68: call    TESOutput_PrintLabeledFloat
0x752B6D: movzx   ebx, word ptr [esi+0Ah]
0x752B71: movzx   ecx, word ptr [esi+8]
0x752B75: add     esp, 8
0x752B78: cmp     ebx, ecx
0x752B7A: mov     [esp+0Ch+arg_0], eax
0x752B7E: jb      short loc_752B8E
0x752B80: movzx   edx, word ptr [esi+0Eh]
0x752B84: add     edx, ebx
0x752B86: push    edx
0x752B87: mov     ecx, esi
0x752B89: call    NiTArray_SetSize
0x752B8E: lea     eax, [esp+0Ch+arg_0]
0x752B92: push    eax
0x752B93: push    ebx
0x752B94: mov     ecx, esi
0x752B96: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x752B9B: fld     dword ptr [edi+30h]
0x752B9E: push    ecx
0x752B9F: fstp    [esp+10h+var_10]; float
0x752BA2: push    offset aLifeSpanVariat; "Life Span Variation"
0x752BA7: call    TESOutput_PrintLabeledFloat
0x752BAC: movzx   edi, word ptr [esi+0Ah]
0x752BB0: movzx   ecx, word ptr [esi+8]
0x752BB4: add     esp, 8
0x752BB7: cmp     edi, ecx
0x752BB9: mov     [esp+0Ch+arg_0], eax
0x752BBD: jb      short loc_752BCD
0x752BBF: movzx   edx, word ptr [esi+0Eh]
0x752BC3: add     edx, edi
0x752BC5: push    edx
0x752BC6: mov     ecx, esi
0x752BC8: call    NiTArray_SetSize
0x752BCD: lea     eax, [esp+0Ch+arg_0]
0x752BD1: push    eax
0x752BD2: push    edi
0x752BD3: mov     ecx, esi
0x752BD5: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x752BDA: pop     edi
0x752BDB: pop     esi
0x752BDC: pop     ebx
0x752BDD: retn    4
