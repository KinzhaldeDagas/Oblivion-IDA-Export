0x6B8950: sub     esp, 120h
0x6B8956: mov     eax, ds:0B30AACh
0x6B895B: xor     eax, esp
0x6B895D: mov     [esp+120h+var_4], eax
0x6B8964: push    ebx
0x6B8965: push    esi
0x6B8966: mov     esi, ecx
0x6B8968: mov     ecx, ds:0B33B00h
0x6B896E: push    edi
0x6B896F: mov     [esp+12Ch+var_11C], 0
0x6B8977: xor     ebx, ebx
0x6B8979: call    sub_45A170
0x6B897E: test    al, al
0x6B8980: jz      loc_6B8A1F
0x6B8986: mov     ecx, ds:0B33B00h
0x6B898C: push    4; Size
0x6B898E: lea     eax, [esp+130h+Dst]
0x6B8992: push    eax; Dst
0x6B8993: call    SaveLoad_LoadData
0x6B8998: cmp     [esp+12Ch+Dst], 4B4F4C42h
0x6B89A0: jz      short loc_6B8A0A
0x6B89A2: mov     eax, ds:0B33B00h
0x6B89A7: mov     edi, [eax+80h]
0x6B89AD: test    edi, edi
0x6B89AF: jz      short loc_6B89EE
0x6B89B1: mov     ecx, [edi]
0x6B89B3: push    ecx; a1
0x6B89B4: call    TESForm_LookupByFormID
0x6B89B9: mov     edx, [edi+5]
0x6B89BC: movzx   ecx, byte ptr [edi+9]
0x6B89C0: add     esp, 4
0x6B89C3: push    edx
0x6B89C4: mov     edx, [eax]
0x6B89C6: push    ecx
0x6B89C7: mov     ecx, eax
0x6B89C9: mov     eax, [edx+0D4h]
0x6B89CF: call    eax
0x6B89D1: mov     ecx, [edi]
0x6B89D3: push    eax
0x6B89D4: push    ecx
0x6B89D5: push    235h
0x6B89DA: push    offset a_DialogueMenut; ".\\Dialogue\\MenuTopic.cpp"
0x6B89DF: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x6B89E4: call    PrintError
0x6B89E9: add     esp, 1Ch
0x6B89EC: jmp     short loc_6B8A0A
0x6B89EE: movzx   edx, byte ptr [eax+7Ch]
0x6B89F2: push    edx
0x6B89F3: push    235h
0x6B89F8: push    offset a_DialogueMenut; ".\\Dialogue\\MenuTopic.cpp"
0x6B89FD: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x6B8A02: call    PrintError
0x6B8A07: add     esp, 10h
0x6B8A0A: mov     ecx, ds:0B33B00h
0x6B8A10: mov     ebx, [ecx+14h]
0x6B8A13: push    2; Size
0x6B8A15: lea     eax, [esp+130h+var_11C]
0x6B8A19: push    eax; Dst
0x6B8A1A: call    SaveLoad_LoadData
0x6B8A1F: push    104h
0x6B8A24: lea     ecx, [esp+130h+a2]
0x6B8A28: push    0
0x6B8A2A: push    ecx
0x6B8A2B: call    __memset
0x6B8A30: mov     ecx, ds:0B33B00h
0x6B8A36: add     esp, 0Ch
0x6B8A39: push    1; Size
0x6B8A3B: lea     edx, [esp+130h+a1+3]
0x6B8A3F: push    edx; Dst
0x6B8A40: call    SaveLoad_LoadData
0x6B8A45: mov     al, byte ptr [esp+12Ch+a1+3]
0x6B8A49: test    al, al
0x6B8A4B: jz      short loc_6B8A6F
0x6B8A4D: movzx   eax, al
0x6B8A50: push    eax; Size
0x6B8A51: lea     ecx, [esp+130h+a2]
0x6B8A55: push    ecx; Dst
0x6B8A56: mov     ecx, ds:0B33B00h
0x6B8A5C: call    SaveLoad_LoadData
0x6B8A61: push    0; a3
0x6B8A63: lea     edx, [esp+130h+a2]
0x6B8A67: push    edx; a2
0x6B8A68: mov     ecx, esi; this
0x6B8A6A: call    BSStringT_Set
0x6B8A6F: mov     ecx, ds:0B33B00h
0x6B8A75: push    1; Size
0x6B8A77: lea     eax, [esi+8]
0x6B8A7A: push    eax; Dst
0x6B8A7B: call    SaveLoad_LoadData
0x6B8A80: push    1; Size
0x6B8A82: lea     ecx, [esi+20h]
0x6B8A85: push    ecx; Dst
0x6B8A86: mov     ecx, ds:0B33B00h
0x6B8A8C: call    SaveLoad_LoadData
0x6B8A91: mov     ecx, ds:0B33B00h
0x6B8A97: push    1; Size
0x6B8A99: lea     edx, [esi+21h]
0x6B8A9C: push    edx; Dst
0x6B8A9D: call    SaveLoad_LoadData
0x6B8AA2: mov     ecx, ds:0B33B00h
0x6B8AA8: push    4; Size
0x6B8AAA: lea     eax, [esp+130h+var_118]
0x6B8AAE: push    eax; Dst
0x6B8AAF: call    SaveLoad_LoadFormID
0x6B8AB4: mov     ecx, [esp+134h+a1]
0x6B8AB8: push    0; int
0x6B8ABA: push    offset ??_R0?AVTESQuest@@@8; struct TypeDescriptor *
0x6B8ABF: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x6B8AC4: push    0; int
0x6B8AC6: push    ecx; a1
0x6B8AC7: call    TESForm_LookupByFormID
0x6B8ACC: add     esp, 4
0x6B8ACF: push    eax; void *
0x6B8AD0: call    OblivionDynamicCast
0x6B8AD5: add     esp, 14h
0x6B8AD8: push    4; Size
0x6B8ADA: lea     edx, [esp+138h+var_11C]
0x6B8ADE: mov     [esi+14h], eax
0x6B8AE1: mov     ecx, ds:0B33B00h
0x6B8AE7: push    edx; Dst
0x6B8AE8: call    SaveLoad_LoadFormID
0x6B8AED: mov     eax, [esp+13Ch+var_124]
0x6B8AF1: push    0; int
0x6B8AF3: push    offset ??_R0?AVTESTopic@@@8; struct TypeDescriptor *
0x6B8AF8: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x6B8AFD: push    0; int
0x6B8AFF: push    eax; a1
0x6B8B00: call    TESForm_LookupByFormID
0x6B8B05: add     esp, 4
0x6B8B08: push    eax; void *
0x6B8B09: call    OblivionDynamicCast
0x6B8B0E: add     esp, 14h
0x6B8B11: push    4; Size
0x6B8B13: lea     ecx, [esp+140h+a1]
0x6B8B17: mov     [esi+24h], eax
0x6B8B1A: push    ecx; Dst
0x6B8B1B: mov     ecx, ds:0B33B00h
0x6B8B21: call    SaveLoad_LoadFormID
0x6B8B26: mov     edx, [esp+144h+var_128]
0x6B8B2A: push    0; int
0x6B8B2C: push    offset ??_R0?AVTESTopicInfo@@@8; struct TypeDescriptor *
0x6B8B31: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x6B8B36: push    0; int
0x6B8B38: push    edx; a1
0x6B8B39: call    TESForm_LookupByFormID
0x6B8B3E: add     esp, 4
0x6B8B41: push    eax; void *
0x6B8B42: call    OblivionDynamicCast
0x6B8B47: mov     [esi+18h], eax
0x6B8B4A: mov     ecx, ds:0B33B00h
0x6B8B50: add     esp, 14h
0x6B8B53: call    sub_45A170
0x6B8B58: test    al, al
0x6B8B5A: jz      loc_6B8C57
0x6B8B60: mov     ecx, ds:0B33B00h
0x6B8B66: mov     edi, [ecx+80h]
0x6B8B6C: test    edi, edi
0x6B8B6E: mov     esi, [ecx+14h]
0x6B8B71: jz      loc_6B8C0D
0x6B8B77: mov     eax, [edi]
0x6B8B79: push    eax; a1
0x6B8B7A: call    TESForm_LookupByFormID
0x6B8B7F: movzx   edx, [esp+148h+var_134]
0x6B8B84: mov     ecx, eax
0x6B8B86: lea     eax, [edx+ebx]
0x6B8B89: add     esp, 4
0x6B8B8C: cmp     esi, eax
0x6B8B8E: jbe     short loc_6B8BCD
0x6B8B90: mov     eax, [edi+5]
0x6B8B93: movzx   edx, byte ptr [edi+9]
0x6B8B97: push    eax
0x6B8B98: mov     eax, [ecx]
0x6B8B9A: push    edx
0x6B8B9B: mov     edx, [eax+0D4h]
0x6B8BA1: call    edx
0x6B8BA3: movzx   ecx, [esp+14Ch+var_134]
0x6B8BA8: push    eax
0x6B8BA9: mov     eax, [edi]
0x6B8BAB: push    eax
0x6B8BAC: push    259h
0x6B8BB1: sub     esi, ecx
0x6B8BB3: push    offset a_DialogueMenut; ".\\Dialogue\\MenuTopic.cpp"
0x6B8BB8: sub     esi, ebx
0x6B8BBA: push    esi; ArgList
0x6B8BBB: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x6B8BC0: call    PrintError
0x6B8BC5: add     esp, 20h
0x6B8BC8: jmp     loc_6B8C57
0x6B8BCD: jnb     loc_6B8C57
0x6B8BD3: mov     edx, [edi+5]
0x6B8BD6: movzx   eax, byte ptr [edi+9]
0x6B8BDA: push    edx
0x6B8BDB: mov     edx, [ecx]
0x6B8BDD: push    eax
0x6B8BDE: mov     eax, [edx+0D4h]
0x6B8BE4: call    eax
0x6B8BE6: mov     ecx, [edi]
0x6B8BE8: movzx   edx, [esp+14Ch+var_134]
0x6B8BED: push    eax
0x6B8BEE: push    ecx
0x6B8BEF: push    259h
0x6B8BF4: sub     edx, esi
0x6B8BF6: push    offset a_DialogueMenut; ".\\Dialogue\\MenuTopic.cpp"
0x6B8BFB: add     edx, ebx
0x6B8BFD: push    edx; ArgList
0x6B8BFE: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x6B8C03: call    PrintError
0x6B8C08: add     esp, 20h
0x6B8C0B: jmp     short loc_6B8C57
0x6B8C0D: movzx   eax, [esp+144h+var_134]
0x6B8C12: lea     edx, [eax+ebx]
0x6B8C15: cmp     esi, edx
0x6B8C17: jbe     short loc_6B8C34
0x6B8C19: movzx   ecx, byte ptr [ecx+7Ch]
0x6B8C1D: push    ecx
0x6B8C1E: push    259h
0x6B8C23: sub     esi, eax
0x6B8C25: push    offset a_DialogueMenut; ".\\Dialogue\\MenuTopic.cpp"
0x6B8C2A: sub     esi, ebx
0x6B8C2C: push    esi
0x6B8C2D: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x6B8C32: jmp     short loc_6B8C4F
0x6B8C34: jnb     short loc_6B8C57
0x6B8C36: movzx   edx, byte ptr [ecx+7Ch]
0x6B8C3A: push    edx
0x6B8C3B: push    259h
0x6B8C40: sub     eax, esi
0x6B8C42: push    offset a_DialogueMenut; ".\\Dialogue\\MenuTopic.cpp"
0x6B8C47: add     eax, ebx
0x6B8C49: push    eax; ArgList
0x6B8C4A: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x6B8C4F: call    PrintError
0x6B8C54: add     esp, 14h
0x6B8C57: mov     ecx, [esp+144h+var_1C]
0x6B8C5E: pop     edi
0x6B8C5F: pop     esi
0x6B8C60: pop     ebx
0x6B8C61: xor     ecx, esp
0x6B8C63: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6B8C68: add     esp, 120h
0x6B8C6E: retn    4
