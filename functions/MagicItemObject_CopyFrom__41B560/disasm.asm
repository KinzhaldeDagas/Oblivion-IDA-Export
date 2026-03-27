0x41B560: push    ebx
0x41B561: mov     ebx, [esp+4+a2]
0x41B565: push    esi
0x41B566: push    edi
0x41B567: push    0; int
0x41B569: push    offset ??_R0?AVMagicItemObject@@@8; struct TypeDescriptor *
0x41B56E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41B573: push    0; int
0x41B575: push    ebx; void *
0x41B576: mov     esi, ecx
0x41B578: call    OblivionDynamicCast
0x41B57D: mov     edi, eax
0x41B57F: add     esp, 14h
0x41B582: test    edi, edi
0x41B584: jz      short loc_41B5A9
0x41B586: push    ebx; a2
0x41B587: mov     ecx, esi; this
0x41B589: call    TESForm_CopyAllComponentsFrom
0x41B58E: mov     eax, [esi+24h]
0x41B591: mov     eax, [eax+34h]
0x41B594: lea     ecx, [esi+24h]
0x41B597: lea     edx, [edi+24h]
0x41B59A: push    edx
0x41B59B: call    eax
0x41B59D: add     edi, 30h ; '0'
0x41B5A0: push    edi
0x41B5A1: lea     ecx, [esi+30h]
0x41B5A4: call    EffectItemList_CopyFrom
0x41B5A9: pop     edi
0x41B5AA: pop     esi
0x41B5AB: pop     ebx
0x41B5AC: retn    4
