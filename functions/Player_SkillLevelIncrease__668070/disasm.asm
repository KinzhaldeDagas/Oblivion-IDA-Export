0x668070: sub     esp, 204h
0x668076: mov     eax, ds:0B30AACh
0x66807B: xor     eax, esp
0x66807D: mov     [esp+204h+var_4], eax
0x668084: push    ebx
0x668085: push    ebp
0x668086: push    esi
0x668087: mov     esi, ecx
0x668089: add     dword ptr [esi+660h], 1
0x668090: cmp     [esp+210h+arg_4], 0
0x668098: push    edi
0x668099: mov     edi, [esp+214h+arg_0]
0x6680A0: jnz     loc_668129
0x6680A6: mov     eax, [edi+2Ch]
0x6680A9: fldz
0x6680AB: lea     ecx, [eax-0Ch]
0x6680AE: fstp    dword ptr [esp+214h+var_200]
0x6680B2: cmp     ecx, 14h
0x6680B5: ja      short loc_6680D0
0x6680B7: push    eax
0x6680B8: push    2
0x6680BA: call    ActorValue_GetGroupOffsetFromAV
0x6680BF: movsx   edx, al
0x6680C2: add     esp, 8
0x6680C5: fld     dword ptr [esi+edx*4+130h]
0x6680CC: fstp    dword ptr [esp+214h+var_200]
0x6680D0: fld     dword ptr [esp+214h+var_200]
0x6680D4: push    edi
0x6680D5: mov     ecx, esi
0x6680D7: fstp    [esp+218h+var_200]
0x6680DB: call    sub_65FAD0
0x6680E0: fsubr   [esp+214h+var_200]
0x6680E4: mov     ecx, [edi+2Ch]
0x6680E7: fstp    dword ptr [esp+214h+var_200]
0x6680EB: fld     dword ptr [esp+214h+var_200]
0x6680EF: fst     dword ptr [esp+214h+var_200]
0x6680F3: fldz
0x6680F5: fcom    st(1)
0x6680F7: fnstsw  ax
0x6680F9: fstp    st(1)
0x6680FB: test    ah, 41h
0x6680FE: jnz     short loc_668106
0x668100: fstp    dword ptr [esp+214h+var_200]
0x668104: jmp     short loc_668108
0x668106: fstp    st
0x668108: lea     eax, [ecx-0Ch]
0x66810B: cmp     eax, 14h
0x66810E: ja      short loc_668129
0x668110: push    ecx
0x668111: push    2
0x668113: call    ActorValue_GetGroupOffsetFromAV
0x668118: fld     dword ptr [esp+21Ch+var_200]
0x66811C: movsx   ecx, al
0x66811F: add     esp, 8
0x668122: fstp    dword ptr [esi+ecx*4+130h]
0x668129: mov     eax, [edi+2Ch]
0x66812C: push    eax
0x66812D: mov     ecx, esi
0x66812F: call    Actor_GetSkillMasteryLevel
0x668134: mov     ebp, [edi+2Ch]
0x668137: push    ebp
0x668138: mov     ecx, esi
0x66813A: mov     dword ptr [esp+218h+var_200], eax
0x66813E: call    Actor_GetBaseCalcAVi
0x668143: mov     ebx, eax
0x668145: push    0; a2
0x668147: mov     ecx, esi; this
0x668149: add     ebx, 1
0x66814C: call    Actor_GetActorBaseForm
0x668151: mov     edx, [eax]
0x668153: push    ebx
0x668154: mov     ecx, eax
0x668156: mov     eax, [edx+134h]
0x66815C: push    ebp
0x66815D: call    eax
0x66815F: push    ebp; a2
0x668160: call    sub_57A6F0
0x668165: add     esp, 4
0x668168: push    1
0x66816A: push    ebp
0x66816B: mov     ecx, esi
0x66816D: call    sub_5E2670
0x668172: mov     eax, [edi+2Ch]
0x668175: push    eax
0x668176: mov     ecx, esi
0x668178: call    Actor_GetSkillMasteryLevel
0x66817D: mov     ecx, [edi+2Ch]
0x668180: push    ecx; float
0x668181: mov     ecx, esi
0x668183: mov     ebp, eax
0x668185: call    sub_663C50
0x66818A: mov     edx, [edi+2Ch]
0x66818D: add     dword ptr [esi+edx*4+158h], 1
0x668195: lea     eax, [esi+edx*4+158h]
0x66819C: mov     eax, [edi+34h]
0x66819F: cmp     eax, 2
0x6681A2: ja      short loc_6681AC
0x6681A4: add     byte ptr [esi+eax+5B8h], 1
0x6681AC: mov     eax, [edi+30h]
0x6681AF: push    eax
0x6681B0: mov     ecx, esi
0x6681B2: call    sub_6648D0
0x6681B7: mov     ecx, ds:0B333C4h
0x6681BD: mov     [esp+214h+var_201], 0
0x6681C2: call    Actor_GetBaseClass
0x6681C7: test    eax, eax
0x6681C9: jz      short loc_6681F8
0x6681CB: mov     eax, [edi+2Ch]
0x6681CE: mov     ecx, ds:0B333C4h
0x6681D4: push    eax
0x6681D5: call    Actor_GetBaseClass
0x6681DA: mov     ecx, eax
0x6681DC: call    sub_51C090
0x6681E1: test    al, al
0x6681E3: jz      short loc_6681F8
0x6681E5: add     dword ptr [esi+184h], 1
0x6681EC: mov     ecx, esi
0x6681EE: mov     [esp+214h+var_201], 1
0x6681F3: call    sub_65FB30
0x6681F8: push    3ECh
0x6681FD: xor     ebx, ebx
0x6681FF: call    Menu_GetOpenMenuTile
0x668204: add     esp, 4
0x668207: test    eax, eax
0x668209: jz      short loc_668229
0x66820B: push    ebx; int
0x66820C: push    offset ??_R0?AVHUDMainMenu@@@8; struct TypeDescriptor *
0x668211: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x668216: push    ebx; int
0x668217: mov     ecx, eax
0x668219: call    Tile_GetParentMenu
0x66821E: push    eax; void *
0x66821F: call    OblivionDynamicCast
0x668224: add     esp, 14h
0x668227: mov     ebx, eax
0x668229: cmp     [esp+214h+var_201], 0
0x66822E: jz      loc_668309
0x668234: mov     ecx, [esi+184h]
0x66823A: cmp     ecx, ds:0B37618h
0x668240: jl      loc_668309
0x668246: mov     ecx, ebx
0x668248: call    sub_5A56C0
0x66824D: test    al, al
0x66824F: jz      short loc_66826B
0x668251: cmp     [esp+214h+arg_8], 0
0x668259: jnz     loc_668317
0x66825F: mov     byte ptr [esi+1DCh], 1
0x668266: jmp     loc_6683A1
0x66826B: cmp     [esp+214h+arg_8], 0
0x668273: jz      loc_6682FD
0x668279: mov     edx, ds:0B383B8h
0x66827F: mov     eax, ds:0B383A8h
0x668284: mov     ebx, ds:0B38D28h
0x66828A: push    edx
0x66828B: push    eax
0x66828C: mov     ecx, edi
0x66828E: call    sub_52EA90
0x668293: push    eax
0x668294: push    ebx
0x668295: lea     ecx, [esp+224h+var_1F8]
0x668299: push    offset aSSS_S; "%s %s %s.  %s"
0x66829E: push    ecx
0x66829F: call    __sprintf
0x6682A4: fld     dword ptr ds:0A46B10h
0x6682AA: add     esp, 14h
0x6682AD: fstp    [esp+218h+duration]; duration
0x6682B0: push    1; unk2
0x6682B2: lea     edx, [esp+21Ch+var_1F8]
0x6682B6: push    0; unk1
0x6682B8: push    edx; string
0x6682B9: call    GameUI_QueueMessage
0x6682BE: mov     eax, ds:0B33398h
0x6682C3: mov     ecx, [eax+24h]
0x6682C6: add     esp, 10h
0x6682C9: test    ecx, ecx
0x6682CB: jz      short loc_6682FD
0x6682CD: push    1
0x6682CF: push    121h
0x6682D4: push    offset aUistatsskillup; "UIStatsSkillUp"
0x6682D9: call    PlaySound???
0x6682DE: mov     ebx, eax
0x6682E0: test    ebx, ebx
0x6682E2: jz      short loc_6682FD
0x6682E4: push    0
0x6682E6: mov     ecx, ebx
0x6682E8: call    sub_6B7190
0x6682ED: mov     ecx, ebx; this
0x6682EF: call    sub_6B73E0
0x6682F4: push    ebx
0x6682F5: call    FormHeapFree
0x6682FA: add     esp, 4
0x6682FD: mov     byte ptr [esi+1DCh], 1
0x668304: jmp     loc_6683A1
0x668309: cmp     [esp+214h+arg_8], 0
0x668311: jz      loc_6683A1
0x668317: mov     ecx, ds:0B383A8h
0x66831D: mov     ebx, ds:0B38D28h
0x668323: push    ecx
0x668324: mov     ecx, edi
0x668326: call    sub_52EA90
0x66832B: push    eax
0x66832C: push    ebx
0x66832D: lea     edx, [esp+220h+var_1F8]
0x668331: push    offset aSSS_; "%s %s %s."
0x668336: push    edx
0x668337: call    __sprintf
0x66833C: mov     eax, ds:0B33398h
0x668341: mov     ecx, [eax+24h]
0x668344: add     esp, 14h
0x668347: test    ecx, ecx
0x668349: jz      short loc_668386
0x66834B: push    0
0x66834D: push    121h
0x668352: push    offset aUistatsskillup; "UIStatsSkillUp"
0x668357: call    PlaySound???
0x66835C: mov     ebx, eax
0x66835E: test    ebx, ebx
0x668360: jz      short loc_668386
0x668362: mov     ecx, ebx
0x668364: call    sub_6B7260
0x668369: test    al, al
0x66836B: jnz     short loc_668386
0x66836D: push    0
0x66836F: mov     ecx, ebx
0x668371: call    sub_6B7190
0x668376: mov     ecx, ebx; this
0x668378: call    sub_6B73E0
0x66837D: push    ebx
0x66837E: call    FormHeapFree
0x668383: add     esp, 4
0x668386: fld     dword ptr ds:0A30634h
0x66838C: push    ecx
0x66838D: fstp    [esp+218h+duration]; duration
0x668390: push    1; unk2
0x668392: lea     ecx, [esp+21Ch+var_1F8]
0x668396: push    0; unk1
0x668398: push    ecx; string
0x668399: call    GameUI_QueueMessage
0x66839E: add     esp, 10h
0x6683A1: cmp     ebp, dword ptr [esp+214h+var_200]
0x6683A5: jz      short loc_66841F
0x6683A7: mov     ebx, [edi+24h]
0x6683AA: test    ebx, ebx
0x6683AC: mov     eax, ds:0B38CF0h
0x6683B1: jnz     short loc_6683B8
0x6683B3: mov     ebx, offset EmptyString
0x6683B8: push    3
0x6683BA: push    eax
0x6683BB: push    2
0x6683BD: push    ebp
0x6683BE: mov     ecx, edi
0x6683C0: call    TESSKill_GetMasteryDescription
0x6683C5: push    eax
0x6683C6: push    2
0x6683C8: push    ebx
0x6683C9: push    2
0x6683CB: push    0
0x6683CD: push    1
0x6683CF: push    0
0x6683D1: push    offset aSkill_perk_xml; "skill_perk.xml"
0x6683D6: call    sub_57B370
0x6683DB: mov     edi, [edi+2Ch]
0x6683DE: add     esp, 2Ch
0x6683E1: cmp     edi, 0Eh
0x6683E4: jz      short loc_6683EE
0x6683E6: add     edi, 0FFFFFFF0h
0x6683E9: cmp     edi, 1
0x6683EC: ja      short loc_66841F
0x6683EE: mov     ecx, esi
0x6683F0: call    TESObjectREFR_GetAnimData
0x6683F5: mov     edi, eax
0x6683F7: mov     ecx, edi
0x6683F9: call    sub_471990
0x6683FE: push    0
0x668400: push    esi
0x668401: mov     ecx, edi
0x668403: call    sub_476410
0x668408: mov     edi, [esi+5CCh]
0x66840E: mov     ecx, edi
0x668410: call    sub_471990
0x668415: push    0
0x668417: push    esi
0x668418: mov     ecx, edi
0x66841A: call    sub_476410
0x66841F: call    sub_57A7D0
0x668424: mov     ecx, [esp+214h+var_4]
0x66842B: pop     edi
0x66842C: pop     esi
0x66842D: pop     ebp
0x66842E: pop     ebx
0x66842F: xor     ecx, esp
0x668431: call    @__security_check_cookie@4; __security_check_cookie(x)
0x668436: add     esp, 204h
0x66843C: retn    0Ch
