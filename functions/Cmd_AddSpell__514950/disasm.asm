0x514950: push    0FFFFFFFFh
0x514952: push    offset SEH_520CF0
0x514957: mov     eax, large fs:0
0x51495D: push    eax
0x51495E: sub     esp, 14h
0x514961: push    ebx
0x514962: push    esi
0x514963: push    edi
0x514964: mov     eax, ds:0B30AACh
0x514969: xor     eax, esp
0x51496B: push    eax
0x51496C: lea     eax, [esp+30h+var_C]
0x514970: mov     large fs:0, eax
0x514976: mov     ecx, [esp+30h+l]
0x51497A: mov     edx, [esp+30h+arg_10]
0x51497E: mov     esi, [esp+30h+a4]
0x514982: lea     eax, [esp+30h+var_20]
0x514986: push    eax; UInt16
0x514987: mov     eax, [esp+34h+arg_C]
0x51498B: push    ecx; l
0x51498C: mov     ecx, [esp+38h+a3]
0x514990: push    edx; a6
0x514991: mov     edx, [esp+3Ch+arg_4]
0x514995: push    eax; a5
0x514996: mov     eax, [esp+40h+a1]
0x51499A: push    esi; a4
0x51499B: push    ecx; a3
0x51499C: push    edx; a2
0x51499D: xor     ebx, ebx
0x51499F: push    eax; a1
0x5149A0: mov     dword ptr [esp+50h+var_20], ebx
0x5149A4: call    Script_ExtractArgs
0x5149A9: add     esp, 20h
0x5149AC: test    al, al
0x5149AE: jnz     short loc_5149C3
0x5149B0: mov     ecx, [esp+30h+var_C]
0x5149B4: mov     large fs:0, ecx
0x5149BB: pop     ecx
0x5149BC: pop     edi
0x5149BD: pop     esi
0x5149BE: pop     ebx
0x5149BF: add     esp, 20h
0x5149C2: retn
0x5149C3: cmp     esi, ebx
0x5149C5: jz      loc_514B38
0x5149CB: push    ebx; int
0x5149CC: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x5149D1: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x5149D6: push    ebx; int
0x5149D7: push    esi; void *
0x5149D8: call    OblivionDynamicCast
0x5149DD: mov     esi, eax
0x5149DF: add     esp, 14h
0x5149E2: cmp     esi, ebx
0x5149E4: jz      loc_514B38
0x5149EA: mov     edx, [esi]
0x5149EC: mov     eax, dword ptr [esp+30h+var_20]
0x5149F0: mov     edx, [edx+2DCh]
0x5149F6: push    eax
0x5149F7: mov     ecx, esi
0x5149F9: call    edx
0x5149FB: test    al, al
0x5149FD: mov     ecx, dword ptr [esp+30h+var_20]
0x514A01: jz      loc_514B14
0x514A07: fld1
0x514A09: mov     eax, [esp+30h+arg_18]
0x514A0D: fstp    qword ptr [eax]
0x514A0F: mov     eax, [ecx+1Ch]
0x514A12: cmp     eax, ebx
0x514A14: mov     edi, eax
0x514A16: jnz     short loc_514A1D
0x514A18: mov     edi, offset EmptyString
0x514A1D: mov     ecx, esi; this
0x514A1F: call    TESObjectREFR_GetName
0x514A24: push    eax
0x514A25: push    edi
0x514A26: push    offset aSpellSAddedToS; "Spell '%s' added to %s"
0x514A2B: call    Interface_ConsolePrint
0x514A30: add     esp, 0Ch
0x514A33: cmp     esi, ds:0B333C4h
0x514A39: jnz     loc_514B38
0x514A3F: mov     [esp+30h+var_14], ebx
0x514A43: mov     word ptr [esp+30h+var_10], bx
0x514A48: mov     word ptr [esp+30h+var_10+2], bx
0x514A4D: mov     edx, dword ptr [esp+30h+var_20]
0x514A51: mov     eax, [edx+1Ch]
0x514A54: cmp     eax, ebx
0x514A56: mov     ecx, ds:0B382A8h
0x514A5C: mov     [esp+30h+var_4], ebx
0x514A60: jnz     short loc_514A67
0x514A62: mov     eax, offset EmptyString
0x514A67: push    ecx
0x514A68: push    eax; ArgList
0x514A69: lea     eax, [esp+38h+var_14]
0x514A6D: push    offset aSS; "%s %s"
0x514A72: push    eax; int
0x514A73: call    BSStringT_Static_Format
0x514A78: add     esp, 10h
0x514A7B: mov     [esp+30h+var_1C], ebx
0x514A7F: mov     word ptr [esp+30h+var_18], bx
0x514A84: mov     word ptr [esp+30h+var_18+2], bx
0x514A89: mov     ecx, dword ptr [esp+30h+var_20]
0x514A8D: push    ebx
0x514A8E: push    3
0x514A90: add     ecx, 24h ; '$'
0x514A93: mov     byte ptr [esp+38h+var_4], 1
0x514A98: call    EffectItemList_GetStrongestItem
0x514A9D: mov     eax, [eax+1Ch]
0x514AA0: mov     eax, [eax+48h]
0x514AA3: cmp     eax, ebx
0x514AA5: jnz     short loc_514AAC
0x514AA7: mov     eax, offset EmptyString
0x514AAC: push    eax
0x514AAD: push    offset aIcons; "Icons"
0x514AB2: lea     ecx, [esp+38h+var_1C]
0x514AB6: push    offset aSS_2; "%s\\%s"
0x514ABB: push    ecx; int
0x514ABC: call    BSStringT_Static_Format
0x514AC1: fld     dword ptr ds:0A379B4h
0x514AC7: mov     edx, [esp+40h+var_1C]
0x514ACB: mov     eax, [esp+40h+var_14]
0x514ACF: add     esp, 10h
0x514AD2: push    ebx; int
0x514AD3: push    edx; int
0x514AD4: push    ecx
0x514AD5: fstp    [esp+3Ch+var_3C]; float
0x514AD8: push    eax; int
0x514AD9: call    QueueUIMessage
0x514ADE: add     esp, 10h
0x514AE1: lea     ecx, [esp+30h+var_1C]; void *
0x514AE5: mov     byte ptr [esp+30h+var_4], bl
0x514AE9: call    BSStringT_Clear
0x514AEE: lea     ecx, [esp+30h+var_14]; void *
0x514AF2: mov     [esp+30h+var_4], 0FFFFFFFFh
0x514AFA: call    BSStringT_Clear
0x514AFF: mov     al, 1
0x514B01: mov     ecx, [esp+30h+var_C]
0x514B05: mov     large fs:0, ecx
0x514B0C: pop     ecx
0x514B0D: pop     edi
0x514B0E: pop     esi
0x514B0F: pop     ebx
0x514B10: add     esp, 20h
0x514B13: retn
0x514B14: mov     eax, [ecx+1Ch]
0x514B17: cmp     eax, ebx
0x514B19: mov     edi, eax
0x514B1B: jnz     short loc_514B22
0x514B1D: mov     edi, offset EmptyString
0x514B22: mov     ecx, esi; this
0x514B24: call    TESObjectREFR_GetName
0x514B29: push    eax
0x514B2A: push    edi
0x514B2B: push    offset aSpellSNotAdded; "Spell '%s' not added to %s"
0x514B30: call    Interface_ConsolePrint
0x514B35: add     esp, 0Ch
0x514B38: mov     al, 1
0x514B3A: mov     ecx, [esp+30h+var_C]
0x514B3E: mov     large fs:0, ecx
0x514B45: pop     ecx
0x514B46: pop     edi
0x514B47: pop     esi
0x514B48: pop     ebx
0x514B49: add     esp, 20h
0x514B4C: retn
