0x6022F0: sub     esp, 14h
0x6022F3: test    [esp+14h+arg_4], 28000000h
0x6022FB: push    ebx
0x6022FC: push    ebp
0x6022FD: mov     ebp, [esp+1Ch+arg_0]
0x602301: push    esi
0x602302: push    edi
0x602303: mov     esi, ecx
0x602305: jz      loc_6023AA
0x60230B: test    ebp, 28000000h
0x602311: jnz     loc_6023AA
0x602317: mov     eax, [esi]
0x602319: mov     edx, [eax+170h]
0x60231F: call    edx
0x602321: movzx   ecx, byte ptr [eax+4]
0x602325: xor     edi, edi
0x602327: xor     ebx, ebx
0x602329: sub     ecx, 23h ; '#'
0x60232C: jz      short loc_602337
0x60232E: sub     ecx, 1
0x602331: jnz     short loc_602339
0x602333: mov     ebx, eax
0x602335: jmp     short loc_602339
0x602337: mov     edi, eax
0x602339: mov     ecx, [esi+58h]
0x60233C: test    ecx, ecx
0x60233E: mov     byte ptr [esp+24h+var_20.member.refID], 1
0x602343: mov     byte ptr [esp+24h+var_20.member.modlist.data], 1
0x602348: jz      short loc_602376
0x60234A: mov     eax, [ecx]
0x60234C: mov     edx, [eax+184h]
0x602352: call    edx
0x602354: test    eax, eax
0x602356: jz      short loc_602376
0x602358: mov     eax, [eax+1Ch]
0x60235B: mov     ecx, eax
0x60235D: shr     ecx, 14h
0x602360: test    cl, 1
0x602363: jz      short loc_60236A
0x602365: mov     byte ptr [esp+24h+var_20.member.refID], 0
0x60236A: shr     eax, 15h
0x60236D: test    al, 1
0x60236F: jz      short loc_602376
0x602371: mov     byte ptr [esp+24h+var_20.member.modlist.data], 0
0x602376: test    edi, edi
0x602378: jz      short loc_602392
0x60237A: mov     edx, [esp+24h+var_20.member.modlist.data]
0x60237E: mov     eax, [esp+24h+var_20.member.refID]
0x602382: push    1; char
0x602384: push    0; int
0x602386: push    edx; int
0x602387: push    eax; int
0x602388: push    esi; int
0x602389: mov     ecx, edi; int
0x60238B: call    sub_5227A0
0x602390: jmp     short loc_6023AA
0x602392: test    ebx, ebx
0x602394: jz      short loc_6023AA
0x602396: mov     ecx, [esp+24h+var_20.member.modlist.data]
0x60239A: mov     edx, [esp+24h+var_20.member.refID]
0x60239E: push    1
0x6023A0: push    ecx
0x6023A1: push    edx
0x6023A2: push    esi
0x6023A3: mov     ecx, ebx
0x6023A5: call    sub_51E240
0x6023AA: mov     eax, ebp
0x6023AC: and     eax, 40h
0x6023AF: mov     [esp+24h+var_8], eax
0x6023B3: jnz     short loc_60240A
0x6023B5: test    byte ptr [esp+24h+arg_4], 40h
0x6023BA: jz      short loc_60240A
0x6023BC: mov     eax, [esi]
0x6023BE: mov     edx, [eax+170h]
0x6023C4: mov     ecx, esi
0x6023C6: xor     ebx, ebx
0x6023C8: call    edx
0x6023CA: mov     edi, eax
0x6023CC: test    edi, edi
0x6023CE: jz      short loc_6023E2
0x6023D0: mov     eax, [esi]
0x6023D2: mov     edx, [eax+190h]
0x6023D8: mov     ecx, esi
0x6023DA: call    edx
0x6023DC: test    al, al
0x6023DE: jz      short loc_6023E2
0x6023E0: mov     ebx, edi
0x6023E2: mov     eax, [ebx+8]
0x6023E5: shr     eax, 13h
0x6023E8: test    al, 1
0x6023EA: push    0; newDeadState
0x6023EC: mov     ecx, esi; this
0x6023EE: jnz     short loc_602405
0x6023F0: call    Actor_HandleDeathSTate????
0x6023F5: mov     ecx, esi
0x6023F7: mov     byte ptr [esi+0C0h], 0
0x6023FE: call    sub_5F87F0
0x602403: jmp     short loc_60240A
0x602405: call    sub_4DE100
0x60240A: mov     ecx, ds:0BA9DE4h
0x602410: mov     edx, large fs:2Ch
0x602417: mov     edi, [edx+ecx*4]
0x60241A: mov     eax, [esp+24h+arg_4]
0x60241E: mov     ecx, [esp+24h+arg_0]
0x602422: mov     ebp, [esi+0B0h]
0x602428: mov     bl, [esi+0C0h]
0x60242E: push    eax
0x60242F: push    ecx
0x602430: mov     ecx, esi
0x602432: mov     byte ptr [edi+184h], 1
0x602439: call    MobileObject_LoadModifiedForm
0x60243E: mov     ecx, ds:0B33B00h
0x602444: xor     eax, eax
0x602446: mov     byte ptr [edi+184h], 0
0x60244D: mov     [esp+24h+var_20.member.modlist.data], eax
0x602451: mov     [esp+24h+var_20.member.modlist.next], eax
0x602455: call    sub_45A170
0x60245A: test    al, al
0x60245C: jz      loc_6024FF
0x602462: mov     ecx, ds:0B33B00h
0x602468: push    4; Size
0x60246A: lea     edx, [esp+28h+var_4]
0x60246E: push    edx; Dst
0x60246F: call    SaveLoad_LoadData
0x602474: cmp     dword ptr [esp+24h+var_4], 4B4F4C42h
0x60247C: jz      short loc_6024E6
0x60247E: mov     eax, ds:0B33B00h
0x602483: mov     edi, [eax+80h]
0x602489: test    edi, edi
0x60248B: jz      short loc_6024CA
0x60248D: mov     eax, [edi]
0x60248F: push    eax; a1
0x602490: call    TESForm_LookupByFormID
0x602495: mov     ecx, [edi+5]
0x602498: movzx   edx, byte ptr [edi+9]
0x60249C: add     esp, 4
0x60249F: push    ecx
0x6024A0: push    edx
0x6024A1: mov     edx, [eax]
0x6024A3: mov     ecx, eax
0x6024A5: mov     eax, [edx+0D4h]
0x6024AB: call    eax
0x6024AD: mov     ecx, [edi]
0x6024AF: push    eax
0x6024B0: push    ecx
0x6024B1: push    4403h
0x6024B6: push    offset a_AiActor_cpp; ".\\AI\\Actor.cpp"
0x6024BB: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x6024C0: call    PrintError
0x6024C5: add     esp, 1Ch
0x6024C8: jmp     short loc_6024E6
0x6024CA: movzx   edx, byte ptr [eax+7Ch]
0x6024CE: push    edx
0x6024CF: push    4403h
0x6024D4: push    offset a_AiActor_cpp; ".\\AI\\Actor.cpp"
0x6024D9: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x6024DE: call    PrintError
0x6024E3: add     esp, 10h
0x6024E6: mov     ecx, ds:0B33B00h
0x6024EC: mov     eax, [ecx+14h]
0x6024EF: push    2; Size
0x6024F1: lea     edx, [esp+28h+var_20.member.modlist]
0x6024F5: push    edx; Dst
0x6024F6: mov     [esp+2Ch+var_20.member.modlist.next], eax
0x6024FA: call    SaveLoad_LoadData
0x6024FF: push    4; a2
0x602501: lea     eax, [esi+0BCh]
0x602507: push    eax; a1
0x602508: mov     ecx, esi
0x60250A: mov     [esi+0B0h], ebp
0x602510: mov     [esi+0C0h], bl
0x602516: call    TESForm_LoadDataFromCurrentSaveGame
0x60251B: push    1; a2
0x60251D: lea     ecx, [esi+0C8h]
0x602523: push    ecx; a1
0x602524: mov     ecx, esi
0x602526: call    TESForm_LoadDataFromCurrentSaveGame
0x60252B: push    1; a2
0x60252D: lea     edx, [esi+0C9h]
0x602533: push    edx; a1
0x602534: mov     ecx, esi
0x602536: call    TESForm_LoadDataFromCurrentSaveGame
0x60253B: mov     eax, ds:0B33B00h
0x602540: cmp     byte ptr [eax+7Ch], 25h ; '%'
0x602544: jb      short loc_602553
0x602546: push    1; a2
0x602548: lea     ecx, [esi+78h]
0x60254B: push    ecx; a1
0x60254C: mov     ecx, esi
0x60254E: call    TESForm_LoadDataFromCurrentSaveGame
0x602553: cmp     [esp+24h+var_8], 0
0x602558: jz      short loc_6025A6
0x60255A: push    1; a2
0x60255C: lea     edx, [esp+28h+var_20.member.refID]
0x602560: push    edx; a1
0x602561: mov     ecx, esi
0x602563: call    TESForm_LoadDataFromCurrentSaveGame
0x602568: mov     al, byte ptr [esp+24h+var_20.member.refID]
0x60256C: movzx   ecx, al
0x60256F: cmp     [esi+0B0h], ecx
0x602575: jz      short loc_6025A6
0x602577: cmp     al, 2
0x602579: mov     [esi+0B0h], ecx
0x60257F: jz      short loc_6025A6
0x602581: cmp     al, 1
0x602583: jz      short loc_6025A6
0x602585: cmp     al, 6
0x602587: jz      short loc_6025A6
0x602589: cmp     ebp, 2
0x60258C: jz      short loc_602598
0x60258E: cmp     ebp, 1
0x602591: jz      short loc_602598
0x602593: cmp     ebp, 6
0x602596: jnz     short loc_6025A6
0x602598: mov     ecx, esi
0x60259A: call    sub_5F87F0
0x60259F: mov     byte ptr [esi+0C0h], 0
0x6025A6: mov     eax, [esi]
0x6025A8: mov     edx, [eax+170h]
0x6025AE: mov     ecx, esi
0x6025B0: call    edx
0x6025B2: cmp     byte ptr [eax+4], 24h ; '$'
0x6025B6: jnz     short loc_602606
0x6025B8: mov     eax, [esi]
0x6025BA: mov     edx, [eax+170h]
0x6025C0: mov     ecx, esi
0x6025C2: call    edx
0x6025C4: test    eax, eax
0x6025C6: jz      short loc_602606
0x6025C8: cmp     byte ptr [eax+104h], 4
0x6025CF: jnz     short loc_602606
0x6025D1: push    1; a2
0x6025D3: lea     eax, [esp+28h+var_20.member.refID]
0x6025D7: push    eax; a1
0x6025D8: mov     ecx, esi
0x6025DA: mov     [esp+2Ch+var_8], 0
0x6025E2: call    TESForm_LoadDataFromCurrentSaveGame
0x6025E7: cmp     byte ptr [esp+24h+var_20.member.refID], 0
0x6025EC: jz      short loc_6025FC
0x6025EE: push    4; a2
0x6025F0: lea     ecx, [esp+28h+var_8]
0x6025F4: push    ecx; a1
0x6025F5: mov     ecx, esi
0x6025F7: call    TESForm_LoadFormIDFromCurrentSaveGame
0x6025FC: mov     edx, [esp+2Ch+var_20.member.modlist.data]
0x602600: mov     [esi+0D4h], edx
0x602606: test    dword ptr [esp+2Ch+var_4], 8000h
0x60260E: jz      loc_6026A2
0x602614: mov     ecx, ds:0B33B00h
0x60261A: push    2; Size
0x60261C: lea     eax, [esp+30h+var_20.member]
0x602620: push    eax; Dst
0x602621: call    SaveLoad_LoadData
0x602626: xor     ebp, ebp
0x602628: cmp     word ptr [esp+2Ch+var_20.member.type], bp
0x60262D: jbe     short loc_6026A2
0x60262F: xor     ebx, ebx
0x602631: push    8; Size
0x602633: call    FormHeapAlloc
0x602638: add     esp, 4
0x60263B: push    4; a2
0x60263D: lea     ecx, [esp+30h+var_20.member.modlist]
0x602641: push    ecx; a1
0x602642: mov     ecx, esi
0x602644: mov     edi, eax
0x602646: call    TESForm_LoadFormIDFromCurrentSaveGame
0x60264B: mov     edx, [esp+34h+var_20.member.flags]
0x60264F: push    4; a2
0x602651: push    edi; a1
0x602652: mov     ecx, esi
0x602654: mov     [edi+4], edx
0x602657: call    TESForm_LoadDataFromCurrentSaveGame
0x60265C: cmp     [esi+0A4h], ebx
0x602662: jz      short loc_602690
0x602664: push    8; Size
0x602666: call    FormHeapAlloc
0x60266B: add     esp, 4
0x60266E: cmp     eax, ebx
0x602670: jz      short loc_60267F
0x602672: mov     ecx, [esi+0A4h]
0x602678: mov     [eax], ecx
0x60267A: mov     [eax+4], ebx
0x60267D: jmp     short loc_602681
0x60267F: xor     eax, eax
0x602681: mov     edx, [esi+0A8h]
0x602687: mov     [eax+4], edx
0x60268A: mov     [esi+0A8h], eax
0x602690: movzx   eax, word ptr [esp+34h+var_24]
0x602695: add     ebp, 1
0x602698: cmp     ebp, eax
0x60269A: mov     [esi+0A4h], edi
0x6026A0: jb      short loc_602631
0x6026A2: mov     ebp, [esp+34h+var_20.member.modlist.next]
0x6026A6: test    ebp, 20000000h
0x6026AC: jz      short loc_6026CE
0x6026AE: push    4; a2
0x6026B0: lea     ecx, [esp+38h+var_20.member.modlist.next]
0x6026B4: push    ecx; a1
0x6026B5: mov     ecx, esi
0x6026B7: call    TESForm_LoadDataFromCurrentSaveGame
0x6026BC: mov     ecx, ds:0B33B00h
0x6026C2: push    esi
0x6026C3: call    sub_453A00
0x6026C8: cmp     [esp+34h+var_20.member.modlist.next], eax
0x6026CC: jmp     short loc_6026D6
0x6026CE: test    [esp+34h+var_8], 20000000h
0x6026D6: jz      short loc_6026EB
0x6026D8: mov     ecx, [esi+58h]
0x6026DB: test    ecx, ecx
0x6026DD: jz      short loc_6026EB
0x6026DF: mov     edx, [ecx]
0x6026E1: mov     eax, [edx+31Ch]
0x6026E7: push    1
0x6026E9: call    eax
0x6026EB: mov     ecx, ds:0B33B00h
0x6026F1: cmp     byte ptr [ecx+7Ch], 14h
0x6026F5: jb      loc_60278E
0x6026FB: push    2; Size
0x6026FD: lea     edx, [esp+3Ch+var_20.member.modlist]
0x602701: push    edx; Dst
0x602702: call    SaveLoad_LoadData
0x602707: xor     ebx, ebx
0x602709: cmp     word ptr [esp+38h+var_20.member.modlist.data], bx
0x60270E: jbe     short loc_602788
0x602710: push    8; Size
0x602712: call    FormHeapAlloc
0x602717: add     esp, 4
0x60271A: mov     edi, eax
0x60271C: push    4; a2
0x60271E: lea     eax, [esp+3Ch+var_20.member.modlist.next]
0x602722: push    eax; a1
0x602723: mov     ecx, esi
0x602725: call    TESForm_LoadFormIDFromCurrentSaveGame
0x60272A: mov     ecx, [esp+40h+var_20.member.refID]
0x60272E: push    4; a2
0x602730: lea     edx, [edi+4]
0x602733: mov     [edi], ecx
0x602735: push    edx; a1
0x602736: mov     ecx, esi
0x602738: call    TESForm_LoadDataFromCurrentSaveGame
0x60273D: cmp     dword ptr [esi+9Ch], 0
0x602744: jz      short loc_602776
0x602746: push    8; Size
0x602748: call    FormHeapAlloc
0x60274D: add     esp, 4
0x602750: test    eax, eax
0x602752: jz      short loc_602765
0x602754: mov     ecx, [esi+9Ch]
0x60275A: mov     [eax], ecx
0x60275C: mov     dword ptr [eax+4], 0
0x602763: jmp     short loc_602767
0x602765: xor     eax, eax
0x602767: mov     edx, [esi+0A0h]
0x60276D: mov     [eax+4], edx
0x602770: mov     [esi+0A0h], eax
0x602776: movzx   eax, word ptr [esp+40h+var_20.member.flags]
0x60277B: add     ebx, 1
0x60277E: cmp     ebx, eax
0x602780: mov     [esi+9Ch], edi
0x602786: jb      short loc_602710
0x602788: mov     ecx, ds:0B33B00h
0x60278E: cmp     byte ptr [ecx+7Ch], 32h ; '2'
0x602792: jb      short loc_6027AF
0x602794: push    4; a2
0x602796: lea     ecx, [esp+44h+var_20.member.flags]
0x60279A: push    ecx; a1
0x60279B: mov     ecx, esi
0x60279D: call    TESForm_LoadFormIDFromCurrentSaveGame
0x6027A2: mov     edx, [esp+48h+var_20.vtbl]
0x6027A6: mov     [esi+7Ch], edx
0x6027A9: mov     ecx, ds:0B33B00h
0x6027AF: cmp     byte ptr [ecx+7Ch], 3Ch ; '<'
0x6027B3: jb      short loc_602803
0x6027B5: push    4; a2
0x6027B7: lea     eax, [esp+4Ch+var_20]
0x6027BB: push    eax; a1
0x6027BC: mov     ecx, esi
0x6027BE: call    TESForm_LoadFormIDFromCurrentSaveGame
0x6027C3: mov     eax, [esp+50h+a1]
0x6027C7: test    eax, eax
0x6027C9: jz      short loc_6027F3
0x6027CB: push    0; int
0x6027CD: push    offset ??_R0?AVTESActorBase@@@8; struct TypeDescriptor *
0x6027D2: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x6027D7: push    0; int
0x6027D9: push    eax; a1
0x6027DA: call    TESForm_LookupByFormID
0x6027DF: add     esp, 4
0x6027E2: push    eax; void *
0x6027E3: call    OblivionDynamicCast
0x6027E8: add     esp, 14h
0x6027EB: mov     [esi+0D0h], eax
0x6027F1: jmp     short loc_6027FD
0x6027F3: mov     dword ptr [esi+0D0h], 0
0x6027FD: mov     ecx, ds:0B33B00h
0x602803: cmp     esi, ds:0B333C4h
0x602809: jnz     short loc_602812
0x60280B: mov     byte ptr ds:0B3B77Dh, 0
0x602812: cmp     byte ptr [ecx+7Ch], 44h ; 'D'
0x602816: jb      short loc_602831
0x602818: test    ebp, 200000h
0x60281E: jz      short loc_602831
0x602820: lea     ecx, [esi+88h]
0x602826: call    AVCollection_Load
0x60282B: mov     ecx, ds:0B33B00h
0x602831: cmp     byte ptr [ecx+7Ch], 45h ; 'E'
0x602835: jb      short loc_602867
0x602837: push    1; Size
0x602839: lea     edx, [esi+80h]
0x60283F: push    edx; Dst
0x602840: call    SaveLoad_LoadData
0x602845: mov     ecx, ds:0B33B00h
0x60284B: push    4; Size
0x60284D: lea     eax, [esp+54h+a1]
0x602851: push    eax; Dst
0x602852: call    SaveLoad_LoadFormID
0x602857: mov     ecx, [esp+58h+Dst]
0x60285B: mov     [esi+0CCh], ecx
0x602861: mov     ecx, ds:0B33B00h
0x602867: cmp     byte ptr [ecx+7Ch], 61h ; 'a'
0x60286B: jb      short loc_602889
0x60286D: push    4; Size
0x60286F: lea     edx, [esp+5Ch+Dst]
0x602873: push    edx; Dst
0x602874: call    SaveLoad_LoadFormID
0x602879: mov     eax, [esp+60h+var_38]
0x60287D: mov     [esi+0E4h], eax
0x602883: mov     ecx, ds:0B33B00h
0x602889: cmp     byte ptr [ecx+7Ch], 65h ; 'e'
0x60288D: jb      short loc_6028A5
0x60288F: push    4; a2
0x602891: lea     ecx, [esi+84h]
0x602897: push    ecx; a1
0x602898: mov     ecx, esi
0x60289A: call    TESForm_LoadDataFromCurrentSaveGame
0x60289F: mov     ecx, ds:0B33B00h
0x6028A5: cmp     byte ptr [ecx+7Ch], 71h ; 'q'
0x6028A9: jb      short loc_602901
0x6028AB: push    4; a2
0x6028AD: lea     edx, [esi+0ACh]
0x6028B3: push    edx; a1
0x6028B4: mov     ecx, esi
0x6028B6: call    TESForm_LoadDataFromCurrentSaveGame
0x6028BB: push    1; a2
0x6028BD: lea     eax, [esi+0CAh]
0x6028C3: push    eax; a1
0x6028C4: mov     ecx, esi
0x6028C6: call    TESForm_LoadDataFromCurrentSaveGame
0x6028CB: push    1; a2
0x6028CD: lea     ecx, [esi+0D8h]
0x6028D3: push    ecx; a1
0x6028D4: mov     ecx, esi
0x6028D6: call    TESForm_LoadDataFromCurrentSaveGame
0x6028DB: push    4; a2
0x6028DD: lea     edx, [esi+0DCh]
0x6028E3: push    edx; a1
0x6028E4: mov     ecx, esi
0x6028E6: call    TESForm_LoadDataFromCurrentSaveGame
0x6028EB: push    4; a2
0x6028ED: lea     eax, [esi+100h]
0x6028F3: push    eax; a1
0x6028F4: mov     ecx, esi
0x6028F6: call    TESForm_LoadDataFromCurrentSaveGame
0x6028FB: mov     ecx, ds:0B33B00h
0x602901: cmp     byte ptr [ecx+7Ch], 73h ; 's'
0x602905: jb      short loc_60291D
0x602907: push    1; a2
0x602909: lea     ecx, [esi+0FCh]
0x60290F: push    ecx; a1
0x602910: mov     ecx, esi
0x602912: call    TESForm_LoadDataFromCurrentSaveGame
0x602917: mov     ecx, ds:0B33B00h
0x60291D: cmp     byte ptr [ecx+7Ch], 7Bh ; '{'
0x602921: jb      short loc_602939
0x602923: push    1; a2
0x602925: lea     eax, [esi+0C0h]
0x60292B: push    eax; a1
0x60292C: mov     ecx, esi
0x60292E: call    TESForm_LoadDataFromCurrentSaveGame
0x602933: mov     ecx, ds:0B33B00h
0x602939: call    sub_45A170
0x60293E: test    al, al
0x602940: jz      loc_602A61
0x602946: mov     ecx, ds:0B33B00h
0x60294C: mov     edi, [ecx+80h]
0x602952: test    edi, edi
0x602954: mov     esi, [ecx+14h]
0x602957: jz      loc_602A03
0x60295D: mov     edx, [edi]
0x60295F: push    edx; a1
0x602960: call    TESForm_LookupByFormID
0x602965: mov     ebx, [esp+64h+var_48]
0x602969: mov     ecx, eax
0x60296B: movzx   eax, [esp+64h+var_4C]
0x602970: add     eax, ebx
0x602972: add     esp, 4
0x602975: cmp     esi, eax
0x602977: jbe     short loc_6029BB
0x602979: mov     edx, [edi+5]
0x60297C: movzx   eax, byte ptr [edi+9]
0x602980: push    edx
0x602981: mov     edx, [ecx]
0x602983: push    eax
0x602984: mov     eax, [edx+0D4h]
0x60298A: call    eax
0x60298C: mov     ecx, [edi]
0x60298E: movzx   edx, [esp+68h+var_4C]
0x602993: push    eax
0x602994: push    ecx
0x602995: push    44B8h
0x60299A: sub     esi, edx
0x60299C: push    offset a_AiActor_cpp; ".\\AI\\Actor.cpp"
0x6029A1: sub     esi, ebx
0x6029A3: push    esi; ArgList
0x6029A4: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x6029A9: call    PrintError
0x6029AE: add     esp, 20h
0x6029B1: pop     edi
0x6029B2: pop     esi
0x6029B3: pop     ebp
0x6029B4: pop     ebx
0x6029B5: add     esp, 14h
0x6029B8: retn    8
0x6029BB: jnb     loc_602A61
0x6029C1: mov     eax, [edi+5]
0x6029C4: movzx   edx, byte ptr [edi+9]
0x6029C8: push    eax
0x6029C9: mov     eax, [ecx]
0x6029CB: push    edx
0x6029CC: mov     edx, [eax+0D4h]
0x6029D2: call    edx
0x6029D4: movzx   ecx, [esp+68h+var_4C]
0x6029D9: push    eax
0x6029DA: mov     eax, [edi]
0x6029DC: push    eax
0x6029DD: push    44B8h
0x6029E2: sub     ecx, esi
0x6029E4: push    offset a_AiActor_cpp; ".\\AI\\Actor.cpp"
0x6029E9: add     ecx, ebx
0x6029EB: push    ecx; ArgList
0x6029EC: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x6029F1: call    PrintError
0x6029F6: add     esp, 20h
0x6029F9: pop     edi
0x6029FA: pop     esi
0x6029FB: pop     ebp
0x6029FC: pop     ebx
0x6029FD: add     esp, 14h
0x602A00: retn    8
0x602A03: movzx   eax, [esp+60h+var_4C]
0x602A08: mov     edx, [esp+60h+var_48]
0x602A0C: lea     edi, [eax+edx]
0x602A0F: cmp     esi, edi
0x602A11: jbe     short loc_602A3E
0x602A13: movzx   ecx, byte ptr [ecx+7Ch]
0x602A17: push    ecx
0x602A18: push    44B8h
0x602A1D: sub     esi, eax
0x602A1F: push    offset a_AiActor_cpp; ".\\AI\\Actor.cpp"
0x602A24: sub     esi, edx
0x602A26: push    esi; ArgList
0x602A27: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x602A2C: call    PrintError
0x602A31: add     esp, 14h
0x602A34: pop     edi
0x602A35: pop     esi
0x602A36: pop     ebp
0x602A37: pop     ebx
0x602A38: add     esp, 14h
0x602A3B: retn    8
0x602A3E: jnb     short loc_602A61
0x602A40: movzx   ecx, byte ptr [ecx+7Ch]
0x602A44: push    ecx
0x602A45: push    44B8h
0x602A4A: sub     eax, esi
0x602A4C: push    offset a_AiActor_cpp; ".\\AI\\Actor.cpp"
0x602A51: add     eax, edx
0x602A53: push    eax; ArgList
0x602A54: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x602A59: call    PrintError
0x602A5E: add     esp, 14h
0x602A61: pop     edi
0x602A62: pop     esi
0x602A63: pop     ebp
0x602A64: pop     ebx
0x602A65: add     esp, 14h
0x602A68: retn    8
