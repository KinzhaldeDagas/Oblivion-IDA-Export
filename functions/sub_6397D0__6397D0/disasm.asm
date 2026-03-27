0x6397D0: sub     esp, 0Ch
0x6397D3: push    ebx
0x6397D4: push    ebp
0x6397D5: push    esi
0x6397D6: mov     esi, ecx
0x6397D8: mov     eax, [esi]
0x6397DA: mov     edx, [eax+184h]
0x6397E0: push    edi
0x6397E1: call    edx
0x6397E3: cmp     dword ptr [esi+2Ch], 0
0x6397E7: mov     edi, [esp+1Ch+arg_0]
0x6397EB: mov     [esp+1Ch+var_8], eax
0x6397EF: jnz     short loc_6397FE
0x6397F1: mov     eax, [esi]
0x6397F3: mov     edx, [eax+558h]
0x6397F9: push    edi
0x6397FA: mov     ecx, esi
0x6397FC: call    edx
0x6397FE: xor     ebp, ebp
0x639800: cmp     [esi+2Ch], ebp
0x639803: jz      short loc_639819
0x639805: mov     ecx, [esi+2Ch]
0x639808: mov     eax, [ecx]
0x63980A: mov     edx, [eax+190h]
0x639810: call    edx
0x639812: test    al, al
0x639814: jz      short loc_639819
0x639816: mov     ebp, [esi+2Ch]
0x639819: lea     ebx, [esi+128h]
0x63981F: push    ebx
0x639820: mov     ecx, edi
0x639822: mov     byte ptr [esp+20h+arg_0], 0
0x639827: call    sub_4D7E30
0x63982C: call    Double_To_SInt32
0x639831: mov     [esp+1Ch+var_4], eax
0x639835: fild    [esp+1Ch+var_4]
0x639839: fcomp   dword ptr ds:0A56F84h
0x63983F: fnstsw  ax
0x639841: test    ah, 41h
0x639844: jp      short loc_63984A
0x639846: mov     al, 1
0x639848: jmp     short loc_639895
0x63984A: cmp     byte ptr [esi+0D0h], 0
0x639851: jz      short loc_639891
0x639853: mov     ecx, [esi+2Ch]; this
0x639856: mov     ebp, [esi]
0x639858: call    TESObjectREFR_GetWorldSpace
0x63985D: mov     ecx, [esi+2Ch]; this
0x639860: push    eax
0x639861: call    TESObjectREFR_GetParentCell
0x639866: mov     ecx, [ebx]
0x639868: mov     edx, [ebx+4]
0x63986B: push    eax
0x63986C: sub     esp, 0Ch
0x63986F: mov     eax, esp
0x639871: mov     [eax], ecx
0x639873: mov     ecx, [ebx+8]
0x639876: mov     [eax+4], edx
0x639879: mov     edx, [ebp+3DCh]
0x63987F: mov     [eax+8], ecx
0x639882: push    edi
0x639883: mov     ecx, esi
0x639885: call    edx
0x639887: pop     edi
0x639888: pop     esi
0x639889: pop     ebp
0x63988A: pop     ebx
0x63988B: add     esp, 0Ch
0x63988E: retn    4
0x639891: mov     al, byte ptr [esp+1Ch+arg_0]
0x639895: cmp     byte ptr [esi+0D0h], 0
0x63989C: jnz     loc_639933
0x6398A2: test    al, al
0x6398A4: jnz     loc_639933
0x6398AA: cmp     [edi+0C8h], al
0x6398B0: mov     ebp, 101h
0x6398B5: jnz     short loc_6398E6
0x6398B7: mov     eax, [esp+1Ch+var_8]
0x6398BB: mov     ecx, [eax+1Ch]
0x6398BE: shr     ecx, 0Dh
0x6398C1: test    cl, 1
0x6398C4: jnz     short loc_6398E6
0x6398C6: mov     edx, [edi]
0x6398C8: mov     eax, [edx+334h]
0x6398CE: push    1
0x6398D0: mov     ecx, edi
0x6398D2: call    eax
0x6398D4: test    al, al
0x6398D6: jnz     short loc_6398E6
0x6398D8: mov     ecx, [esi+8]
0x6398DB: mov     al, [ecx+20h]
0x6398DE: cmp     al, 0Fh
0x6398E0: jz      short loc_6398E6
0x6398E2: cmp     al, 0Ch
0x6398E4: jnz     short loc_6398EB
0x6398E6: mov     ebp, 201h
0x6398EB: mov     edx, [esi]
0x6398ED: mov     eax, [edx+238h]
0x6398F3: push    ebp
0x6398F4: push    edi
0x6398F5: mov     ecx, esi
0x6398F7: call    eax
0x6398F9: fld     dword ptr ds:0A417B4h
0x6398FF: mov     ebp, [esi]
0x639901: push    ecx
0x639902: mov     ecx, [esi+120h]; this
0x639908: fstp    [esp+20h+var_20]
0x63990B: call    TESObjectREFR_GetWorldSpace
0x639910: mov     ecx, [esi+120h]; this
0x639916: push    eax
0x639917: call    TESObjectREFR_GetParentCell
0x63991C: mov     edx, [ebp+414h]
0x639922: push    eax
0x639923: push    ebx
0x639924: push    edi
0x639925: mov     ecx, esi
0x639927: call    edx
0x639929: pop     edi
0x63992A: pop     esi
0x63992B: pop     ebp
0x63992C: pop     ebx
0x63992D: add     esp, 0Ch
0x639930: retn    4
0x639933: mov     eax, [esi]
0x639935: mov     edx, [eax+0F0h]
0x63993B: push    0
0x63993D: mov     ecx, esi
0x63993F: call    edx
0x639941: mov     [esp+1Ch+var_4], eax
0x639945: mov     eax, [esi]
0x639947: mov     edx, [eax+0F8h]
0x63994D: push    0
0x63994F: mov     ecx, esi
0x639951: call    edx
0x639953: lea     ecx, [edi+44h]; this
0x639956: mov     [esp+1Ch+arg_0], eax
0x63995A: call    ExtraDataList_GetContainerChanges
0x63995F: mov     ebx, eax
0x639961: xor     eax, eax
0x639963: cmp     ebx, eax
0x639965: mov     [esp+1Ch+var_C], eax
0x639969: mov     [esp+1Ch+var_8], eax
0x63996D: jz      short loc_63998C
0x63996F: push    eax
0x639970: push    0Dh
0x639972: mov     ecx, ebx
0x639974: call    ContainerExtraData_GetEquippedInstance
0x639979: push    0
0x63997B: push    0Eh
0x63997D: mov     ecx, ebx
0x63997F: mov     [esp+24h+var_C], eax
0x639983: call    ContainerExtraData_GetEquippedInstance
0x639988: mov     [esp+1Ch+var_8], eax
0x63998C: cmp     byte ptr [esi+0D0h], 0
0x639993: jnz     short loc_6399A2
0x639995: mov     eax, [esi]
0x639997: mov     edx, [eax+194h]
0x63999D: push    edi
0x63999E: mov     ecx, esi
0x6399A0: call    edx
0x6399A2: mov     eax, [esi]
0x6399A4: mov     edx, [eax+0F8h]
0x6399AA: push    1
0x6399AC: mov     ecx, esi
0x6399AE: call    edx
0x6399B0: test    eax, eax
0x6399B2: jz      short loc_6399DD
0x6399B4: mov     ecx, [esi+0F0h]
0x6399BA: push    0
0x6399BC: call    ContainerEntryExtraData_HasWorn
0x6399C1: test    al, al
0x6399C3: jz      short loc_6399DD
0x6399C5: mov     ecx, [esp+1Ch+arg_0]
0x6399C9: push    0
0x6399CB: push    0
0x6399CD: push    0
0x6399CF: call    sub_4853B0
0x6399D4: push    0
0x6399D6: mov     ecx, edi
0x6399D8: call    sub_4DC8F0
0x6399DD: mov     eax, [esi]
0x6399DF: mov     edx, [eax+0F0h]
0x6399E5: push    1
0x6399E7: mov     ecx, esi
0x6399E9: call    edx
0x6399EB: test    eax, eax
0x6399ED: jz      short loc_639A1A
0x6399EF: mov     ecx, [esi+0E8h]
0x6399F5: push    0
0x6399F7: call    ContainerEntryExtraData_HasWorn
0x6399FC: test    al, al
0x6399FE: jz      short loc_639A1A
0x639A00: mov     ebx, [esp+1Ch+var_4]
0x639A04: push    0
0x639A06: push    0
0x639A08: push    0
0x639A0A: mov     ecx, ebx
0x639A0C: call    sub_4853B0
0x639A11: mov     ecx, edi
0x639A13: call    UnequipLight
0x639A18: jmp     short loc_639A1E
0x639A1A: mov     ebx, [esp+1Ch+var_4]
0x639A1E: mov     eax, [esi]
0x639A20: mov     edx, [eax+304h]
0x639A26: mov     ecx, esi
0x639A28: call    edx
0x639A2A: test    al, al
0x639A2C: jz      short loc_639A3C
0x639A2E: mov     eax, [esi]
0x639A30: mov     edx, [eax+300h]
0x639A36: push    0
0x639A38: mov     ecx, esi
0x639A3A: call    edx
0x639A3C: mov     eax, [esi]
0x639A3E: mov     edx, [eax+36Ch]
0x639A44: mov     ecx, esi
0x639A46: call    edx
0x639A48: cmp     eax, 4
0x639A4B: jz      loc_639B3F
0x639A51: mov     eax, [esi]
0x639A53: mov     edx, [eax+36Ch]
0x639A59: mov     ecx, esi
0x639A5B: call    edx
0x639A5D: cmp     eax, 9
0x639A60: jz      loc_639B3F
0x639A66: mov     eax, [esi]
0x639A68: mov     edx, [eax+1B4h]
0x639A6E: push    edi
0x639A6F: mov     ecx, esi
0x639A71: call    edx
0x639A73: test    al, al
0x639A75: jnz     loc_639BFB
0x639A7B: mov     eax, [edi]
0x639A7D: mov     edx, [eax+264h]
0x639A83: push    1
0x639A85: mov     ecx, edi
0x639A87: call    edx
0x639A89: mov     eax, [ebp+0]
0x639A8C: mov     edx, [eax+240h]
0x639A92: push    1
0x639A94: push    edi
0x639A95: mov     ecx, ebp
0x639A97: call    edx
0x639A99: mov     eax, [esi]
0x639A9B: mov     edx, [eax+188h]
0x639AA1: push    1
0x639AA3: push    edi
0x639AA4: mov     ecx, esi
0x639AA6: call    edx
0x639AA8: mov     ecx, [ebp+58h]
0x639AAB: mov     eax, [ecx]
0x639AAD: mov     edx, [eax+178h]
0x639AB3: push    0
0x639AB5: call    edx
0x639AB7: mov     esi, [esi+0F0h]
0x639ABD: test    esi, esi
0x639ABF: jz      short loc_639AEE
0x639AC1: mov     ecx, [esi]
0x639AC3: test    ecx, ecx
0x639AC5: jz      short loc_639AD5
0x639AC7: mov     eax, [esp+1Ch+var_C]
0x639ACB: mov     edx, [eax]
0x639ACD: mov     eax, [edx]
0x639ACF: push    eax
0x639AD0: call    BSSimpleList_PushFront
0x639AD5: mov     ecx, [esp+1Ch+arg_0]
0x639AD9: mov     edx, [ecx+8]
0x639ADC: push    edx
0x639ADD: mov     ecx, edi
0x639ADF: call    EquipShield
0x639AE4: pop     edi
0x639AE5: pop     esi
0x639AE6: pop     ebp
0x639AE7: pop     ebx
0x639AE8: add     esp, 0Ch
0x639AEB: retn    4
0x639AEE: cmp     [esp+1Ch+arg_0], 0
0x639AF3: jnz     loc_639BFB
0x639AF9: test    ebx, ebx
0x639AFB: jz      loc_639BFB
0x639B01: push    0
0x639B03: mov     ecx, ebx
0x639B05: call    ContainerEntryExtraData_HasWorn
0x639B0A: test    al, al
0x639B0C: jnz     loc_639BFB
0x639B12: mov     eax, [esp+1Ch+var_8]
0x639B16: test    eax, eax
0x639B18: jz      short loc_639B2A
0x639B1A: mov     ecx, [ebx]
0x639B1C: test    ecx, ecx
0x639B1E: jz      short loc_639B2A
0x639B20: mov     eax, [eax]
0x639B22: mov     edx, [eax]
0x639B24: push    edx
0x639B25: call    BSSimpleList_PushFront
0x639B2A: mov     eax, [ebx+8]
0x639B2D: push    eax
0x639B2E: mov     ecx, edi
0x639B30: call    EquipLight
0x639B35: pop     edi
0x639B36: pop     esi
0x639B37: pop     ebp
0x639B38: pop     ebx
0x639B39: add     esp, 0Ch
0x639B3C: retn    4
0x639B3F: mov     edx, [edi]
0x639B41: mov     eax, [edx+264h]
0x639B47: push    1
0x639B49: mov     ecx, edi
0x639B4B: call    eax
0x639B4D: mov     edx, [esi]
0x639B4F: mov     eax, [edx+188h]
0x639B55: push    1
0x639B57: push    edi
0x639B58: mov     ecx, esi
0x639B5A: call    eax
0x639B5C: mov     ecx, [ebp+58h]
0x639B5F: mov     edx, [ecx]
0x639B61: mov     eax, [edx+178h]
0x639B67: push    0
0x639B69: call    eax
0x639B6B: mov     edx, [esi]
0x639B6D: mov     eax, [edx+394h]
0x639B73: push    1
0x639B75: mov     ecx, esi
0x639B77: call    eax
0x639B79: mov     edx, [ebp+0]
0x639B7C: mov     eax, [edx+240h]
0x639B82: push    1
0x639B84: push    edi
0x639B85: mov     ecx, ebp
0x639B87: call    eax
0x639B89: mov     esi, [esi+0F0h]
0x639B8F: test    esi, esi
0x639B91: jz      short loc_639BC0
0x639B93: mov     ecx, [esi]
0x639B95: test    ecx, ecx
0x639B97: jz      short loc_639BA7
0x639B99: mov     edx, [esp+1Ch+var_C]
0x639B9D: mov     eax, [edx]
0x639B9F: mov     edx, [eax]
0x639BA1: push    edx
0x639BA2: call    BSSimpleList_PushFront
0x639BA7: mov     eax, [esp+1Ch+arg_0]
0x639BAB: mov     ecx, [eax+8]
0x639BAE: push    ecx
0x639BAF: mov     ecx, edi
0x639BB1: call    EquipShield
0x639BB6: pop     edi
0x639BB7: pop     esi
0x639BB8: pop     ebp
0x639BB9: pop     ebx
0x639BBA: add     esp, 0Ch
0x639BBD: retn    4
0x639BC0: cmp     [esp+1Ch+arg_0], 0
0x639BC5: jnz     short loc_639BFB
0x639BC7: test    ebx, ebx
0x639BC9: jz      short loc_639BFB
0x639BCB: push    0
0x639BCD: mov     ecx, ebx
0x639BCF: call    ContainerEntryExtraData_HasWorn
0x639BD4: test    al, al
0x639BD6: jnz     short loc_639BFB
0x639BD8: mov     eax, [esp+1Ch+var_8]
0x639BDC: test    eax, eax
0x639BDE: jz      short loc_639BF0
0x639BE0: mov     ecx, [ebx]
0x639BE2: test    ecx, ecx
0x639BE4: jz      short loc_639BF0
0x639BE6: mov     edx, [eax]
0x639BE8: mov     eax, [edx]
0x639BEA: push    eax
0x639BEB: call    BSSimpleList_PushFront
0x639BF0: mov     ecx, [ebx+8]
0x639BF3: push    ecx
0x639BF4: mov     ecx, edi
0x639BF6: call    EquipLight
0x639BFB: pop     edi
0x639BFC: pop     esi
0x639BFD: pop     ebp
0x639BFE: pop     ebx
0x639BFF: add     esp, 0Ch
0x639C02: retn    4
