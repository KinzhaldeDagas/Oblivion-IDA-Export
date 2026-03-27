0x643810: mov     eax, [esp+arg_8]
0x643814: mov     edx, [esp+arg_0]
0x643818: push    esi
0x643819: mov     esi, ecx
0x64381B: mov     ecx, [esp+4+arg_4]
0x64381F: push    eax
0x643820: push    ecx
0x643821: push    edx
0x643822: mov     ecx, esi
0x643824: call    sub_60D780
0x643829: mov     eax, [esi+2Ch]
0x64382C: test    eax, eax
0x64382E: jz      short loc_643860
0x643830: push    0; int
0x643832: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x643837: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x64383C: push    0; int
0x64383E: push    eax; a1
0x64383F: call    TESForm_LookupByFormID
0x643844: add     esp, 4
0x643847: push    eax; void *
0x643848: call    OblivionDynamicCast
0x64384D: add     esp, 14h
0x643850: test    eax, eax
0x643852: mov     [esi+2Ch], eax
0x643855: jz      short loc_643860
0x643857: push    1
0x643859: mov     ecx, eax
0x64385B: call    Actor__SetCompressedFlag
0x643860: mov     eax, [esi+30h]
0x643863: test    eax, eax
0x643865: jz      short loc_64388A
0x643867: push    0; int
0x643869: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x64386E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x643873: push    0; int
0x643875: push    eax; a1
0x643876: call    TESForm_LookupByFormID
0x64387B: add     esp, 4
0x64387E: push    eax; void *
0x64387F: call    OblivionDynamicCast
0x643884: add     esp, 14h
0x643887: mov     [esi+30h], eax
0x64388A: pop     esi
0x64388B: retn    0Ch
