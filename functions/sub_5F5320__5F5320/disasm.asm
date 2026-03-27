0x5F5320: push    0FFFFFFFFh
0x5F5322: push    offset SEH_5F5320
0x5F5327: mov     eax, large fs:0
0x5F532D: push    eax
0x5F532E: sub     esp, 20h
0x5F5331: push    ebx
0x5F5332: push    ebp
0x5F5333: push    esi
0x5F5334: push    edi
0x5F5335: mov     eax, ds:0B30AACh
0x5F533A: xor     eax, esp
0x5F533C: push    eax
0x5F533D: lea     eax, [esp+40h+var_C]
0x5F5341: mov     large fs:0, eax
0x5F5347: mov     esi, ecx
0x5F5349: mov     eax, [esi]
0x5F534B: mov     edx, [eax+170h]
0x5F5351: call    edx
0x5F5353: cmp     byte ptr [eax+4], 24h ; '$'
0x5F5357: jnz     short loc_5F5386
0x5F5359: mov     eax, [esi]
0x5F535B: mov     edx, [eax+170h]
0x5F5361: mov     ecx, esi
0x5F5363: call    edx
0x5F5365: test    eax, eax
0x5F5367: jz      short loc_5F5386
0x5F5369: cmp     byte ptr [eax+104h], 4
0x5F5370: jnz     short loc_5F5386
0x5F5372: mov     eax, [esi]
0x5F5374: mov     edx, [eax+388h]
0x5F537A: mov     ecx, esi
0x5F537C: call    edx
0x5F537E: test    eax, eax
0x5F5380: jnz     loc_5F5717
0x5F5386: cmp     dword ptr [esi+58h], 0
0x5F538A: jz      short loc_5F53B4
0x5F538C: mov     ecx, [esi+58h]
0x5F538F: mov     eax, [ecx]
0x5F5391: mov     edx, [eax+184h]
0x5F5397: call    edx
0x5F5399: test    eax, eax
0x5F539B: jz      short loc_5F53B4
0x5F539D: cmp     byte ptr [eax+20h], 10h
0x5F53A1: jnz     short loc_5F53B4
0x5F53A3: mov     ecx, [esp+40h+arg_0]
0x5F53A7: push    ecx
0x5F53A8: mov     ecx, eax
0x5F53AA: call    sub_626C90
0x5F53AF: jmp     loc_5F5717
0x5F53B4: push    68h ; 'h'; Size
0x5F53B6: call    FormHeapAlloc
0x5F53BB: add     esp, 4
0x5F53BE: mov     [esp+40h+var_28], eax
0x5F53C2: test    eax, eax
0x5F53C4: mov     [esp+40h+var_4], 0
0x5F53CC: jz      short loc_5F53E2
0x5F53CE: mov     edx, [esp+40h+arg_0]
0x5F53D2: push    0
0x5F53D4: push    0
0x5F53D6: push    edx
0x5F53D7: mov     ecx, eax; this
0x5F53D9: call    ??0FleePackage@@QAE@XZ; FleePackage::FleePackage(void)
0x5F53DE: mov     edi, eax
0x5F53E0: jmp     short loc_5F53E4
0x5F53E2: xor     edi, edi
0x5F53E4: mov     ecx, [esi+58h]
0x5F53E7: mov     eax, [ecx]
0x5F53E9: mov     edx, [eax+20h]
0x5F53EC: mov     [esp+40h+var_4], 0FFFFFFFFh
0x5F53F4: call    edx
0x5F53F6: mov     eax, [esi+58h]
0x5F53F9: mov     ecx, [eax+8]
0x5F53FC: test    ecx, ecx
0x5F53FE: jz      short loc_5F5448
0x5F5400: call    sub_5660A0
0x5F5405: test    al, al
0x5F5407: jnz     short loc_5F5448
0x5F5409: mov     ecx, [esi+58h]
0x5F540C: mov     eax, [ecx]
0x5F540E: mov     edx, [eax+390h]
0x5F5414: mov     ebx, ecx
0x5F5416: mov     ebp, ecx
0x5F5418: call    edx
0x5F541A: mov     ecx, ebx
0x5F541C: push    eax
0x5F541D: mov     eax, [ebx]
0x5F541F: mov     edx, [eax+0C0h]
0x5F5425: call    edx
0x5F5427: mov     ecx, ebp
0x5F5429: push    eax
0x5F542A: mov     eax, [ebp+0]
0x5F542D: mov     edx, [eax+0CCh]
0x5F5433: call    edx
0x5F5435: push    eax
0x5F5436: mov     eax, ebx
0x5F5438: mov     ecx, [eax+4]
0x5F543B: mov     edx, [eax+8]
0x5F543E: push    ecx
0x5F543F: push    edx
0x5F5440: lea     ecx, [esi+44h]
0x5F5443: call    sub_4268B0
0x5F5448: mov     ecx, [esi+58h]
0x5F544B: mov     eax, [ecx]
0x5F544D: mov     edx, [eax+20h]
0x5F5450: call    edx
0x5F5452: mov     ecx, [esi+58h]
0x5F5455: mov     eax, [ecx]
0x5F5457: mov     edx, [eax+50h]
0x5F545A: call    edx
0x5F545C: test    eax, eax
0x5F545E: jnz     short loc_5F54AF
0x5F5460: push    1
0x5F5462: push    49564E49h
0x5F5467: push    1Dh
0x5F5469: mov     ecx, esi
0x5F546B: call    sub_5E91E0
0x5F5470: mov     ecx, [esi+58h]
0x5F5473: mov     eax, [ecx]
0x5F5475: mov     edx, [eax+50h]
0x5F5478: call    edx
0x5F547A: test    eax, eax
0x5F547C: jnz     short loc_5F548E
0x5F547E: push    1
0x5F5480: push    4C4D4843h
0x5F5485: push    1Dh
0x5F5487: mov     ecx, esi
0x5F5489: call    sub_5E91E0
0x5F548E: mov     ecx, [esi+58h]
0x5F5491: mov     eax, [ecx]
0x5F5493: mov     edx, [eax+50h]
0x5F5496: call    edx
0x5F5498: test    eax, eax
0x5F549A: jz      short loc_5F54AF
0x5F549C: mov     ecx, [esi+58h]
0x5F549F: mov     eax, [ecx]
0x5F54A1: mov     edx, [eax+50h]
0x5F54A4: push    0
0x5F54A6: call    edx
0x5F54A8: mov     ecx, eax
0x5F54AA: call    sub_41A610
0x5F54AF: push    0Ch; Size
0x5F54B1: call    FormHeapAlloc
0x5F54B6: add     esp, 4
0x5F54B9: mov     [esp+40h+var_28], eax
0x5F54BD: test    eax, eax
0x5F54BF: mov     [esp+40h+var_4], 1
0x5F54C7: jz      short loc_5F54D4
0x5F54C9: mov     ecx, eax
0x5F54CB: call    TESPackage_LocationData_constr
0x5F54D0: mov     ebx, eax
0x5F54D2: jmp     short loc_5F54D6
0x5F54D4: xor     ebx, ebx
0x5F54D6: mov     ecx, esi; this
0x5F54D8: mov     [esp+40h+var_4], 0FFFFFFFFh
0x5F54E0: call    TESObjectREFR_GetParentCell
0x5F54E5: mov     ecx, esi; this
0x5F54E7: mov     [esp+40h+var_28], eax
0x5F54EB: call    TESObjectREFR_GetWorldSpace
0x5F54F0: mov     ebp, [esp+40h+arg_10]
0x5F54F4: test    ebp, ebp
0x5F54F6: mov     [esp+40h+var_2C], eax
0x5F54FA: jz      short loc_5F551E
0x5F54FC: push    0
0x5F54FE: mov     ecx, ebx
0x5F5500: call    TESPackage_LocationData_SetType
0x5F5505: push    ebp
0x5F5506: mov     ecx, ebx
0x5F5508: call    TESPackage_LocationData_SetReference
0x5F550D: push    ebx
0x5F550E: mov     ecx, edi
0x5F5510: mov     byte ptr [edi+3Ch], 0
0x5F5514: call    TESPackage_SetLocation
0x5F5519: jmp     loc_5F564A
0x5F551E: mov     ebp, [esp+40h+arg_C]
0x5F5522: test    ebp, ebp
0x5F5524: jz      short loc_5F5548
0x5F5526: push    1
0x5F5528: mov     ecx, ebx
0x5F552A: call    TESPackage_LocationData_SetType
0x5F552F: push    ebp
0x5F5530: mov     ecx, ebx
0x5F5532: call    sub_569810
0x5F5537: push    ebx
0x5F5538: mov     ecx, edi
0x5F553A: mov     byte ptr [edi+3Ch], 0
0x5F553E: call    TESPackage_SetLocation
0x5F5543: jmp     loc_5F564A
0x5F5548: mov     ecx, esi; this
0x5F554A: mov     byte ptr [esp+40h+arg_10], 0
0x5F554F: call    TESObjectREFR_GetParentCell
0x5F5554: test    eax, eax
0x5F5556: jz      short loc_5F556F
0x5F5558: mov     ecx, esi; this
0x5F555A: call    TESObjectREFR_GetParentCell
0x5F555F: mov     ecx, eax; this
0x5F5561: call    TESObjectCELL_IsInterior
0x5F5566: test    al, al
0x5F5568: jz      short loc_5F556F
0x5F556A: mov     byte ptr [esp+40h+arg_10], 1
0x5F556F: mov     eax, [esi]
0x5F5571: mov     edx, [eax+250h]
0x5F5577: mov     ecx, esi
0x5F5579: call    edx
0x5F557B: fcomp   dword ptr ds:0A2FAA8h
0x5F5581: fnstsw  ax
0x5F5583: test    ah, 44h
0x5F5586: jp      short loc_5F5590
0x5F5588: push    esi
0x5F5589: mov     ecx, edi
0x5F558B: call    sub_627FF0
0x5F5590: mov     ebp, [edi+60h]
0x5F5593: test    ebp, ebp
0x5F5595: jnz     short loc_5F5613
0x5F5597: mov     ecx, [esi+58h]
0x5F559A: mov     eax, [ecx]
0x5F559C: mov     edx, [eax+9Ch]
0x5F55A2: mov     byte ptr [esp+40h+arg_C], 0
0x5F55A7: call    edx
0x5F55A9: fcomp   dword ptr ds:0A2FAA8h
0x5F55AF: fnstsw  ax
0x5F55B1: test    ah, 41h
0x5F55B4: jp      short loc_5F55D2
0x5F55B6: mov     ecx, [esi+58h]
0x5F55B9: fld     dword ptr ds:0A417B4h
0x5F55BF: mov     eax, [ecx]
0x5F55C1: mov     edx, [eax+0A0h]
0x5F55C7: push    ecx
0x5F55C8: fstp    [esp+44h+var_44]
0x5F55CB: mov     byte ptr [esp+44h+arg_C], 1
0x5F55D0: call    edx
0x5F55D2: cmp     byte ptr [esp+40h+arg_10], 0
0x5F55D7: mov     eax, [esp+40h+arg_C]
0x5F55DB: mov     ecx, [esp+40h+arg_0]
0x5F55DF: push    eax; float
0x5F55E0: push    ecx; int
0x5F55E1: push    esi; int
0x5F55E2: mov     ecx, edi
0x5F55E4: jz      short loc_5F55F2
0x5F55E6: lea     edx, [esp+4Ch+var_24]
0x5F55EA: push    edx; int
0x5F55EB: call    sub_627680
0x5F55F0: jmp     short loc_5F55FC
0x5F55F2: lea     edx, [esp+4Ch+var_18]
0x5F55F6: push    edx; int
0x5F55F7: call    sub_6279A0
0x5F55FC: mov     eax, [edi+40h]
0x5F55FF: mov     ecx, [edi+44h]
0x5F5602: mov     edx, [edi+48h]
0x5F5605: mov     [esp+40h+var_24], eax
0x5F5609: mov     [esp+40h+var_20], ecx
0x5F560D: mov     [esp+40h+var_1C], edx
0x5F5611: jmp     short loc_5F564A
0x5F5613: mov     eax, [ebp+0]
0x5F5616: mov     edx, [eax+174h]
0x5F561C: mov     ecx, ebp
0x5F561E: call    edx
0x5F5620: mov     ecx, [eax]
0x5F5622: mov     edx, [eax+4]
0x5F5625: mov     eax, [eax+8]
0x5F5628: mov     [esp+40h+var_24], ecx
0x5F562C: mov     ecx, ebp; this
0x5F562E: mov     [esp+40h+var_20], edx
0x5F5632: mov     [esp+40h+var_1C], eax
0x5F5636: call    TESObjectREFR_GetParentCell
0x5F563B: mov     ecx, ebp; this
0x5F563D: mov     [esp+40h+var_28], eax
0x5F5641: call    TESObjectREFR_GetWorldSpace
0x5F5646: mov     [esp+40h+var_2C], eax
0x5F564A: test    ebx, ebx
0x5F564C: jz      short loc_5F565E
0x5F564E: mov     ecx, ebx
0x5F5650: call    TESPackage_LocationData_destr
0x5F5655: push    ebx
0x5F5656: call    FormHeapFree
0x5F565B: add     esp, 4
0x5F565E: mov     ecx, [esi+58h]
0x5F5661: cmp     dword ptr [ecx+8], 0
0x5F5665: jz      short loc_5F56A3
0x5F5667: mov     eax, [ecx]
0x5F5669: mov     edx, [eax+390h]
0x5F566F: mov     ebx, ecx
0x5F5671: mov     ebp, ecx
0x5F5673: call    edx
0x5F5675: mov     ecx, ebx
0x5F5677: push    eax
0x5F5678: mov     eax, [ebx]
0x5F567A: mov     edx, [eax+0C0h]
0x5F5680: call    edx
0x5F5682: mov     ecx, ebp
0x5F5684: push    eax
0x5F5685: mov     eax, [ebp+0]
0x5F5688: mov     edx, [eax+0CCh]
0x5F568E: call    edx
0x5F5690: push    eax
0x5F5691: mov     eax, ebx
0x5F5693: mov     ecx, [eax+4]
0x5F5696: mov     edx, [eax+8]
0x5F5699: push    ecx
0x5F569A: push    edx
0x5F569B: lea     ecx, [esi+44h]
0x5F569E: call    sub_4268B0
0x5F56A3: mov     eax, [esi]
0x5F56A5: mov     edx, [eax+18Ch]
0x5F56AB: mov     ecx, esi
0x5F56AD: call    edx
0x5F56AF: test    eax, eax
0x5F56B1: jz      short loc_5F56B8
0x5F56B3: mov     byte ptr [esp+40h+arg_4], 0
0x5F56B8: mov     eax, [esp+40h+arg_4]
0x5F56BC: push    1; a4
0x5F56BE: push    eax; a3
0x5F56BF: push    edi; a2
0x5F56C0: mov     ecx, esi; this
0x5F56C2: call    Actor_AddPackage?
0x5F56C7: mov     eax, [esp+40h+var_2C]
0x5F56CB: mov     cl, byte ptr [esp+40h+arg_8]
0x5F56CF: mov     ebx, [esp+40h+var_24]
0x5F56D3: push    eax
0x5F56D4: mov     eax, [esp+44h+var_28]
0x5F56D8: push    eax
0x5F56D9: sub     esp, 0Ch
0x5F56DC: mov     eax, esp
0x5F56DE: mov     [eax], ebx
0x5F56E0: mov     ebx, [esp+54h+var_20]
0x5F56E4: mov     [edi+64h], cl
0x5F56E7: mov     dword ptr [edi+18h], 13h
0x5F56EE: mov     ecx, [esi+58h]
0x5F56F1: mov     edx, [ecx]
0x5F56F3: mov     edx, [edx+3DCh]
0x5F56F9: mov     [eax+4], ebx
0x5F56FC: mov     ebx, [esp+54h+var_1C]
0x5F5700: push    esi
0x5F5701: mov     [eax+8], ebx
0x5F5704: call    edx
0x5F5706: test    al, al
0x5F5708: jz      short loc_5F5717
0x5F570A: fld     dword ptr [edi+4Ch]
0x5F570D: mov     byte ptr [edi+50h], 0
0x5F5711: fsub    dword ptr [edi+4Ch]
0x5F5714: fstp    dword ptr [edi+4Ch]
0x5F5717: mov     ecx, dword ptr [esp+40h+var_C]
0x5F571B: mov     large fs:0, ecx
0x5F5722: pop     ecx
0x5F5723: pop     edi
0x5F5724: pop     esi
0x5F5725: pop     ebp
0x5F5726: pop     ebx
0x5F5727: add     esp, 2Ch
0x5F572A: retn    14h
