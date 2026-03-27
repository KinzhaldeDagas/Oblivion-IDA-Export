0x4D70E0: push    esi
0x4D70E1: mov     esi, ecx
0x4D70E3: mov     eax, [esi+8]
0x4D70E6: shr     eax, 5
0x4D70E9: test    al, 1
0x4D70EB: jnz     loc_4D7182
0x4D70F1: push    ebx
0x4D70F2: lea     ebx, [esi+44h]
0x4D70F5: push    12h; a2
0x4D70F7: mov     ecx, ebx; this
0x4D70F9: call    BaseExtraList_GetExtraData
0x4D70FE: test    eax, eax
0x4D7100: jz      short loc_4D7108
0x4D7102: cmp     dword ptr [eax+0Ch], 0
0x4D7106: jnz     short loc_4D7181
0x4D7108: mov     edx, [esi]
0x4D710A: mov     eax, [edx+128h]
0x4D7110: mov     ecx, esi
0x4D7112: call    eax
0x4D7114: test    eax, eax
0x4D7116: jnz     short loc_4D7124
0x4D7118: mov     edx, [esi]
0x4D711A: mov     eax, [edx+170h]
0x4D7120: mov     ecx, esi
0x4D7122: call    eax
0x4D7124: push    edi
0x4D7125: push    0; int
0x4D7127: push    offset ??_R0?AVTESScriptableForm@@@8; struct TypeDescriptor *
0x4D712C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4D7131: push    0; int
0x4D7133: push    eax; void *
0x4D7134: call    OblivionDynamicCast
0x4D7139: add     esp, 14h
0x4D713C: test    eax, eax
0x4D713E: jz      short loc_4D7145
0x4D7140: mov     edi, [eax+4]
0x4D7143: jmp     short loc_4D7147
0x4D7145: xor     edi, edi
0x4D7147: test    edi, edi
0x4D7149: jz      short loc_4D7162
0x4D714B: push    edi
0x4D714C: mov     ecx, ebx
0x4D714E: call    ExtraDataList_AddScript
0x4D7153: mov     ecx, edi
0x4D7155: call    Script_CreateEventList
0x4D715A: push    eax
0x4D715B: mov     ecx, ebx
0x4D715D: call    ExtraDataList_SetScriptEventList
0x4D7162: mov     ecx, esi; this
0x4D7164: call    TESObjectREFR_GetContainer
0x4D7169: test    eax, eax
0x4D716B: pop     edi
0x4D716C: jz      short loc_4D7181
0x4D716E: push    eax
0x4D716F: push    esi; a1
0x4D7170: call    ContainerExtraData_GetContainerExtraDataForRef
0x4D7175: add     esp, 8
0x4D7178: pop     ebx
0x4D7179: mov     ecx, eax
0x4D717B: pop     esi
0x4D717C: jmp     ExtraContainerChanges_RunScripts
0x4D7181: pop     ebx
0x4D7182: pop     esi
0x4D7183: retn
