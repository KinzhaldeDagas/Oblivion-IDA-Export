0x5C4BF0: push    0FFFFFFFFh
0x5C4BF2: push    offset ??1RaceSexMenu@@UAE@XZ_SEH
0x5C4BF7: mov     eax, large fs:0
0x5C4BFD: push    eax
0x5C4BFE: sub     esp, 8
0x5C4C01: push    esi
0x5C4C02: push    edi
0x5C4C03: mov     eax, ds:0B30AACh
0x5C4C08: xor     eax, esp
0x5C4C0A: push    eax
0x5C4C0B: lea     eax, [esp+20h+var_C]
0x5C4C0F: mov     large fs:0, eax
0x5C4C15: mov     edi, ecx
0x5C4C17: mov     [esp+20h+var_10], edi
0x5C4C1B: mov     dword ptr [edi], offset ??_7RaceSexMenu@@6B@; const RaceSexMenu::`vftable'
0x5C4C21: mov     eax, [edi+8D4h]
0x5C4C27: test    eax, eax
0x5C4C29: mov     [esp+20h+var_4], 1
0x5C4C31: jz      short loc_5C4C50
0x5C4C33: mov     ecx, [eax-4]
0x5C4C36: lea     esi, [eax-4]
0x5C4C39: push    offset sub_43ACE0; void (__thiscall *)(void *)
0x5C4C3E: push    ecx; int
0x5C4C3F: push    18h; unsigned int
0x5C4C41: push    eax; void *
0x5C4C42: call    $LN21
0x5C4C47: push    esi
0x5C4C48: call    FormHeapFree
0x5C4C4D: add     esp, 4
0x5C4C50: mov     eax, [edi+8D8h]
0x5C4C56: test    eax, eax
0x5C4C58: jz      short loc_5C4C77
0x5C4C5A: mov     edx, [eax-4]
0x5C4C5D: lea     esi, [eax-4]
0x5C4C60: push    offset sub_43ACE0; void (__thiscall *)(void *)
0x5C4C65: push    edx; int
0x5C4C66: push    18h; unsigned int
0x5C4C68: push    eax; void *
0x5C4C69: call    $LN21
0x5C4C6E: push    esi
0x5C4C6F: call    FormHeapFree
0x5C4C74: add     esp, 4
0x5C4C77: cmp     dword ptr ds:0B33398h, 0
0x5C4C7E: jz      short loc_5C4C97
0x5C4C80: fld     dword ptr ds:0B0313Ch
0x5C4C86: push    0; a3
0x5C4C88: push    ecx
0x5C4C89: mov     ecx, ds:0B333CCh; this
0x5C4C8F: fstp    [esp+28h+a2]; a2
0x5C4C92: call    SetCameraFOV_0
0x5C4C97: mov     ecx, ds:0B333C4h; this
0x5C4C9D: test    ecx, ecx
0x5C4C9F: jz      short loc_5C4D06
0x5C4CA1: push    1; a2
0x5C4CA3: call    Player_GetAnimData
0x5C4CA8: test    eax, eax
0x5C4CAA: jz      short loc_5C4CD7
0x5C4CAC: mov     ecx, ds:0B333C4h; this
0x5C4CB2: push    1; a2
0x5C4CB4: call    Player_GetAnimData
0x5C4CB9: cmp     dword ptr [eax+0C8h], 0
0x5C4CC0: jz      short loc_5C4CD7
0x5C4CC2: mov     ecx, ds:0B333C4h; this
0x5C4CC8: push    0; a2
0x5C4CCA: mov     esi, ecx
0x5C4CCC: call    Player_GetAnimData
0x5C4CD1: mov     [eax+0C8h], esi
0x5C4CD7: mov     ecx, ds:0B333C4h; this
0x5C4CDD: call    MobileObject_GetCharProxy
0x5C4CE2: mov     esi, eax
0x5C4CE4: test    esi, esi
0x5C4CE6: jz      short loc_5C4D06
0x5C4CE8: mov     ecx, ds:0B333C4h
0x5C4CEE: mov     eax, [ecx]
0x5C4CF0: mov     edx, [eax+0ECh]
0x5C4CF6: call    edx
0x5C4CF8: fstp    [esp+20h+var_14]
0x5C4CFC: fld     [esp+20h+var_14]
0x5C4D00: fstp    dword ptr [esi+334h]
0x5C4D06: mov     esi, [edi+8ECh]
0x5C4D0C: test    esi, esi
0x5C4D0E: jz      short loc_5C4D20
0x5C4D10: mov     ecx, esi
0x5C4D12: call    sub_57FEB0
0x5C4D17: push    esi
0x5C4D18: call    FormHeapFree
0x5C4D1D: add     esp, 4
0x5C4D20: mov     ecx, ds:0B333C4h
0x5C4D26: call    TESObjectREFR_GetAnimData
0x5C4D2B: mov     eax, [eax+98h]
0x5C4D31: mov     eax, [eax+7Ch]
0x5C4D34: test    eax, eax
0x5C4D36: jz      short loc_5C4D51
0x5C4D38: push    eax
0x5C4D39: push    offset stru_B3FCA0.SpinCount
0x5C4D3E: call    NiRTTI_Cast
0x5C4D43: add     esp, 8
0x5C4D46: test    eax, eax
0x5C4D48: jz      short loc_5C4D51
0x5C4D4A: mov     ecx, eax
0x5C4D4C: call    sub_716690
0x5C4D51: mov     ecx, ds:0B333C4h; this
0x5C4D57: push    0
0x5C4D59: push    0; a2
0x5C4D5B: call    Player_GetAnimData
0x5C4D60: mov     ecx, eax
0x5C4D62: call    sub_473200
0x5C4D67: mov     ecx, ds:0B333C4h; this
0x5C4D6D: push    1
0x5C4D6F: push    0; a2
0x5C4D71: call    Player_GetAnimData
0x5C4D76: mov     ecx, eax
0x5C4D78: call    sub_473200
0x5C4D7D: mov     ecx, ds:0B333C4h; this
0x5C4D83: push    0
0x5C4D85: push    1; a2
0x5C4D87: call    Player_GetAnimData
0x5C4D8C: mov     ecx, eax
0x5C4D8E: call    sub_473200
0x5C4D93: mov     ecx, ds:0B333C4h; this
0x5C4D99: push    1
0x5C4D9B: push    1; a2
0x5C4D9D: call    Player_GetAnimData
0x5C4DA2: mov     ecx, eax
0x5C4DA4: call    sub_473200
0x5C4DA9: mov     ecx, ds:0B33A1Ch
0x5C4DAF: push    1
0x5C4DB1: push    1
0x5C4DB3: push    offset aCharacters_m_0; "Characters\\_Male\\Skeleton.nif"
0x5C4DB8: call    QueuedModelLoader_RemoveModel
0x5C4DBD: mov     ecx, ds:0B33A1Ch
0x5C4DC3: push    1
0x5C4DC5: push    1
0x5C4DC7: push    offset aCharacters_m_1; "Characters\\_Male\\SkeletonBeast.nif"
0x5C4DCC: call    QueuedModelLoader_RemoveModel
0x5C4DD1: push    offset BSStringT_Clear; void (__thiscall *)(void *)
0x5C4DD6: push    10h; int
0x5C4DD8: push    8; unsigned int
0x5C4DDA: lea     eax, [edi+930h]
0x5C4DE0: push    eax; void *
0x5C4DE1: mov     byte ptr [esp+30h+var_4], 0
0x5C4DE6: call    $LN21
0x5C4DEB: mov     ecx, edi; this
0x5C4DED: mov     [esp+20h+var_4], 0FFFFFFFFh
0x5C4DF5: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x5C4DFA: mov     ecx, [esp+20h+var_C]
0x5C4DFE: mov     large fs:0, ecx
0x5C4E05: pop     ecx
0x5C4E06: pop     edi
0x5C4E07: pop     esi
0x5C4E08: add     esp, 14h
0x5C4E0B: retn
