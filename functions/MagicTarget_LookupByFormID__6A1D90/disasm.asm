0x6A1D90: mov     eax, [esp+a1]
0x6A1D94: push    eax; a1
0x6A1D95: call    TESForm_LookupByFormID
0x6A1D9A: add     esp, 4
0x6A1D9D: test    eax, eax
0x6A1D9F: jz      short loc_6A1DC8
0x6A1DA1: push    0; int
0x6A1DA3: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x6A1DA8: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x6A1DAD: push    0; int
0x6A1DAF: push    eax; void *
0x6A1DB0: call    OblivionDynamicCast
0x6A1DB5: add     esp, 14h
0x6A1DB8: test    eax, eax
0x6A1DBA: jz      short loc_6A1DC8
0x6A1DBC: mov     edx, [eax]
0x6A1DBE: mov     ecx, eax
0x6A1DC0: mov     eax, [edx+124h]
0x6A1DC6: jmp     eax
0x6A1DC8: xor     eax, eax
0x6A1DCA: retn
