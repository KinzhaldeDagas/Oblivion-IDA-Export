0x4114E0: push    0FFFFFFFFh
0x4114E2: push    offset ??0SceneGraph@@QAE@XZ_SEH
0x4114E7: mov     eax, large fs:0
0x4114ED: push    eax
0x4114EE: sub     esp, 38h
0x4114F1: push    ebx
0x4114F2: push    ebp
0x4114F3: push    esi
0x4114F4: push    edi
0x4114F5: mov     eax, ___security_cookie
0x4114FA: xor     eax, esp
0x4114FC: push    eax
0x4114FD: lea     eax, [esp+58h+var_C]
0x411501: mov     large fs:0, eax
0x411507: mov     ebp, ecx
0x411509: mov     [esp+58h+var_44], ebp
0x41150D: xor     esi, esi
0x41150F: push    esi
0x411510: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x411515: lea     ebx, [ebp+0DCh]
0x41151B: mov     dword ptr [ebp+0], offset ??_7SceneGraph@@6B@; const SceneGraph::`vftable'
0x411522: mov     [esp+58h+var_4], esi
0x411526: mov     [ebx], esi
0x411528: mov     eax, [esp+58h+a2]
0x41152C: cmp     eax, esi
0x41152E: mov     byte ptr [esp+58h+var_4], 1
0x411533: jz      short loc_41153A
0x411535: mov     eax, [eax+8]
0x411538: jmp     short loc_41153F
0x41153A: mov     eax, offset aCreatenewcamer; "CreateNewCamera"
0x41153F: mov     edi, [esp+58h+ArgList]
0x411543: push    eax
0x411544: push    edi; ArgList
0x411545: push    offset aScenegraphSCre; "SceneGraph '%s' Created. Camera name '%"...
0x41154A: call    sub_40FEC0
0x41154F: mov     al, byte ptr [esp+64h+arg_4]
0x411553: push    90h; Size
0x411558: mov     [ebp+0E8h], al
0x41155E: call    FormHeapAlloc
0x411563: add     esp, 10h
0x411566: mov     [esp+58h+arg_4], eax
0x41156A: cmp     eax, esi
0x41156C: mov     byte ptr [esp+58h+var_4], 2
0x411571: jz      short loc_41157D
0x411573: push    esi
0x411574: mov     ecx, eax
0x411576: call    NiCullingProcess_NiCullingProcess
0x41157B: jmp     short loc_41157F
0x41157D: xor     eax, eax
0x41157F: mov     ecx, offset stru_B34448; this
0x411584: mov     byte ptr [esp+58h+var_4], 1
0x411589: mov     [ebp+0E4h], eax
0x41158F: mov     [ebp+0E0h], esi
0x411595: call    sub_7616D0
0x41159A: push    edi
0x41159B: mov     esi, eax
0x41159D: push    offset aSrootNode; "%sRoot Node"
0x4115A2: push    esi
0x4115A3: call    __sprintf
0x4115A8: add     esp, 0Ch
0x4115AB: push    esi; Src
0x4115AC: mov     ecx, ebp
0x4115AE: call    NiObjectNET_SetName
0x4115B3: push    0DCh ; 'Ü'; Size
0x4115B8: call    FormHeapAlloc
0x4115BD: add     esp, 4
0x4115C0: mov     [esp+58h+arg_4], eax
0x4115C4: test    eax, eax
0x4115C6: mov     byte ptr [esp+58h+var_4], 3
0x4115CB: jz      short loc_4115DA
0x4115CD: push    0
0x4115CF: mov     ecx, eax; this
0x4115D1: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x4115D6: mov     edi, eax
0x4115D8: jmp     short loc_4115DC
0x4115DA: xor     edi, edi
0x4115DC: mov     ecx, [esp+58h+ArgList]
0x4115E0: push    ecx
0x4115E1: push    offset aSrootCameranod; "%sRoot CameraNode"
0x4115E6: push    esi
0x4115E7: mov     byte ptr [esp+64h+var_4], 1
0x4115EC: call    __sprintf
0x4115F1: add     esp, 0Ch
0x4115F4: push    esi; Src
0x4115F5: mov     ecx, edi
0x4115F7: call    NiObjectNET_SetName
0x4115FC: push    1
0x4115FE: push    edi
0x4115FF: mov     ecx, ebp
0x411601: call    NiNode__AddObject
0x411606: mov     eax, [esp+58h+a2]
0x41160A: test    eax, eax
0x41160C: jz      short loc_41161B
0x41160E: push    eax; a2
0x41160F: mov     ecx, ebx; this
0x411611: call    NiSmartPointer_Set??
0x411616: jmp     loc_411708
0x41161B: push    124h; Size
0x411620: call    FormHeapAlloc
0x411625: add     esp, 4
0x411628: mov     [esp+58h+arg_4], eax
0x41162C: test    eax, eax
0x41162E: mov     byte ptr [esp+58h+var_4], 4
0x411633: jz      short loc_41163E
0x411635: mov     ecx, eax
0x411637: call    sub_70D590
0x41163C: jmp     short loc_411640
0x41163E: xor     eax, eax
0x411640: push    eax; a2
0x411641: mov     ecx, ebx; this
0x411643: mov     byte ptr [esp+5Ch+var_4], 1
0x411648: call    NiSmartPointer_Set??
0x41164D: mov     edx, [esp+58h+ArgList]
0x411651: push    edx
0x411652: push    offset aSrootCamera; "%sRoot Camera"
0x411657: push    esi
0x411658: call    __sprintf
0x41165D: mov     ecx, [ebx]
0x41165F: add     esp, 0Ch
0x411662: push    esi; Src
0x411663: call    NiObjectNET_SetName
0x411668: fldz
0x41166A: mov     eax, [ebx]
0x41166C: fst     [esp+58h+var_40]
0x411670: fld1
0x411672: mov     ecx, [esp+58h+var_40]
0x411676: fst     [esp+58h+var_3C]
0x41167A: mov     [eax+110h], ecx
0x411680: fst     [esp+58h+var_38]
0x411684: add     eax, 110h
0x411689: mov     edx, [esp+58h+var_3C]
0x41168D: fxch    st(1)
0x41168F: mov     ecx, [esp+58h+var_38]
0x411693: fst     [esp+58h+var_34]
0x411697: mov     [eax+4], edx
0x41169A: fst     [esp+58h+var_30]
0x41169E: mov     edx, [esp+58h+var_34]
0x4116A2: fst     [esp+58h+var_2C]
0x4116A6: mov     [eax+8], ecx
0x4116A9: fst     [esp+58h+var_20]
0x4116AD: fst     [esp+58h+var_1C]
0x4116B1: mov     [eax+0Ch], edx
0x4116B4: mov     edi, [ebx]
0x4116B6: fst     [esp+58h+var_18]
0x4116BA: fstp    [esp+58h+var_10]
0x4116BE: add     edi, 30h ; '0'
0x4116C1: mov     ecx, 9
0x4116C6: lea     esi, [esp+58h+var_30]
0x4116CA: fst     [esp+58h+var_28]
0x4116CE: fst     [esp+58h+var_24]
0x4116D2: fst     [esp+58h+var_14]
0x4116D6: rep movsd
0x4116D8: mov     eax, [ebx]
0x4116DA: mov     ecx, ebp; this
0x4116DC: fstp    dword ptr [eax+108h]
0x4116E2: mov     ebx, [ebx]
0x4116E4: call    GetFarPlane
0x4116E9: fdiv    NearDistance
0x4116EF: push    1; a3
0x4116F1: push    ecx
0x4116F2: mov     ecx, ebp; this
0x4116F4: fstp    dword ptr [ebx+10Ch]
0x4116FA: fld     g_DefaulFOV
0x411700: fstp    [esp+60h+var_60]; a2
0x411703: call    SetCameraFOV_0
0x411708: mov     ecx, ebp
0x41170A: call    sub_411100
0x41170F: mov     eax, ebp
0x411711: mov     ecx, [esp+58h+var_C]
0x411715: mov     large fs:0, ecx
0x41171C: pop     ecx
0x41171D: pop     edi
0x41171E: pop     esi
0x41171F: pop     ebp
0x411720: pop     ebx
0x411721: add     esp, 44h
0x411724: retn    0Ch
