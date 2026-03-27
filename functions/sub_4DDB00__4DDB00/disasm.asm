0x4DDB00: push    ebx
0x4DDB01: push    esi
0x4DDB02: mov     esi, ecx
0x4DDB04: mov     ecx, ds:0B33B00h
0x4DDB0A: push    edi
0x4DDB0B: call    sub_45A500
0x4DDB10: test    al, al
0x4DDB12: jnz     short loc_4DDB36
0x4DDB14: mov     ecx, esi; this
0x4DDB16: call    TESObjectREFR_GetContainer
0x4DDB1B: test    eax, eax
0x4DDB1D: jz      short loc_4DDB36
0x4DDB1F: push    eax
0x4DDB20: push    esi; a1
0x4DDB21: call    ContainerExtraData_GetContainerExtraDataForRef
0x4DDB26: add     esp, 8
0x4DDB29: mov     ecx, eax
0x4DDB2B: call    sub_487B60
0x4DDB30: test    al, al
0x4DDB32: mov     bl, 1
0x4DDB34: jnz     short loc_4DDB3A
0x4DDB36: mov     bl, [esp+0Ch+arg_0]
0x4DDB3A: mov     ecx, esi; this
0x4DDB3C: call    TESObjectREFR_GetContainer
0x4DDB41: mov     edi, eax
0x4DDB43: test    edi, edi
0x4DDB45: jz      loc_4DDC32
0x4DDB4B: test    bl, bl
0x4DDB4D: jz      short loc_4DDB64
0x4DDB4F: push    edi
0x4DDB50: push    esi; a1
0x4DDB51: call    ContainerExtraData_GetContainerExtraDataForRef
0x4DDB56: mov     edi, eax
0x4DDB58: add     esp, 8
0x4DDB5B: mov     ecx, edi
0x4DDB5D: call    sub_48DF80
0x4DDB62: jmp     short loc_4DDB78
0x4DDB64: lea     ecx, [esi+44h]
0x4DDB67: call    ExtraDataList_RemoveContainerExtraData
0x4DDB6C: push    edi
0x4DDB6D: push    esi; a1
0x4DDB6E: call    ContainerExtraData_GetContainerExtraDataForRef
0x4DDB73: add     esp, 8
0x4DDB76: mov     edi, eax
0x4DDB78: mov     eax, [esi]
0x4DDB7A: mov     edx, [eax+190h]
0x4DDB80: mov     ecx, esi
0x4DDB82: call    edx
0x4DDB84: test    al, al
0x4DDB86: jz      short loc_4DDB8F
0x4DDB88: mov     ecx, esi
0x4DDB8A: call    sub_5E9690
0x4DDB8F: mov     ecx, edi
0x4DDB91: call    ContainerExtraData_EvaluateOwnerLeveledItems
0x4DDB96: mov     ecx, edi
0x4DDB98: call    ExtraContainerChanges_RunScripts
0x4DDB9D: mov     edi, [edi]
0x4DDB9F: cmp     dword ptr [edi+4], 0
0x4DDBA3: jnz     short loc_4DDBB2
0x4DDBA5: cmp     dword ptr [edi], 0
0x4DDBA8: jnz     short loc_4DDBB2
0x4DDBAA: lea     ecx, [esi+44h]
0x4DDBAD: call    ExtraDataList_RemoveContainerExtraData
0x4DDBB2: lea     ecx, [esi+44h]
0x4DDBB5: call    sub_420480
0x4DDBBA: mov     edi, eax
0x4DDBBC: test    edi, edi
0x4DDBBE: jz      short loc_4DDC32
0x4DDBC0: mov     ecx, edi
0x4DDBC2: call    BSSimpleList_IsEmpty
0x4DDBC7: test    al, al
0x4DDBC9: jnz     short loc_4DDC32
0x4DDBCB: mov     esi, [edi]
0x4DDBCD: push    0
0x4DDBCF: lea     ecx, [esi+44h]
0x4DDBD2: call    sub_4203E0
0x4DDBD7: mov     eax, [esi]
0x4DDBD9: mov     edx, [eax+78h]
0x4DDBDC: mov     ecx, esi
0x4DDBDE: call    edx
0x4DDBE0: test    al, al
0x4DDBE2: jnz     short loc_4DDC0E
0x4DDBE4: mov     eax, [esi]
0x4DDBE6: mov     edx, [eax+8Ch]
0x4DDBEC: push    1
0x4DDBEE: mov     ecx, esi
0x4DDBF0: call    edx
0x4DDBF2: mov     eax, [esi]
0x4DDBF4: mov     edx, [eax+90h]
0x4DDBFA: push    1
0x4DDBFC: mov     ecx, esi
0x4DDBFE: call    edx
0x4DDC00: mov     eax, [esi]
0x4DDC02: mov     edx, [eax+150h]
0x4DDC08: push    0
0x4DDC0A: mov     ecx, esi
0x4DDC0C: call    edx
0x4DDC0E: mov     eax, [edi+4]
0x4DDC11: test    eax, eax
0x4DDC13: jz      short loc_4DDC2A
0x4DDC15: mov     ecx, [eax+4]
0x4DDC18: mov     [edi+4], ecx
0x4DDC1B: mov     edx, [eax]
0x4DDC1D: push    eax
0x4DDC1E: mov     [edi], edx
0x4DDC20: call    FormHeapFree
0x4DDC25: add     esp, 4
0x4DDC28: jmp     short loc_4DDBC0
0x4DDC2A: mov     dword ptr [edi], 0
0x4DDC30: jmp     short loc_4DDBC0
0x4DDC32: pop     edi
0x4DDC33: pop     esi
0x4DDC34: pop     ebx
0x4DDC35: retn    4
