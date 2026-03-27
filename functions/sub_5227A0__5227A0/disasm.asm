0x5227A0: sub     esp, 3Ch
0x5227A3: mov     eax, ds:0BA9DE4h
0x5227A8: push    ebx
0x5227A9: push    esi
0x5227AA: push    edi
0x5227AB: mov     edi, ecx
0x5227AD: mov     ecx, large fs:2Ch
0x5227B4: mov     eax, [ecx+eax*4]
0x5227B7: mov     dl, [eax+185h]
0x5227BD: xor     ebx, ebx
0x5227BF: cmp     [esp+48h+arg_10], bl
0x5227C3: mov     [esp+48h+var_4], eax
0x5227C7: mov     [esp+48h+var_39], dl
0x5227CB: jnz     short loc_5227D3
0x5227CD: mov     [eax+185h], bl
0x5227D3: push    ebp
0x5227D4: mov     ebp, [esp+4Ch+a1]
0x5227D8: mov     eax, [ebp+0]
0x5227DB: mov     edx, [eax+190h]
0x5227E1: mov     ecx, ebp
0x5227E3: call    edx
0x5227E5: test    al, al
0x5227E7: jz      short loc_522805
0x5227E9: mov     ecx, [ebp+58h]
0x5227EC: cmp     ecx, ebx
0x5227EE: jz      short loc_522805
0x5227F0: mov     eax, [ecx]
0x5227F2: mov     edx, [eax+138h]
0x5227F8: call    edx
0x5227FA: test    al, al
0x5227FC: jz      short loc_522805
0x5227FE: mov     ecx, ebp
0x522800: call    UnequipWeapon
0x522805: cmp     edi, ebx
0x522807: jz      short loc_52280E
0x522809: lea     eax, [edi+44h]
0x52280C: jmp     short loc_522810
0x52280E: xor     eax, eax
0x522810: push    eax
0x522811: push    ebp; a1
0x522812: call    ContainerExtraData_GetContainerExtraDataForRef
0x522817: add     esp, 8
0x52281A: mov     esi, eax
0x52281C: push    1
0x52281E: mov     ecx, esi
0x522820: call    ContainerExtraData_UnequipAll
0x522825: push    ebx; int
0x522826: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x52282B: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x522830: push    ebx; int
0x522831: push    ebp; void *
0x522832: call    OblivionDynamicCast
0x522837: add     esp, 14h
0x52283A: cmp     eax, ebx
0x52283C: mov     [esp+4Ch+var_14], eax
0x522840: jz      short loc_52288B
0x522842: mov     ecx, [eax+58h]
0x522845: cmp     ecx, ebx
0x522847: jz      short loc_52288B
0x522849: mov     edx, [ecx]
0x52284B: mov     eax, [edx+10Ch]
0x522851: push    ebx
0x522852: call    eax
0x522854: mov     ecx, [esp+4Ch+var_14]
0x522858: mov     ecx, [ecx+58h]
0x52285B: mov     edx, [ecx]
0x52285D: mov     eax, [edx+110h]
0x522863: push    ebx
0x522864: call    eax
0x522866: mov     ecx, [esp+4Ch+var_14]
0x52286A: mov     ecx, [ecx+58h]
0x52286D: mov     edx, [ecx]
0x52286F: mov     eax, [edx+108h]
0x522875: push    ebx
0x522876: call    eax
0x522878: mov     ecx, [esp+4Ch+var_14]
0x52287C: mov     ecx, [ecx+58h]
0x52287F: mov     edx, [ecx]
0x522881: mov     eax, [edx+104h]
0x522887: push    ebx
0x522888: push    ebx
0x522889: call    eax
0x52288B: cmp     byte ptr [esp+4Ch+arg_4], bl
0x52288F: mov     dword ptr [esp+4Ch+arg_10], ebx
0x522893: mov     [esp+4Ch+a1], ebx
0x522897: mov     [esp+4Ch+var_28], ebx
0x52289B: mov     [esp+4Ch+var_1C], ebx
0x52289F: mov     [esp+4Ch+var_20], ebx
0x5228A3: mov     [esp+4Ch+var_24], ebx
0x5228A7: mov     [esp+4Ch+var_18], ebx
0x5228AB: mov     [esp+4Ch+var_2C], ebx
0x5228AF: mov     [esp+4Ch+var_10], ebx
0x5228B3: mov     [esp+4Ch+var_34], ebx
0x5228B7: mov     [esp+4Ch+var_38], ebx
0x5228BB: mov     [esp+4Ch+var_30], ebx
0x5228BF: jnz     short loc_5228CB
0x5228C1: cmp     byte ptr [esp+4Ch+arg_C], bl
0x5228C5: jz      loc_522970
0x5228CB: push    1
0x5228CD: push    2
0x5228CF: push    edi
0x5228D0: mov     ecx, esi
0x5228D2: call    sub_48C870
0x5228D7: push    1
0x5228D9: push    3
0x5228DB: push    edi
0x5228DC: mov     ecx, esi
0x5228DE: mov     dword ptr [esp+58h+arg_10], eax
0x5228E2: call    sub_48C870
0x5228E7: push    1
0x5228E9: push    5
0x5228EB: push    edi
0x5228EC: mov     ecx, esi
0x5228EE: mov     [esp+58h+a1], eax
0x5228F2: call    sub_48C870
0x5228F7: push    1
0x5228F9: push    4
0x5228FB: push    edi
0x5228FC: mov     ecx, esi
0x5228FE: mov     [esp+58h+var_28], eax
0x522902: call    sub_48C870
0x522907: cmp     byte ptr [esp+4Ch+arg_C], bl
0x52290B: mov     [esp+4Ch+var_24], eax
0x52290F: jnz     short loc_522940
0x522911: push    1
0x522913: push    1
0x522915: push    edi
0x522916: mov     ecx, esi
0x522918: call    sub_48C870
0x52291D: push    1
0x52291F: push    ebx
0x522920: push    edi
0x522921: mov     ecx, esi
0x522923: mov     [esp+58h+var_20], eax
0x522927: call    sub_48C870
0x52292C: push    1
0x52292E: push    0Dh
0x522930: push    edi
0x522931: mov     ecx, esi
0x522933: mov     [esp+58h+var_1C], eax
0x522937: call    sub_48C870
0x52293C: mov     [esp+4Ch+var_18], eax
0x522940: push    1
0x522942: push    6
0x522944: push    edi
0x522945: mov     ecx, esi
0x522947: call    sub_48C870
0x52294C: push    1
0x52294E: push    7
0x522950: push    edi
0x522951: mov     ecx, esi
0x522953: mov     [esp+58h+var_34], eax
0x522957: call    sub_48C870
0x52295C: push    1
0x52295E: push    8
0x522960: push    edi
0x522961: mov     ecx, esi
0x522963: mov     [esp+58h+var_38], eax
0x522967: call    sub_48C870
0x52296C: mov     [esp+4Ch+var_30], eax
0x522970: cmp     byte ptr [esp+4Ch+arg_8], bl
0x522974: fldz
0x522976: fstp    [esp+4Ch+var_8]
0x52297A: jz      short loc_522991
0x52297C: push    1
0x52297E: push    0FFFFFFFFh
0x522980: lea     ecx, [esp+54h+var_8]
0x522984: push    ecx
0x522985: push    edi
0x522986: mov     ecx, esi
0x522988: call    sub_48BDA0
0x52298D: mov     [esp+4Ch+var_2C], eax
0x522991: push    1; float
0x522993: push    edi; int
0x522994: mov     ecx, esi
0x522996: call    sub_48B660
0x52299B: cmp     [esp+4Ch+var_2C], ebx
0x52299F: mov     [esp+4Ch+var_C], eax
0x5229A3: jz      short loc_5229E0
0x5229A5: mov     edx, [esp+4Ch+var_2C]
0x5229A9: mov     eax, [edx+8]
0x5229AC: cmp     eax, ebx
0x5229AE: jz      short loc_5229E0
0x5229B0: push    ebx; int
0x5229B1: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x5229B6: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5229BB: push    ebx; int
0x5229BC: push    eax; void *
0x5229BD: call    OblivionDynamicCast
0x5229C2: add     esp, 14h
0x5229C5: cmp     eax, ebx
0x5229C7: jz      short loc_5229E0
0x5229C9: cmp     byte ptr [eax+90h], 5
0x5229D0: jnz     short loc_5229E0
0x5229D2: push    1
0x5229D4: push    edi
0x5229D5: mov     ecx, esi
0x5229D7: call    sub_48B9C0
0x5229DC: mov     [esp+4Ch+var_10], eax
0x5229E0: cmp     dword ptr [esp+4Ch+arg_10], ebx
0x5229E4: jz      short loc_5229EC
0x5229E6: cmp     byte ptr [esp+4Ch+arg_C], bl
0x5229EA: jz      short loc_522A3E
0x5229EC: cmp     byte ptr [esp+4Ch+arg_C], bl
0x5229F0: mov     [esp+4Ch+arg_4], ebx
0x5229F4: jz      short loc_5229FE
0x5229F6: mov     eax, dword ptr [esp+4Ch+arg_10]
0x5229FA: mov     [esp+4Ch+arg_4], eax
0x5229FE: push    1
0x522A00: push    2
0x522A02: push    edi
0x522A03: mov     ecx, esi
0x522A05: call    sub_48D110
0x522A0A: cmp     eax, ebx
0x522A0C: mov     dword ptr [esp+4Ch+arg_10], eax
0x522A10: jnz     short loc_522A22
0x522A12: cmp     byte ptr [esp+4Ch+arg_C], bl
0x522A16: jz      short loc_522A22
0x522A18: mov     ecx, [esp+4Ch+arg_4]
0x522A1C: mov     dword ptr [esp+4Ch+arg_10], ecx
0x522A20: jmp     short loc_522A3E
0x522A22: cmp     [esp+4Ch+arg_4], ebx
0x522A26: jz      short loc_522A3E
0x522A28: mov     ecx, [esp+4Ch+arg_4]
0x522A2C: call    ContainerEntryExtraData_DestroyDataTable
0x522A31: mov     edx, [esp+4Ch+arg_4]
0x522A35: push    edx
0x522A36: call    FormHeapFree
0x522A3B: add     esp, 4
0x522A3E: cmp     [esp+4Ch+a1], ebx
0x522A42: jz      short loc_522A4A
0x522A44: cmp     byte ptr [esp+4Ch+arg_C], bl
0x522A48: jz      short loc_522A8A
0x522A4A: xor     ebx, ebx
0x522A4C: cmp     byte ptr [esp+4Ch+arg_C], bl
0x522A50: jz      short loc_522A56
0x522A52: mov     ebx, [esp+4Ch+a1]
0x522A56: push    1
0x522A58: push    3
0x522A5A: push    edi
0x522A5B: mov     ecx, esi
0x522A5D: call    sub_48D110
0x522A62: test    eax, eax
0x522A64: mov     [esp+4Ch+a1], eax
0x522A68: jnz     short loc_522A76
0x522A6A: cmp     byte ptr [esp+4Ch+arg_C], al
0x522A6E: jz      short loc_522A76
0x522A70: mov     [esp+4Ch+a1], ebx
0x522A74: jmp     short loc_522A8A
0x522A76: test    ebx, ebx
0x522A78: jz      short loc_522A8A
0x522A7A: mov     ecx, ebx
0x522A7C: call    ContainerEntryExtraData_DestroyDataTable
0x522A81: push    ebx
0x522A82: call    FormHeapFree
0x522A87: add     esp, 4
0x522A8A: cmp     [esp+4Ch+var_28], 0
0x522A8F: jnz     short loc_522AA1
0x522A91: push    1
0x522A93: push    5
0x522A95: push    edi
0x522A96: mov     ecx, esi
0x522A98: call    sub_48D110
0x522A9D: mov     [esp+4Ch+var_28], eax
0x522AA1: cmp     [esp+4Ch+var_24], 0
0x522AA6: jnz     short loc_522AB8
0x522AA8: push    1
0x522AAA: push    4
0x522AAC: push    edi
0x522AAD: mov     ecx, esi
0x522AAF: call    sub_48D110
0x522AB4: mov     [esp+4Ch+var_24], eax
0x522AB8: cmp     [esp+4Ch+var_20], 0
0x522ABD: jnz     short loc_522ACF
0x522ABF: push    1
0x522AC1: push    1
0x522AC3: push    edi
0x522AC4: mov     ecx, esi
0x522AC6: call    sub_48D110
0x522ACB: mov     [esp+4Ch+var_20], eax
0x522ACF: cmp     [esp+4Ch+var_1C], 0
0x522AD4: jnz     short loc_522AE6
0x522AD6: push    1
0x522AD8: push    0
0x522ADA: push    edi
0x522ADB: mov     ecx, esi
0x522ADD: call    sub_48D110
0x522AE2: mov     [esp+4Ch+var_1C], eax
0x522AE6: cmp     [esp+4Ch+var_18], 0
0x522AEB: jnz     short loc_522AFD
0x522AED: push    1
0x522AEF: push    0Dh
0x522AF1: push    edi
0x522AF2: mov     ecx, esi
0x522AF4: call    sub_48D110
0x522AF9: mov     [esp+4Ch+var_18], eax
0x522AFD: cmp     [esp+4Ch+var_30], 0
0x522B02: jnz     short loc_522B14
0x522B04: push    1
0x522B06: push    8
0x522B08: push    edi
0x522B09: mov     ecx, esi
0x522B0B: call    sub_48D110
0x522B10: mov     [esp+4Ch+var_30], eax
0x522B14: cmp     [esp+4Ch+var_34], 0
0x522B19: jnz     short loc_522B2B
0x522B1B: push    1
0x522B1D: push    6
0x522B1F: push    edi
0x522B20: mov     ecx, esi
0x522B22: call    sub_48D110
0x522B27: mov     [esp+4Ch+var_34], eax
0x522B2B: cmp     [esp+4Ch+var_38], 0
0x522B30: jnz     short loc_522B42
0x522B32: push    1
0x522B34: push    7
0x522B36: push    edi
0x522B37: mov     ecx, esi
0x522B39: call    sub_48D110
0x522B3E: mov     [esp+4Ch+var_38], eax
0x522B42: cmp     [esp+4Ch+var_30], 0
0x522B47: jz      short loc_522B7F
0x522B49: mov     eax, [esp+4Ch+var_30]
0x522B4D: push    eax
0x522B4E: mov     ecx, ebp
0x522B50: call    Actor_IsObjectEquipped
0x522B55: test    al, al
0x522B57: jnz     short loc_522B7F
0x522B59: mov     ecx, [esp+4Ch+var_30]
0x522B5D: mov     eax, [ecx]
0x522B5F: test    eax, eax
0x522B61: jz      short loc_522B67
0x522B63: mov     eax, [eax]
0x522B65: jmp     short loc_522B69
0x522B67: xor     eax, eax
0x522B69: mov     edx, [ebp+0]
0x522B6C: mov     edx, [edx+108h]
0x522B72: push    0
0x522B74: push    eax
0x522B75: mov     eax, [ecx+8]
0x522B78: push    1
0x522B7A: push    eax
0x522B7B: mov     ecx, ebp
0x522B7D: call    edx
0x522B7F: cmp     [esp+4Ch+var_38], 0
0x522B84: jz      short loc_522BBC
0x522B86: mov     eax, [esp+4Ch+var_38]
0x522B8A: push    eax
0x522B8B: mov     ecx, ebp
0x522B8D: call    Actor_IsObjectEquipped
0x522B92: test    al, al
0x522B94: jnz     short loc_522BBC
0x522B96: mov     ecx, [esp+4Ch+var_38]
0x522B9A: mov     eax, [ecx]
0x522B9C: test    eax, eax
0x522B9E: jz      short loc_522BA4
0x522BA0: mov     eax, [eax]
0x522BA2: jmp     short loc_522BA6
0x522BA4: xor     eax, eax
0x522BA6: mov     edx, [ebp+0]
0x522BA9: mov     edx, [edx+108h]
0x522BAF: push    0
0x522BB1: push    eax
0x522BB2: mov     eax, [ecx+8]
0x522BB5: push    1
0x522BB7: push    eax
0x522BB8: mov     ecx, ebp
0x522BBA: call    edx
0x522BBC: cmp     [esp+4Ch+var_34], 0
0x522BC1: jz      short loc_522BF9
0x522BC3: mov     eax, [esp+4Ch+var_34]
0x522BC7: push    eax
0x522BC8: mov     ecx, ebp
0x522BCA: call    Actor_IsObjectEquipped
0x522BCF: test    al, al
0x522BD1: jnz     short loc_522BF9
0x522BD3: mov     ecx, [esp+4Ch+var_34]
0x522BD7: mov     eax, [ecx]
0x522BD9: test    eax, eax
0x522BDB: jz      short loc_522BE1
0x522BDD: mov     eax, [eax]
0x522BDF: jmp     short loc_522BE3
0x522BE1: xor     eax, eax
0x522BE3: mov     edx, [ebp+0]
0x522BE6: mov     edx, [edx+108h]
0x522BEC: push    0
0x522BEE: push    eax
0x522BEF: mov     eax, [ecx+8]
0x522BF2: push    1
0x522BF4: push    eax
0x522BF5: mov     ecx, ebp
0x522BF7: call    edx
0x522BF9: xor     edi, edi
0x522BFB: xor     ebx, ebx
0x522BFD: cmp     dword ptr [esp+4Ch+arg_10], edi
0x522C01: mov     [esp+4Ch+arg_C], edi
0x522C05: mov     [esp+4Ch+arg_4], edi
0x522C09: mov     [esp+4Ch+arg_8], edi
0x522C0D: jz      short loc_522C70
0x522C0F: mov     esi, dword ptr [esp+4Ch+arg_10]
0x522C13: push    esi
0x522C14: mov     ecx, ebp
0x522C16: call    Actor_IsObjectEquipped
0x522C1B: test    al, al
0x522C1D: jnz     short loc_522C70
0x522C1F: mov     eax, [esi]
0x522C21: test    eax, eax
0x522C23: jz      short loc_522C29
0x522C25: mov     eax, [eax]
0x522C27: jmp     short loc_522C2B
0x522C29: xor     eax, eax
0x522C2B: mov     edx, [ebp+0]
0x522C2E: mov     edx, [edx+108h]
0x522C34: push    0
0x522C36: push    eax
0x522C37: mov     eax, [esi+8]
0x522C3A: push    1
0x522C3C: push    eax
0x522C3D: mov     ecx, ebp
0x522C3F: call    edx
0x522C41: mov     eax, [esi+8]
0x522C44: push    0; int
0x522C46: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x522C4B: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x522C50: push    0; int
0x522C52: push    eax; void *
0x522C53: call    OblivionDynamicCast
0x522C58: mov     edi, eax
0x522C5A: add     esp, 14h
0x522C5D: test    edi, edi
0x522C5F: jz      short loc_522C70
0x522C61: push    0
0x522C63: push    3
0x522C65: mov     ecx, edi
0x522C67: call    TESBipedModelForm_CoversSlot
0x522C6C: test    al, al
0x522C6E: jnz     short loc_522CC2
0x522C70: mov     esi, [esp+4Ch+a1]
0x522C74: test    esi, esi
0x522C76: jz      short loc_522CC2
0x522C78: push    esi
0x522C79: mov     ecx, ebp
0x522C7B: call    Actor_IsObjectEquipped
0x522C80: test    al, al
0x522C82: jnz     short loc_522CC2
0x522C84: mov     eax, [esi]
0x522C86: test    eax, eax
0x522C88: jz      short loc_522C8E
0x522C8A: mov     eax, [eax]
0x522C8C: jmp     short loc_522C90
0x522C8E: xor     eax, eax
0x522C90: mov     edx, [ebp+0]
0x522C93: mov     edx, [edx+108h]
0x522C99: push    0
0x522C9B: push    eax
0x522C9C: mov     eax, [esi+8]
0x522C9F: push    1
0x522CA1: push    eax
0x522CA2: mov     ecx, ebp
0x522CA4: call    edx
0x522CA6: mov     eax, [esi+8]
0x522CA9: push    0; int
0x522CAB: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x522CB0: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x522CB5: push    0; int
0x522CB7: push    eax; void *
0x522CB8: call    OblivionDynamicCast
0x522CBD: add     esp, 14h
0x522CC0: mov     ebx, eax
0x522CC2: test    edi, edi
0x522CC4: jz      short loc_522CD5
0x522CC6: push    0
0x522CC8: push    4
0x522CCA: mov     ecx, edi
0x522CCC: call    TESBipedModelForm_CoversSlot
0x522CD1: test    al, al
0x522CD3: jnz     short loc_522D3C
0x522CD5: test    ebx, ebx
0x522CD7: jz      short loc_522CE8
0x522CD9: push    0
0x522CDB: push    4
0x522CDD: mov     ecx, ebx
0x522CDF: call    TESBipedModelForm_CoversSlot
0x522CE4: test    al, al
0x522CE6: jnz     short loc_522D3C
0x522CE8: mov     esi, [esp+4Ch+var_24]
0x522CEC: test    esi, esi
0x522CEE: jz      short loc_522D3C
0x522CF0: push    esi
0x522CF1: mov     ecx, ebp
0x522CF3: call    Actor_IsObjectEquipped
0x522CF8: test    al, al
0x522CFA: jnz     short loc_522D3C
0x522CFC: mov     eax, [esi]
0x522CFE: test    eax, eax
0x522D00: jz      short loc_522D06
0x522D02: mov     eax, [eax]
0x522D04: jmp     short loc_522D08
0x522D06: xor     eax, eax
0x522D08: mov     edx, [ebp+0]
0x522D0B: mov     edx, [edx+108h]
0x522D11: push    0
0x522D13: push    eax
0x522D14: mov     eax, [esi+8]
0x522D17: push    1
0x522D19: push    eax
0x522D1A: mov     ecx, ebp
0x522D1C: call    edx
0x522D1E: mov     eax, [esi+8]
0x522D21: push    0; int
0x522D23: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x522D28: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x522D2D: push    0; int
0x522D2F: push    eax; void *
0x522D30: call    OblivionDynamicCast
0x522D35: add     esp, 14h
0x522D38: mov     [esp+4Ch+arg_C], eax
0x522D3C: test    edi, edi
0x522D3E: jz      short loc_522D4F
0x522D40: push    0
0x522D42: push    5
0x522D44: mov     ecx, edi
0x522D46: call    TESBipedModelForm_CoversSlot
0x522D4B: test    al, al
0x522D4D: jnz     short loc_522DCB
0x522D4F: test    ebx, ebx
0x522D51: jz      short loc_522D62
0x522D53: push    0
0x522D55: push    5
0x522D57: mov     ecx, ebx
0x522D59: call    TESBipedModelForm_CoversSlot
0x522D5E: test    al, al
0x522D60: jnz     short loc_522DCB
0x522D62: mov     ecx, [esp+4Ch+arg_C]
0x522D66: test    ecx, ecx
0x522D68: jz      short loc_522D77
0x522D6A: push    0
0x522D6C: push    5
0x522D6E: call    TESBipedModelForm_CoversSlot
0x522D73: test    al, al
0x522D75: jnz     short loc_522DCB
0x522D77: mov     esi, [esp+4Ch+var_28]
0x522D7B: test    esi, esi
0x522D7D: jz      short loc_522DCB
0x522D7F: push    esi
0x522D80: mov     ecx, ebp
0x522D82: call    Actor_IsObjectEquipped
0x522D87: test    al, al
0x522D89: jnz     short loc_522DCB
0x522D8B: mov     eax, [esi]
0x522D8D: test    eax, eax
0x522D8F: jz      short loc_522D95
0x522D91: mov     eax, [eax]
0x522D93: jmp     short loc_522D97
0x522D95: xor     eax, eax
0x522D97: mov     edx, [ebp+0]
0x522D9A: mov     edx, [edx+108h]
0x522DA0: push    0
0x522DA2: push    eax
0x522DA3: mov     eax, [esi+8]
0x522DA6: push    1
0x522DA8: push    eax
0x522DA9: mov     ecx, ebp
0x522DAB: call    edx
0x522DAD: mov     eax, [esi+8]
0x522DB0: push    0; int
0x522DB2: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x522DB7: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x522DBC: push    0; int
0x522DBE: push    eax; void *
0x522DBF: call    OblivionDynamicCast
0x522DC4: add     esp, 14h
0x522DC7: mov     [esp+4Ch+arg_4], eax
0x522DCB: test    edi, edi
0x522DCD: jz      short loc_522DE2
0x522DCF: push    0
0x522DD1: push    1
0x522DD3: mov     ecx, edi
0x522DD5: call    TESBipedModelForm_CoversSlot
0x522DDA: test    al, al
0x522DDC: jnz     loc_522E73
0x522DE2: test    ebx, ebx
0x522DE4: jz      short loc_522DF5
0x522DE6: push    0
0x522DE8: push    1
0x522DEA: mov     ecx, ebx
0x522DEC: call    TESBipedModelForm_CoversSlot
0x522DF1: test    al, al
0x522DF3: jnz     short loc_522E73
0x522DF5: mov     ecx, [esp+4Ch+arg_C]
0x522DF9: test    ecx, ecx
0x522DFB: jz      short loc_522E0A
0x522DFD: push    0
0x522DFF: push    1
0x522E01: call    TESBipedModelForm_CoversSlot
0x522E06: test    al, al
0x522E08: jnz     short loc_522E73
0x522E0A: mov     ecx, [esp+4Ch+arg_4]
0x522E0E: test    ecx, ecx
0x522E10: jz      short loc_522E1F
0x522E12: push    0
0x522E14: push    1
0x522E16: call    TESBipedModelForm_CoversSlot
0x522E1B: test    al, al
0x522E1D: jnz     short loc_522E73
0x522E1F: mov     esi, [esp+4Ch+var_20]
0x522E23: test    esi, esi
0x522E25: jz      short loc_522E73
0x522E27: push    esi
0x522E28: mov     ecx, ebp
0x522E2A: call    Actor_IsObjectEquipped
0x522E2F: test    al, al
0x522E31: jnz     short loc_522E73
0x522E33: mov     eax, [esi]
0x522E35: test    eax, eax
0x522E37: jz      short loc_522E3D
0x522E39: mov     eax, [eax]
0x522E3B: jmp     short loc_522E3F
0x522E3D: xor     eax, eax
0x522E3F: mov     edx, [ebp+0]
0x522E42: mov     edx, [edx+108h]
0x522E48: push    0
0x522E4A: push    eax
0x522E4B: mov     eax, [esi+8]
0x522E4E: push    1
0x522E50: push    eax
0x522E51: mov     ecx, ebp
0x522E53: call    edx
0x522E55: mov     eax, [esi+8]
0x522E58: push    0; int
0x522E5A: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x522E5F: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x522E64: push    0; int
0x522E66: push    eax; void *
0x522E67: call    OblivionDynamicCast
0x522E6C: add     esp, 14h
0x522E6F: mov     [esp+4Ch+arg_8], eax
0x522E73: test    edi, edi
0x522E75: jz      short loc_522E8A
0x522E77: push    0
0x522E79: push    0
0x522E7B: mov     ecx, edi
0x522E7D: call    TESBipedModelForm_CoversSlot
0x522E82: test    al, al
0x522E84: jnz     loc_522F12
0x522E8A: test    ebx, ebx
0x522E8C: jz      short loc_522E9D
0x522E8E: push    0
0x522E90: push    0
0x522E92: mov     ecx, ebx
0x522E94: call    TESBipedModelForm_CoversSlot
0x522E99: test    al, al
0x522E9B: jnz     short loc_522F12
0x522E9D: mov     ecx, [esp+4Ch+arg_C]
0x522EA1: test    ecx, ecx
0x522EA3: jz      short loc_522EB2
0x522EA5: push    0
0x522EA7: push    0
0x522EA9: call    TESBipedModelForm_CoversSlot
0x522EAE: test    al, al
0x522EB0: jnz     short loc_522F12
0x522EB2: mov     ecx, [esp+4Ch+arg_8]
0x522EB6: test    ecx, ecx
0x522EB8: jz      short loc_522EC7
0x522EBA: push    0
0x522EBC: push    0
0x522EBE: call    TESBipedModelForm_CoversSlot
0x522EC3: test    al, al
0x522EC5: jnz     short loc_522F12
0x522EC7: mov     ecx, [esp+4Ch+arg_4]
0x522ECB: test    ecx, ecx
0x522ECD: jz      short loc_522EDC
0x522ECF: push    0
0x522ED1: push    0
0x522ED3: call    TESBipedModelForm_CoversSlot
0x522ED8: test    al, al
0x522EDA: jnz     short loc_522F12
0x522EDC: mov     esi, [esp+4Ch+var_1C]
0x522EE0: test    esi, esi
0x522EE2: jz      short loc_522F12
0x522EE4: push    esi
0x522EE5: mov     ecx, ebp
0x522EE7: call    Actor_IsObjectEquipped
0x522EEC: test    al, al
0x522EEE: jnz     short loc_522F12
0x522EF0: mov     eax, [esi]
0x522EF2: test    eax, eax
0x522EF4: jz      short loc_522EFA
0x522EF6: mov     eax, [eax]
0x522EF8: jmp     short loc_522EFC
0x522EFA: xor     eax, eax
0x522EFC: mov     edx, [ebp+0]
0x522EFF: mov     edx, [edx+108h]
0x522F05: push    0
0x522F07: push    eax
0x522F08: mov     eax, [esi+8]
0x522F0B: push    1
0x522F0D: push    eax
0x522F0E: mov     ecx, ebp
0x522F10: call    edx
0x522F12: cmp     ebp, ds:0B333C4h
0x522F18: jz      short loc_522F53
0x522F1A: mov     esi, [esp+4Ch+var_C]
0x522F1E: test    esi, esi
0x522F20: jz      short loc_522F53
0x522F22: mov     eax, [esi+8]
0x522F25: push    eax
0x522F26: mov     ecx, ebp
0x522F28: call    Actor_IsObjectEquipped
0x522F2D: test    al, al
0x522F2F: jnz     short loc_522F53
0x522F31: mov     eax, [esi]
0x522F33: test    eax, eax
0x522F35: jz      short loc_522F3B
0x522F37: mov     eax, [eax]
0x522F39: jmp     short loc_522F3D
0x522F3B: xor     eax, eax
0x522F3D: mov     edx, [ebp+0]
0x522F40: mov     edx, [edx+108h]
0x522F46: push    0
0x522F48: push    eax
0x522F49: mov     eax, [esi+8]
0x522F4C: push    1
0x522F4E: push    eax
0x522F4F: mov     ecx, ebp
0x522F51: call    edx
0x522F53: mov     esi, [esp+4Ch+var_18]
0x522F57: test    esi, esi
0x522F59: jz      short loc_522F89
0x522F5B: push    esi
0x522F5C: mov     ecx, ebp
0x522F5E: call    Actor_IsObjectEquipped
0x522F63: test    al, al
0x522F65: jnz     short loc_522F89
0x522F67: mov     eax, [esi]
0x522F69: test    eax, eax
0x522F6B: jz      short loc_522F71
0x522F6D: mov     eax, [eax]
0x522F6F: jmp     short loc_522F73
0x522F71: xor     eax, eax
0x522F73: mov     edx, [ebp+0]
0x522F76: mov     edx, [edx+108h]
0x522F7C: push    0
0x522F7E: push    eax
0x522F7F: mov     eax, [esi+8]
0x522F82: push    1
0x522F84: push    eax
0x522F85: mov     ecx, ebp
0x522F87: call    edx
0x522F89: mov     esi, [esp+4Ch+var_2C]
0x522F8D: test    esi, esi
0x522F8F: jz      short loc_52300B
0x522F91: mov     eax, [esi+8]
0x522F94: push    eax
0x522F95: mov     ecx, ebp
0x522F97: call    Actor_IsObjectEquipped
0x522F9C: test    al, al
0x522F9E: jnz     short loc_52300B
0x522FA0: mov     eax, [esi]
0x522FA2: test    eax, eax
0x522FA4: jz      short loc_522FAA
0x522FA6: mov     eax, [eax]
0x522FA8: jmp     short loc_522FAC
0x522FAA: xor     eax, eax
0x522FAC: mov     ecx, [esp+4Ch+var_2C]
0x522FB0: mov     esi, [ecx+8]
0x522FB3: mov     edi, [ebp+0]
0x522FB6: push    0
0x522FB8: push    eax
0x522FB9: call    TESHealthForm_GetHealth
0x522FBE: push    eax
0x522FBF: mov     eax, [edi+108h]
0x522FC5: push    esi
0x522FC6: mov     ecx, ebp
0x522FC8: call    eax
0x522FCA: mov     ebx, [esp+4Ch+var_10]
0x522FCE: test    ebx, ebx
0x522FD0: jz      short loc_52300F
0x522FD2: mov     eax, [ebx+8]
0x522FD5: push    eax
0x522FD6: mov     ecx, ebp
0x522FD8: call    Actor_IsObjectEquipped
0x522FDD: test    al, al
0x522FDF: jnz     short loc_52300F
0x522FE1: mov     eax, [ebx]
0x522FE3: test    eax, eax
0x522FE5: jz      short loc_522FEB
0x522FE7: mov     eax, [eax]
0x522FE9: jmp     short loc_522FED
0x522FEB: xor     eax, eax
0x522FED: mov     esi, [ebx+8]
0x522FF0: mov     edi, [ebp+0]
0x522FF3: push    0
0x522FF5: push    eax
0x522FF6: mov     ecx, ebx
0x522FF8: call    TESHealthForm_GetHealth
0x522FFD: mov     edx, [edi+108h]
0x523003: push    eax
0x523004: push    esi
0x523005: mov     ecx, ebp
0x523007: call    edx
0x523009: jmp     short loc_52300F
0x52300B: mov     ebx, [esp+4Ch+var_10]
0x52300F: mov     esi, dword ptr [esp+4Ch+arg_10]
0x523013: test    esi, esi
0x523015: pop     ebp
0x523016: jz      short loc_523028
0x523018: mov     ecx, esi
0x52301A: call    ContainerEntryExtraData_DestroyDataTable
0x52301F: push    esi
0x523020: call    FormHeapFree
0x523025: add     esp, 4
0x523028: mov     esi, [esp+48h+a1]
0x52302C: test    esi, esi
0x52302E: jz      short loc_523040
0x523030: mov     ecx, esi
0x523032: call    ContainerEntryExtraData_DestroyDataTable
0x523037: push    esi
0x523038: call    FormHeapFree
0x52303D: add     esp, 4
0x523040: mov     esi, [esp+48h+var_28]
0x523044: test    esi, esi
0x523046: jz      short loc_523058
0x523048: mov     ecx, esi
0x52304A: call    ContainerEntryExtraData_DestroyDataTable
0x52304F: push    esi
0x523050: call    FormHeapFree
0x523055: add     esp, 4
0x523058: mov     esi, [esp+48h+var_24]
0x52305C: test    esi, esi
0x52305E: jz      short loc_523070
0x523060: mov     ecx, esi
0x523062: call    ContainerEntryExtraData_DestroyDataTable
0x523067: push    esi
0x523068: call    FormHeapFree
0x52306D: add     esp, 4
0x523070: mov     esi, [esp+48h+var_20]
0x523074: test    esi, esi
0x523076: jz      short loc_523088
0x523078: mov     ecx, esi
0x52307A: call    ContainerEntryExtraData_DestroyDataTable
0x52307F: push    esi
0x523080: call    FormHeapFree
0x523085: add     esp, 4
0x523088: mov     esi, [esp+48h+var_1C]
0x52308C: test    esi, esi
0x52308E: jz      short loc_5230A0
0x523090: mov     ecx, esi
0x523092: call    ContainerEntryExtraData_DestroyDataTable
0x523097: push    esi
0x523098: call    FormHeapFree
0x52309D: add     esp, 4
0x5230A0: mov     esi, [esp+48h+var_18]
0x5230A4: test    esi, esi
0x5230A6: jz      short loc_5230B8
0x5230A8: mov     ecx, esi
0x5230AA: call    ContainerEntryExtraData_DestroyDataTable
0x5230AF: push    esi
0x5230B0: call    FormHeapFree
0x5230B5: add     esp, 4
0x5230B8: mov     esi, [esp+48h+var_2C]
0x5230BC: test    esi, esi
0x5230BE: jz      short loc_5230D0
0x5230C0: mov     ecx, esi
0x5230C2: call    ContainerEntryExtraData_DestroyDataTable
0x5230C7: push    esi
0x5230C8: call    FormHeapFree
0x5230CD: add     esp, 4
0x5230D0: test    ebx, ebx
0x5230D2: jz      short loc_5230E4
0x5230D4: mov     ecx, ebx
0x5230D6: call    ContainerEntryExtraData_DestroyDataTable
0x5230DB: push    ebx
0x5230DC: call    FormHeapFree
0x5230E1: add     esp, 4
0x5230E4: mov     esi, [esp+48h+var_C]
0x5230E8: test    esi, esi
0x5230EA: jz      short loc_5230FC
0x5230EC: mov     ecx, esi
0x5230EE: call    ContainerEntryExtraData_DestroyDataTable
0x5230F3: push    esi
0x5230F4: call    FormHeapFree
0x5230F9: add     esp, 4
0x5230FC: mov     esi, [esp+48h+var_38]
0x523100: test    esi, esi
0x523102: jz      short loc_523114
0x523104: mov     ecx, esi
0x523106: call    ContainerEntryExtraData_DestroyDataTable
0x52310B: push    esi
0x52310C: call    FormHeapFree
0x523111: add     esp, 4
0x523114: mov     esi, [esp+48h+var_34]
0x523118: test    esi, esi
0x52311A: jz      short loc_52312C
0x52311C: mov     ecx, esi
0x52311E: call    ContainerEntryExtraData_DestroyDataTable
0x523123: push    esi
0x523124: call    FormHeapFree
0x523129: add     esp, 4
0x52312C: mov     esi, [esp+48h+var_30]
0x523130: test    esi, esi
0x523132: jz      short loc_523144
0x523134: mov     ecx, esi
0x523136: call    ContainerEntryExtraData_DestroyDataTable
0x52313B: push    esi
0x52313C: call    FormHeapFree
0x523141: add     esp, 4
0x523144: mov     cl, [esp+48h+var_39]
0x523148: mov     eax, [esp+48h+var_4]
0x52314C: pop     edi
0x52314D: mov     [eax+185h], cl
0x523153: mov     ecx, [esp+44h+var_14]
0x523157: test    ecx, ecx
0x523159: pop     esi
0x52315A: pop     ebx
0x52315B: jz      short loc_52316A
0x52315D: cmp     dword ptr [ecx+58h], 0
0x523161: jz      short loc_52316A
0x523163: push    1
0x523165: call    sub_5EDA20
0x52316A: add     esp, 3Ch
0x52316D: retn    14h
