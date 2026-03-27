0x4DCCF0: sub     esp, 8
0x4DCCF3: push    edi
0x4DCCF4: mov     edi, ecx
0x4DCCF6: cmp     dword ptr [edi+3Ch], 0
0x4DCCFA: jz      loc_4DCE46
0x4DCD00: mov     eax, [edi]
0x4DCD02: mov     edx, [eax+168h]
0x4DCD08: call    edx
0x4DCD0A: mov     ecx, ds:0B333C4h
0x4DCD10: cmp     edi, ecx
0x4DCD12: jnz     short loc_4DCD39
0x4DCD14: test    eax, eax
0x4DCD16: jz      short loc_4DCD25
0x4DCD18: mov     ecx, eax
0x4DCD1A: call    sub_478DB0
0x4DCD1F: mov     ecx, ds:0B333C4h
0x4DCD25: mov     al, [ecx+588h]
0x4DCD2B: mov     byte ptr [esp+0Ch+var_4], al
0x4DCD2F: mov     edx, [esp+0Ch+var_4]
0x4DCD33: push    edx
0x4DCD34: call    sub_6600D0
0x4DCD39: test    eax, eax
0x4DCD3B: jz      short loc_4DCD49
0x4DCD3D: mov     ecx, eax
0x4DCD3F: call    sub_478DB0
0x4DCD44: jmp     loc_4DCE2B
0x4DCD49: mov     eax, ds:0B06568h
0x4DCD4E: mov     edx, [edi]
0x4DCD50: push    ebx
0x4DCD51: push    ebp
0x4DCD52: push    eax; a2
0x4DCD53: mov     eax, [edx+154h]
0x4DCD59: mov     ecx, edi
0x4DCD5B: call    eax
0x4DCD5D: push    eax; a1
0x4DCD5E: call    NiObjectNET_LookupObjectByName
0x4DCD63: mov     ebp, eax
0x4DCD65: add     esp, 8
0x4DCD68: test    ebp, ebp
0x4DCD6A: jz      loc_4DCE4B
0x4DCD70: mov     edx, [ebp+0]
0x4DCD73: mov     eax, [edx+8]
0x4DCD76: mov     ecx, ebp
0x4DCD78: call    eax
0x4DCD7A: mov     ebx, eax
0x4DCD7C: test    ebx, ebx
0x4DCD7E: jz      short loc_4DCD8F
0x4DCD80: cmp     word ptr [ebx+0B8h], 0
0x4DCD88: mov     [esp+14h+var_5], 1
0x4DCD8D: jnz     short loc_4DCD94
0x4DCD8F: mov     [esp+14h+var_5], 0
0x4DCD94: lea     ecx, [edi+44h]; this
0x4DCD97: call    ExtraDataList_GetContainerChanges
0x4DCD9C: test    eax, eax
0x4DCD9E: jz      short loc_4DCE01
0x4DCDA0: push    esi
0x4DCDA1: push    0
0x4DCDA3: push    0Ch
0x4DCDA5: mov     ecx, eax
0x4DCDA7: call    ContainerExtraData_GetEquippedInstance
0x4DCDAC: mov     esi, eax
0x4DCDAE: test    esi, esi
0x4DCDB0: jz      short loc_4DCE00
0x4DCDB2: mov     eax, [esi+8]
0x4DCDB5: push    0; int
0x4DCDB7: push    offset ??_R0?AVTESModel@@@8; struct TypeDescriptor *
0x4DCDBC: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x4DCDC1: push    0; int
0x4DCDC3: push    eax; void *
0x4DCDC4: call    OblivionDynamicCast
0x4DCDC9: add     esp, 14h
0x4DCDCC: test    eax, eax
0x4DCDCE: jz      short loc_4DCDF0
0x4DCDD0: cmp     [esp+18h+var_5], 0
0x4DCDD5: jz      short loc_4DCDF0
0x4DCDD7: mov     edx, [eax]
0x4DCDD9: mov     ecx, eax
0x4DCDDB: mov     eax, [edx+14h]
0x4DCDDE: call    eax
0x4DCDE0: mov     ecx, ds:0B33A1Ch
0x4DCDE6: push    1
0x4DCDE8: push    1
0x4DCDEA: push    eax
0x4DCDEB: call    QueuedModelLoader_RemoveModel
0x4DCDF0: mov     ecx, esi
0x4DCDF2: call    ContainerEntryExtraData_DestroyDataTable
0x4DCDF7: push    esi
0x4DCDF8: call    FormHeapFree
0x4DCDFD: add     esp, 4
0x4DCE00: pop     esi
0x4DCE01: push    ebp
0x4DCE02: push    0
0x4DCE04: call    GetShadowSceneNode
0x4DCE09: add     esp, 4
0x4DCE0C: mov     ecx, eax
0x4DCE0E: call    sub_7C5E70
0x4DCE13: test    ebx, ebx
0x4DCE15: jz      short loc_4DCE29
0x4DCE17: cmp     [esp+14h+var_5], 0
0x4DCE1C: jz      short loc_4DCE29
0x4DCE1E: lea     ecx, [ebx+0ACh]
0x4DCE24: call    sub_477EF0
0x4DCE29: pop     ebp
0x4DCE2A: pop     ebx
0x4DCE2B: mov     edx, [edi]
0x4DCE2D: mov     eax, [edx+190h]
0x4DCE33: mov     ecx, edi
0x4DCE35: call    eax
0x4DCE37: test    al, al
0x4DCE39: jz      short loc_4DCE46
0x4DCE3B: mov     ecx, [edi+3Ch]
0x4DCE3E: push    ecx
0x4DCE3F: mov     ecx, edi
0x4DCE41: call    sub_5EA1A0
0x4DCE46: pop     edi
0x4DCE47: add     esp, 8
0x4DCE4A: retn
0x4DCE4B: xor     ebx, ebx
0x4DCE4D: jmp     loc_4DCD8F
