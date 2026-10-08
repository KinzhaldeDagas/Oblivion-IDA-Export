0x4DDC40: push    ebp; Add a live world reference to this reference's container by forwarding it to ContainerExtraData_AddItemFromWorldReference. That path derives sourceRef->GetBaseForm() and copies reference instance data; the returned byte is not a verified insertion-success contract and native callers ignore it.
0x4DDC41: push    edi
0x4DDC42: mov     edi, ecx
0x4DDC44: call    TESObjectREFR_GetContainer
0x4DDC49: mov     ebp, eax
0x4DDC4B: test    ebp, ebp
0x4DDC4D: jz      short loc_4DDCA2
0x4DDC4F: push    ebx
0x4DDC50: push    esi
0x4DDC51: mov     esi, [esp+10h+arg_0]
0x4DDC55: push    1
0x4DDC57: lea     ebx, [esi+44h]
0x4DDC5A: push    ebx
0x4DDC5B: push    edi
0x4DDC5C: call    Script_AddEventToExtraScript
0x4DDC61: push    ebp
0x4DDC62: push    edi; a1
0x4DDC63: call    ContainerExtraData_GetContainerExtraDataForRef
0x4DDC68: mov     ecx, dword ptr [esp+24h+forceWorn]
0x4DDC6C: mov     edx, [esp+24h+unusedArg]
0x4DDC70: add     esp, 14h
0x4DDC73: push    ecx; forceWorn
0x4DDC74: mov     ecx, [esp+14h+count]
0x4DDC78: push    edx; unusedArg
0x4DDC79: push    ecx; count
0x4DDC7A: push    esi; sourceRef
0x4DDC7B: mov     ecx, eax; this
0x4DDC7D: call    ContainerExtraData_AddItemFromWorldReference; Reference-based inventory insertion. This path does not call the form-based ContainerExtraData_AddItem at 0x48F7C0.
0x4DDC82: mov     ecx, esi; this
0x4DDC84: call    TESObjectREFR_IsPersistent
0x4DDC89: test    al, al
0x4DDC8B: jz      short loc_4DDCA0
0x4DDC8D: push    edi; reference
0x4DDC8E: mov     ecx, ebx; this
0x4DDC90: call    ExtraDataList_SetReferencePointer; Set or create ExtraReferencePointer (type 0x22) in one logical function, now merged through 0x41FAF4. This extra preserves persistent-reference provenance inside an already form-keyed inventory entry; it does not override EntryData.type or sourceRef->baseForm and therefore cannot restore a thrown proxy AMMO to its source WEAP.
0x4DDC95: mov     edx, [esi]
0x4DDC97: mov     eax, [edx+40h]
0x4DDC9A: push    20h ; ' '
0x4DDC9C: mov     ecx, esi
0x4DDC9E: call    eax
0x4DDCA0: pop     esi
0x4DDCA1: pop     ebx
0x4DDCA2: pop     edi
0x4DDCA3: pop     ebp
0x4DDCA4: retn    10h
