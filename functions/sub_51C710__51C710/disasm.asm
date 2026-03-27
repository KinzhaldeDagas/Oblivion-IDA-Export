0x51C710: mov     eax, [esp+Size]
0x51C714: push    esi
0x51C715: push    edi
0x51C716: mov     edi, [esp+8+arg_0]
0x51C71A: push    eax; Size
0x51C71B: push    edi; void *
0x51C71C: mov     esi, ecx
0x51C71E: call    TESActorBase_LoadModified
0x51C723: test    edi, 200h
0x51C729: jz      short loc_51C75B
0x51C72B: push    1; a2
0x51C72D: lea     ecx, [esi+105h]
0x51C733: push    ecx; a1
0x51C734: mov     ecx, esi
0x51C736: call    TESForm_LoadDataFromCurrentSaveGame
0x51C73B: push    1; a2
0x51C73D: lea     edx, [esi+106h]
0x51C743: push    edx; a1
0x51C744: mov     ecx, esi
0x51C746: call    TESForm_LoadDataFromCurrentSaveGame
0x51C74B: push    1; a2
0x51C74D: lea     eax, [esi+107h]
0x51C753: push    eax; a1
0x51C754: mov     ecx, esi
0x51C756: call    TESForm_LoadDataFromCurrentSaveGame
0x51C75B: test    edi, 400h
0x51C761: jz      short loc_51C79F
0x51C763: push    4; a2
0x51C765: lea     ecx, [esp+0Ch+Size]
0x51C769: push    ecx; a1
0x51C76A: mov     ecx, esi
0x51C76C: call    TESForm_LoadFormIDFromCurrentSaveGame
0x51C771: mov     edx, [esp+10h]
0x51C775: push    0; int
0x51C777: push    offset ??_R0?AVTESCombatStyle@@@8; struct TypeDescriptor *
0x51C77C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x51C781: push    0; int
0x51C783: push    edx; a1
0x51C784: call    TESForm_LookupByFormID
0x51C789: add     esp, 4
0x51C78C: push    eax; void *
0x51C78D: call    OblivionDynamicCast
0x51C792: add     esp, 14h
0x51C795: test    eax, eax
0x51C797: jz      short loc_51C79F
0x51C799: mov     [esi+118h], eax
0x51C79F: pop     edi
0x51C7A0: pop     esi
0x51C7A1: retn    8
