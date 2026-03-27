0x4535A0: mov     eax, [esp+arg_4]
0x4535A4: sub     esp, 18h
0x4535A7: push    ebx
0x4535A8: push    esi
0x4535A9: push    edi
0x4535AA: mov     edi, [esp+24h+arg_0]
0x4535AE: push    eax
0x4535AF: push    edi
0x4535B0: call    sub_453530
0x4535B5: push    0; int
0x4535B7: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x4535BC: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4535C1: push    0; int
0x4535C3: push    edi; void *
0x4535C4: mov     ebx, eax
0x4535C6: call    OblivionDynamicCast
0x4535CB: push    0; int
0x4535CD: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x4535D2: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4535D7: push    0; int
0x4535D9: push    edi; void *
0x4535DA: mov     esi, eax
0x4535DC: call    OblivionDynamicCast
0x4535E1: mov     edi, eax
0x4535E3: add     esp, 28h
0x4535E6: test    edi, edi
0x4535E8: jz      loc_453681
0x4535EE: test    ebx, 10000000h
0x4535F4: jz      short loc_453607
0x4535F6: mov     ecx, edi
0x4535F8: call    sub_4CCED0
0x4535FD: test    eax, eax
0x4535FF: jnz     short loc_453607
0x453601: and     ebx, 0EFFFFFFFh
0x453607: test    ebx, 1000000h
0x45360D: jz      short loc_453620
0x45360F: mov     ecx, edi
0x453611: call    sub_4AF170
0x453616: test    eax, eax
0x453618: jnz     short loc_453620
0x45361A: and     ebx, 0FEFFFFFFh
0x453620: mov     ecx, edi; this
0x453622: call    TESObjectCELL_IsInterior
0x453627: test    al, al
0x453629: jnz     loc_4538FB
0x45362F: mov     ecx, edi; this
0x453631: and     ebx, 0F9FFFFFFh
0x453637: call    TESObjectCELL_GetXCoordinate
0x45363C: mov     ecx, edi; this
0x45363E: mov     esi, eax
0x453640: call    TESObjectCELL_GetYCoordinate
0x453645: add     esi, 80h ; '€'
0x45364B: cmp     esi, 0FFh
0x453651: ja      short loc_453670
0x453653: add     eax, 80h ; '€'
0x453658: cmp     eax, 0FFh
0x45365D: ja      short loc_453670
0x45365F: pop     edi
0x453660: or      ebx, 4000000h
0x453666: pop     esi
0x453667: mov     eax, ebx
0x453669: pop     ebx
0x45366A: add     esp, 18h
0x45366D: retn    8
0x453670: pop     edi
0x453671: or      ebx, 2000000h
0x453677: pop     esi
0x453678: mov     eax, ebx
0x45367A: pop     ebx
0x45367B: add     esp, 18h
0x45367E: retn    8
0x453681: test    esi, esi
0x453683: jz      loc_4538FB
0x453689: and     ebx, 0FFFFF7FFh
0x45368F: test    ebx, 8000000h
0x453695: jz      short loc_4536AD
0x453697: lea     ecx, [esi+44h]; this
0x45369A: test    ecx, ecx
0x45369C: jz      short loc_4536A7
0x45369E: call    ExtraDataList_GetContainerChanges
0x4536A3: test    eax, eax
0x4536A5: jnz     short loc_4536AD
0x4536A7: and     ebx, 0F7FFFFFFh
0x4536AD: push    0; int
0x4536AF: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x4536B4: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x4536B9: push    0; int
0x4536BB: push    esi; void *
0x4536BC: call    OblivionDynamicCast
0x4536C1: mov     edi, eax
0x4536C3: add     esp, 14h
0x4536C6: test    edi, edi
0x4536C8: jz      loc_453792
0x4536CE: test    ebx, 80000h
0x4536D4: mov     ecx, [edi+58h]
0x4536D7: jz      short loc_4536F3
0x4536D9: test    ecx, ecx
0x4536DB: jz      short loc_4536EB
0x4536DD: mov     edx, [ecx]
0x4536DF: mov     eax, [edx+174h]
0x4536E5: call    eax
0x4536E7: test    eax, eax
0x4536E9: jnz     short loc_45370B
0x4536EB: and     ebx, 0FFF7FFFFh
0x4536F1: jmp     short loc_45370B
0x4536F3: test    ecx, ecx
0x4536F5: jz      short loc_45370B
0x4536F7: mov     edx, [ecx]
0x4536F9: mov     eax, [edx+174h]
0x4536FF: call    eax
0x453701: test    eax, eax
0x453703: jz      short loc_45370B
0x453705: or      ebx, 80000h
0x45370B: mov     eax, [edi+58h]
0x45370E: and     ebx, 0FFFCFFFFh
0x453714: test    eax, eax
0x453716: jz      short loc_453729
0x453718: mov     eax, [eax+8]
0x45371B: test    eax, eax
0x45371D: jz      short loc_453729
0x45371F: push    eax
0x453720: mov     ecx, edi
0x453722: call    sub_5E8D90
0x453727: or      ebx, eax
0x453729: test    ebx, 20000h
0x45372F: jz      short loc_45376C
0x453731: push    0; int
0x453733: push    offset ??_R0?AVDialoguePackage@@@8; struct TypeDescriptor *
0x453738: push    offset ??_R0?AVTESPackage@@@8; struct _s_RTTICompleteObjectLocator *
0x45373D: push    0; int
0x45373F: mov     ecx, edi
0x453741: call    sub_5E0380
0x453746: push    eax; void *
0x453747: call    OblivionDynamicCast
0x45374C: add     esp, 14h
0x45374F: test    eax, eax
0x453751: jz      short loc_45376C
0x453753: mov     ecx, eax
0x453755: call    NiDX9TextureData__GetLevels
0x45375A: cmp     eax, edi
0x45375C: jz      short loc_453766
0x45375E: or      ebx, 10000h
0x453764: jmp     short loc_45376C
0x453766: and     ebx, 0FFFEFFFFh
0x45376C: push    ebx
0x45376D: mov     ecx, edi
0x45376F: call    sub_5F0310
0x453774: test    al, al
0x453776: jz      short loc_45377D
0x453778: or      ebx, 8
0x45377B: jmp     short loc_453792
0x45377D: mov     edx, [edi]
0x45377F: mov     eax, [edx+198h]
0x453785: push    0
0x453787: mov     ecx, edi
0x453789: call    eax
0x45378B: test    al, al
0x45378D: jnz     short loc_453792
0x45378F: and     ebx, 0FFFFFFF7h
0x453792: and     ebx, 7FFFFFFFh
0x453798: test    bl, 2
0x45379B: jnz     loc_4538DC
0x4537A1: test    bl, 0Ch
0x4537A4: jz      loc_4538DC
0x4537AA: mov     ecx, esi; this
0x4537AC: call    TESObjectREFR_IsPersistent?
0x4537B1: test    al, al
0x4537B3: jnz     loc_4538DC
0x4537B9: cmp     esi, ds:0B333C4h
0x4537BF: jz      loc_4538DC
0x4537C5: mov     edx, [esi]
0x4537C7: mov     eax, [edx+190h]
0x4537CD: push    ebp; ArgList
0x4537CE: mov     ecx, esi
0x4537D0: xor     edi, edi
0x4537D2: call    eax
0x4537D4: test    al, al
0x4537D6: jz      short loc_4537F4
0x4537D8: mov     ecx, esi
0x4537DA: call    sub_5E1F60
0x4537DF: mov     ecx, esi
0x4537E1: mov     ebp, eax
0x4537E3: call    sub_5E1F40
0x4537E8: mov     edi, eax
0x4537EA: test    edi, edi
0x4537EC: jnz     short loc_45385E
0x4537EE: test    ebp, ebp
0x4537F0: jnz     short loc_45385E
0x4537F2: mov     edi, esi
0x4537F4: mov     ecx, esi; this
0x4537F6: call    TESObjectREFR_GetParentCell
0x4537FB: test    eax, eax
0x4537FD: jz      loc_4538DB
0x453803: mov     ecx, esi; this
0x453805: call    TESObjectREFR_GetParentCell
0x45380A: mov     ecx, eax; this
0x45380C: call    TESObjectCELL_IsInterior
0x453811: test    al, al
0x453813: jnz     loc_4538DB
0x453819: test    edi, edi
0x45381B: jz      short loc_45382A
0x45381D: push    offset aActorDoesNotHa; "Actor does not have an editor location."...
0x453822: call    PrintError
0x453827: add     esp, 4
0x45382A: mov     edx, [esi]
0x45382C: mov     edx, [edx+0F4h]
0x453832: lea     eax, [esp+28h+var_18]
0x453836: push    eax
0x453837: mov     ecx, esi
0x453839: call    edx
0x45383B: fld     [esp+28h+var_18]
0x45383F: fistp   [esp+28h+arg_0]
0x453843: fld     [esp+28h+var_14]
0x453847: fistp   [esp+28h+arg_4]
0x45384B: mov     ecx, esi; this
0x45384D: call    TESObjectREFR_GetWorldSpace
0x453852: mov     ecx, [esp+28h+arg_4]
0x453856: sar     ecx, 0Ch
0x453859: push    ecx
0x45385A: mov     ecx, eax
0x45385C: jmp     short loc_4538BB
0x45385E: mov     eax, [esi]
0x453860: mov     edx, [eax+0F4h]
0x453866: lea     ecx, [esp+28h+var_C]
0x45386A: push    ecx
0x45386B: mov     ecx, esi
0x45386D: call    edx
0x45386F: test    ebp, ebp
0x453871: mov     ecx, [eax]
0x453873: mov     edx, [eax+4]
0x453876: mov     eax, [eax+8]
0x453879: mov     [esp+28h+var_18], ecx
0x45387D: mov     [esp+28h+var_14], edx
0x453881: mov     [esp+28h+var_10], eax
0x453885: jz      short loc_453892
0x453887: mov     ecx, esi; this
0x453889: call    TESObjectREFR_GetParentCell
0x45388E: cmp     ebp, eax
0x453890: jmp     short loc_4538D3
0x453892: test    edi, edi
0x453894: jz      short loc_4538DB
0x453896: mov     ecx, esi; this
0x453898: call    TESObjectREFR_GetWorldSpace
0x45389D: cmp     edi, eax
0x45389F: jnz     short loc_4538D5
0x4538A1: fld     [esp+28h+var_18]
0x4538A5: fistp   [esp+28h+arg_0]
0x4538A9: fld     [esp+28h+var_14]
0x4538AD: fistp   [esp+28h+arg_4]
0x4538B1: mov     ecx, [esp+28h+arg_4]
0x4538B5: sar     ecx, 0Ch
0x4538B8: push    ecx; signed int
0x4538B9: mov     ecx, edi; this
0x4538BB: mov     edx, [esp+2Ch+arg_0]
0x4538BF: sar     edx, 0Ch
0x4538C2: push    edx; signed int
0x4538C3: call    TESWorldSpace__GetCellAtCellCoord
0x4538C8: mov     ecx, esi; this
0x4538CA: mov     edi, eax
0x4538CC: call    TESObjectREFR_GetParentCell
0x4538D1: cmp     edi, eax
0x4538D3: jz      short loc_4538DB
0x4538D5: or      ebx, 80000000h
0x4538DB: pop     ebp
0x4538DC: mov     ecx, esi
0x4538DE: and     ebx, 0FF7FFFFFh
0x4538E4: call    sub_4D7F40
0x4538E9: test    al, al
0x4538EB: jz      short loc_4538FB
0x4538ED: cmp     esi, ds:0B333C4h
0x4538F3: jz      short loc_4538FB
0x4538F5: or      ebx, offset loc_800000
0x4538FB: pop     edi
0x4538FC: pop     esi
0x4538FD: mov     eax, ebx
0x4538FF: pop     ebx
0x453900: add     esp, 18h
0x453903: retn    8
