0x691570: push    0FFFFFFFFh
0x691572: push    offset BoundItemEffect_Link_SEH
0x691577: mov     eax, large fs:0
0x69157D: push    eax
0x69157E: sub     esp, 0Ch
0x691581: push    ebx
0x691582: push    ebp
0x691583: push    esi
0x691584: push    edi
0x691585: mov     eax, ds:0B30AACh
0x69158A: xor     eax, esp
0x69158C: push    eax
0x69158D: lea     eax, [esp+2Ch+var_C]
0x691591: mov     large fs:0, eax
0x691597: mov     ebx, ecx
0x691599: mov     eax, [esp+2Ch+arg_0]
0x69159D: push    eax
0x69159E: call    AssociatedItemEffect_Link
0x6915A3: mov     ecx, [ebx+20h]; this
0x6915A6: xor     ebp, ebp
0x6915A8: cmp     ecx, ebp
0x6915AA: jz      short loc_6915B9
0x6915AC: call    MagicTarget_GetParentActor
0x6915B1: mov     edi, eax
0x6915B3: mov     [esp+2Ch+arg_0], edi
0x6915B7: jmp     short loc_6915BF
0x6915B9: mov     [esp+2Ch+arg_0], ebp
0x6915BD: mov     edi, ebp
0x6915BF: cmp     byte ptr [ebx+84h], 0
0x6915C6: jz      loc_691710
0x6915CC: mov     eax, [ebx+3Ch]
0x6915CF: cmp     eax, ebp
0x6915D1: jz      short loc_691647
0x6915D3: mov     eax, [eax+8]
0x6915D6: push    ebp; int
0x6915D7: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x6915DC: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x6915E1: push    ebp; int
0x6915E2: push    eax; void *
0x6915E3: call    OblivionDynamicCast
0x6915E8: add     esp, 14h
0x6915EB: cmp     eax, ebp
0x6915ED: jz      short loc_691647
0x6915EF: movzx   ecx, word ptr [eax+38h]
0x6915F3: cmp     cx, 0FFFFh
0x6915F8: jnz     short loc_69160D
0x6915FA: mov     ecx, [eax+34h]
0x6915FD: lea     esi, [ecx+1]
0x691600: mov     dl, [ecx]
0x691602: add     ecx, 1
0x691605: test    dl, dl
0x691607: jnz     short loc_691600
0x691609: sub     ecx, esi
0x69160B: jmp     short loc_691610
0x69160D: movzx   ecx, cx
0x691610: cmp     ecx, ebp
0x691612: jbe     short loc_691647
0x691614: push    1
0x691616: push    1
0x691618: push    ebp
0x691619: lea     ecx, [eax+30h]
0x69161C: push    ebp
0x69161D: mov     byte ptr [ebx+86h], 1
0x691624: mov     edx, [ecx]
0x691626: mov     eax, [edx+14h]
0x691629: push    ebp
0x69162A: push    ebp
0x69162B: call    eax
0x69162D: push    eax
0x69162E: lea     ecx, [esp+48h+var_18]
0x691632: push    ecx
0x691633: mov     ecx, ds:0B33A1Ch
0x691639: call    sub_43B420
0x69163E: lea     ecx, [esp+2Ch+var_18]; void *
0x691642: call    sub_4BDDC0
0x691647: cmp     edi, ebp
0x691649: jz      short loc_691679
0x69164B: mov     edx, [edi]
0x69164D: mov     eax, [edx+170h]
0x691653: push    ebp; int
0x691654: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x691659: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x69165E: push    ebp; int
0x69165F: mov     ecx, edi
0x691661: call    eax
0x691663: push    eax; void *
0x691664: call    OblivionDynamicCast
0x691669: add     esp, 14h
0x69166C: cmp     eax, ebp
0x69166E: jz      short loc_691679
0x691670: mov     ecx, eax
0x691672: call    TESActorBase_IsFemale
0x691677: mov     ebp, eax
0x691679: lea     edi, [ebx+40h]
0x69167C: mov     [esp+2Ch+var_18], 10h
0x691684: mov     eax, [edi]
0x691686: test    eax, eax
0x691688: jz      short loc_6916FE
0x69168A: mov     eax, [eax+8]
0x69168D: test    eax, eax
0x69168F: jz      short loc_6916FE
0x691691: push    0; int
0x691693: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x691698: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x69169D: push    0; int
0x69169F: push    eax; void *
0x6916A0: call    OblivionDynamicCast
0x6916A5: add     esp, 14h
0x6916A8: test    eax, eax
0x6916AA: jz      short loc_6916FE
0x6916AC: push    1
0x6916AE: push    1
0x6916B0: push    0
0x6916B2: push    0
0x6916B4: push    0
0x6916B6: push    0
0x6916B8: push    ebp
0x6916B9: mov     ecx, eax
0x6916BB: mov     byte ptr [ebx+87h], 1
0x6916C2: call    TESBipedModelForm_GetModelPath
0x6916C7: push    eax
0x6916C8: lea     ecx, [esp+48h+var_14]
0x6916CC: push    ecx
0x6916CD: mov     ecx, ds:0B33A1Ch
0x6916D3: call    sub_43B420
0x6916D8: mov     eax, [esp+2Ch+var_14]
0x6916DC: test    eax, eax
0x6916DE: jz      short loc_6916FE
0x6916E0: mov     esi, eax
0x6916E2: add     eax, 8
0x6916E5: push    eax; lpAddend
0x6916E6: call    dword ptr ds:0A2807Ch
0x6916EC: test    eax, eax
0x6916EE: jnz     short loc_6916FE
0x6916F0: test    esi, esi
0x6916F2: jz      short loc_6916FE
0x6916F4: mov     edx, [esi]
0x6916F6: mov     eax, [edx]
0x6916F8: push    1
0x6916FA: mov     ecx, esi
0x6916FC: call    eax
0x6916FE: add     edi, 4
0x691701: sub     [esp+2Ch+var_18], 1
0x691706: jnz     loc_691684
0x69170C: mov     edi, [esp+2Ch+arg_0]
0x691710: mov     ecx, [ebx+3Ch]
0x691713: test    ecx, ecx
0x691715: jz      short loc_691791
0x691717: call    sub_485BC0
0x69171C: mov     ecx, ds:0B33B00h
0x691722: cmp     byte ptr [ecx+7Ch], 61h ; 'a'
0x691726: jnb     short loc_691779
0x691728: push    0Ch; Size
0x69172A: call    FormHeapAlloc
0x69172F: add     esp, 4
0x691732: mov     [esp+2Ch+var_18], eax
0x691736: test    eax, eax
0x691738: mov     [esp+2Ch+var_4], 0
0x691740: jz      short loc_691751
0x691742: mov     edx, [ebx+3Ch]
0x691745: push    edx
0x691746: mov     ecx, eax
0x691748: call    sub_4844A0
0x69174D: mov     edi, eax
0x69174F: jmp     short loc_691753
0x691751: xor     edi, edi
0x691753: mov     esi, [ebx+3Ch]
0x691756: test    esi, esi
0x691758: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x691760: jz      short loc_691772
0x691762: mov     ecx, esi
0x691764: call    ContainerEntryExtraData_DestroyDataTable
0x691769: push    esi
0x69176A: call    FormHeapFree
0x69176F: add     esp, 4
0x691772: mov     [ebx+3Ch], edi
0x691775: mov     edi, [esp+2Ch+arg_0]
0x691779: mov     eax, [ebx+3Ch]
0x69177C: mov     eax, [eax+8]
0x69177F: push    0
0x691781: push    0
0x691783: push    0
0x691785: push    0
0x691787: push    1
0x691789: push    eax
0x69178A: mov     ecx, edi
0x69178C: call    Actor_UnequipItem
0x691791: lea     esi, [ebx+40h]
0x691794: mov     [esp+2Ch+var_18], 10h
0x69179C: lea     esp, [esp+0]
0x6917A0: mov     ecx, [esi]
0x6917A2: test    ecx, ecx
0x6917A4: jz      short loc_69181C
0x6917A6: call    sub_485BC0
0x6917AB: mov     ecx, ds:0B33B00h
0x6917B1: cmp     byte ptr [ecx+7Ch], 61h ; 'a'
0x6917B5: jnb     short loc_691805
0x6917B7: push    0Ch; Size
0x6917B9: call    FormHeapAlloc
0x6917BE: add     esp, 4
0x6917C1: mov     [esp+2Ch+var_10], eax
0x6917C5: test    eax, eax
0x6917C7: mov     [esp+2Ch+var_4], 1
0x6917CF: jz      short loc_6917DF
0x6917D1: mov     edx, [esi]
0x6917D3: push    edx
0x6917D4: mov     ecx, eax
0x6917D6: call    sub_4844A0
0x6917DB: mov     ebp, eax
0x6917DD: jmp     short loc_6917E1
0x6917DF: xor     ebp, ebp
0x6917E1: mov     edi, [esi]
0x6917E3: test    edi, edi
0x6917E5: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x6917ED: jz      short loc_6917FF
0x6917EF: mov     ecx, edi
0x6917F1: call    ContainerEntryExtraData_DestroyDataTable
0x6917F6: push    edi
0x6917F7: call    FormHeapFree
0x6917FC: add     esp, 4
0x6917FF: mov     edi, [esp+2Ch+arg_0]
0x691803: mov     [esi], ebp
0x691805: mov     eax, [esi]
0x691807: mov     ecx, [eax+8]
0x69180A: push    0
0x69180C: push    0
0x69180E: push    0
0x691810: push    0
0x691812: push    1
0x691814: push    ecx
0x691815: mov     ecx, edi
0x691817: call    Actor_UnequipItem
0x69181C: add     esi, 4
0x69181F: sub     [esp+2Ch+var_18], 1
0x691824: jnz     loc_6917A0
0x69182A: cmp     byte ptr [ebx+84h], 0
0x691831: jz      short loc_69188D
0x691833: lea     ecx, [edi+44h]; this
0x691836: call    ExtraDataList_GetContainerChanges
0x69183B: push    0; int
0x69183D: push    offset ??_R0?AVTESBoundObject@@@8; struct TypeDescriptor *
0x691842: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x691847: mov     edi, eax
0x691849: mov     eax, [ebx+38h]
0x69184C: push    0; int
0x69184E: push    eax; void *
0x69184F: call    OblivionDynamicCast
0x691854: add     esp, 14h
0x691857: test    edi, edi
0x691859: mov     esi, eax
0x69185B: jz      short loc_69188D
0x69185D: push    esi; a2
0x69185E: mov     ecx, edi; this
0x691860: call    ContainerExtraData_GetItemCount
0x691865: test    eax, eax
0x691867: jnz     short loc_69188D
0x691869: mov     edi, [esp+2Ch+arg_0]
0x69186D: mov     edx, [edi]
0x69186F: push    1
0x691871: push    eax
0x691872: mov     eax, [edx+114h]
0x691878: push    esi
0x691879: mov     ecx, edi
0x69187B: call    eax
0x69187D: push    0
0x69187F: push    1
0x691881: push    0
0x691883: push    1
0x691885: push    esi
0x691886: mov     ecx, edi
0x691888: call    Actor_EquipItem
0x69188D: mov     ecx, dword ptr [esp+2Ch+var_C]
0x691891: mov     large fs:0, ecx
0x691898: pop     ecx
0x691899: pop     edi
0x69189A: pop     esi
0x69189B: pop     ebp
0x69189C: pop     ebx
0x69189D: add     esp, 18h
0x6918A0: retn    4
