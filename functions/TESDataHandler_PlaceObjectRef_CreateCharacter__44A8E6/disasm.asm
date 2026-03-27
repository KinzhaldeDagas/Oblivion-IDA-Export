0x44A8E6: push    10Ch; Size
0x44A8EB: call    FormHeapAlloc
0x44A8F0: add     esp, 4
0x44A8F3: mov     [esp+arg_54], eax
0x44A8F7: test    eax, eax
0x44A8F9: mov     [esp+arg_3C], 0
0x44A901: jz      short loc_44A90C
0x44A903: mov     ecx, eax
0x44A905: call    Character_constr
0x44A90A: jmp     short loc_44A90E
0x44A90C: xor     eax, eax
0x44A90E: mov     ebp, eax
0x44A910: push    esi; a2
0x44A911: mov     ecx, ebp; this
0x44A913: mov     [esp+4+arg_3C], 0FFFFFFFFh
0x44A91B: call    TESObjectREFR_SetBaseForm
0x44A920: mov     ecx, ebp; this
0x44A922: call    TESObjectREFR_IsTree
0x44A927: test    al, al
0x44A929: jz      short loc_44A934
0x44A92B: push    1; a2
0x44A92D: mov     ecx, ebp; this
0x44A92F: call    TESObjectREFR_SetVisibleWhenDistant?
0x44A934: mov     ecx, ebp
0x44A936: call    sub_4DB3C0
0x44A93B: push    0; int
0x44A93D: push    offset ??_R0?AVTESObjectLIGH@@@8; struct TypeDescriptor *
0x44A942: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x44A947: push    0; int
0x44A949: push    esi; void *
0x44A94A: mov     byte ptr [esp+14h+arg_54], al
0x44A94E: call    OblivionDynamicCast
0x44A953: add     esp, 14h
0x44A956: test    eax, eax
0x44A958: jz      short loc_44A96D
0x44A95A: mov     eax, [eax+7Ch]
0x44A95D: shr     eax, 5
0x44A960: and     eax, 0FFFFFF01h
0x44A965: push    eax
0x44A966: mov     ecx, ebp
0x44A968: call    sub_46AB60
0x44A96D: cmp     dword ptr [ebp+0Ch], 0FF000000h
0x44A974: jb      short loc_44A982
0x44A976: mov     edx, [ebp+0]
0x44A979: mov     eax, [edx+48h]
0x44A97C: push    2
0x44A97E: mov     ecx, ebp
0x44A980: call    eax
0x44A982: mov     esi, [esp+4+arg_44]
0x44A986: mov     ecx, [esi]
0x44A988: mov     edx, [esi+4]
0x44A98B: sub     esp, 0Ch
0x44A98E: mov     eax, esp
0x44A990: mov     [eax], ecx
0x44A992: mov     ecx, [esi+8]
0x44A995: mov     [eax+4], edx
0x44A998: mov     [eax+8], ecx
0x44A99B: mov     ecx, ebp; this
0x44A99D: call    TESObjectREFR_SetPosition
0x44A9A2: mov     ecx, [esp+4+arg_48]
0x44A9A6: mov     edx, [ecx]
0x44A9A8: sub     esp, 0Ch
0x44A9AB: mov     eax, esp
0x44A9AD: mov     [eax], edx
0x44A9AF: mov     edx, [ecx+4]
0x44A9B2: mov     ecx, [ecx+8]
0x44A9B5: mov     [eax+4], edx
0x44A9B8: mov     [eax+8], ecx
0x44A9BB: mov     ecx, ebp
0x44A9BD: call    sub_4D89A0
0x44A9C2: test    edi, edi
0x44A9C4: jz      short loc_44A9FC
0x44A9C6: fld     dword ptr [esi]
0x44A9C8: fstp    [esp+4+arg_44]
0x44A9CC: fld     [esp+4+arg_44]
0x44A9D0: fistp   dword ptr [esp+4+a2]
0x44A9D4: mov     eax, dword ptr [esp+4+a2]
0x44A9D8: fld     dword ptr [esi+4]
0x44A9DB: fstp    [esp+4+arg_44]
0x44A9DF: sar     eax, 0Ch
0x44A9E2: fld     [esp+4+arg_44]
0x44A9E6: fistp   dword ptr [esp+4+a2]
0x44A9EA: mov     ecx, dword ptr [esp+4+a2]
0x44A9EE: sar     ecx, 0Ch
0x44A9F1: push    ecx; signed int
0x44A9F2: push    eax; signed int
0x44A9F3: mov     ecx, edi; this
0x44A9F5: call    TESWorldSpace__GetCellAtCellCoord
0x44A9FA: mov     ebx, eax
0x44A9FC: test    ebx, ebx
0x44A9FE: push    0; a2
0x44AA00: jnz     short loc_44AA69
0x44AA02: mov     edx, [ebp+0]
0x44AA05: mov     eax, [edx+150h]
0x44AA0B: mov     ecx, ebp
0x44AA0D: call    eax
0x44AA0F: push    1; a2
0x44AA11: mov     ecx, ebp; this
0x44AA13: call    TESObjectREFR_SetPersistance
0x44AA18: push    ebp; a1
0x44AA19: mov     ecx, edi
0x44AA1B: call    TESWorldspace_Boh?
0x44AA20: mov     ecx, ebp; this
0x44AA22: call    TESObjectREFR_GetContainer
0x44AA27: test    eax, eax
0x44AA29: jz      loc_44ABBF
0x44AA2F: push    eax
0x44AA30: push    ebp; a1
0x44AA31: call    ContainerExtraData_GetContainerExtraDataForRef
0x44AA36: mov     esi, eax
0x44AA38: add     esp, 8
0x44AA3B: mov     ecx, esi
0x44AA3D: call    ContainerExtraData_EvaluateOwnerLeveledItems
0x44AA42: mov     ecx, esi
0x44AA44: call    ExtraContainerChanges_RunScripts
0x44AA49: mov     esi, [esi]
0x44AA4B: cmp     [esi+4], ebx
0x44AA4E: jnz     loc_44ABBF
0x44AA54: cmp     [esi], ebx
0x44AA56: jnz     loc_44ABBF
0x44AA5C: lea     ecx, [ebp+44h]
0x44AA5F: call    ExtraDataList_RemoveContainerExtraData
0x44AA64: jmp     loc_44ABBF
0x44AA69: mov     ecx, ds:0B333A0h
0x44AA6F: push    ebx; a1
0x44AA70: call    TESObjectCELL_IsProcessLevel?LowHigh
0x44AA75: test    al, al
0x44AA77: jz      short loc_44AAE5
0x44AA79: mov     eax, [esp+4+arg_40]
0x44AA7D: cmp     eax, ds:0B35EA4h
0x44AA83: jz      short loc_44AAA5
0x44AA85: cmp     eax, ds:0B35EB4h
0x44AA8B: jz      short loc_44AAA5
0x44AA8D: cmp     eax, ds:0B35EACh
0x44AA93: jz      short loc_44AAA5
0x44AA95: cmp     eax, ds:0B35EB0h
0x44AA9B: jz      short loc_44AAA5
0x44AA9D: cmp     eax, ds:0B35EA8h
0x44AAA3: jnz     short loc_44AAE5
0x44AAA5: push    0DCh ; 'Ü'; Size
0x44AAAA: call    FormHeapAlloc
0x44AAAF: add     esp, 4
0x44AAB2: mov     [esp+4+arg_40], eax
0x44AAB6: test    eax, eax
0x44AAB8: mov     [esp+4+arg_38], 3
0x44AAC0: jz      short loc_44AACD
0x44AAC2: push    0
0x44AAC4: mov     ecx, eax; this
0x44AAC6: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x44AACB: jmp     short loc_44AACF
0x44AACD: xor     eax, eax
0x44AACF: mov     edx, [ebp+0]
0x44AAD2: push    eax
0x44AAD3: mov     eax, [edx+150h]
0x44AAD9: mov     ecx, ebp
0x44AADB: mov     [esp+8+arg_38], 0FFFFFFFFh
0x44AAE3: call    eax
0x44AAE5: mov     ecx, ebp; this
0x44AAE7: call    TESObjectREFR_GetContainer
0x44AAEC: test    eax, eax
0x44AAEE: jz      short loc_44AB1F
0x44AAF0: push    eax
0x44AAF1: push    ebp; a1
0x44AAF2: call    ContainerExtraData_GetContainerExtraDataForRef
0x44AAF7: mov     esi, eax
0x44AAF9: add     esp, 8
0x44AAFC: mov     ecx, esi
0x44AAFE: call    ContainerExtraData_EvaluateOwnerLeveledItems
0x44AB03: mov     ecx, esi
0x44AB05: call    ExtraContainerChanges_RunScripts
0x44AB0A: mov     esi, [esi]
0x44AB0C: cmp     dword ptr [esi+4], 0
0x44AB10: jnz     short loc_44AB1F
0x44AB12: cmp     dword ptr [esi], 0
0x44AB15: jnz     short loc_44AB1F
0x44AB17: lea     ecx, [ebp+44h]
0x44AB1A: call    ExtraDataList_RemoveContainerExtraData
0x44AB1F: push    1
0x44AB21: mov     ecx, ebp
0x44AB23: call    sub_4D6F00
0x44AB28: push    ebp; Concurrency::details::SchedulerBase *
0x44AB29: mov     ecx, ebx
0x44AB2B: call    sub_4D35D0
0x44AB30: mov     ecx, dword ptr [esp+8+a2]
0x44AB34: push    ecx; a2
0x44AB35: mov     ecx, ebp; this
0x44AB37: call    TESObjectREFR_SetPersistance
0x44AB3C: mov     edx, [ebp+0]
0x44AB3F: mov     eax, [edx+154h]
0x44AB45: mov     ecx, ebp
0x44AB47: call    eax
0x44AB49: mov     ebx, eax
0x44AB4B: test    ebx, ebx
0x44AB4D: jz      short loc_44ABBF
0x44AB4F: mov     edx, [ebp+0]
0x44AB52: mov     eax, [edx+174h]
0x44AB58: mov     ecx, ebp
0x44AB5A: call    eax
0x44AB5C: mov     ecx, [eax]
0x44AB5E: mov     [ebx+54h], ecx
0x44AB61: mov     edx, [eax+4]
0x44AB64: mov     [ebx+58h], edx
0x44AB67: mov     eax, [eax+8]
0x44AB6A: lea     ecx, [esp+8+arg_8]
0x44AB6E: push    ecx
0x44AB6F: mov     ecx, ebp
0x44AB71: mov     [ebx+5Ch], eax
0x44AB74: call    sub_4D7AF0
0x44AB79: mov     esi, eax
0x44AB7B: push    1
0x44AB7D: lea     edi, [ebx+30h]
0x44AB80: mov     ecx, 9
0x44AB85: push    ebx
0x44AB86: rep movsd
0x44AB88: call    sub_897A20
0x44AB8D: add     esp, 8
0x44AB90: push    ebx
0x44AB91: push    0
0x44AB93: call    GetShadowSceneNode
0x44AB98: add     esp, 4
0x44AB9B: mov     ecx, eax
0x44AB9D: call    sub_7C5D00
0x44ABA2: mov     ecx, ebx; this
0x44ABA4: call    NiAVObject_InitializePropertyState
0x44ABA9: mov     ecx, ebx
0x44ABAB: call    NiNode_UpdateDynamicEffectState
0x44ABB0: fldz
0x44ABB2: push    0; a3
0x44ABB4: push    ecx
0x44ABB5: mov     ecx, ebx; this
0x44ABB7: fstp    [esp+10h+var_10]; a2
0x44ABBA: call    NiAVObject_UpdateNiAVObject
0x44ABBF: push    0; int
0x44ABC1: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x44ABC6: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x44ABCB: push    0; int
0x44ABCD: push    ebp; void *
0x44ABCE: call    OblivionDynamicCast
0x44ABD3: mov     esi, eax
0x44ABD5: add     esp, 14h
0x44ABD8: test    esi, esi
0x44ABDA: jz      short loc_44AC05
0x44ABDC: mov     ecx, esi
0x44ABDE: call    sub_5E0260
0x44ABE3: test    al, al
0x44ABE5: jnz     short loc_44ABF3
0x44ABE7: mov     edx, [esi]
0x44ABE9: mov     eax, [edx+37Ch]
0x44ABEF: mov     ecx, esi
0x44ABF1: call    eax
0x44ABF3: cmp     [esp+8+arg_50], 0
0x44ABF8: mov     eax, ebp
0x44ABFA: jnz     short loc_44AC07
0x44ABFC: and     dword ptr [esi+8], 0FFDFFFFFh
0x44AC03: jmp     short loc_44AC07
0x44AC05: mov     eax, ebp
0x44AC07: mov     ecx, [esp+8+arg_2C]
0x44AC0B: mov     large fs:0, ecx
0x44AC12: pop     ecx
0x44AC13: pop     edi
0x44AC14: pop     esi
0x44AC15: pop     ebp
0x44AC16: pop     ebx
0x44AC17: add     esp, 30h
0x44AC1A: retn    18h
