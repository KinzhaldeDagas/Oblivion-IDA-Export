0x4DF1A0: sub     esp, 28h
0x4DF1A3: push    ebx
0x4DF1A4: push    ebp
0x4DF1A5: push    esi
0x4DF1A6: mov     esi, [esp+34h+a2]
0x4DF1AA: push    0; int
0x4DF1AC: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x4DF1B1: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4DF1B6: push    0; int
0x4DF1B8: push    esi; void *
0x4DF1B9: mov     ebp, ecx
0x4DF1BB: call    OblivionDynamicCast
0x4DF1C0: mov     ebx, eax
0x4DF1C2: add     esp, 14h
0x4DF1C5: test    ebx, ebx
0x4DF1C7: mov     [esp+34h+var_28], ebx
0x4DF1CB: jz      loc_4DF697
0x4DF1D1: mov     ecx, ebx; this
0x4DF1D3: call    TESObjectREFR_IsPersistent?
0x4DF1D8: mov     ecx, ebp
0x4DF1DA: push    eax
0x4DF1DB: call    TESObjectREFR_SetPersistance
0x4DF1E0: push    esi; a2
0x4DF1E1: mov     ecx, ebp; this
0x4DF1E3: call    TESForm_CopyAllComponentsFrom
0x4DF1E8: mov     eax, [ebp+0]
0x4DF1EB: mov     edx, [eax+170h]
0x4DF1F1: mov     ecx, ebp
0x4DF1F3: call    edx
0x4DF1F5: test    eax, eax
0x4DF1F7: jz      short loc_4DF227
0x4DF1F9: mov     eax, [ebx]
0x4DF1FB: mov     edx, [eax+170h]
0x4DF201: mov     ecx, ebx
0x4DF203: call    edx
0x4DF205: mov     esi, eax
0x4DF207: mov     eax, [ebp+0]
0x4DF20A: mov     edx, [eax+170h]
0x4DF210: mov     ecx, ebp
0x4DF212: call    edx
0x4DF214: cmp     eax, esi
0x4DF216: jz      short loc_4DF227
0x4DF218: mov     eax, [ebp+0]
0x4DF21B: mov     edx, [eax+150h]
0x4DF221: push    0
0x4DF223: mov     ecx, ebp
0x4DF225: call    edx
0x4DF227: fld     dword ptr [ebp+38h]
0x4DF22A: push    edi; ArgList
0x4DF22B: lea     edi, [ebp+1Ch]
0x4DF22E: lea     esi, [ebx+1Ch]
0x4DF231: mov     ecx, 7
0x4DF236: rep movsd
0x4DF238: fld     dword ptr [ebx+38h]
0x4DF23B: fucompp
0x4DF23D: fnstsw  ax
0x4DF23F: test    ah, 44h
0x4DF242: jnp     short loc_4DF255
0x4DF244: mov     eax, [ebp+0]
0x4DF247: mov     edx, [eax+190h]
0x4DF24D: mov     ecx, ebp
0x4DF24F: call    edx
0x4DF251: test    al, al
0x4DF253: jz      short loc_4DF280
0x4DF255: mov     eax, [ebp+0]
0x4DF258: mov     edx, [eax+170h]
0x4DF25E: mov     ecx, ebp
0x4DF260: call    edx
0x4DF262: cmp     byte ptr [eax+4], 22h ; '"'
0x4DF266: jnz     short loc_4DF28F
0x4DF268: lea     ecx, [ebx+44h]
0x4DF26B: call    ExtraDataList_GetExtraCount
0x4DF270: lea     ecx, [ebp+44h]
0x4DF273: mov     si, ax
0x4DF276: call    ExtraDataList_GetExtraCount
0x4DF27B: cmp     ax, si
0x4DF27E: jz      short loc_4DF28F
0x4DF280: mov     eax, [ebp+0]
0x4DF283: mov     edx, [eax+150h]
0x4DF289: push    0
0x4DF28B: mov     ecx, ebp
0x4DF28D: call    edx
0x4DF28F: mov     eax, [ebp+0]
0x4DF292: mov     edx, [eax+154h]
0x4DF298: mov     ecx, ebp
0x4DF29A: call    edx
0x4DF29C: test    eax, eax
0x4DF29E: jz      loc_4DF32A
0x4DF2A4: mov     eax, [ebp+0]
0x4DF2A7: mov     edx, [eax+174h]
0x4DF2AD: mov     ecx, ebp
0x4DF2AF: call    edx
0x4DF2B1: mov     esi, eax
0x4DF2B3: mov     eax, [ebp+0]
0x4DF2B6: mov     edx, [eax+154h]
0x4DF2BC: mov     ecx, ebp
0x4DF2BE: call    edx
0x4DF2C0: mov     ecx, [esi]
0x4DF2C2: mov     [eax+54h], ecx
0x4DF2C5: mov     edx, [esi+4]
0x4DF2C8: mov     [eax+58h], edx
0x4DF2CB: mov     ecx, [esi+8]
0x4DF2CE: lea     edx, [esp+38h+var_24]
0x4DF2D2: mov     [eax+5Ch], ecx
0x4DF2D5: push    edx
0x4DF2D6: mov     ecx, ebp
0x4DF2D8: call    sub_4D7AF0
0x4DF2DD: mov     esi, eax
0x4DF2DF: mov     eax, [ebp+0]
0x4DF2E2: mov     edx, [eax+154h]
0x4DF2E8: mov     ecx, ebp
0x4DF2EA: call    edx
0x4DF2EC: lea     edi, [eax+30h]
0x4DF2EF: mov     ecx, 9
0x4DF2F4: rep movsd
0x4DF2F6: mov     eax, [ebp+0]
0x4DF2F9: mov     edx, [eax+154h]
0x4DF2FF: push    1
0x4DF301: mov     ecx, ebp
0x4DF303: call    edx
0x4DF305: push    eax
0x4DF306: call    sub_897A20
0x4DF30B: mov     eax, [ebp+0]
0x4DF30E: fldz
0x4DF310: mov     edx, [eax+154h]
0x4DF316: add     esp, 8
0x4DF319: push    1; a3
0x4DF31B: push    ecx
0x4DF31C: mov     ecx, ebp
0x4DF31E: fstp    [esp+40h+var_40]; a2
0x4DF321: call    edx
0x4DF323: mov     ecx, eax; this
0x4DF325: call    NiAVObject_UpdateNiAVObject
0x4DF32A: mov     ecx, [ebx+40h]
0x4DF32D: test    ecx, ecx
0x4DF32F: jz      short loc_4DF357
0x4DF331: push    ebp; Concurrency::details::SchedulerBase *
0x4DF332: call    sub_4D35D0
0x4DF337: mov     eax, [ebp+0]
0x4DF33A: mov     edx, [eax+154h]
0x4DF340: mov     ecx, ebp
0x4DF342: call    edx
0x4DF344: test    eax, eax
0x4DF346: jnz     short loc_4DF364
0x4DF348: mov     ecx, ds:0B33A10h
0x4DF34E: push    5
0x4DF350: call    sub_434020
0x4DF355: jmp     short loc_4DF364
0x4DF357: mov     ecx, [ebp+40h]
0x4DF35A: test    ecx, ecx
0x4DF35C: jz      short loc_4DF364
0x4DF35E: push    ebp
0x4DF35F: call    sub_4CECD0
0x4DF364: lea     ecx, [ebp+44h]; this
0x4DF367: call    ExtraDataList_GetTeleport
0x4DF36C: mov     esi, eax
0x4DF36E: test    esi, esi
0x4DF370: jz      short loc_4DF3BA
0x4DF372: lea     ecx, [ebx+44h]; this
0x4DF375: call    ExtraDataList_GetTeleport
0x4DF37A: test    eax, eax
0x4DF37C: jz      short loc_4DF392
0x4DF37E: mov     ecx, eax
0x4DF380: call    sub_42B410
0x4DF385: mov     ecx, esi
0x4DF387: mov     edi, eax
0x4DF389: call    sub_42B410
0x4DF38E: cmp     edi, eax
0x4DF390: jz      short loc_4DF3BA
0x4DF392: mov     ecx, esi
0x4DF394: call    sub_42B410
0x4DF399: mov     edi, eax
0x4DF39B: lea     ecx, [edi+44h]
0x4DF39E: call    sub_41F5E0
0x4DF3A3: mov     eax, [edi]
0x4DF3A5: mov     edx, [eax+44h]
0x4DF3A8: push    100000h
0x4DF3AD: mov     ecx, edi
0x4DF3AF: call    edx
0x4DF3B1: push    0
0x4DF3B3: mov     ecx, esi
0x4DF3B5: call    TeleportData__SetLinkedDoor
0x4DF3BA: lea     eax, [ebx+44h]
0x4DF3BD: lea     edi, [ebp+44h]
0x4DF3C0: push    eax
0x4DF3C1: mov     ecx, edi
0x4DF3C3: call    BaseExtraList_Copy
0x4DF3C8: fld     dword ptr [ebx+38h]
0x4DF3CB: push    ecx
0x4DF3CC: mov     ecx, ebp
0x4DF3CE: fstp    [esp+3Ch+var_3C]; float
0x4DF3D1: call    sub_4DB520
0x4DF3D6: mov     edx, [ebx]
0x4DF3D8: mov     eax, [edx+154h]
0x4DF3DE: mov     ecx, ebx
0x4DF3E0: call    eax
0x4DF3E2: test    eax, eax
0x4DF3E4: jz      loc_4DF5C0
0x4DF3EA: mov     ecx, [ebp+8]
0x4DF3ED: shr     ecx, 0Eh
0x4DF3F0: test    cl, 1
0x4DF3F3: mov     bl, 1Eh
0x4DF3F5: jz      short loc_4DF41E
0x4DF3F7: mov     ecx, [ebp+1Ch]
0x4DF3FA: test    ecx, ecx
0x4DF3FC: jz      short loc_4DF41E
0x4DF3FE: cmp     [ecx+4], bl
0x4DF401: jnz     short loc_4DF41E
0x4DF403: mov     edx, [ecx]
0x4DF405: mov     eax, [edx+0ECh]
0x4DF40B: mov     esi, [ebp+0]
0x4DF40E: push    0
0x4DF410: push    ebp
0x4DF411: call    eax
0x4DF413: mov     edx, [esi+150h]
0x4DF419: push    eax
0x4DF41A: mov     ecx, ebp
0x4DF41C: call    edx
0x4DF41E: mov     eax, [ebp+0]
0x4DF421: mov     edx, [eax+154h]
0x4DF427: mov     ecx, ebp
0x4DF429: call    edx
0x4DF42B: test    eax, eax
0x4DF42D: jnz     short loc_4DF461
0x4DF42F: mov     eax, [ebp+40h]
0x4DF432: test    eax, eax
0x4DF434: jz      short loc_4DF461
0x4DF436: mov     ecx, ds:0B333A0h
0x4DF43C: push    0; a2
0x4DF43E: push    eax; a1
0x4DF43F: call    TESObjectCELL_IsProcessLevel?LowHigh
0x4DF444: test    al, al
0x4DF446: jz      short loc_4DF461
0x4DF448: mov     eax, [ebp+40h]
0x4DF44B: mov     ecx, ds:0B333A0h; ecx0
0x4DF451: push    0; a8
0x4DF453: push    0; a7
0x4DF455: push    eax; a6
0x4DF456: push    ebp; a1
0x4DF457: call    sub_441EF0
0x4DF45C: jmp     loc_4DF4FC
0x4DF461: mov     eax, [ebp+1Ch]
0x4DF464: test    eax, eax
0x4DF466: jz      short loc_4DF471
0x4DF468: cmp     [eax+4], bl
0x4DF46B: jz      loc_4DF4FC
0x4DF471: mov     edx, [ebp+0]
0x4DF474: mov     eax, [edx+14Ch]
0x4DF47A: mov     ecx, ebp
0x4DF47C: call    eax
0x4DF47E: mov     edx, [ebp+0]
0x4DF481: mov     ebx, eax
0x4DF483: mov     eax, [edx+174h]
0x4DF489: mov     ecx, ebp
0x4DF48B: call    eax
0x4DF48D: mov     ecx, [eax]
0x4DF48F: mov     [ebx+54h], ecx
0x4DF492: mov     edx, [eax+4]
0x4DF495: mov     [ebx+58h], edx
0x4DF498: mov     eax, [eax+8]
0x4DF49B: lea     ecx, [esp+38h+var_24]
0x4DF49F: push    ecx
0x4DF4A0: mov     ecx, ebp
0x4DF4A2: mov     [ebx+5Ch], eax
0x4DF4A5: call    sub_4D7AF0
0x4DF4AA: mov     esi, eax
0x4DF4AC: lea     edi, [ebx+30h]
0x4DF4AF: mov     ecx, 9
0x4DF4B4: rep movsd
0x4DF4B6: mov     ecx, ebp; this
0x4DF4B8: call    TESObjectREFR_GetScale
0x4DF4BD: mov     esi, [esp+38h+var_28]
0x4DF4C1: fabs
0x4DF4C3: mov     ecx, esi
0x4DF4C5: fstp    [esp+38h+a2]
0x4DF4C9: fld     [esp+38h+a2]
0x4DF4CD: fstp    dword ptr [ebx+60h]
0x4DF4D0: mov     edx, [esi]
0x4DF4D2: mov     eax, [edx+154h]
0x4DF4D8: call    eax
0x4DF4DA: cmp     dword ptr [eax+1Ch], 0
0x4DF4DE: jz      short loc_4DF4FC
0x4DF4E0: mov     edx, [esi]
0x4DF4E2: mov     eax, [edx+154h]
0x4DF4E8: mov     ecx, esi
0x4DF4EA: call    eax
0x4DF4EC: mov     ecx, [eax+1Ch]
0x4DF4EF: mov     edx, [ecx]
0x4DF4F1: mov     eax, [edx+84h]
0x4DF4F7: push    0
0x4DF4F9: push    ebx
0x4DF4FA: call    eax
0x4DF4FC: mov     edx, [ebp+0]
0x4DF4FF: mov     eax, [edx+154h]
0x4DF505: mov     ecx, ebp
0x4DF507: call    eax
0x4DF509: test    eax, eax
0x4DF50B: jz      short loc_4DF543
0x4DF50D: mov     edx, [ebp+0]
0x4DF510: mov     eax, [edx+170h]
0x4DF516: mov     ecx, ebp
0x4DF518: call    eax
0x4DF51A: cmp     byte ptr [eax+4], 1Ah
0x4DF51E: jnz     short loc_4DF543
0x4DF520: mov     edx, [ebp+0]
0x4DF523: mov     eax, [edx+154h]
0x4DF529: mov     ecx, ebp
0x4DF52B: call    eax
0x4DF52D: mov     edx, [ebp+0]
0x4DF530: push    eax
0x4DF531: mov     eax, [edx+170h]
0x4DF537: push    ebp
0x4DF538: mov     ecx, ebp
0x4DF53A: call    eax
0x4DF53C: mov     ecx, eax
0x4DF53E: call    sub_4B1600
0x4DF543: lea     edi, [ebp+44h]
0x4DF546: push    8
0x4DF548: mov     ecx, edi
0x4DF54A: call    sub_41F830
0x4DF54F: test    al, al
0x4DF551: push    1; char
0x4DF553: mov     ecx, ebp
0x4DF555: jz      short loc_4DF55B
0x4DF557: push    1
0x4DF559: jmp     short loc_4DF55D
0x4DF55B: push    0; float
0x4DF55D: call    sub_4DE460
0x4DF562: mov     edx, [ebp+0]
0x4DF565: mov     eax, [edx+154h]
0x4DF56B: push    1
0x4DF56D: mov     ecx, ebp
0x4DF56F: call    eax
0x4DF571: push    eax
0x4DF572: call    sub_897A20
0x4DF577: fldz
0x4DF579: mov     edx, [ebp+0]
0x4DF57C: mov     eax, [edx+154h]
0x4DF582: add     esp, 8
0x4DF585: push    1; a3
0x4DF587: push    ecx
0x4DF588: mov     ecx, ebp
0x4DF58A: fstp    [esp+40h+var_40]; a2
0x4DF58D: call    eax
0x4DF58F: mov     ecx, eax; this
0x4DF591: call    NiAVObject_UpdateNiAVObject
0x4DF596: mov     edx, [ebp+0]
0x4DF599: mov     eax, [edx+154h]
0x4DF59F: mov     ecx, ebp
0x4DF5A1: call    eax
0x4DF5A3: mov     ecx, eax; this
0x4DF5A5: call    NiAVObject_InitializePropertyState
0x4DF5AA: mov     edx, [ebp+0]
0x4DF5AD: mov     eax, [edx+154h]
0x4DF5B3: mov     ecx, ebp
0x4DF5B5: call    eax
0x4DF5B7: mov     ecx, eax
0x4DF5B9: call    NiNode_UpdateDynamicEffectState
0x4DF5BE: jmp     short loc_4DF5CF
0x4DF5C0: mov     edx, [ebp+0]
0x4DF5C3: mov     eax, [edx+150h]
0x4DF5C9: push    0
0x4DF5CB: mov     ecx, ebp
0x4DF5CD: call    eax
0x4DF5CF: mov     ecx, edi; this
0x4DF5D1: call    ExtraDataList_GetTeleport
0x4DF5D6: test    eax, eax
0x4DF5D8: jz      loc_4DF696
0x4DF5DE: mov     ecx, [ebp+8]
0x4DF5E1: shr     ecx, 0Eh
0x4DF5E4: test    cl, 1
0x4DF5E7: jnz     loc_4DF696
0x4DF5ED: mov     ecx, eax
0x4DF5EF: call    sub_42B410
0x4DF5F4: mov     esi, eax
0x4DF5F6: test    esi, esi
0x4DF5F8: jnz     short loc_4DF60B
0x4DF5FA: mov     ecx, ebp
0x4DF5FC: call    sub_4D76D0
0x4DF601: pop     edi
0x4DF602: pop     esi
0x4DF603: pop     ebp
0x4DF604: pop     ebx
0x4DF605: add     esp, 28h
0x4DF608: retn    4
0x4DF60B: mov     ecx, esi; this
0x4DF60D: call    TESObjectREFR_IsPersistent?
0x4DF612: test    al, al
0x4DF614: jnz     short loc_4DF61F
0x4DF616: push    1
0x4DF618: mov     ecx, esi
0x4DF61A: call    TESObjectREFR_SetPersistance
0x4DF61F: lea     ebx, [esi+44h]
0x4DF622: mov     ecx, ebx; this
0x4DF624: call    ExtraDataList_GetTeleport
0x4DF629: test    eax, eax
0x4DF62B: jnz     short loc_4DF634
0x4DF62D: mov     ecx, esi
0x4DF62F: call    TESObjectREFR__GetTeleportData
0x4DF634: push    ebp
0x4DF635: mov     ecx, eax
0x4DF637: call    TeleportData__SetLinkedDoor
0x4DF63C: mov     ecx, edi; this
0x4DF63E: mov     byte ptr [esp+38h+a2], 0
0x4DF643: call    sub_41E690
0x4DF648: test    eax, eax
0x4DF64A: jz      short loc_4DF663
0x4DF64C: mov     ecx, ebx; this
0x4DF64E: call    sub_41E690
0x4DF653: test    eax, eax
0x4DF655: jz      short loc_4DF663
0x4DF657: mov     ecx, ebx
0x4DF659: call    sub_41F5D0
0x4DF65E: mov     byte ptr [esp+38h+a2], 1
0x4DF663: mov     ecx, edi
0x4DF665: call    ExtraDataList_GetOwner
0x4DF66A: test    eax, eax
0x4DF66C: jz      short loc_4DF682
0x4DF66E: mov     ecx, ebx
0x4DF670: call    ExtraDataList_GetOwner
0x4DF675: test    eax, eax
0x4DF677: jz      short loc_4DF682
0x4DF679: mov     ecx, esi
0x4DF67B: call    sub_4DB900
0x4DF680: jmp     short loc_4DF689
0x4DF682: cmp     byte ptr [esp+38h+a2], 0
0x4DF687: jz      short loc_4DF696
0x4DF689: push    offset aConflictingSha; "Conflicting shared data removed from li"...
0x4DF68E: call    PrintError
0x4DF693: add     esp, 4
0x4DF696: pop     edi
0x4DF697: pop     esi
0x4DF698: pop     ebp
0x4DF699: pop     ebx
0x4DF69A: add     esp, 28h
0x4DF69D: retn    4
