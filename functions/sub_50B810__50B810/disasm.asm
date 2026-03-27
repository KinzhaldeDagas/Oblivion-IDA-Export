0x50B810: push    ecx
0x50B811: mov     ecx, [esp+4+l]
0x50B815: mov     edx, [esp+4+arg_10]
0x50B819: push    esi
0x50B81A: mov     esi, [esp+8+a4]
0x50B81E: lea     eax, [esp+8+var_4]
0x50B822: push    eax; UInt16
0x50B823: mov     eax, [esp+0Ch+arg_C]
0x50B827: push    ecx; l
0x50B828: mov     ecx, [esp+10h+a3]
0x50B82C: push    edx; a6
0x50B82D: mov     edx, [esp+14h+arg_4]
0x50B831: push    eax; a5
0x50B832: mov     eax, [esp+18h+a1]
0x50B836: push    esi; a4
0x50B837: push    ecx; a3
0x50B838: push    edx; a2
0x50B839: push    eax; a1
0x50B83A: mov     dword ptr [esp+28h+var_4], 0
0x50B842: call    Script_ExtractArgs
0x50B847: add     esp, 20h
0x50B84A: test    al, al
0x50B84C: jnz     short loc_50B851
0x50B84E: pop     esi
0x50B84F: pop     ecx
0x50B850: retn
0x50B851: push    0; int
0x50B853: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50B858: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x50B85D: push    0; int
0x50B85F: push    esi; void *
0x50B860: call    OblivionDynamicCast
0x50B865: mov     esi, eax
0x50B867: add     esp, 14h
0x50B86A: test    esi, esi
0x50B86C: jz      loc_50B913
0x50B872: cmp     dword ptr [esp+8+var_4], 0
0x50B877: jz      loc_50B913
0x50B87D: mov     ecx, esi
0x50B87F: call    sub_5E03A0
0x50B884: mov     ecx, dword ptr [esp+8+var_4]
0x50B888: cmp     eax, ecx
0x50B88A: jz      short loc_50B8C5
0x50B88C: lea     ecx, [esi+44h]
0x50B88F: call    ExtraDataList__GetExtraPackage
0x50B894: mov     ecx, dword ptr [esp+8+var_4]
0x50B898: cmp     eax, ecx
0x50B89A: jz      short loc_50B8C5
0x50B89C: mov     ecx, esi; this
0x50B89E: call    TESObjectREFR_GetName
0x50B8A3: mov     ecx, dword ptr [esp+8+var_4]
0x50B8A7: mov     edx, [ecx]
0x50B8A9: push    eax
0x50B8AA: mov     eax, [edx+0D4h]
0x50B8B0: call    eax
0x50B8B2: push    eax; ArgList
0x50B8B3: push    offset aPackageSIsNotS; "Package %s is not  %s current package"
0x50B8B8: call    PrintError
0x50B8BD: add     esp, 0Ch
0x50B8C0: mov     al, 1
0x50B8C2: pop     esi
0x50B8C3: pop     ecx
0x50B8C4: retn
0x50B8C5: mov     al, [ecx+20h]
0x50B8C8: cmp     al, 2
0x50B8CA: jnz     short loc_50B8E7
0x50B8CC: push    1
0x50B8CE: call    sub_5668E0
0x50B8D3: mov     ecx, [esi+58h]
0x50B8D6: mov     edx, [ecx]
0x50B8D8: mov     eax, [edx+17Ch]
0x50B8DE: push    2
0x50B8E0: call    eax
0x50B8E2: mov     al, 1
0x50B8E4: pop     esi
0x50B8E5: pop     ecx
0x50B8E6: retn
0x50B8E7: cmp     al, 7
0x50B8E9: jz      short loc_50B90C
0x50B8EB: cmp     al, 1
0x50B8ED: jz      short loc_50B90C
0x50B8EF: mov     edx, [ecx]
0x50B8F1: mov     eax, [edx+0D4h]
0x50B8F7: call    eax
0x50B8F9: push    eax; ArgList
0x50B8FA: push    offset aPackageSIsNo_0; "Package %s is not a follow or an escort"...
0x50B8FF: call    PrintError
0x50B904: add     esp, 8
0x50B907: mov     al, 1
0x50B909: pop     esi
0x50B90A: pop     ecx
0x50B90B: retn
0x50B90C: push    1
0x50B90E: call    sub_5668E0
0x50B913: mov     al, 1
0x50B915: pop     esi
0x50B916: pop     ecx
0x50B917: retn
