0x50B6A0: mov     eax, [esp+arg_8]
0x50B6A4: push    esi
0x50B6A5: push    0; int
0x50B6A7: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50B6AC: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x50B6B1: push    0; int
0x50B6B3: push    eax; void *
0x50B6B4: call    OblivionDynamicCast
0x50B6B9: mov     esi, eax
0x50B6BB: add     esp, 14h
0x50B6BE: test    esi, esi
0x50B6C0: jz      short loc_50B6F6
0x50B6C2: mov     ecx, esi
0x50B6C4: call    sub_5E03A0
0x50B6C9: test    eax, eax
0x50B6CB: jz      short loc_50B6DF
0x50B6CD: push    400h
0x50B6D2: lea     ecx, [esi+44h]
0x50B6D5: push    ecx
0x50B6D6: push    eax
0x50B6D7: call    Script_AddEventToExtraScript
0x50B6DC: add     esp, 0Ch
0x50B6DF: mov     edx, [esi+58h]
0x50B6E2: mov     dword ptr [edx+8], 0
0x50B6E9: mov     ecx, [esi+58h]
0x50B6EC: mov     eax, [ecx]
0x50B6EE: mov     edx, [eax+18h]
0x50B6F1: push    1
0x50B6F3: push    esi
0x50B6F4: call    edx
0x50B6F6: mov     al, 1
0x50B6F8: pop     esi
0x50B6F9: retn
