0x56C180: push    esi
0x56C181: mov     esi, ecx
0x56C183: mov     eax, [esi+18h]
0x56C186: test    eax, eax
0x56C188: jz      short loc_56C1BA
0x56C18A: mov     eax, [eax+3Ch]
0x56C18D: push    0; int
0x56C18F: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x56C194: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x56C199: push    0; int
0x56C19B: push    eax; a1
0x56C19C: call    TESForm_LookupByFormID
0x56C1A1: add     esp, 4
0x56C1A4: push    eax; void *
0x56C1A5: call    OblivionDynamicCast
0x56C1AA: mov     ecx, [esi+18h]
0x56C1AD: add     esp, 14h
0x56C1B0: cmp     dword ptr [ecx+3Ch], 0
0x56C1B4: jz      short loc_56C1BE
0x56C1B6: test    eax, eax
0x56C1B8: jnz     short loc_56C1C2
0x56C1BA: xor     al, al
0x56C1BC: pop     esi
0x56C1BD: retn
0x56C1BE: test    eax, eax
0x56C1C0: jz      short loc_56C1C8
0x56C1C2: cmp     dword ptr [eax+3Ch], 0
0x56C1C6: jz      short loc_56C1BA
0x56C1C8: mov     al, 1
0x56C1CA: pop     esi
0x56C1CB: retn
