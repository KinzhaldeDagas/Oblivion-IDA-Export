0x643810: mov     eax, [esp+owner]
0x643814: mov     edx, [esp+changeMask]
0x643818: push    esi
0x643819: mov     esi, ecx
0x64381B: mov     ecx, [esp+4+currentFlags]
0x64381F: push    eax; owner
0x643820: push    ecx; currentFlags
0x643821: push    edx; changeMask
0x643822: mov     ecx, esi; self
0x643824: call    BaseProcess_InitLoadGame
0x643829: mov     eax, [esi+2Ch]
0x64382C: test    eax, eax
0x64382E: jz      short loc_643860
0x643830: push    0; int
0x643832: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x643837: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x64383C: push    0; int
0x64383E: push    eax; a1
0x64383F: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
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
0x643876: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x64387B: add     esp, 4
0x64387E: push    eax; void *
0x64387F: call    OblivionDynamicCast
0x643884: add     esp, 14h
0x643887: mov     [esi+30h], eax
0x64388A: pop     esi
0x64388B: retn    0Ch
