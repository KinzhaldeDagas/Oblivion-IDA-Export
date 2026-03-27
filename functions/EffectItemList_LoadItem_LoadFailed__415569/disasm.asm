0x415569: push    0; int
0x41556B: push    offset ??_R0?AVTESForm@@@8; struct TypeDescriptor *
0x415570: push    offset ??_R0?AVEffectItemList@@@8; struct _s_RTTICompleteObjectLocator *
0x415575: push    0; int
0x415577: push    esi; void *
0x415578: call    OblivionDynamicCast
0x41557D: mov     esi, eax
0x41557F: add     esp, 14h
0x415582: test    esi, esi
0x415584: jz      short loc_4155CF
0x415586: lea     eax, [esp+arg_1C]
0x41558A: push    eax
0x41558B: mov     ecx, edi
0x41558D: call    EffectSetting_GetName
0x415592: mov     ecx, [esi+0Ch]
0x415595: mov     edx, [esi]
0x415597: mov     edi, [eax]
0x415599: mov     eax, [edx+0D4h]
0x41559F: push    ecx
0x4155A0: mov     ecx, esi
0x4155A2: mov     [esp+4+arg_2C], 1
0x4155AA: call    eax
0x4155AC: push    eax
0x4155AD: push    edi; ArgList
0x4155AE: push    offset aUnableToLoadEf; "Unable to load EffectItem '%s' in spell"...
0x4155B3: call    PrintError
0x4155B8: mov     ecx, dword ptr [esp+10h+arg_1C]
0x4155BC: push    ecx
0x4155BD: mov     [esp+14h+arg_2C], 0FFFFFFFFh
0x4155C5: call    FormHeapFree
0x4155CA: add     esp, 14h
0x4155CD: jmp     short loc_415621
0x4155CF: test    ebp, ebp
0x4155D1: mov     esi, offset aUnknown_0; "{unknown}"
0x4155D6: jz      short loc_4155DA
0x4155D8: mov     esi, ebp
0x4155DA: lea     edx, [esp+arg_14]
0x4155DE: push    edx
0x4155DF: mov     ecx, edi
0x4155E1: call    EffectSetting_GetName
0x4155E6: mov     eax, [eax]
0x4155E8: push    esi
0x4155E9: push    eax; ArgList
0x4155EA: push    offset aUnableToLoad_0; "Unable to load EffectItem '%s' in spell"...
0x4155EF: mov     [esp+0Ch+arg_2C], 2
0x4155F7: call    PrintError
0x4155FC: mov     eax, [esp+0Ch+arg_14]
0x415600: push    eax
0x415601: mov     [esp+10h+arg_2C], 0FFFFFFFFh
0x415609: call    FormHeapFree
0x41560E: add     esp, 10h
0x415611: xor     eax, eax
0x415613: mov     [esp+arg_14], eax
0x415617: mov     word ptr [esp+arg_18+2], ax
0x41561C: mov     word ptr [esp+arg_18], ax
0x415621: mov     ecx, ebx
0x415623: call    EffectItem_destr
0x415628: push    ebx
0x415629: call    FormHeapFree
0x41562E: add     esp, 4
0x415631: jmp     short EffectItemList_LoadItem___Done
