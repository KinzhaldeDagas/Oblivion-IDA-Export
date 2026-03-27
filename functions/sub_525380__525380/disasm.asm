0x525380: mov     eax, [esp+Size]
0x525384: push    esi
0x525385: push    edi
0x525386: mov     edi, [esp+8+arg_0]
0x52538A: push    eax; Size
0x52538B: push    edi; void *
0x52538C: mov     esi, ecx
0x52538E: call    TESActorBase_LoadModified
0x525393: test    edi, 200h
0x525399: jz      short loc_5253AB
0x52539B: push    15h; a2
0x52539D: lea     ecx, [esi+0ECh]
0x5253A3: push    ecx; a1
0x5253A4: mov     ecx, esi
0x5253A6: call    TESForm_LoadDataFromCurrentSaveGame
0x5253AB: test    edi, 400h
0x5253B1: jz      short loc_5253EB
0x5253B3: push    4; a2
0x5253B5: lea     edx, [esp+0Ch+Size]
0x5253B9: push    edx; a1
0x5253BA: mov     ecx, esi
0x5253BC: call    TESForm_LoadFormIDFromCurrentSaveGame
0x5253C1: mov     eax, [esp+10h]
0x5253C5: push    0; int
0x5253C7: push    offset ??_R0?AVTESCombatStyle@@@8; struct TypeDescriptor *
0x5253CC: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5253D1: push    0; int
0x5253D3: push    eax; a1
0x5253D4: call    TESForm_LookupByFormID
0x5253D9: add     esp, 4
0x5253DC: push    eax; void *
0x5253DD: call    OblivionDynamicCast
0x5253E2: add     esp, 14h
0x5253E5: mov     [esi+1E4h], eax
0x5253EB: cmp     dword ptr [esi+0Ch], 7
0x5253EF: jz      short loc_5253F8
0x5253F1: mov     ecx, esi
0x5253F3: call    sub_5239C0
0x5253F8: pop     edi
0x5253F9: pop     esi
0x5253FA: retn    8
