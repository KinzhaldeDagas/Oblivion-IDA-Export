0x412CC0: mov     ecx, [ecx+18h]
0x412CC3: xor     eax, eax
0x412CC5: test    ecx, ecx
0x412CC7: jz      short EffectItem_GetScript___Done
0x412CC9: mov     ecx, [ecx]
0x412CCB: test    ecx, ecx
0x412CCD: jz      short EffectItem_GetScript___Done
0x412CCF: push    eax; int
0x412CD0: push    offset ??_R0?AVScript@@@8; struct TypeDescriptor *
0x412CD5: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x412CDA: push    eax; int
0x412CDB: push    ecx; a1
0x412CDC: call    TESForm_LookupByFormID
0x412CE1: add     esp, 4
0x412CE4: push    eax; void *
0x412CE5: call    OblivionDynamicCast
0x412CEA: add     esp, 14h
