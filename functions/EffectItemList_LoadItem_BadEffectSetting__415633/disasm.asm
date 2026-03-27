0x415633: push    ebx; int
0x415634: push    offset ??_R0?AVTESForm@@@8; struct TypeDescriptor *
0x415639: push    offset ??_R0?AVEffectItemList@@@8; struct _s_RTTICompleteObjectLocator *
0x41563E: push    ebx; int
0x41563F: push    esi; void *
0x415640: call    OblivionDynamicCast
0x415645: add     esp, 14h
0x415648: cmp     eax, ebx
0x41564A: jz      short loc_415671
0x41564C: mov     ecx, [eax+0Ch]
0x41564F: mov     edx, [eax]
0x415651: push    ecx
0x415652: mov     ecx, eax
0x415654: mov     eax, [edx+0D4h]
0x41565A: call    eax
0x41565C: mov     ecx, dword ptr [esp+4+ArgList]
0x415660: push    eax
0x415661: push    ecx; ArgList
0x415662: push    offset aUnableToFindEf; "Unable to find EffectSetting %d in spel"...
0x415667: call    PrintError
0x41566C: add     esp, 10h
0x41566F: jmp     short EffectItemList_LoadItem___Done
0x415671: mov     eax, [esp+arg_38]
0x415675: cmp     eax, ebx
0x415677: jnz     short loc_41567E
0x415679: mov     eax, offset aUnknown_0; "{unknown}"
0x41567E: mov     edx, dword ptr [esp+ArgList]
0x415682: push    eax
0x415683: push    edx; ArgList
0x415684: push    offset aUnableToFind_0; "Unable to find EffectSetting %d in spel"...
0x415689: call    PrintError
0x41568E: add     esp, 0Ch
