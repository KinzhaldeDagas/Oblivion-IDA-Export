0x4DDC40: push    ebp
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
0x4DDC68: mov     ecx, [esp+24h+arg_C]
0x4DDC6C: mov     edx, [esp+24h+arg_8]
0x4DDC70: add     esp, 14h
0x4DDC73: push    ecx
0x4DDC74: mov     ecx, [esp+14h+arg_4]
0x4DDC78: push    edx
0x4DDC79: push    ecx
0x4DDC7A: push    esi
0x4DDC7B: mov     ecx, eax
0x4DDC7D: call    sub_48AA10
0x4DDC82: mov     ecx, esi; this
0x4DDC84: call    TESObjectREFR_IsPersistent?
0x4DDC89: test    al, al
0x4DDC8B: jz      short loc_4DDCA0
0x4DDC8D: push    edi
0x4DDC8E: mov     ecx, ebx
0x4DDC90: call    ExtraDataList_SetReferencePointer
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
