0x5FA320: push    0FFFFFFFFh
0x5FA322: push    offset SEH_5FA320
0x5FA327: mov     eax, large fs:0
0x5FA32D: push    eax
0x5FA32E: sub     esp, 88h
0x5FA334: push    ebx
0x5FA335: push    ebp
0x5FA336: push    esi
0x5FA337: push    edi
0x5FA338: mov     eax, ds:0B30AACh
0x5FA33D: xor     eax, esp
0x5FA33F: push    eax; int
0x5FA340: lea     eax, [esp+0A8h+var_C]
0x5FA347: mov     large fs:0, eax
0x5FA34D: mov     esi, ecx
0x5FA34F: mov     ecx, [esi+58h]
0x5FA352: xor     edi, edi
0x5FA354: cmp     ecx, edi
0x5FA356: jz      short loc_5FA367
0x5FA358: mov     eax, [ecx]
0x5FA35A: mov     edx, [eax+8]
0x5FA35D: call    edx
0x5FA35F: test    eax, eax
0x5FA361: jz      loc_5FAA4C
0x5FA367: cmp     [esi+58h], edi
0x5FA36A: jz      short loc_5FA388
0x5FA36C: mov     ecx, ds:0B33B00h
0x5FA372: call    sub_45A500
0x5FA377: test    al, al
0x5FA379: jnz     short loc_5FA388
0x5FA37B: mov     ecx, [esi+58h]
0x5FA37E: mov     eax, [ecx]
0x5FA380: mov     edx, [eax+18h]
0x5FA383: push    1
0x5FA385: push    esi
0x5FA386: call    edx
0x5FA388: mov     eax, [esi]
0x5FA38A: mov     edx, [eax+334h]
0x5FA390: push    1
0x5FA392: mov     ecx, esi
0x5FA394: call    edx
0x5FA396: mov     [esp+0B4h+var_9D], al
0x5FA39A: mov     eax, [esi+58h]
0x5FA39D: xor     ebx, ebx
0x5FA39F: cmp     eax, edi
0x5FA3A1: jz      short loc_5FA3BA
0x5FA3A3: mov     eax, [eax+8]
0x5FA3A6: cmp     eax, edi
0x5FA3A8: jz      short loc_5FA3BA
0x5FA3AA: mov     eax, [eax+28h]
0x5FA3AD: cmp     eax, edi
0x5FA3AF: jz      short loc_5FA3BA
0x5FA3B1: mov     ecx, eax
0x5FA3B3: call    sub_569E60
0x5FA3B8: mov     ebx, eax
0x5FA3BA: push    edi
0x5FA3BB: mov     ecx, esi
0x5FA3BD: mov     [esp+0B8h+var_94], 0
0x5FA3C2: call    sub_5E6CD0
0x5FA3C7: test    al, al
0x5FA3C9: jz      short loc_5FA3D0
0x5FA3CB: mov     [esp+0B4h+var_94], 1
0x5FA3D0: mov     ecx, [esi+58h]
0x5FA3D3: cmp     ecx, edi
0x5FA3D5: mov     ebp, 3
0x5FA3DA: mov     [esp+0B4h+var_9C], ebp
0x5FA3DE: jz      short loc_5FA3FB
0x5FA3E0: mov     eax, [ecx]
0x5FA3E2: mov     edx, [eax+8]
0x5FA3E5: call    edx
0x5FA3E7: push    eax
0x5FA3E8: push    esi
0x5FA3E9: mov     ecx, offset ActorProcessManager_ptr
0x5FA3EE: mov     [esp+0BCh+var_9C], eax
0x5FA3F2: call    sub_674550
0x5FA3F7: mov     ebp, [esp+0B4h+var_9C]
0x5FA3FB: fld     dword ptr [esi+20h]
0x5FA3FE: fcomp   qword ptr ds:0A3A5B0h
0x5FA404: fnstsw  ax
0x5FA406: test    ah, 44h
0x5FA409: jp      short loc_5FA41A
0x5FA40B: fldz
0x5FA40D: push    ecx
0x5FA40E: mov     ecx, esi
0x5FA410: fstp    [esp+0B8h+var_B8]; float
0x5FA413: call    sub_4D89D0
0x5FA418: jmp     short loc_5FA469
0x5FA41A: fld     dword ptr [esi+2Ch]
0x5FA41D: fld     dword ptr ds:0B3F9A8h
0x5FA423: fucompp
0x5FA425: fnstsw  ax
0x5FA427: test    ah, 44h
0x5FA42A: jp      short loc_5FA450
0x5FA42C: fld     dword ptr [esi+30h]
0x5FA42F: fld     dword ptr ds:0B3F9ACh
0x5FA435: fucompp
0x5FA437: fnstsw  ax
0x5FA439: test    ah, 44h
0x5FA43C: jp      short loc_5FA450
0x5FA43E: fld     dword ptr [esi+34h]
0x5FA441: fld     dword ptr ds:0B3F9B0h
0x5FA447: fucompp
0x5FA449: fnstsw  ax
0x5FA44B: test    ah, 44h
0x5FA44E: jnp     short loc_5FA469
0x5FA450: mov     ecx, ds:0B33B00h
0x5FA456: call    sub_45A500
0x5FA45B: test    al, al
0x5FA45D: jnz     short loc_5FA474
0x5FA45F: cmp     ebp, 2
0x5FA462: jl      short loc_5FA474
0x5FA464: cmp     ebp, 3
0x5FA467: jg      short loc_5FA474
0x5FA469: mov     ecx, esi; int
0x5FA46B: call    sub_5EB400
0x5FA470: test    al, al
0x5FA472: jnz     short loc_5FA47B
0x5FA474: mov     ecx, esi
0x5FA476: call    sub_5EB370
0x5FA47B: push    2ECh; Size
0x5FA480: call    FormHeapAlloc
0x5FA485: add     esp, 4
0x5FA488: mov     [esp+0B8h+var_9C], eax
0x5FA48C: cmp     eax, edi
0x5FA48E: mov     [esp+0B8h+var_14], edi
0x5FA495: jz      short loc_5FA4A0
0x5FA497: mov     ecx, eax; this
0x5FA499: call    ??0HighProcess@@QAE@XZ; HighProcess::HighProcess(void)
0x5FA49E: mov     edi, eax
0x5FA4A0: mov     ecx, [esi+58h]
0x5FA4A3: mov     eax, [edi]
0x5FA4A5: mov     edx, [eax+4]
0x5FA4A8: push    ecx
0x5FA4A9: mov     ecx, edi
0x5FA4AB: mov     [esp+0BCh+var_14], 0FFFFFFFFh
0x5FA4B6: call    edx
0x5FA4B8: mov     ecx, [esi+58h]
0x5FA4BB: test    ecx, ecx
0x5FA4BD: jz      short loc_5FA4C7
0x5FA4BF: mov     eax, [ecx]
0x5FA4C1: mov     edx, [eax]
0x5FA4C3: push    1
0x5FA4C5: call    edx
0x5FA4C7: mov     [esi+58h], edi
0x5FA4CA: mov     eax, [edi]
0x5FA4CC: mov     edx, [eax+210h]
0x5FA4D2: mov     ecx, edi
0x5FA4D4: call    edx
0x5FA4D6: test    al, al
0x5FA4D8: jz      short loc_5FA4ED
0x5FA4DA: mov     ecx, [esi+58h]
0x5FA4DD: test    ecx, ecx
0x5FA4DF: jz      short loc_5FA4ED
0x5FA4E1: mov     eax, [ecx]
0x5FA4E3: mov     edx, [eax+300h]
0x5FA4E9: push    1
0x5FA4EB: call    edx
0x5FA4ED: push    0
0x5FA4EF: push    0
0x5FA4F1: push    0
0x5FA4F3: push    0
0x5FA4F5: push    esi
0x5FA4F6: mov     ecx, offset ActorProcessManager_ptr
0x5FA4FB: call    sub_673A90
0x5FA500: push    esi
0x5FA501: mov     ecx, edi
0x5FA503: call    sub_634CB0
0x5FA508: mov     eax, [edi]
0x5FA50A: mov     edx, [eax+5Ch]
0x5FA50D: mov     ecx, edi
0x5FA50F: call    edx
0x5FA511: lea     ecx, [esi+44h]; this
0x5FA514: call    ExtraDataList_GetContainerChanges
0x5FA519: mov     edi, eax
0x5FA51B: test    edi, edi
0x5FA51D: jz      loc_5FA5F5
0x5FA523: cmp     ebp, 1
0x5FA526: jz      loc_5FA5F5
0x5FA52C: mov     eax, [esi+58h]
0x5FA52F: mov     ebp, [eax]
0x5FA531: push    0
0x5FA533: push    0
0x5FA535: push    9
0x5FA537: mov     ecx, edi
0x5FA539: call    ContainerExtraData_GetEquippedInstance
0x5FA53E: mov     ecx, [esi+58h]
0x5FA541: mov     edx, [ebp+104h]
0x5FA547: push    eax
0x5FA548: call    edx
0x5FA54A: mov     eax, [esi+58h]
0x5FA54D: mov     ebp, [eax]
0x5FA54F: push    0
0x5FA551: push    0Ch
0x5FA553: mov     ecx, edi
0x5FA555: call    ContainerExtraData_GetEquippedInstance
0x5FA55A: mov     ecx, [esi+58h]
0x5FA55D: mov     edx, [ebp+10Ch]
0x5FA563: push    eax
0x5FA564: call    edx
0x5FA566: mov     eax, [esi+58h]
0x5FA569: mov     ebp, [eax]
0x5FA56B: push    0
0x5FA56D: push    0Dh
0x5FA56F: mov     ecx, edi
0x5FA571: call    ContainerExtraData_GetEquippedInstance
0x5FA576: mov     ecx, [esi+58h]
0x5FA579: mov     edx, [ebp+110h]
0x5FA57F: push    eax
0x5FA580: call    edx
0x5FA582: mov     eax, [esi+58h]
0x5FA585: mov     ebp, [eax]
0x5FA587: push    0
0x5FA589: push    0Eh
0x5FA58B: mov     ecx, edi
0x5FA58D: call    ContainerExtraData_GetEquippedInstance
0x5FA592: mov     ecx, [esi+58h]
0x5FA595: mov     edx, [ebp+108h]
0x5FA59B: push    eax
0x5FA59C: call    edx
0x5FA59E: push    0
0x5FA5A0: push    9
0x5FA5A2: mov     ecx, edi
0x5FA5A4: call    ContainerExtraData_GetEquippedInstance
0x5FA5A9: mov     edi, eax
0x5FA5AB: push    edi
0x5FA5AC: push    esi
0x5FA5AD: call    sub_612A90
0x5FA5B2: fstp    [esp+0E0h+var_BC]
0x5FA5B6: add     esp, 8
0x5FA5B9: test    edi, edi
0x5FA5BB: jz      short loc_5FA5CD
0x5FA5BD: mov     ecx, edi
0x5FA5BF: call    ContainerEntryExtraData_DestroyDataTable
0x5FA5C4: push    edi
0x5FA5C5: call    FormHeapFree
0x5FA5CA: add     esp, 4
0x5FA5CD: mov     ecx, [esi+58h]
0x5FA5D0: fld     [esp+0D8h+var_BC]
0x5FA5D4: mov     eax, [ecx]
0x5FA5D6: mov     edx, [eax+328h]
0x5FA5DC: push    ecx
0x5FA5DD: fstp    [esp+0DCh+var_DC]
0x5FA5E0: call    edx
0x5FA5E2: mov     ecx, [esi+58h]
0x5FA5E5: mov     eax, [ecx]
0x5FA5E7: mov     edx, [eax+0F0h]
0x5FA5ED: push    1; int
0x5FA5EF: call    edx
0x5FA5F1: mov     ebp, [esp+0E0h+var_C8]
0x5FA5F5: mov     ecx, [esi+58h]
0x5FA5F8: mov     eax, [ecx]
0x5FA5FA: mov     edx, [eax+4Ch]
0x5FA5FD: call    edx
0x5FA5FF: mov     ecx, esi; int
0x5FA601: call    sub_5E6E00
0x5FA606: cmp     [esp+0E0h+var_C9], 0
0x5FA60B: jz      short loc_5FA663
0x5FA60D: mov     eax, [esi]
0x5FA60F: mov     edx, [eax+330h]
0x5FA615: mov     ecx, esi
0x5FA617: call    edx
0x5FA619: test    eax, eax
0x5FA61B: jnz     short loc_5FA663
0x5FA61D: mov     ecx, esi; int
0x5FA61F: call    sub_5EAE70
0x5FA624: mov     eax, [esi+58h]
0x5FA627: mov     ebp, [eax]
0x5FA629: mov     edi, eax
0x5FA62B: mov     eax, [ebp+148h]
0x5FA631: push    1
0x5FA633: push    1
0x5FA635: mov     ecx, edi
0x5FA637: call    eax
0x5FA639: mov     edx, [edi]
0x5FA63B: mov     ecx, edi
0x5FA63D: push    eax
0x5FA63E: mov     eax, [edx+148h]
0x5FA644: push    0
0x5FA646: call    eax
0x5FA648: mov     ecx, [esp+0F0h+var_C0]
0x5FA64C: mov     edx, [ebp+228h]
0x5FA652: push    eax
0x5FA653: push    0
0x5FA655: push    ecx
0x5FA656: mov     ecx, [esi+58h]
0x5FA659: push    0
0x5FA65B: push    ebx
0x5FA65C: push    esi
0x5FA65D: call    edx
0x5FA65F: mov     ebp, [esp+108h+var_F0]
0x5FA663: mov     eax, [esi]
0x5FA665: mov     edi, [esi+3Ch]
0x5FA668: mov     edx, [eax+170h]
0x5FA66E: mov     ecx, esi
0x5FA670: mov     [esp+108h+var_EC], edi
0x5FA674: mov     bl, 1
0x5FA676: call    edx
0x5FA678: cmp     byte ptr [eax+4], 24h ; '$'
0x5FA67C: jnz     short loc_5FA694
0x5FA67E: test    edi, edi
0x5FA680: jz      short loc_5FA694
0x5FA682: mov     eax, [esi]
0x5FA684: mov     edx, [eax+278h]
0x5FA68A: mov     ecx, esi
0x5FA68C: call    edx
0x5FA68E: test    al, al
0x5FA690: jnz     short loc_5FA694
0x5FA692: xor     bl, bl
0x5FA694: cmp     byte ptr [esi+0C0h], 0
0x5FA69B: jnz     short loc_5FA6CC
0x5FA69D: mov     eax, [esi]
0x5FA69F: mov     edx, [eax+198h]
0x5FA6A5: push    0
0x5FA6A7: mov     ecx, esi
0x5FA6A9: call    edx
0x5FA6AB: test    al, al
0x5FA6AD: jz      short loc_5FA6DC
0x5FA6AF: test    bl, bl
0x5FA6B1: jz      short loc_5FA6DC
0x5FA6B3: lea     ebx, [esi+44h]
0x5FA6B6: mov     ecx, ebx
0x5FA6B8: call    sub_41FFA0
0x5FA6BD: test    eax, eax
0x5FA6BF: jnz     short loc_5FA6DC
0x5FA6C1: mov     ecx, ebx
0x5FA6C3: call    sub_4212C0
0x5FA6C8: test    eax, eax
0x5FA6CA: jnz     short loc_5FA6DC
0x5FA6CC: push    0; newDeadState
0x5FA6CE: mov     ecx, esi; this
0x5FA6D0: call    Actor_HandleDeathSTate????
0x5FA6D5: mov     byte ptr [esi+0C0h], 1
0x5FA6DC: mov     eax, [esi]
0x5FA6DE: mov     edx, [eax+178h]
0x5FA6E4: push    0
0x5FA6E6: mov     ecx, esi
0x5FA6E8: call    edx
0x5FA6EA: test    edi, edi
0x5FA6EC: jz      short loc_5FA720
0x5FA6EE: cmp     ebp, 1
0x5FA6F1: jnz     short loc_5FA720
0x5FA6F3: mov     ecx, [esi+58h]
0x5FA6F6: mov     eax, [ecx]
0x5FA6F8: mov     edx, [eax+36Ch]
0x5FA6FE: call    edx
0x5FA700: test    eax, eax
0x5FA702: jz      short loc_5FA720
0x5FA704: mov     eax, [esi]
0x5FA706: mov     edx, [eax+380h]
0x5FA70C: mov     ecx, esi
0x5FA70E: call    edx
0x5FA710: test    eax, eax
0x5FA712: jnz     short loc_5FA720
0x5FA714: push    eax
0x5FA715: push    ebp
0x5FA716: push    ebp
0x5FA717: push    edi
0x5FA718: call    sub_88CE30
0x5FA71D: add     esp, 10h
0x5FA720: cmp     byte ptr [esi+0C0h], 0
0x5FA727: jz      loc_5FA930
0x5FA72D: test    edi, edi
0x5FA72F: jz      loc_5FA93B
0x5FA735: mov     eax, [esi]
0x5FA737: mov     edx, [eax+1C8h]
0x5FA73D: mov     ecx, esi
0x5FA73F: call    edx
0x5FA741: mov     eax, [esi]
0x5FA743: mov     edx, [eax+164h]
0x5FA749: mov     ecx, esi
0x5FA74B: call    edx
0x5FA74D: test    eax, eax
0x5FA74F: jz      loc_5FA8A2
0x5FA755: mov     eax, [esi]
0x5FA757: mov     edx, [eax+164h]
0x5FA75D: push    20h ; ' '
0x5FA75F: mov     ecx, esi
0x5FA761: call    edx
0x5FA763: mov     ecx, eax
0x5FA765: call    sub_470D00
0x5FA76A: test    al, al
0x5FA76C: jz      loc_5FA8A2
0x5FA772: mov     eax, [esi]
0x5FA774: mov     edx, [eax+164h]
0x5FA77A: mov     ecx, esi
0x5FA77C: call    edx
0x5FA77E: fldz
0x5FA780: push    ecx
0x5FA781: fstp    [esp+114h+var_114]; float
0x5FA784: mov     edi, eax
0x5FA786: push    5; int
0x5FA788: mov     ecx, edi
0x5FA78A: call    sub_470FC0
0x5FA78F: fldz
0x5FA791: push    0FFFFFFFFh
0x5FA793: push    ecx
0x5FA794: fstp    [esp+118h+var_118]
0x5FA797: push    0FFFFFFFFh
0x5FA799: push    20h ; ' '
0x5FA79B: push    0
0x5FA79D: mov     ecx, edi
0x5FA79F: call    sub_474AB0
0x5FA7A4: push    0
0x5FA7A6: mov     ecx, edi
0x5FA7A8: call    sub_4706E0
0x5FA7AD: push    2; newDeadState
0x5FA7AF: mov     ecx, esi; this
0x5FA7B1: mov     ebp, eax
0x5FA7B3: call    Actor_HandleDeathSTate????
0x5FA7B8: test    ebp, ebp
0x5FA7BA: jz      loc_5FA891
0x5FA7C0: mov     eax, [esi]
0x5FA7C2: mov     edx, [eax+278h]
0x5FA7C8: mov     ecx, esi
0x5FA7CA: call    edx
0x5FA7CC: test    al, al
0x5FA7CE: jnz     short loc_5FA809
0x5FA7D0: fld     dword ptr [ebp+30h]
0x5FA7D3: sub     esp, 8
0x5FA7D6: fstp    dword ptr [ebp+48h]
0x5FA7D9: mov     ecx, edi; this
0x5FA7DB: fld     dword ptr [ebp+30h]
0x5FA7DE: fstp    [esp+118h+var_114]; float
0x5FA7E2: fldz
0x5FA7E4: fstp    [esp+118h+var_118]; float
0x5FA7E7: push    esi; int
0x5FA7E8: call    sub_476D10
0x5FA7ED: push    esi; a2
0x5FA7EE: mov     ecx, edi; this
0x5FA7F0: call    sub_474510
0x5FA7F5: mov     ecx, esi
0x5FA7F7: call    sub_5F5D10
0x5FA7FC: mov     ebp, [esp+110h+var_F8]
0x5FA800: mov     edi, [esp+110h+var_F4]
0x5FA804: jmp     loc_5FA91F
0x5FA809: mov     ecx, [ebp+68h]
0x5FA80C: push    1; ArgList
0x5FA80E: call    sub_51AE20
0x5FA813: sub     esp, 8
0x5FA816: fstp    [esp+118h+var_114]; float
0x5FA81A: mov     ecx, edi; this
0x5FA81C: fldz
0x5FA81E: fstp    [esp+118h+var_118]; float
0x5FA821: push    esi; int
0x5FA822: call    sub_476D10
0x5FA827: push    esi; a2
0x5FA828: mov     ecx, edi; this
0x5FA82A: call    sub_474510
0x5FA82F: fld     dword ptr [esi+28h]
0x5FA832: push    ecx
0x5FA833: lea     ecx, [esp+114h+var_BC]
0x5FA837: fstp    [esp+114h+var_114]; float
0x5FA83A: call    NiMatrix33_InitRotationTransform
0x5FA83F: fldz
0x5FA841: fst     [esp+110h+var_EC]
0x5FA845: lea     eax, [esp+110h+var_EC]
0x5FA849: fld1
0x5FA84B: push    eax
0x5FA84C: lea     ecx, [esp+114h+var_C8]
0x5FA850: fstp    [esp+114h+var_E8]
0x5FA854: push    ecx
0x5FA855: lea     ecx, [esp+118h+var_BC]
0x5FA859: fstp    [esp+118h+var_E4]
0x5FA85D: call    sub_7101F0
0x5FA862: mov     edx, [eax]
0x5FA864: fldz
0x5FA866: mov     [esp+110h+var_EC], edx
0x5FA86A: mov     ecx, [eax+4]
0x5FA86D: push    0; int
0x5FA86F: push    ecx
0x5FA870: mov     [esp+118h+var_E8], ecx
0x5FA874: fstp    [esp+118h+var_118]; float
0x5FA877: mov     edx, [eax+8]
0x5FA87A: mov     ecx, [esi+3Ch]
0x5FA87D: push    1; int
0x5FA87F: lea     eax, [esp+11Ch+var_EC]
0x5FA883: push    eax; int
0x5FA884: push    ecx; int
0x5FA885: mov     [esp+124h+var_E4], edx
0x5FA889: call    sub_8AB440
0x5FA88E: add     esp, 14h
0x5FA891: mov     ecx, esi
0x5FA893: call    sub_5F5D10
0x5FA898: mov     ebp, [esp+110h+var_F8]
0x5FA89C: mov     edi, [esp+110h+var_F4]
0x5FA8A0: jmp     short loc_5FA91F
0x5FA8A2: cmp     byte ptr [esi+0C0h], 0
0x5FA8A9: jz      short loc_5FA91F
0x5FA8AB: push    1; newDeadState
0x5FA8AD: mov     ecx, esi; this
0x5FA8AF: call    Actor_HandleDeathSTate????
0x5FA8B4: mov     edx, [esi]
0x5FA8B6: mov     eax, [edx+1E0h]
0x5FA8BC: mov     ecx, esi
0x5FA8BE: call    eax
0x5FA8C0: push    ecx
0x5FA8C1: lea     ecx, [esp+114h+var_98]
0x5FA8C5: fstp    [esp+114h+var_114]; float
0x5FA8C8: call    NiMatrix33_InitRotationTransform
0x5FA8CD: fldz
0x5FA8CF: fst     [esp+110h+var_E0]
0x5FA8D3: lea     ecx, [esp+110h+var_E0]
0x5FA8D7: fld1
0x5FA8D9: push    ecx
0x5FA8DA: fstp    [esp+114h+var_DC]
0x5FA8DE: lea     edx, [esp+114h+var_D4]
0x5FA8E2: push    edx
0x5FA8E3: lea     ecx, [esp+118h+var_98]
0x5FA8EA: fstp    [esp+118h+var_D8]
0x5FA8EE: call    sub_7101F0
0x5FA8F3: mov     ecx, [eax]
0x5FA8F5: fldz
0x5FA8F7: push    1; int
0x5FA8F9: push    ecx
0x5FA8FA: mov     [esp+118h+var_E0], ecx
0x5FA8FE: fstp    [esp+118h+var_118]; float
0x5FA901: mov     edx, [eax+4]
0x5FA904: push    1; int
0x5FA906: lea     ecx, [esp+11Ch+var_E0]
0x5FA90A: mov     [esp+11Ch+var_DC], edx
0x5FA90E: mov     eax, [eax+8]
0x5FA911: push    ecx; int
0x5FA912: push    edi; int
0x5FA913: mov     [esp+124h+var_D8], eax
0x5FA917: call    sub_8AB440
0x5FA91C: add     esp, 14h
0x5FA91F: mov     ecx, [esi+58h]
0x5FA922: mov     edx, [ecx]
0x5FA924: mov     eax, [edx+20h]
0x5FA927: call    eax
0x5FA929: mov     byte ptr [esi+0C0h], 0
0x5FA930: test    edi, edi
0x5FA932: jz      short loc_5FA93B
0x5FA934: mov     ecx, esi; a1
0x5FA936: call    sub_5EE1B0
0x5FA93B: push    0
0x5FA93D: push    0
0x5FA93F: mov     ecx, esi
0x5FA941: call    HideEquipment
0x5FA946: mov     edi, [esi+58h]
0x5FA949: test    edi, edi
0x5FA94B: jz      short loc_5FA971
0x5FA94D: mov     edx, [edi]
0x5FA94F: mov     eax, [edx+184h]
0x5FA955: mov     ecx, edi
0x5FA957: call    eax
0x5FA959: test    eax, eax
0x5FA95B: jz      short loc_5FA971
0x5FA95D: cmp     byte ptr [eax+20h], 6
0x5FA961: jnz     short loc_5FA971
0x5FA963: mov     edx, [edi]
0x5FA965: mov     eax, [edx+17Ch]
0x5FA96B: push    0
0x5FA96D: mov     ecx, edi
0x5FA96F: call    eax
0x5FA971: mov     edx, [esi]
0x5FA973: mov     eax, [edx+198h]
0x5FA979: push    0
0x5FA97B: mov     ecx, esi
0x5FA97D: call    eax
0x5FA97F: test    al, al
0x5FA981: jnz     short loc_5FA996
0x5FA983: cmp     ebp, 3
0x5FA986: jz      short loc_5FA98D
0x5FA988: cmp     ebp, 2
0x5FA98B: jnz     short loc_5FA996
0x5FA98D: push    0
0x5FA98F: mov     ecx, esi
0x5FA991: call    sub_5EDA20
0x5FA996: test    edi, edi
0x5FA998: jz      loc_5FAA1E
0x5FA99E: mov     edx, [edi]
0x5FA9A0: mov     eax, [edx+248h]
0x5FA9A6: mov     ecx, edi
0x5FA9A8: call    eax
0x5FA9AA: test    al, al
0x5FA9AC: jz      short loc_5FAA1E
0x5FA9AE: mov     edx, [edi]
0x5FA9B0: mov     eax, [edx+0CCh]
0x5FA9B6: mov     ecx, edi
0x5FA9B8: call    eax
0x5FA9BA: test    eax, eax
0x5FA9BC: jz      short loc_5FAA1E
0x5FA9BE: mov     edx, [edi]
0x5FA9C0: mov     eax, [edx+0CCh]
0x5FA9C6: mov     ecx, edi
0x5FA9C8: call    eax
0x5FA9CA: mov     edx, [eax]
0x5FA9CC: mov     ecx, eax
0x5FA9CE: mov     eax, [edx+190h]
0x5FA9D4: call    eax
0x5FA9D6: test    al, al
0x5FA9D8: jz      short loc_5FAA1E
0x5FA9DA: mov     edx, [edi]
0x5FA9DC: mov     eax, [edx+0CCh]
0x5FA9E2: mov     ecx, edi
0x5FA9E4: call    eax
0x5FA9E6: test    eax, eax
0x5FA9E8: jz      short loc_5FAA1E
0x5FA9EA: mov     ecx, eax; this
0x5FA9EC: call    Actor__GetProcessLevel
0x5FA9F1: test    eax, eax
0x5FA9F3: jz      short loc_5FAA1E
0x5FA9F5: mov     edx, [edi]
0x5FA9F7: mov     eax, [edx+24Ch]
0x5FA9FD: push    0
0x5FA9FF: mov     ecx, edi
0x5FAA01: call    eax
0x5FAA03: push    0
0x5FAA05: push    esi
0x5FAA06: mov     ecx, offset ActorProcessManager_ptr
0x5FAA0B: call    sub_674550
0x5FAA10: mov     edx, [edi]
0x5FAA12: mov     eax, [edx+24Ch]
0x5FAA18: push    1
0x5FAA1A: mov     ecx, edi
0x5FAA1C: call    eax
0x5FAA1E: mov     edx, [esi]
0x5FAA20: mov     eax, [edx+154h]
0x5FAA26: mov     ecx, esi
0x5FAA28: call    eax
0x5FAA2A: test    eax, eax
0x5FAA2C: jz      short loc_5FAA4C
0x5FAA2E: mov     edx, [esi]
0x5FAA30: mov     eax, [edx+154h]
0x5FAA36: mov     ecx, esi
0x5FAA38: call    eax
0x5FAA3A: push    eax
0x5FAA3B: push    0
0x5FAA3D: call    GetShadowSceneNode
0x5FAA42: add     esp, 4
0x5FAA45: mov     ecx, eax
0x5FAA47: call    ShadowSceneNodeAddShadowCaster
0x5FAA4C: mov     al, 1
0x5FAA4E: mov     ecx, [esp+120h+var_84]
0x5FAA55: mov     large fs:0, ecx
0x5FAA5C: pop     ecx
0x5FAA5D: pop     edi
0x5FAA5E: pop     esi
0x5FAA5F: pop     ebp
0x5FAA60: pop     ebx
0x5FAA61: add     esp, 94h
0x5FAA67: retn
