0x4DDCF0: push    ebx
0x4DDCF1: push    ebp
0x4DDCF2: mov     ebp, [esp+8+arg_4]
0x4DDCF6: test    ebp, ebp
0x4DDCF8: push    esi
0x4DDCF9: mov     ebx, ecx
0x4DDCFB: jz      TESObjectREFR_AddItem___AddItem
0x4DDD01: mov     ecx, ebp
0x4DDD03: call    ExtraDataList_GetOwner
0x4DDD08: test    eax, eax
0x4DDD0A: jz      short TESObjectREFR_AddItem___ProcessExtraRefPointer
0x4DDD0C: mov     ecx, ebx; this
0x4DDD0E: call    TESObjectREFR_GetOwner
0x4DDD13: mov     ecx, ebp
0x4DDD15: mov     esi, eax
0x4DDD17: call    ExtraDataList_GetOwner
0x4DDD1C: cmp     eax, esi
0x4DDD1E: jnz     short TESObjectREFR_AddItem___ProcessExtraRefPointer
0x4DDD20: mov     ecx, ebp
0x4DDD22: call    ExtraDataList_RemoveOwner
0x4DDD27: mov     ecx, ebp
0x4DDD29: call    ExtraDataList_GetReferencePointer
0x4DDD2E: test    eax, eax
0x4DDD30: jz      short TESObjectREFR_AddItem___AddItem
0x4DDD32: mov     eax, [eax+0Ch]
0x4DDD35: push    ebx
0x4DDD36: push    eax
0x4DDD37: mov     ecx, offset ActorProcessManager_ptr
0x4DDD3C: call    sub_674E40
0x4DDD41: mov     esi, eax
0x4DDD43: test    esi, esi
0x4DDD45: mov     [esp+0Ch+arg_4], esi
0x4DDD49: jz      short TESObjectREFR_AddItem___AddItem
0x4DDD4B: push    edi
0x4DDD4C: lea     esp, [esp+0]
0x4DDD50: mov     edi, [esi]
0x4DDD52: test    edi, edi
0x4DDD54: jz      short loc_4DDD74
0x4DDD56: mov     ecx, edi
0x4DDD58: call    sub_5E2E00
0x4DDD5D: test    eax, eax
0x4DDD5F: mov     ecx, edi
0x4DDD61: jz      short loc_4DDD66
0x4DDD63: push    ebx
0x4DDD64: jmp     short loc_4DDD68
0x4DDD66: push    0
0x4DDD68: call    sub_5E03C0
0x4DDD6D: mov     esi, [esi+4]
0x4DDD70: test    esi, esi
0x4DDD72: jnz     short loc_4DDD50
0x4DDD74: mov     ecx, [esp+10h+arg_4]
0x4DDD78: call    BSSimpleList_Clear
0x4DDD7D: mov     eax, [esp+10h+arg_4]
0x4DDD81: push    eax
0x4DDD82: call    FormHeapFree
0x4DDD87: add     esp, 4
0x4DDD8A: pop     edi
0x4DDD8B: mov     ecx, ebx; this
0x4DDD8D: call    TESObjectREFR_GetContainer
0x4DDD92: mov     esi, eax
0x4DDD94: test    esi, esi
0x4DDD96: jz      short TESObjectREFR_AddItem___PlayerInventoryProcessing?
0x4DDD98: push    1
0x4DDD9A: push    ebp
0x4DDD9B: push    ebx
0x4DDD9C: call    Script_AddEventToExtraScript
0x4DDDA1: push    esi
0x4DDDA2: push    ebx; a1
0x4DDDA3: call    ContainerExtraData_GetContainerExtraDataForRef
0x4DDDA8: mov     ecx, [esp+20h+arg_8]
0x4DDDAC: mov     edx, [esp+20h+arg_0]
0x4DDDB0: add     esp, 14h
0x4DDDB3: push    ecx
0x4DDDB4: push    ebp
0x4DDDB5: push    edx
0x4DDDB6: mov     ecx, eax
0x4DDDB8: call    ContainerExtraData_AddItem
0x4DDDBD: cmp     ebx, ds:0B333C4h
0x4DDDC3: pop     esi
0x4DDDC4: pop     ebp
0x4DDDC5: pop     ebx
0x4DDDC6: jnz     short TESObjectREFR_AddItem___Done
0x4DDDC8: push    0
0x4DDDCA: call    sub_57A3B0
0x4DDDCF: pop     ecx
0x4DDDD0: retn    0Ch
