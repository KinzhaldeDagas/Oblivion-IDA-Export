0x50B920: push    ecx
0x50B921: mov     ecx, [esp+4+l]
0x50B925: mov     edx, [esp+4+arg_10]
0x50B929: push    esi
0x50B92A: mov     esi, [esp+8+a4]
0x50B92E: lea     eax, [esp+8+var_4]
0x50B932: push    eax; UInt16
0x50B933: mov     eax, [esp+0Ch+arg_C]
0x50B937: push    ecx; l
0x50B938: mov     ecx, [esp+10h+a3]
0x50B93C: push    edx; a6
0x50B93D: mov     edx, [esp+14h+arg_4]
0x50B941: push    eax; a5
0x50B942: mov     eax, [esp+18h+a1]
0x50B946: push    esi; a4
0x50B947: push    ecx; a3
0x50B948: push    edx; a2
0x50B949: push    eax; a1
0x50B94A: mov     dword ptr [esp+28h+var_4], 0
0x50B952: call    Script_ExtractArgs
0x50B957: add     esp, 20h
0x50B95A: test    al, al
0x50B95C: jnz     short loc_50B961
0x50B95E: pop     esi
0x50B95F: pop     ecx
0x50B960: retn
0x50B961: push    0; int
0x50B963: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50B968: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x50B96D: push    0; int
0x50B96F: push    esi; void *
0x50B970: call    OblivionDynamicCast
0x50B975: mov     esi, eax
0x50B977: add     esp, 14h
0x50B97A: test    esi, esi
0x50B97C: jz      loc_50BA94
0x50B982: cmp     dword ptr [esp+8+var_4], 0
0x50B987: jz      loc_50BA94
0x50B98D: mov     ecx, esi
0x50B98F: call    sub_5E03A0
0x50B994: mov     ecx, dword ptr [esp+8+var_4]
0x50B998: cmp     eax, ecx
0x50B99A: jz      short loc_50B9D5
0x50B99C: lea     ecx, [esi+44h]
0x50B99F: call    ExtraDataList__GetExtraPackage
0x50B9A4: mov     ecx, dword ptr [esp+8+var_4]
0x50B9A8: cmp     eax, ecx
0x50B9AA: jz      short loc_50B9D5
0x50B9AC: mov     ecx, esi; this
0x50B9AE: call    TESObjectREFR_GetName
0x50B9B3: mov     ecx, dword ptr [esp+8+var_4]
0x50B9B7: mov     edx, [ecx]
0x50B9B9: push    eax
0x50B9BA: mov     eax, [edx+0D4h]
0x50B9C0: call    eax
0x50B9C2: push    eax; ArgList
0x50B9C3: push    offset aPackageSIsNotS; "Package %s is not  %s current package"
0x50B9C8: call    PrintError
0x50B9CD: add     esp, 0Ch
0x50B9D0: mov     al, 1
0x50B9D2: pop     esi
0x50B9D3: pop     ecx
0x50B9D4: retn
0x50B9D5: mov     al, [ecx+20h]
0x50B9D8: cmp     al, 2
0x50B9DA: jnz     short loc_50B9F7
0x50B9DC: push    0
0x50B9DE: call    sub_5668E0
0x50B9E3: mov     ecx, [esi+58h]
0x50B9E6: mov     edx, [ecx]
0x50B9E8: mov     eax, [edx+17Ch]
0x50B9EE: push    3
0x50B9F0: call    eax
0x50B9F2: mov     al, 1
0x50B9F4: pop     esi
0x50B9F5: pop     ecx
0x50B9F6: retn
0x50B9F7: cmp     al, 7
0x50B9F9: jz      short loc_50BA1C
0x50B9FB: cmp     al, 1
0x50B9FD: jz      short loc_50BA1C
0x50B9FF: mov     edx, [ecx]
0x50BA01: mov     eax, [edx+0D4h]
0x50BA07: call    eax
0x50BA09: push    eax; ArgList
0x50BA0A: push    offset aPackageSIsNo_0; "Package %s is not a follow or an escort"...
0x50BA0F: call    PrintError
0x50BA14: add     esp, 8
0x50BA17: mov     al, 1
0x50BA19: pop     esi
0x50BA1A: pop     ecx
0x50BA1B: retn
0x50BA1C: mov     ecx, [esi+58h]
0x50BA1F: mov     edx, [ecx]
0x50BA21: mov     eax, [edx+0CCh]
0x50BA27: push    0; int
0x50BA29: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50BA2E: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x50BA33: push    0; int
0x50BA35: call    eax
0x50BA37: push    eax; void *
0x50BA38: call    OblivionDynamicCast
0x50BA3D: mov     ecx, ds:0B333C4h
0x50BA43: add     esp, 14h
0x50BA46: cmp     eax, ecx
0x50BA48: jnz     short loc_50BA89
0x50BA4A: push    esi
0x50BA4B: call    sub_663A60
0x50BA50: test    al, al
0x50BA52: jnz     short loc_50BA89
0x50BA54: mov     ecx, ds:0B333C4h
0x50BA5A: call    sub_663A00
0x50BA5F: cmp     eax, ds:0B36A80h
0x50BA65: jle     short loc_50BA89
0x50BA67: fld     dword ptr ds:0A30634h
0x50BA6D: push    ecx
0x50BA6E: mov     ecx, ds:0B394E8h
0x50BA74: fstp    [esp+0Ch+duration]; duration
0x50BA77: push    1; unk2
0x50BA79: push    0; unk1
0x50BA7B: push    ecx; string
0x50BA7C: call    GameUI_QueueMessage
0x50BA81: add     esp, 10h
0x50BA84: mov     al, 1
0x50BA86: pop     esi
0x50BA87: pop     ecx
0x50BA88: retn
0x50BA89: mov     ecx, dword ptr [esp+8+var_4]
0x50BA8D: push    0
0x50BA8F: call    sub_5668E0
0x50BA94: mov     al, 1
0x50BA96: pop     esi
0x50BA97: pop     ecx
0x50BA98: retn
