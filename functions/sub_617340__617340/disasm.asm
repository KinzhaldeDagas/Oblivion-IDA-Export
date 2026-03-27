0x617340: push    ecx
0x617341: push    esi
0x617342: push    edi
0x617343: mov     edi, [esp+0Ch+arg_0]
0x617347: mov     esi, ecx
0x617349: mov     ecx, [edi]
0x61734B: mov     eax, [ecx]
0x61734D: mov     edx, [eax+18h]
0x617350: mov     [esp+0Ch+var_1], 0
0x617355: call    edx
0x617357: cmp     eax, 7; switch 8 cases
0x61735A: ja      def_617362
0x617360: push    ebx
0x617361: push    ebp
0x617362: jmp     ds:jpt_617362[eax*4]; switch jump
0x617369: mov     eax, [edi]; jumptable 00617362 case 7
0x61736B: push    0; int
0x61736D: push    offset ??_R0?AVAlchemyItem@@@8; struct TypeDescriptor *
0x617372: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x617377: push    0; int
0x617379: push    eax; void *
0x61737A: call    OblivionDynamicCast
0x61737F: mov     ebp, eax
0x617381: lea     ebx, [ebp+24h]
0x617384: add     esp, 14h
0x617387: mov     ecx, ebx
0x617389: call    sub_419CF0
0x61738E: test    al, al
0x617390: jz      short loc_6173A9
0x617392: mov     ecx, [esi+3Ch]
0x617395: push    1
0x617397: push    0
0x617399: push    ebp
0x61739A: call    Actor_ConsumePotion?
0x61739F: mov     [esp+14h+var_1], 1
0x6173A4: jmp     loc_6174D3
0x6173A9: mov     ecx, ebx
0x6173AB: call    sub_419E50
0x6173B0: test    al, al
0x6173B2: jnz     loc_617560; jumptable 00617362 cases 1,4,5
0x6173B8: push    0
0x6173BA: mov     ecx, ebx
0x6173BC: call    sub_41A610
0x6173C1: mov     al, [esp+14h+var_1]
0x6173C5: pop     ebp
0x6173C6: pop     ebx
0x6173C7: pop     edi
0x6173C8: pop     esi
0x6173C9: pop     ecx
0x6173CA: retn    8
0x6173CD: mov     eax, [edi+4]; jumptable 00617362 case 6
0x6173D0: test    eax, eax
0x6173D2: jz      loc_617560; jumptable 00617362 cases 1,4,5
0x6173D8: mov     eax, [eax+8]
0x6173DB: push    0; int
0x6173DD: push    offset ??_R0?AVTESObjectBOOK@@@8; struct TypeDescriptor *
0x6173E2: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x6173E7: push    0; int
0x6173E9: push    eax; void *
0x6173EA: call    OblivionDynamicCast
0x6173EF: mov     ebp, eax
0x6173F1: add     esp, 14h
0x6173F4: test    ebp, ebp
0x6173F6: jz      loc_617560; jumptable 00617362 cases 1,4,5
0x6173FC: mov     eax, [ebp+64h]
0x6173FF: test    eax, eax
0x617401: jz      loc_617560; jumptable 00617362 cases 1,4,5
0x617407: lea     ecx, [eax+18h]
0x61740A: call    sub_419CF0
0x61740F: test    al, al
0x617411: jz      short loc_617440
0x617413: push    edi
0x617414: mov     ecx, esi
0x617416: call    sub_615220
0x61741B: test    al, al
0x61741D: jnz     loc_617560; jumptable 00617362 cases 1,4,5
0x617423: mov     ecx, [esi+3Ch]
0x617426: mov     eax, [esp+14h+arg_4]
0x61742A: mov     edx, [ecx]
0x61742C: mov     edx, [edx+2D0h]
0x617432: push    eax
0x617433: push    ebp
0x617434: call    edx
0x617436: mov     [esp+1Ch+var_9], 1
0x61743B: jmp     loc_6174D3
0x617440: mov     eax, [ebp+64h]
0x617443: lea     ecx, [eax+18h]
0x617446: call    sub_419E50
0x61744B: test    al, al
0x61744D: jnz     loc_617560; jumptable 00617362 cases 1,4,5
0x617453: mov     ecx, [ebp+64h]
0x617456: push    0
0x617458: add     ecx, 18h
0x61745B: call    sub_41A610
0x617460: mov     al, [esp+14h+var_1]
0x617464: pop     ebp
0x617465: pop     ebx
0x617466: pop     edi
0x617467: pop     esi
0x617468: pop     ecx
0x617469: retn    8
0x61746C: mov     ecx, [edi]; jumptable 00617362 cases 0,2,3
0x61746E: call    sub_419CF0
0x617473: test    al, al
0x617475: jz      loc_617513
0x61747B: mov     eax, [esi+3Ch]
0x61747E: lea     ecx, [eax+5Ch]
0x617481: mov     eax, [ecx]
0x617483: mov     edx, [eax+30h]
0x617486: call    edx
0x617488: test    eax, eax
0x61748A: jnz     loc_617560; jumptable 00617362 cases 1,4,5
0x617490: push    eax
0x617491: push    eax
0x617492: push    edi
0x617493: mov     ecx, esi
0x617495: call    sub_613BB0
0x61749A: test    al, al
0x61749C: jz      loc_617560; jumptable 00617362 cases 1,4,5
0x6174A2: push    edi
0x6174A3: mov     ecx, esi
0x6174A5: call    sub_615220
0x6174AA: test    al, al
0x6174AC: jnz     loc_617560; jumptable 00617362 cases 1,4,5
0x6174B2: mov     ecx, [esp+14h+arg_4]
0x6174B6: mov     eax, [esi+3Ch]
0x6174B9: mov     edx, [edi]
0x6174BB: push    0
0x6174BD: push    ecx
0x6174BE: push    edx
0x6174BF: lea     ecx, [eax+5Ch]
0x6174C2: call    MagicCaster_CastMagicItem
0x6174C7: test    al, al
0x6174C9: mov     [esp+14h+var_1], al
0x6174CD: jz      loc_617560; jumptable 00617362 cases 1,4,5
0x6174D3: cmp     edi, [esi+84h]
0x6174D9: setz    al
0x6174DC: mov     [esi+1AEh], al
0x6174E2: cmp     byte ptr ds:0B3B908h, 0
0x6174E9: jz      short loc_617560; jumptable 00617362 cases 1,4,5
0x6174EB: mov     ecx, [esp+14h+arg_4]
0x6174EF: push    0; int
0x6174F1: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x6174F6: push    offset ??_R0?AVMagicTarget@@@8; struct _s_RTTICompleteObjectLocator *
0x6174FB: push    0; int
0x6174FD: push    ecx; void *
0x6174FE: call    OblivionDynamicCast
0x617503: add     esp, 14h
0x617506: test    eax, eax
0x617508: jz      short loc_617533
0x61750A: mov     ecx, eax; this
0x61750C: call    TESObjectREFR_GetName
0x617511: jmp     short loc_617538
0x617513: mov     ecx, [edi]
0x617515: call    sub_419E50
0x61751A: test    al, al
0x61751C: jnz     short loc_617560; jumptable 00617362 cases 1,4,5
0x61751E: mov     ecx, [edi]
0x617520: push    0
0x617522: call    sub_41A610
0x617527: mov     al, [esp+14h+var_1]
0x61752B: pop     ebp
0x61752C: pop     ebx
0x61752D: pop     edi
0x61752E: pop     esi
0x61752F: pop     ecx
0x617530: retn    8
0x617533: mov     eax, offset aSelf; "Self"
0x617538: mov     edi, [edi]
0x61753A: mov     ecx, [edi+4]
0x61753D: test    ecx, ecx
0x61753F: jnz     short loc_617546
0x617541: mov     ecx, offset EmptyString
0x617546: mov     esi, [esi+3Ch]
0x617549: push    eax
0x61754A: push    ecx
0x61754B: mov     ecx, esi; this
0x61754D: call    TESObjectREFR_GetName
0x617552: push    eax
0x617553: push    offset a_20sCastsSAt_2; "%.20s casts %s at %.20s"
0x617558: call    Interface_ConsolePrint
0x61755D: add     esp, 10h
0x617560: pop     ebp; jumptable 00617362 cases 1,4,5
0x617561: pop     ebx
