0x6990E0: mov     eax, [esp+a1]
0x6990E4: push    eax; a1
0x6990E5: call    TESForm_LookupByFormID
0x6990EA: add     esp, 4
0x6990ED: test    eax, eax
0x6990EF: jz      short MagicCaster_GetFromRefID___Done
0x6990F1: push    0; int
0x6990F3: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x6990F8: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x6990FD: push    0; int
0x6990FF: push    eax; void *
0x699100: call    OblivionDynamicCast
0x699105: add     esp, 14h
0x699108: test    eax, eax
0x69910A: jz      short MagicCaster_GetFromRefID___Done
0x69910C: mov     edx, [eax]
0x69910E: mov     ecx, eax
0x699110: mov     eax, [edx+120h]
0x699116: jmp     eax
