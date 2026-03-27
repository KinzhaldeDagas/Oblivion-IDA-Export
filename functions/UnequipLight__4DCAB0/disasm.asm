0x4DCAB0: sub     esp, 0Ch
0x4DCAB3: push    ebp
0x4DCAB4: mov     ebp, ecx
0x4DCAB6: cmp     dword ptr [ebp+3Ch], 0
0x4DCABA: mov     [esp+10h+var_8], ebp
0x4DCABE: jz      loc_4DCCE6
0x4DCAC4: mov     eax, [ebp+0]
0x4DCAC7: mov     edx, [eax+168h]
0x4DCACD: push    esi
0x4DCACE: call    edx
0x4DCAD0: mov     esi, eax
0x4DCAD2: mov     eax, [ebp+0]
0x4DCAD5: mov     edx, [eax+190h]
0x4DCADB: mov     ecx, ebp
0x4DCADD: call    edx
0x4DCADF: test    al, al
0x4DCAE1: jz      loc_4DCCE5
0x4DCAE7: cmp     dword ptr [ebp+58h], 0
0x4DCAEB: jz      loc_4DCCE5
0x4DCAF1: mov     ecx, ds:0B333C4h
0x4DCAF7: cmp     ebp, ecx
0x4DCAF9: jnz     short loc_4DCB22
0x4DCAFB: test    esi, esi
0x4DCAFD: jz      short loc_4DCB0C
0x4DCAFF: mov     ecx, esi
0x4DCB01: call    sub_478E30
0x4DCB06: mov     ecx, ds:0B333C4h
0x4DCB0C: mov     al, [ecx+588h]
0x4DCB12: mov     byte ptr [esp+14h+var_4], al
0x4DCB16: mov     edx, [esp+14h+var_4]
0x4DCB1A: push    edx
0x4DCB1B: call    sub_6600D0
0x4DCB20: mov     esi, eax
0x4DCB22: test    esi, esi
0x4DCB24: push    ebx
0x4DCB25: push    edi
0x4DCB26: jz      short loc_4DCB34
0x4DCB28: mov     ecx, esi
0x4DCB2A: call    sub_478E30
0x4DCB2F: jmp     loc_4DCC72
0x4DCB34: mov     eax, ds:0B06570h
0x4DCB39: mov     edx, [ebp+0]
0x4DCB3C: push    eax; a2
0x4DCB3D: mov     eax, [edx+154h]
0x4DCB43: mov     ecx, ebp
0x4DCB45: call    eax
0x4DCB47: push    eax; a1
0x4DCB48: call    NiObjectNET_LookupObjectByName
0x4DCB4D: mov     edi, eax
0x4DCB4F: add     esp, 8
0x4DCB52: test    edi, edi
0x4DCB54: mov     [esp+1Ch+var_4], edi
0x4DCB58: mov     [esp+1Ch+var_A], 0
0x4DCB5D: mov     [esp+1Ch+var_9], 0
0x4DCB62: jz      loc_4DCC59
0x4DCB68: mov     edx, [edi]
0x4DCB6A: mov     eax, [edx+8]
0x4DCB6D: mov     ecx, edi
0x4DCB6F: call    eax
0x4DCB71: mov     ebx, eax
0x4DCB73: test    ebx, ebx
0x4DCB75: jz      short loc_4DCBD5
0x4DCB77: cmp     word ptr [ebx+0B8h], 0
0x4DCB7F: setnz   al
0x4DCB82: test    al, al
0x4DCB84: mov     [esp+1Ch+var_A], al
0x4DCB88: jz      short loc_4DCBD5
0x4DCB8A: movzx   ebp, word ptr [ebx+0B6h]
0x4DCB91: xor     edx, edx
0x4DCB93: test    ebp, ebp
0x4DCB95: jbe     short loc_4DCBD1
0x4DCB97: cmp     ebp, edx
0x4DCB99: jbe     short loc_4DCBC6
0x4DCB9B: mov     ecx, [ebx+0B0h]
0x4DCBA1: mov     eax, [ecx+edx*4]
0x4DCBA4: test    eax, eax
0x4DCBA6: jz      short loc_4DCBC6
0x4DCBA8: mov     eax, [eax+8]
0x4DCBAB: test    eax, eax
0x4DCBAD: jz      short loc_4DCBC6
0x4DCBAF: mov     esi, eax
0x4DCBB1: mov     edi, offset aBow
0x4DCBB6: mov     ecx, 4
0x4DCBBB: xor     eax, eax
0x4DCBBD: repe cmpsb
0x4DCBBF: jnz     short loc_4DCBC6
0x4DCBC1: mov     [esp+1Ch+var_9], 1
0x4DCBC6: add     edx, 1
0x4DCBC9: cmp     ebp, edx
0x4DCBCB: ja      short loc_4DCB9B
0x4DCBCD: mov     edi, [esp+1Ch+var_4]
0x4DCBD1: mov     ebp, [esp+1Ch+var_8]
0x4DCBD5: lea     ecx, [ebp+44h]; this
0x4DCBD8: call    ExtraDataList_GetContainerChanges
0x4DCBDD: test    eax, eax
0x4DCBDF: jz      short loc_4DCC40
0x4DCBE1: push    0
0x4DCBE3: push    0Eh
0x4DCBE5: mov     ecx, eax
0x4DCBE7: call    ContainerExtraData_GetEquippedInstance
0x4DCBEC: mov     esi, eax
0x4DCBEE: test    esi, esi
0x4DCBF0: jz      short loc_4DCC40
0x4DCBF2: mov     eax, [esi+8]
0x4DCBF5: push    0; int
0x4DCBF7: push    offset ??_R0?AVTESModel@@@8; struct TypeDescriptor *
0x4DCBFC: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x4DCC01: push    0; int
0x4DCC03: push    eax; void *
0x4DCC04: call    OblivionDynamicCast
0x4DCC09: add     esp, 14h
0x4DCC0C: test    eax, eax
0x4DCC0E: jz      short loc_4DCC30
0x4DCC10: cmp     [esp+1Ch+var_A], 0
0x4DCC15: jz      short loc_4DCC30
0x4DCC17: mov     edx, [eax]
0x4DCC19: mov     ecx, eax
0x4DCC1B: mov     eax, [edx+14h]
0x4DCC1E: call    eax
0x4DCC20: mov     ecx, ds:0B33A1Ch
0x4DCC26: push    1
0x4DCC28: push    1
0x4DCC2A: push    eax
0x4DCC2B: call    QueuedModelLoader_RemoveModel
0x4DCC30: mov     ecx, esi
0x4DCC32: call    ContainerEntryExtraData_DestroyDataTable
0x4DCC37: push    esi
0x4DCC38: call    FormHeapFree
0x4DCC3D: add     esp, 4
0x4DCC40: test    ebx, ebx
0x4DCC42: jz      short loc_4DCC60
0x4DCC44: cmp     [esp+1Ch+var_9], 0
0x4DCC49: jnz     short loc_4DCC72
0x4DCC4B: lea     ecx, [ebx+0ACh]
0x4DCC51: call    sub_477EF0
0x4DCC56: push    ebx
0x4DCC57: jmp     short loc_4DCC61
0x4DCC59: xor     ebx, ebx
0x4DCC5B: jmp     loc_4DCBD5
0x4DCC60: push    edi
0x4DCC61: push    0
0x4DCC63: call    GetShadowSceneNode
0x4DCC68: add     esp, 4
0x4DCC6B: mov     ecx, eax
0x4DCC6D: call    sub_7C5E70
0x4DCC72: lea     ebx, [ebp+44h]
0x4DCC75: mov     ecx, ebx
0x4DCC77: call    sub_41E650
0x4DCC7C: mov     edi, eax
0x4DCC7E: test    edi, edi
0x4DCC80: jz      short loc_4DCCC9
0x4DCC82: mov     eax, [edi]
0x4DCC84: test    eax, eax
0x4DCC86: jz      short loc_4DCCC2
0x4DCC88: push    eax
0x4DCC89: push    0
0x4DCC8B: call    GetShadowSceneNode
0x4DCC90: add     esp, 4
0x4DCC93: mov     ecx, eax
0x4DCC95: call    sub_7C7DC0
0x4DCC9A: mov     esi, [edi]
0x4DCC9C: test    esi, esi
0x4DCC9E: jz      short loc_4DCCC2
0x4DCCA0: lea     ecx, [esi+4]
0x4DCCA3: push    ecx; lpAddend
0x4DCCA4: call    dword ptr ds:0A2807Ch
0x4DCCAA: test    eax, eax
0x4DCCAC: jnz     short loc_4DCCBC
0x4DCCAE: test    esi, esi
0x4DCCB0: jz      short loc_4DCCBC
0x4DCCB2: mov     edx, [esi]
0x4DCCB4: mov     eax, [edx]
0x4DCCB6: push    1
0x4DCCB8: mov     ecx, esi
0x4DCCBA: call    eax
0x4DCCBC: mov     dword ptr [edi], 0
0x4DCCC2: mov     ecx, ebx
0x4DCCC4: call    sub_41F5B0
0x4DCCC9: mov     ecx, [ebp+58h]
0x4DCCCC: mov     edx, [ecx]
0x4DCCCE: mov     eax, [edx+344h]
0x4DCCD4: push    1
0x4DCCD6: call    eax
0x4DCCD8: mov     ecx, [ebp+3Ch]
0x4DCCDB: push    ecx
0x4DCCDC: mov     ecx, ebp
0x4DCCDE: call    sub_5EA1A0
0x4DCCE3: pop     edi
0x4DCCE4: pop     ebx
0x4DCCE5: pop     esi
0x4DCCE6: pop     ebp
0x4DCCE7: add     esp, 0Ch
0x4DCCEA: retn
