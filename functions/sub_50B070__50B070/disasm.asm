0x50B070: mov     eax, [esp+arg_8]
0x50B074: test    eax, eax
0x50B076: jz      short loc_50B0B5
0x50B078: push    esi
0x50B079: push    0; int
0x50B07B: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50B080: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x50B085: push    0; int
0x50B087: push    eax; void *
0x50B088: call    OblivionDynamicCast
0x50B08D: mov     esi, eax
0x50B08F: add     esp, 14h
0x50B092: test    esi, esi
0x50B094: jz      short loc_50B0B1
0x50B096: push    0
0x50B098: lea     ecx, [esi+44h]
0x50B09B: call    sub_423970
0x50B0A0: mov     ecx, [esi+58h]
0x50B0A3: test    ecx, ecx
0x50B0A5: jz      short loc_50B0B1
0x50B0A7: mov     eax, [ecx]
0x50B0A9: mov     edx, [eax+4A0h]
0x50B0AF: call    edx
0x50B0B1: mov     al, 1
0x50B0B3: pop     esi
0x50B0B4: retn
0x50B0B5: mov     al, 1
0x50B0B7: retn
