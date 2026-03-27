0x665340: sub     esp, 14Ch
0x665346: mov     eax, ds:0B30AACh
0x66534B: xor     eax, esp
0x66534D: mov     [esp+14Ch+var_4], eax
0x665354: push    ebx
0x665355: push    esi
0x665356: mov     esi, ecx
0x665358: mov     ecx, ds:0B33B00h
0x66535E: xor     ebx, ebx
0x665360: push    edi
0x665361: mov     [esp+158h+var_15C.member.modlist.data], ebx
0x665365: call    sub_45A170
0x66536A: test    al, al
0x66536C: jz      loc_66540B
0x665372: mov     ecx, ds:0B33B00h
0x665378: push    4; Size
0x66537A: lea     eax, [esp+15Ch+Dst]
0x66537E: push    eax; Dst
0x66537F: call    SaveLoad_LoadData
0x665384: cmp     dword ptr [esp+158h+Dst], 4B4F4C42h
0x66538C: jz      short loc_6653F6
0x66538E: mov     eax, ds:0B33B00h
0x665393: mov     edi, [eax+80h]
0x665399: cmp     edi, ebx
0x66539B: jz      short loc_6653DA
0x66539D: mov     ecx, [edi]
0x66539F: push    ecx; a1
0x6653A0: call    TESForm_LookupByFormID
0x6653A5: mov     edx, [edi+5]
0x6653A8: movzx   ecx, byte ptr [edi+9]
0x6653AC: add     esp, 4
0x6653AF: push    edx
0x6653B0: mov     edx, [eax]
0x6653B2: push    ecx
0x6653B3: mov     ecx, eax
0x6653B5: mov     eax, [edx+0D4h]
0x6653BB: call    eax
0x6653BD: mov     ecx, [edi]
0x6653BF: push    eax
0x6653C0: push    ecx
0x6653C1: push    2525h
0x6653C6: push    offset a_AiPlayerchara; ".\\AI\\PlayerCharacter.cpp"
0x6653CB: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x6653D0: call    PrintError
0x6653D5: add     esp, 1Ch
0x6653D8: jmp     short loc_6653F6
0x6653DA: movzx   edx, byte ptr [eax+7Ch]
0x6653DE: push    edx
0x6653DF: push    2525h
0x6653E4: push    offset a_AiPlayerchara; ".\\AI\\PlayerCharacter.cpp"
0x6653E9: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x6653EE: call    PrintError
0x6653F3: add     esp, 10h
0x6653F6: mov     ecx, ds:0B33B00h
0x6653FC: mov     ebx, [ecx+14h]
0x6653FF: push    2; Size
0x665401: lea     eax, [esp+15Ch+var_15C.member.modlist]
0x665405: push    eax; Dst
0x665406: call    SaveLoad_LoadData
0x66540B: mov     ecx, ds:0B33B00h
0x665411: cmp     byte ptr [ecx+7Ch], 3Bh ; ';'
0x665415: mov     ecx, esi
0x665417: jnb     short loc_665476
0x665419: push    11Ch; a2
0x66541E: lea     edx, [esi+204h]
0x665424: push    edx; a1
0x665425: call    TESForm_LoadDataFromCurrentSaveGame
0x66542A: fldz
0x66542C: push    11Ch; a2
0x665431: fstp    dword ptr [esi+320h]
0x665437: lea     eax, [esi+324h]
0x66543D: push    eax; a1
0x66543E: mov     ecx, esi
0x665440: call    TESForm_LoadDataFromCurrentSaveGame
0x665445: fldz
0x665447: fstp    dword ptr [esi+440h]
0x66544D: mov     ecx, ds:0B33B00h
0x665453: cmp     byte ptr [ecx+7Ch], 31h ; '1'
0x665457: jb      short loc_6654AD
0x665459: push    11Ch; a2
0x66545E: lea     edx, [esi+450h]
0x665464: push    edx; a1
0x665465: mov     ecx, esi
0x665467: call    TESForm_LoadDataFromCurrentSaveGame
0x66546C: fldz
0x66546E: fstp    dword ptr [esi+56Ch]
0x665474: jmp     short loc_6654AD
0x665476: push    120h; a2
0x66547B: lea     eax, [esi+204h]
0x665481: push    eax; a1
0x665482: call    TESForm_LoadDataFromCurrentSaveGame
0x665487: push    120h; a2
0x66548C: lea     ecx, [esi+324h]
0x665492: push    ecx; a1
0x665493: mov     ecx, esi
0x665495: call    TESForm_LoadDataFromCurrentSaveGame
0x66549A: push    120h; a2
0x66549F: lea     edx, [esi+450h]
0x6654A5: push    edx; a1
0x6654A6: mov     ecx, esi
0x6654A8: call    TESForm_LoadDataFromCurrentSaveGame
0x6654AD: push    ebp
0x6654AE: push    4; a2
0x6654B0: lea     eax, [esi+444h]
0x6654B6: push    eax; a1
0x6654B7: mov     ecx, esi
0x6654B9: call    TESForm_LoadDataFromCurrentSaveGame
0x6654BE: push    4; a2
0x6654C0: lea     ecx, [esi+448h]
0x6654C6: push    ecx; a1
0x6654C7: mov     ecx, esi
0x6654C9: call    TESForm_LoadDataFromCurrentSaveGame
0x6654CE: push    4; a2
0x6654D0: lea     edx, [esi+44Ch]
0x6654D6: push    edx; a1
0x6654D7: mov     ecx, esi
0x6654D9: call    TESForm_LoadDataFromCurrentSaveGame
0x6654DE: mov     ecx, ds:0B33B00h
0x6654E4: call    sub_45A170
0x6654E9: test    al, al
0x6654EB: jz      loc_6655EB
0x6654F1: mov     ecx, ds:0B33B00h
0x6654F7: mov     ebp, [ecx+80h]
0x6654FD: test    ebp, ebp
0x6654FF: mov     edi, [ecx+14h]
0x665502: jz      loc_6655A1
0x665508: mov     eax, [ebp+0]
0x66550B: push    eax; a1
0x66550C: call    TESForm_LookupByFormID
0x665511: movzx   edx, word ptr [esp+160h+var_15C.member.modlist.data]
0x665516: mov     ecx, eax
0x665518: lea     eax, [edx+ebx]
0x66551B: add     esp, 4
0x66551E: cmp     edi, eax
0x665520: jbe     short loc_665560
0x665522: mov     eax, [ebp+5]
0x665525: movzx   edx, byte ptr [ebp+9]
0x665529: push    eax
0x66552A: mov     eax, [ecx]
0x66552C: push    edx
0x66552D: mov     edx, [eax+0D4h]
0x665533: call    edx
0x665535: movzx   ecx, word ptr [esp+164h+var_15C.member.modlist.data]
0x66553A: push    eax
0x66553B: mov     eax, [ebp+0]
0x66553E: push    eax
0x66553F: push    253Fh
0x665544: sub     edi, ecx
0x665546: push    offset a_AiPlayerchara; ".\\AI\\PlayerCharacter.cpp"
0x66554B: sub     edi, ebx
0x66554D: push    edi; ArgList
0x66554E: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x665553: call    PrintError
0x665558: add     esp, 20h
0x66555B: jmp     loc_6655EB
0x665560: jnb     loc_6655EB
0x665566: mov     edx, [ebp+5]
0x665569: movzx   eax, byte ptr [ebp+9]
0x66556D: push    edx
0x66556E: mov     edx, [ecx]
0x665570: push    eax
0x665571: mov     eax, [edx+0D4h]
0x665577: call    eax
0x665579: mov     ecx, [ebp+0]
0x66557C: movzx   edx, word ptr [esp+164h+var_15C.member.modlist.data]
0x665581: push    eax
0x665582: push    ecx
0x665583: push    253Fh
0x665588: sub     edx, edi
0x66558A: push    offset a_AiPlayerchara; ".\\AI\\PlayerCharacter.cpp"
0x66558F: add     edx, ebx
0x665591: push    edx; ArgList
0x665592: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x665597: call    PrintError
0x66559C: add     esp, 20h
0x66559F: jmp     short loc_6655EB
0x6655A1: movzx   eax, word ptr [esp+15Ch+var_15C.member.modlist.data]
0x6655A6: lea     edx, [eax+ebx]
0x6655A9: cmp     edi, edx
0x6655AB: jbe     short loc_6655C8
0x6655AD: movzx   ecx, byte ptr [ecx+7Ch]
0x6655B1: push    ecx
0x6655B2: push    253Fh
0x6655B7: sub     edi, eax
0x6655B9: push    offset a_AiPlayerchara; ".\\AI\\PlayerCharacter.cpp"
0x6655BE: sub     edi, ebx
0x6655C0: push    edi
0x6655C1: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x6655C6: jmp     short loc_6655E3
0x6655C8: jnb     short loc_6655EB
0x6655CA: movzx   edx, byte ptr [ecx+7Ch]
0x6655CE: push    edx
0x6655CF: push    253Fh
0x6655D4: sub     eax, edi
0x6655D6: push    offset a_AiPlayerchara; ".\\AI\\PlayerCharacter.cpp"
0x6655DB: add     eax, ebx
0x6655DD: push    eax; ArgList
0x6655DE: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x6655E3: call    PrintError
0x6655E8: add     esp, 14h
0x6655EB: xor     ebx, ebx
0x6655ED: push    ebx
0x6655EE: call    sub_5AD980
0x6655F3: mov     eax, [esp+160h+arg_4]
0x6655FA: mov     ebp, [esp+160h+arg_0]
0x665601: add     esp, 4
0x665604: push    eax
0x665605: push    ebp
0x665606: mov     ecx, esi
0x665608: call    j_Actor_LoadGame
0x66560D: push    ebx
0x66560E: call    sub_5AD980
0x665613: mov     ecx, ds:0B33B00h
0x665619: add     esp, 4
0x66561C: mov     [esp+15Ch+var_13C], ebx
0x665620: mov     [esp+15Ch+anonymous_0], ebx
0x665624: call    sub_45A170
0x665629: test    al, al
0x66562B: jz      loc_6656CE
0x665631: push    4; Size
0x665633: lea     ecx, [esp+160h+var_10C]
0x665637: push    ecx; Dst
0x665638: mov     ecx, ds:0B33B00h
0x66563E: call    SaveLoad_LoadData
0x665643: cmp     [esp+15Ch+var_10C], 4B4F4C42h
0x66564B: jz      short loc_6656B5
0x66564D: mov     eax, ds:0B33B00h
0x665652: mov     edi, [eax+80h]
0x665658: cmp     edi, ebx
0x66565A: jz      short loc_665699
0x66565C: mov     edx, [edi]
0x66565E: push    edx; a1
0x66565F: call    TESForm_LookupByFormID
0x665664: mov     ecx, [edi+5]
0x665667: movzx   edx, byte ptr [edi+9]
0x66566B: add     esp, 4
0x66566E: push    ecx
0x66566F: push    edx
0x665670: mov     edx, [eax]
0x665672: mov     ecx, eax
0x665674: mov     eax, [edx+0D4h]
0x66567A: call    eax
0x66567C: mov     ecx, [edi]
0x66567E: push    eax
0x66567F: push    ecx
0x665680: push    2546h
0x665685: push    offset a_AiPlayerchara; ".\\AI\\PlayerCharacter.cpp"
0x66568A: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x66568F: call    PrintError
0x665694: add     esp, 1Ch
0x665697: jmp     short loc_6656B5
0x665699: movzx   edx, byte ptr [eax+7Ch]
0x66569D: push    edx
0x66569E: push    2546h
0x6656A3: push    offset a_AiPlayerchara; ".\\AI\\PlayerCharacter.cpp"
0x6656A8: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x6656AD: call    PrintError
0x6656B2: add     esp, 10h
0x6656B5: mov     ecx, ds:0B33B00h
0x6656BB: mov     eax, [ecx+14h]
0x6656BE: push    2; Size
0x6656C0: lea     edx, [esp+160h+var_13C]
0x6656C4: push    edx; Dst
0x6656C5: mov     [esp+164h+anonymous_0], eax
0x6656C9: call    SaveLoad_LoadData
0x6656CE: test    ebp, 2000000h
0x6656D4: jz      short loc_6656E6
0x6656D6: mov     eax, [esi+5CCh]
0x6656DC: push    eax
0x6656DD: push    esi
0x6656DE: call    sub_470780
0x6656E3: add     esp, 8
0x6656E6: push    1; a2
0x6656E8: lea     ecx, [esi+588h]
0x6656EE: push    ecx; a1
0x6656EF: mov     ecx, esi
0x6656F1: call    TESForm_LoadDataFromCurrentSaveGame
0x6656F6: push    1; a2
0x6656F8: lea     edx, [esi+589h]
0x6656FE: push    edx; a1
0x6656FF: mov     ecx, esi
0x665701: call    TESForm_LoadDataFromCurrentSaveGame
0x665706: push    1; a2
0x665708: lea     eax, [esi+58Bh]
0x66570E: push    eax; a1
0x66570F: mov     ecx, esi
0x665711: call    TESForm_LoadDataFromCurrentSaveGame
0x665716: push    1; a2
0x665718: lea     ecx, [esi+58Ch]
0x66571E: push    ecx; a1
0x66571F: mov     ecx, esi
0x665721: call    TESForm_LoadDataFromCurrentSaveGame
0x665726: push    4; a2
0x665728: lea     edx, [esi+590h]
0x66572E: push    edx; a1
0x66572F: mov     ecx, esi
0x665731: call    TESForm_LoadDataFromCurrentSaveGame
0x665736: push    4; a2
0x665738: lea     eax, [esi+59Ch]
0x66573E: push    eax; a1
0x66573F: mov     ecx, esi
0x665741: call    TESForm_LoadDataFromCurrentSaveGame
0x665746: push    4; a2
0x665748: lea     ecx, [esi+5A0h]
0x66574E: push    ecx; a1
0x66574F: mov     ecx, esi
0x665751: call    TESForm_LoadDataFromCurrentSaveGame
0x665756: push    4; a2
0x665758: lea     edx, [esi+5A4h]
0x66575E: push    edx; a1
0x66575F: mov     ecx, esi
0x665761: call    TESForm_LoadDataFromCurrentSaveGame
0x665766: push    1; a2
0x665768: lea     eax, [esi+5A8h]
0x66576E: push    eax; a1
0x66576F: mov     ecx, esi
0x665771: call    TESForm_LoadDataFromCurrentSaveGame
0x665776: push    1; a2
0x665778: lea     ecx, [esi+600h]
0x66577E: push    ecx; a1
0x66577F: mov     ecx, esi
0x665781: call    TESForm_LoadDataFromCurrentSaveGame
0x665786: push    4; a2
0x665788: lea     edx, [esi+604h]
0x66578E: push    edx; a1
0x66578F: mov     ecx, esi
0x665791: call    TESForm_LoadDataFromCurrentSaveGame
0x665796: push    4; a2
0x665798: lea     eax, [esi+608h]
0x66579E: push    eax; a1
0x66579F: mov     ecx, esi
0x6657A1: call    TESForm_LoadDataFromCurrentSaveGame
0x6657A6: push    4; a2
0x6657A8: lea     ecx, [esi+60Ch]
0x6657AE: push    ecx; a1
0x6657AF: mov     ecx, esi
0x6657B1: call    TESForm_LoadDataFromCurrentSaveGame
0x6657B6: push    1; a2
0x6657B8: lea     edx, [esi+610h]
0x6657BE: push    edx; a1
0x6657BF: mov     ecx, esi
0x6657C1: call    TESForm_LoadDataFromCurrentSaveGame
0x6657C6: push    1; a2
0x6657C8: lea     eax, [esi+611h]
0x6657CE: push    eax; a1
0x6657CF: mov     ecx, esi
0x6657D1: call    TESForm_LoadDataFromCurrentSaveGame
0x6657D6: push    4; a2
0x6657D8: lea     ecx, [esi+614h]
0x6657DE: push    ecx; a1
0x6657DF: mov     ecx, esi
0x6657E1: call    TESForm_LoadDataFromCurrentSaveGame
0x6657E6: push    1; a2
0x6657E8: lea     edx, [esi+620h]
0x6657EE: push    edx; a1
0x6657EF: mov     ecx, esi
0x6657F1: call    TESForm_LoadDataFromCurrentSaveGame
0x6657F6: push    4; a2
0x6657F8: lea     eax, [esi+61Ch]
0x6657FE: push    eax; a1
0x6657FF: mov     ecx, esi
0x665801: call    TESForm_LoadDataFromCurrentSaveGame
0x665806: push    0Ch; a2
0x665808: lea     ecx, [esi+62Ch]
0x66580E: push    ecx; a1
0x66580F: mov     ecx, esi
0x665811: call    TESForm_LoadDataFromCurrentSaveGame
0x665816: push    4; a2
0x665818: lea     edx, [esi+5D4h]
0x66581E: push    edx; a1
0x66581F: mov     ecx, esi
0x665821: call    TESForm_LoadDataFromCurrentSaveGame
0x665826: push    4; a2
0x665828: lea     eax, [esi+640h]
0x66582E: push    eax; a1
0x66582F: mov     ecx, esi
0x665831: call    TESForm_LoadDataFromCurrentSaveGame
0x665836: push    4; a2
0x665838: lea     ecx, [esi+5BCh]
0x66583E: push    ecx; a1
0x66583F: mov     ecx, esi
0x665841: call    TESForm_LoadDataFromCurrentSaveGame
0x665846: push    4; a2
0x665848: lea     edx, [esi+648h]
0x66584E: push    edx; a1
0x66584F: mov     ecx, esi
0x665851: call    TESForm_LoadDataFromCurrentSaveGame
0x665856: mov     ecx, ds:0B33B00h
0x66585C: push    4; Size
0x66585E: lea     eax, [esi+64Ch]
0x665864: push    eax; Dst
0x665865: call    SaveLoad_LoadData
0x66586A: push    1; a2
0x66586C: lea     ecx, [esi+594h]
0x665872: push    ecx; a1
0x665873: mov     ecx, esi
0x665875: call    TESForm_LoadDataFromCurrentSaveGame
0x66587A: push    4; a2
0x66587C: lea     edx, [esi+598h]
0x665882: push    edx; a1
0x665883: mov     ecx, esi
0x665885: call    TESForm_LoadDataFromCurrentSaveGame
0x66588A: push    1; a2
0x66588C: lea     eax, [esi+6E4h]
0x665892: push    eax; a1
0x665893: mov     ecx, esi
0x665895: call    TESForm_LoadDataFromCurrentSaveGame
0x66589A: push    1; a2
0x66589C: lea     ecx, [esi+6E5h]
0x6658A2: push    ecx; a1
0x6658A3: mov     ecx, esi
0x6658A5: call    TESForm_LoadDataFromCurrentSaveGame
0x6658AA: push    1; a2
0x6658AC: lea     edx, [esi+6E6h]
0x6658B2: push    edx; a1
0x6658B3: mov     ecx, esi
0x6658B5: call    TESForm_LoadDataFromCurrentSaveGame
0x6658BA: push    4; a2
0x6658BC: lea     eax, [esi+6F4h]
0x6658C2: push    eax; a1
0x6658C3: mov     ecx, esi
0x6658C5: call    TESForm_LoadDataFromCurrentSaveGame
0x6658CA: push    4; a2
0x6658CC: lea     ecx, [esi+6F8h]
0x6658D2: push    ecx; a1
0x6658D3: mov     ecx, esi
0x6658D5: call    TESForm_LoadDataFromCurrentSaveGame
0x6658DA: push    4; a2
0x6658DC: lea     edx, [esi+6FCh]
0x6658E2: push    edx; a1
0x6658E3: mov     ecx, esi
0x6658E5: call    TESForm_LoadDataFromCurrentSaveGame
0x6658EA: mov     ecx, ds:0B33B00h
0x6658F0: cmp     byte ptr [ecx+7Ch], 1Dh
0x6658F4: jb      short loc_66590C
0x6658F6: push    4; a2
0x6658F8: lea     eax, [esi+714h]
0x6658FE: push    eax; a1
0x6658FF: mov     ecx, esi
0x665901: call    TESForm_LoadDataFromCurrentSaveGame
0x665906: mov     ecx, ds:0B33B00h
0x66590C: cmp     byte ptr [ecx+7Ch], 22h ; '"'
0x665910: jb      short loc_665928
0x665912: push    1; a2
0x665914: lea     ecx, [esi+5C0h]
0x66591A: push    ecx; a1
0x66591B: mov     ecx, esi
0x66591D: call    TESForm_LoadDataFromCurrentSaveGame
0x665922: mov     ecx, ds:0B33B00h
0x665928: mov     al, [ecx+7Ch]
0x66592B: cmp     al, 28h ; '('
0x66592D: jb      short loc_66595A
0x66592F: cmp     al, 2Dh ; '-'
0x665931: jnb     short loc_66595A
0x665933: push    1
0x665935: call    SaveLoad_AdvanceBufferOffset
0x66593A: push    0Ch; a2
0x66593C: lea     edi, [esi+720h]
0x665942: push    edi; a1
0x665943: mov     ecx, esi
0x665945: call    TESForm_LoadDataFromCurrentSaveGame
0x66594A: push    0Ch; a2
0x66594C: push    edi; a1
0x66594D: mov     ecx, esi
0x66594F: call    TESForm_LoadDataFromCurrentSaveGame
0x665954: mov     ecx, ds:0B33B00h
0x66595A: mov     al, [ecx+7Ch]
0x66595D: cmp     al, 35h ; '5'
0x66595F: jb      short loc_665972
0x665961: cmp     al, 71h ; 'q'
0x665963: jnb     short loc_665972
0x665965: push    4
0x665967: call    SaveLoad_AdvanceBufferOffset
0x66596C: mov     ecx, ds:0B33B00h
0x665972: cmp     byte ptr [ecx+7Ch], 39h ; '9'
0x665976: jb      short loc_66599E
0x665978: push    70h ; 'p'; a2
0x66597A: lea     edx, [esi+658h]
0x665980: push    edx; a1
0x665981: mov     ecx, esi
0x665983: call    TESForm_LoadDataFromCurrentSaveGame
0x665988: push    18h; a2
0x66598A: lea     eax, [esi+6C8h]
0x665990: push    eax; a1
0x665991: mov     ecx, esi
0x665993: call    TESForm_LoadDataFromCurrentSaveGame
0x665998: mov     ecx, ds:0B33B00h
0x66599E: cmp     byte ptr [ecx+7Ch], 3Fh ; '?'
0x6659A2: jb      short loc_6659BA
0x6659A4: push    1; a2
0x6659A6: lea     ecx, [esi+738h]
0x6659AC: push    ecx; a1
0x6659AD: mov     ecx, esi
0x6659AF: call    TESForm_LoadDataFromCurrentSaveGame
0x6659B4: mov     ecx, ds:0B33B00h
0x6659BA: cmp     byte ptr [ecx+7Ch], 40h ; '@'
0x6659BE: jb      short loc_6659F4
0x6659C0: push    4; Size
0x6659C2: lea     edx, [esi+57Ch]
0x6659C8: push    edx; Dst
0x6659C9: call    SaveLoad_LoadData
0x6659CE: push    4; a2
0x6659D0: lea     eax, [esi+580h]
0x6659D6: push    eax; a1
0x6659D7: mov     ecx, esi
0x6659D9: call    TESForm_LoadDataFromCurrentSaveGame
0x6659DE: push    4; a2
0x6659E0: lea     ecx, [esi+584h]
0x6659E6: push    ecx; a1
0x6659E7: mov     ecx, esi
0x6659E9: call    TESForm_LoadDataFromCurrentSaveGame
0x6659EE: mov     ecx, ds:0B33B00h
0x6659F4: cmp     byte ptr [ecx+7Ch], 49h ; 'I'
0x6659F8: jb      short loc_665A20
0x6659FA: push    4; a2
0x6659FC: lea     edx, [esi+110h]
0x665A02: push    edx; a1
0x665A03: mov     ecx, esi
0x665A05: call    TESForm_LoadDataFromCurrentSaveGame
0x665A0A: push    1; a2
0x665A0C: lea     eax, [esi+200h]
0x665A12: push    eax; a1
0x665A13: mov     ecx, esi
0x665A15: call    TESForm_LoadDataFromCurrentSaveGame
0x665A1A: mov     ecx, ds:0B33B00h
0x665A20: mov     al, [ecx+7Ch]
0x665A23: cmp     al, 4Ah ; 'J'
0x665A25: jb      short loc_665A38
0x665A27: cmp     al, 59h ; 'Y'
0x665A29: jnb     short loc_665A38
0x665A2B: push    8
0x665A2D: call    SaveLoad_AdvanceBufferOffset
0x665A32: mov     ecx, ds:0B33B00h
0x665A38: mov     al, [ecx+7Ch]
0x665A3B: cmp     al, 59h ; 'Y'
0x665A3D: jb      short loc_665A50
0x665A3F: cmp     al, 5Ah ; 'Z'
0x665A41: jnb     short loc_665A50
0x665A43: push    4
0x665A45: call    SaveLoad_AdvanceBufferOffset
0x665A4A: mov     ecx, ds:0B33B00h
0x665A50: mov     bl, 63h ; 'c'
0x665A52: cmp     [ecx+7Ch], bl
0x665A55: jb      short loc_665AB8
0x665A57: push    1; a2
0x665A59: lea     ecx, [esp+160h+var_15C.member.modlist]
0x665A5D: push    ecx; a1
0x665A5E: mov     ecx, esi
0x665A60: call    TESForm_LoadDataFromCurrentSaveGame
0x665A65: mov     al, byte ptr [esp+15Ch+var_15C.member.modlist.data]
0x665A69: test    al, al
0x665A6B: jz      short loc_665AB2
0x665A6D: cmp     dword ptr [esi+5B0h], 0
0x665A74: jnz     short loc_665A9C
0x665A76: movzx   eax, al
0x665A79: xor     ecx, ecx
0x665A7B: mov     edx, 4
0x665A80: mul     edx
0x665A82: seto    cl
0x665A85: neg     ecx
0x665A87: or      ecx, eax
0x665A89: push    ecx; Size
0x665A8A: call    FormHeapAlloc
0x665A8F: mov     [esi+5B0h], eax
0x665A95: mov     al, byte ptr [esp+160h+var_15C.member.modlist.data]
0x665A99: add     esp, 4
0x665A9C: mov     ecx, [esi+5B0h]
0x665AA2: movzx   eax, al
0x665AA5: add     eax, eax
0x665AA7: add     eax, eax
0x665AA9: push    eax; a2
0x665AAA: push    ecx; a1
0x665AAB: mov     ecx, esi
0x665AAD: call    TESForm_LoadDataFromCurrentSaveGame
0x665AB2: mov     ecx, ds:0B33B00h
0x665AB8: cmp     byte ptr [ecx+7Ch], 71h ; 'q'
0x665ABC: jb      short loc_665B04
0x665ABE: push    1; a2
0x665AC0: lea     edx, [esi+58Ah]
0x665AC6: push    edx; a1
0x665AC7: mov     ecx, esi
0x665AC9: call    TESForm_LoadDataFromCurrentSaveGame
0x665ACE: push    1; a2
0x665AD0: lea     eax, [esi+5A9h]
0x665AD6: push    eax; a1
0x665AD7: mov     ecx, esi
0x665AD9: call    TESForm_LoadDataFromCurrentSaveGame
0x665ADE: push    4; a2
0x665AE0: lea     ecx, [esi+718h]
0x665AE6: push    ecx; a1
0x665AE7: mov     ecx, esi
0x665AE9: call    TESForm_LoadDataFromCurrentSaveGame
0x665AEE: push    4; a2
0x665AF0: lea     edx, [esi+760h]
0x665AF6: push    edx; a1
0x665AF7: mov     ecx, esi
0x665AF9: call    TESForm_LoadFormIDFromCurrentSaveGame
0x665AFE: mov     ecx, ds:0B33B00h
0x665B04: cmp     byte ptr [ecx+7Ch], 78h ; 'x'
0x665B08: jb      short loc_665B2C
0x665B0A: push    1; a2
0x665B0C: push    offset byte_B3BAEA; a1
0x665B11: mov     ecx, esi
0x665B13: call    TESForm_LoadDataFromCurrentSaveGame
0x665B18: push    4; a2
0x665B1A: push    offset flt_B3BAFC; a1
0x665B1F: mov     ecx, esi
0x665B21: call    TESForm_LoadDataFromCurrentSaveGame
0x665B26: mov     ecx, ds:0B33B00h
0x665B2C: cmp     byte ptr [ecx+7Ch], 7Ah ; 'z'
0x665B30: jb      short loc_665B40
0x665B32: push    4; a2
0x665B34: push    (offset qword_B3BB20+4); a1
0x665B39: mov     ecx, esi
0x665B3B: call    TESForm_LoadDataFromCurrentSaveGame
0x665B40: push    4; a2
0x665B42: lea     eax, [esp+168h+var_15C.member.modlist]
0x665B46: push    eax; a1
0x665B47: mov     ecx, esi
0x665B49: call    TESForm_LoadFormIDFromCurrentSaveGame
0x665B4E: mov     ecx, [esp+16Ch+var_15C.member.flags]
0x665B52: push    4; a2
0x665B54: lea     edx, [esp+170h+var_130]
0x665B58: mov     [esi+118h], ecx
0x665B5E: push    edx; a1
0x665B5F: mov     ecx, esi
0x665B61: call    TESForm_LoadFormIDFromCurrentSaveGame
0x665B66: mov     eax, [esp+174h+anonymous_0]
0x665B6A: push    4; a2
0x665B6C: lea     ecx, [esp+178h+var_130]
0x665B70: push    ecx; a1
0x665B71: mov     ecx, esi
0x665B73: mov     [esi+644h], eax
0x665B79: call    TESForm_LoadFormIDFromCurrentSaveGame
0x665B7E: mov     edx, [esp+17Ch+anonymous_0]
0x665B82: push    0
0x665B84: mov     ecx, esi
0x665B86: mov     ds:0B3BAD0h, edx
0x665B8C: call    PlayerCharacter_SetCurrentMagicItem
0x665B91: push    4; a2
0x665B93: lea     eax, [esp+180h+var_130]
0x665B97: push    eax; a1
0x665B98: mov     ecx, esi
0x665B9A: call    TESForm_LoadFormIDFromCurrentSaveGame
0x665B9F: mov     ecx, [esp+184h+anonymous_0]
0x665BA3: push    4; a2
0x665BA5: lea     edx, [esp+188h+var_15C.member]
0x665BA9: mov     [esi+624h], ecx
0x665BAF: push    edx; a1
0x665BB0: mov     ecx, esi
0x665BB2: call    TESForm_LoadFormIDFromCurrentSaveGame
0x665BB7: mov     eax, [esp+18Ch+var_174.member.modlist.next]
0x665BBB: push    4; a2
0x665BBD: lea     ecx, [esp+190h+var_15C.member.flags]
0x665BC1: push    ecx; a1
0x665BC2: mov     ecx, esi
0x665BC4: mov     [esi+1E8h], eax
0x665BCA: call    TESForm_LoadFormIDFromCurrentSaveGame
0x665BCF: mov     edx, [esp+194h+var_15C.vtbl]
0x665BD3: push    4; a2
0x665BD5: lea     eax, [esp+198h+var_15C.member.modlist]
0x665BD9: push    eax; a1
0x665BDA: mov     ecx, esi
0x665BDC: mov     [esi+1ECh], edx
0x665BE2: call    TESForm_LoadFormIDFromCurrentSaveGame
0x665BE7: mov     ecx, [esp+19Ch+var_15C.member.flags]
0x665BEB: push    4; a2
0x665BED: lea     edx, [esp+1A0h+var_15C]
0x665BF1: mov     [esi+1E0h], ecx
0x665BF7: push    edx; a1
0x665BF8: mov     ecx, esi
0x665BFA: call    TESForm_LoadFormIDFromCurrentSaveGame
0x665BFF: mov     eax, [esp+1A4h+var_174.member.modlist.data]
0x665C03: push    0; int
0x665C05: push    offset ??_R0?AVTESRegion@@@8; struct TypeDescriptor *
0x665C0A: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x665C0F: push    0; int
0x665C11: push    eax; a1
0x665C12: call    TESForm_LookupByFormID
0x665C17: add     esp, 4
0x665C1A: push    eax; void *
0x665C1B: call    OblivionDynamicCast
0x665C20: add     esp, 14h
0x665C23: push    4; a2
0x665C25: lea     ecx, [esp+1A8h+var_174]
0x665C29: push    ecx; a1
0x665C2A: mov     ecx, esi
0x665C2C: mov     [esi+6E8h], eax
0x665C32: call    TESForm_LoadFormIDFromCurrentSaveGame
0x665C37: mov     edx, [esp+1ACh+var_18C.member.modlist.data]
0x665C3B: push    4; a2
0x665C3D: lea     eax, [esp+1B0h+var_18C.member.modlist.next]
0x665C41: push    eax; a1
0x665C42: mov     ecx, esi
0x665C44: mov     [esi+628h], edx
0x665C4A: call    TESForm_LoadFormIDFromCurrentSaveGame
0x665C4F: mov     ecx, [esp+1B4h+var_18C.member.refID]
0x665C53: push    4; a2
0x665C55: lea     edx, [esp+1B8h+var_18C]
0x665C59: mov     [esi+650h], ecx
0x665C5F: push    edx; a1
0x665C60: mov     ecx, esi
0x665C62: call    TESForm_LoadFormIDFromCurrentSaveGame
0x665C67: mov     eax, [esp+1BCh+var_194]
0x665C6B: mov     [esi+6E0h], eax
0x665C71: mov     ecx, ds:0B33B00h
0x665C77: mov     al, [ecx+7Ch]
0x665C7A: cmp     al, 28h ; '('
0x665C7C: jb      short loc_665CA3
0x665C7E: cmp     al, 2Dh ; '-'
0x665C80: jnb     short loc_665CA3
0x665C82: push    4; a2
0x665C84: lea     edx, [esp+1C0h+var_1AC]
0x665C88: push    edx; a1
0x665C89: mov     ecx, esi
0x665C8B: call    TESForm_LoadFormIDFromCurrentSaveGame
0x665C90: mov     eax, [esp+1C4h+var_1C8.member.modlist.next]
0x665C94: push    eax; a1
0x665C95: call    TESForm_LookupByFormID
0x665C9A: add     esp, 4
0x665C9D: mov     [esi+72Ch], eax
0x665CA3: mov     ecx, ds:0B33B00h
0x665CA9: cmp     byte ptr [ecx+7Ch], 40h ; '@'
0x665CAD: jb      short loc_665CC7
0x665CAF: push    4; a2
0x665CB1: lea     edx, [esp+1C8h+var_1C8.member.modlist.next]
0x665CB5: push    edx; a1
0x665CB6: mov     ecx, esi
0x665CB8: call    TESForm_LoadFormIDFromCurrentSaveGame
0x665CBD: mov     eax, [esp+1CCh+var_1C8.member.refID]
0x665CC1: mov     [esi+578h], eax
0x665CC7: mov     ecx, ds:0B33B00h
0x665CCD: cmp     byte ptr [ecx+7Ch], 42h ; 'B'
0x665CD1: jb      short loc_665CEA
0x665CD3: push    4; a2
0x665CD5: lea     edx, [esp+1D0h+var_1C8.member.refID]
0x665CD9: push    edx; a1
0x665CDA: mov     ecx, esi
0x665CDC: call    TESForm_LoadFormIDFromCurrentSaveGame
0x665CE1: mov     eax, dword ptr [esp+1D4h+var_1C8.member.type]
0x665CE5: mov     ds:0B3BAD4h, eax
0x665CEA: mov     ecx, ds:0B33B00h
0x665CF0: cmp     byte ptr [ecx+7Ch], 57h ; 'W'
0x665CF4: jb      short loc_665D2E
0x665CF6: push    4; a2
0x665CF8: lea     edx, [esp+1D8h+var_1C8.member]
0x665CFC: push    edx; a1
0x665CFD: mov     ecx, esi
0x665CFF: call    TESForm_LoadFormIDFromCurrentSaveGame
0x665D04: mov     eax, [esp+1DCh+anonymous_3]
0x665D08: push    0; int
0x665D0A: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x665D0F: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x665D14: push    0; int
0x665D16: push    eax; a1
0x665D17: call    TESForm_LookupByFormID
0x665D1C: add     esp, 4
0x665D1F: push    eax; void *
0x665D20: call    OblivionDynamicCast
0x665D25: add     esp, 14h
0x665D28: mov     [esi+570h], eax
0x665D2E: mov     ecx, ds:0B33B00h
0x665D34: cmp     byte ptr [ecx+7Ch], 60h ; '`'
0x665D38: jb      short loc_665D66
0x665D3A: push    4; a2
0x665D3C: lea     edx, [esp+1E0h+anonymous_3]
0x665D40: push    edx; a1
0x665D41: mov     ecx, esi
0x665D43: call    TESForm_LoadFormIDFromCurrentSaveGame
0x665D48: mov     eax, [esp+1E4h+anonymous_4]
0x665D4C: push    eax; a1
0x665D4D: call    TESForm_LookupByFormID
0x665D52: add     esp, 4
0x665D55: test    eax, eax
0x665D57: mov     [esi+638h], eax
0x665D5D: jz      short loc_665D66
0x665D5F: mov     ecx, esi
0x665D61: call    sub_663D30
0x665D66: mov     ecx, ds:0B33B00h
0x665D6C: cmp     [ecx+7Ch], bl
0x665D6F: jb      loc_665E26
0x665D75: push    2; a2
0x665D77: lea     edx, [esp+1E8h+anonymous_4]
0x665D7B: push    edx; a1
0x665D7C: mov     ecx, esi
0x665D7E: call    TESForm_LoadDataFromCurrentSaveGame
0x665D83: cmp     word ptr [esp+1E4h+anonymous_4], 0
0x665D89: jz      short loc_665DB0
0x665D8B: push    8; Size
0x665D8D: call    FormHeapAlloc
0x665D92: add     esp, 4
0x665D95: test    eax, eax
0x665D97: jz      short loc_665DA8
0x665D99: mov     dword ptr [eax], 0
0x665D9F: mov     dword ptr [eax+4], 0
0x665DA6: jmp     short loc_665DAA
0x665DA8: xor     eax, eax
0x665DAA: mov     [esi+5ACh], eax
0x665DB0: xor     ebx, ebx
0x665DB2: cmp     word ptr [esp+1E4h+anonymous_4], bx
0x665DB7: jbe     short loc_665E26
0x665DB9: lea     esp, [esp+0]
0x665DC0: push    4; a2
0x665DC2: lea     eax, [esp+1E8h+var_1C8]
0x665DC6: push    eax; a1
0x665DC7: mov     ecx, esi
0x665DC9: call    TESForm_LoadFormIDFromCurrentSaveGame
0x665DCE: mov     eax, [esp+1ECh+anonymous_5]
0x665DD2: test    eax, eax
0x665DD4: mov     edi, [esi+5ACh]
0x665DDA: mov     ebp, eax
0x665DDC: jz      short loc_665E1A
0x665DDE: cmp     dword ptr [edi], 0
0x665DE1: jz      short loc_665E18
0x665DE3: push    8; Size
0x665DE5: call    FormHeapAlloc
0x665DEA: add     esp, 4
0x665DED: test    eax, eax
0x665DEF: jz      short loc_665E09
0x665DF1: mov     ecx, [edi]
0x665DF3: mov     [eax], ecx
0x665DF5: mov     dword ptr [eax+4], 0
0x665DFC: mov     edx, [edi+4]
0x665DFF: mov     [eax+4], edx
0x665E02: mov     [edi+4], eax
0x665E05: mov     [edi], ebp
0x665E07: jmp     short loc_665E1A
0x665E09: mov     edx, [edi+4]
0x665E0C: xor     eax, eax
0x665E0E: mov     [eax+4], edx
0x665E11: mov     [edi+4], eax
0x665E14: mov     [edi], ebp
0x665E16: jmp     short loc_665E1A
0x665E18: mov     [edi], eax
0x665E1A: movzx   eax, word ptr [esp+1ECh+anonymous_6]
0x665E1F: add     ebx, 1
0x665E22: cmp     ebx, eax
0x665E24: jb      short loc_665DC0
0x665E26: mov     ecx, ds:0B33B00h
0x665E2C: cmp     byte ptr [ecx+7Ch], 6Ch ; 'l'
0x665E30: jb      short loc_665E75
0x665E32: push    4; a2
0x665E34: lea     edx, [esp+1F0h+anonymous_5]
0x665E38: push    edx; a1
0x665E39: mov     ecx, esi
0x665E3B: call    TESForm_LoadFormIDFromCurrentSaveGame
0x665E40: mov     eax, [esp+1F4h+anonymous_7]
0x665E44: push    0; int
0x665E46: push    offset ??_R0?AVTESWeather@@@8; struct TypeDescriptor *
0x665E4B: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x665E50: push    0; int
0x665E52: push    eax; a1
0x665E53: call    TESForm_LookupByFormID
0x665E58: add     esp, 4
0x665E5B: push    eax; void *
0x665E5C: call    OblivionDynamicCast
0x665E61: mov     ecx, [esi+6E8h]
0x665E67: add     esp, 14h
0x665E6A: test    ecx, ecx
0x665E6C: jz      short loc_665E75
0x665E6E: test    eax, eax
0x665E70: jz      short loc_665E75
0x665E72: mov     [ecx+24h], eax
0x665E75: mov     ecx, ds:0B33B00h
0x665E7B: cmp     byte ptr [ecx+7Ch], 6Fh ; 'o'
0x665E7F: jb      short loc_665EE6
0x665E81: lea     edi, [esi+788h]
0x665E87: mov     ecx, edi
0x665E89: call    NiTMap_Clear
0x665E8E: push    2; a2
0x665E90: lea     edx, [esp+1F8h+var_1F8.member.modlist.next]
0x665E94: push    edx; a1
0x665E95: mov     ecx, esi
0x665E97: call    TESForm_LoadDataFromCurrentSaveGame
0x665E9C: xor     ebx, ebx
0x665E9E: xor     ebp, ebp
0x665EA0: cmp     word ptr [esp+1F4h+var_1F8.member.modlist.next], bx
0x665EA5: jbe     short loc_665EE8
0x665EA7: push    4; a2
0x665EA9: lea     eax, [esp+1F8h+anonymous_7]
0x665EAD: push    eax; a1
0x665EAE: mov     ecx, esi
0x665EB0: call    TESForm_LoadFormIDFromCurrentSaveGame
0x665EB5: push    1; a2
0x665EB7: lea     ecx, [esp+200h+var_1F8.member.modlist]
0x665EBB: push    ecx; a1
0x665EBC: mov     ecx, esi
0x665EBE: call    TESForm_LoadDataFromCurrentSaveGame
0x665EC3: mov     eax, [esp+1FCh+a2]
0x665EC7: cmp     eax, ebx
0x665EC9: jz      short loc_665ED8
0x665ECB: mov     edx, [esp+1FCh+var_1F8.member.modlist.data]
0x665ECF: push    edx; a3
0x665ED0: push    eax; a2
0x665ED1: mov     ecx, edi; this
0x665ED3: call    NiTMap_SetAt
0x665ED8: movzx   eax, word ptr [esp+1FCh+var_1F8.member.refID]
0x665EDD: add     ebp, 1
0x665EE0: cmp     ebp, eax
0x665EE2: jb      short loc_665EA7
0x665EE4: jmp     short loc_665EE8
0x665EE6: xor     ebx, ebx
0x665EE8: mov     ecx, ds:0B33B00h
0x665EEE: cmp     byte ptr [ecx+7Ch], 73h ; 's'
0x665EF2: jb      loc_665F74
0x665EF8: push    2; a2
0x665EFA: lea     edx, [esp+200h+var_1F8.member.refID]
0x665EFE: push    edx; a1
0x665EFF: mov     ecx, esi
0x665F01: call    TESForm_LoadDataFromCurrentSaveGame
0x665F06: xor     ebp, ebp
0x665F08: cmp     word ptr [esp+1FCh+var_1F8.member.refID], bx
0x665F0D: jbe     short loc_665F74
0x665F0F: nop
0x665F10: push    4; a2
0x665F12: lea     eax, [esp+200h+var_1F8.member.modlist]
0x665F16: push    eax; a1
0x665F17: mov     ecx, esi
0x665F19: call    TESForm_LoadFormIDFromCurrentSaveGame
0x665F1E: mov     eax, [esp+204h+var_1F8.member.flags]
0x665F22: cmp     eax, ebx
0x665F24: mov     edi, eax
0x665F26: jz      short loc_665F68
0x665F28: cmp     ds:0B3BB44h, ebx
0x665F2E: jz      short loc_665F63
0x665F30: push    8; Size
0x665F32: call    FormHeapAlloc
0x665F37: add     esp, 4
0x665F3A: cmp     eax, ebx
0x665F3C: jz      short loc_665F4B
0x665F3E: mov     ecx, ds:0B3BB44h
0x665F44: mov     [eax], ecx
0x665F46: mov     [eax+4], ebx
0x665F49: jmp     short loc_665F4D
0x665F4B: xor     eax, eax
0x665F4D: mov     edx, ds:0B3BB48h
0x665F53: mov     [eax+4], edx
0x665F56: mov     ds:0B3BB48h, eax
0x665F5B: mov     ds:0B3BB44h, edi
0x665F61: jmp     short loc_665F68
0x665F63: mov     ds:0B3BB44h, eax
0x665F68: movzx   eax, word ptr [esp+204h+var_1F8.member.type]
0x665F6D: add     ebp, 1
0x665F70: cmp     ebp, eax
0x665F72: jb      short loc_665F10
0x665F74: mov     ecx, [esi+1E4h]
0x665F7A: push    esi
0x665F7B: push    ecx
0x665F7C: call    ActiveEffect_Base_LoadAEList?
0x665F81: add     esp, 8
0x665F84: push    54h ; 'T'; a2
0x665F86: lea     edx, [esi+130h]
0x665F8C: push    edx; a1
0x665F8D: mov     ecx, esi
0x665F8F: call    TESForm_LoadDataFromCurrentSaveGame
0x665F94: mov     ecx, esi
0x665F96: call    sub_663980
0x665F9B: mov     eax, ds:0B33B00h
0x665FA0: cmp     byte ptr [eax+7Ch], 58h ; 'X'
0x665FA4: jb      loc_66606E
0x665FAA: push    4; a2
0x665FAC: lea     ecx, [esp+208h+var_1F8.member]
0x665FB0: push    ecx; a1
0x665FB1: mov     ecx, esi
0x665FB3: mov     dword ptr [esp+20Ch+var_1F8.member.type], ebx
0x665FB7: call    TESForm_LoadDataFromCurrentSaveGame
0x665FBC: cmp     dword ptr [esp+204h+var_1F8.member.type], ebx
0x665FC0: jle     loc_66606E
0x665FC6: cmp     [esi+5B4h], ebx
0x665FCC: jnz     short loc_665FEB
0x665FCE: push    8; Size
0x665FD0: call    FormHeapAlloc
0x665FD5: add     esp, 4
0x665FD8: cmp     eax, ebx
0x665FDA: jz      short loc_665FE3
0x665FDC: mov     [eax], ebx
0x665FDE: mov     [eax+4], ebx
0x665FE1: jmp     short loc_665FE5
0x665FE3: xor     eax, eax
0x665FE5: mov     [esi+5B4h], eax
0x665FEB: cmp     dword ptr [esp+204h+var_1F8.member.type], ebx
0x665FEF: mov     [esp+204h+var_1F8.member.refID], ebx
0x665FF3: jle     short loc_66606E
0x665FF5: push    8; Size
0x665FF7: call    FormHeapAlloc
0x665FFC: add     esp, 4
0x665FFF: cmp     eax, ebx
0x666001: jz      short loc_66600E
0x666003: xor     ecx, ecx
0x666005: mov     [eax], ecx
0x666007: mov     [eax+4], ecx
0x66600A: mov     ebp, eax
0x66600C: jmp     short loc_666010
0x66600E: xor     ebp, ebp
0x666010: push    8; a2
0x666012: push    ebp; a1
0x666013: mov     ecx, esi
0x666015: call    TESForm_LoadDataFromCurrentSaveGame
0x66601A: cmp     ebp, ebx
0x66601C: jz      short loc_66605D
0x66601E: mov     edi, [esi+5B4h]
0x666024: cmp     [edi+4], ebx
0x666027: jz      short loc_666038
0x666029: lea     esp, [esp+0]
0x666030: mov     edi, [edi+4]
0x666033: cmp     [edi+4], ebx
0x666036: jnz     short loc_666030
0x666038: cmp     [edi], ebx
0x66603A: jz      short loc_66605B
0x66603C: push    8; Size
0x66603E: call    FormHeapAlloc
0x666043: add     esp, 4
0x666046: cmp     eax, ebx
0x666048: jz      short loc_666054
0x66604A: mov     [eax], ebp
0x66604C: mov     [eax+4], ebx
0x66604F: mov     [edi+4], eax
0x666052: jmp     short loc_66605D
0x666054: xor     eax, eax
0x666056: mov     [edi+4], eax
0x666059: jmp     short loc_66605D
0x66605B: mov     [edi], ebp
0x66605D: mov     eax, [esp+204h+var_1F8.member.refID]
0x666061: add     eax, 1
0x666064: cmp     eax, dword ptr [esp+204h+var_1F8.member.type]
0x666068: mov     [esp+204h+var_1F8.member.refID], eax
0x66606C: jl      short loc_665FF5
0x66606E: mov     edx, ds:0B33B00h
0x666074: cmp     byte ptr [edx+7Ch], 58h ; 'X'
0x666078: jnb     loc_666104
0x66607E: cmp     [esi+5B4h], ebx
0x666084: jnz     short loc_6660A3
0x666086: push    8; Size
0x666088: call    FormHeapAlloc
0x66608D: add     esp, 4
0x666090: cmp     eax, ebx
0x666092: jz      short loc_66609B
0x666094: mov     [eax], ebx
0x666096: mov     [eax+4], ebx
0x666099: jmp     short loc_66609D
0x66609B: xor     eax, eax
0x66609D: mov     [esi+5B4h], eax
0x6660A3: push    8; Size
0x6660A5: call    FormHeapAlloc
0x6660AA: add     esp, 4
0x6660AD: cmp     eax, ebx
0x6660AF: jz      short loc_6660BC
0x6660B1: xor     ecx, ecx
0x6660B3: mov     [eax], ecx
0x6660B5: mov     [eax+4], ecx
0x6660B8: mov     ebp, eax
0x6660BA: jmp     short loc_6660BE
0x6660BC: xor     ebp, ebp
0x6660BE: push    8; a2
0x6660C0: push    ebp; a1
0x6660C1: mov     ecx, esi
0x6660C3: call    TESForm_LoadDataFromCurrentSaveGame
0x6660C8: cmp     ebp, ebx
0x6660CA: jz      short loc_666104
0x6660CC: mov     edi, [esi+5B4h]
0x6660D2: cmp     [edi+4], ebx
0x6660D5: jz      short loc_6660DF
0x6660D7: mov     edi, [edi+4]
0x6660DA: cmp     [edi+4], ebx
0x6660DD: jnz     short loc_6660D7
0x6660DF: cmp     [edi], ebx
0x6660E1: jz      short loc_666102
0x6660E3: push    8; Size
0x6660E5: call    FormHeapAlloc
0x6660EA: add     esp, 4
0x6660ED: cmp     eax, ebx
0x6660EF: jz      short loc_6660FB
0x6660F1: mov     [eax], ebp
0x6660F3: mov     [eax+4], ebx
0x6660F6: mov     [edi+4], eax
0x6660F9: jmp     short loc_666104
0x6660FB: xor     eax, eax
0x6660FD: mov     [edi+4], eax
0x666100: jmp     short loc_666104
0x666102: mov     [edi], ebp
0x666104: push    3; a2
0x666106: lea     eax, [esi+5B8h]
0x66610C: push    eax; a1
0x66610D: mov     ecx, esi
0x66610F: call    TESForm_LoadDataFromCurrentSaveGame
0x666114: push    54h ; 'T'; a2
0x666116: lea     ecx, [esi+188h]
0x66611C: push    ecx; a1
0x66611D: mov     ecx, esi
0x66611F: call    TESForm_LoadDataFromCurrentSaveGame
0x666124: push    4; a2
0x666126: lea     edx, [esi+184h]
0x66612C: push    edx; a1
0x66612D: mov     ecx, esi
0x66612F: call    TESForm_LoadDataFromCurrentSaveGame
0x666134: push    1; a2
0x666136: lea     eax, [esi+1DCh]
0x66613C: push    eax; a1
0x66613D: mov     ecx, esi
0x66613F: call    TESForm_LoadDataFromCurrentSaveGame
0x666144: push    4; a2
0x666146: lea     ecx, [esp+208h+var_1F8.member.flags]
0x66614A: push    ecx; a1
0x66614B: mov     ecx, esi
0x66614D: call    TESForm_LoadFormIDFromCurrentSaveGame
0x666152: mov     eax, [esp+20Ch+var_1F8.vtbl]
0x666156: cmp     eax, ebx
0x666158: jz      short loc_666192
0x66615A: push    ebx; int
0x66615B: push    offset ??_R0?AVTESQuest@@@8; struct TypeDescriptor *
0x666160: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x666165: push    ebx; int
0x666166: push    eax; a1
0x666167: call    TESForm_LookupByFormID
0x66616C: add     esp, 4
0x66616F: push    eax; void *
0x666170: call    OblivionDynamicCast
0x666175: add     esp, 14h
0x666178: cmp     eax, ebx
0x66617A: mov     [esi+5F4h], eax
0x666180: jz      short loc_666198
0x666182: lea     edx, [esi+5F8h]
0x666188: push    edx
0x666189: mov     ecx, eax
0x66618B: call    sub_529A20
0x666190: jmp     short loc_666198
0x666192: mov     [esi+5F4h], ebx
0x666198: cmp     [esi+5E8h], ebx
0x66619E: lea     edi, [esi+5E4h]
0x6661A4: jz      short loc_6661BC
0x6661A6: mov     eax, [edi+4]
0x6661A9: mov     ebp, [eax+4]
0x6661AC: push    eax
0x6661AD: call    FormHeapFree
0x6661B2: add     esp, 4
0x6661B5: cmp     ebp, ebx
0x6661B7: mov     [edi+4], ebp
0x6661BA: jnz     short loc_6661A6
0x6661BC: push    2; a2
0x6661BE: lea     eax, [esp+210h+var_210.member.modlist.next]
0x6661C2: push    eax; a1
0x6661C3: mov     ecx, esi
0x6661C5: mov     dword ptr [edi], 0
0x6661CB: call    TESForm_LoadDataFromCurrentSaveGame
0x6661D0: xor     ebx, ebx
0x6661D2: cmp     word ptr [esp+20Ch+var_210.member.modlist.next], bx
0x6661D7: jbe     short loc_666251
0x6661D9: lea     esp, [esp+0]
0x6661E0: push    4; a2
0x6661E2: lea     ecx, [esp+210h+var_1F8]
0x6661E6: push    ecx; a1
0x6661E7: mov     ecx, esi
0x6661E9: call    TESForm_LoadFormIDFromCurrentSaveGame
0x6661EE: mov     edx, [esp+214h+var_210.member.modlist.data]
0x6661F2: push    0; int
0x6661F4: push    offset ??_R0?AVTESTopic@@@8; struct TypeDescriptor *
0x6661F9: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x6661FE: push    0; int
0x666200: push    edx; a1
0x666201: call    TESForm_LookupByFormID
0x666206: add     esp, 4
0x666209: push    eax; void *
0x66620A: call    OblivionDynamicCast
0x66620F: mov     ebp, eax
0x666211: add     esp, 14h
0x666214: test    ebp, ebp
0x666216: jz      short loc_666245
0x666218: cmp     dword ptr [edi], 0
0x66621B: jz      short loc_666243
0x66621D: push    8; Size
0x66621F: call    FormHeapAlloc
0x666224: add     esp, 4
0x666227: test    eax, eax
0x666229: jz      short loc_666238
0x66622B: mov     ecx, [edi]
0x66622D: mov     [eax], ecx
0x66622F: mov     dword ptr [eax+4], 0
0x666236: jmp     short loc_66623A
0x666238: xor     eax, eax
0x66623A: mov     edx, [edi+4]
0x66623D: mov     [eax+4], edx
0x666240: mov     [edi+4], eax
0x666243: mov     [edi], ebp
0x666245: movzx   eax, word ptr [esp+214h+var_210.member.refID]
0x66624A: add     ebx, 1
0x66624D: cmp     ebx, eax
0x66624F: jl      short loc_6661E0
0x666251: push    edi
0x666252: call    sub_52F6D0
0x666257: lea     ebx, [esi+5ECh]
0x66625D: add     esp, 4
0x666260: cmp     dword ptr [ebx+4], 0
0x666264: jz      short loc_66627C
0x666266: mov     eax, [ebx+4]
0x666269: mov     edi, [eax+4]
0x66626C: push    eax
0x66626D: call    FormHeapFree
0x666272: add     esp, 4
0x666275: test    edi, edi
0x666277: mov     [ebx+4], edi
0x66627A: jnz     short loc_666266
0x66627C: push    2; a2
0x66627E: lea     ecx, [esp+218h+var_210.member.refID]
0x666282: push    ecx; a1
0x666283: mov     ecx, esi
0x666285: mov     dword ptr [ebx], 0
0x66628B: call    TESForm_LoadDataFromCurrentSaveGame
0x666290: cmp     word ptr [esp+214h+var_210.member.refID], 0
0x666296: mov     [esp+214h+var_210.member.modlist.next], 0
0x66629E: jbe     loc_66636B
0x6662A4: push    4; a2
0x6662A6: lea     edx, [esp+218h+var_210.member.modlist]
0x6662AA: push    edx; a1
0x6662AB: mov     ecx, esi
0x6662AD: call    TESForm_LoadFormIDFromCurrentSaveGame
0x6662B2: push    1; a2
0x6662B4: lea     eax, [esp+220h+var_210.member.modlist]
0x6662B8: push    eax; a1
0x6662B9: mov     ecx, esi
0x6662BB: call    TESForm_LoadDataFromCurrentSaveGame
0x6662C0: push    1; a2
0x6662C2: lea     ecx, [esp+220h+var_1F8.member]
0x6662C6: push    ecx; a1
0x6662C7: mov     ecx, esi
0x6662C9: call    TESForm_LoadDataFromCurrentSaveGame
0x6662CE: mov     edx, [esp+21Ch+var_210.member.flags]
0x6662D2: push    0; int
0x6662D4: push    offset ??_R0?AVTESQuest@@@8; struct TypeDescriptor *
0x6662D9: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x6662DE: push    0; int
0x6662E0: push    edx; a1
0x6662E1: call    TESForm_LookupByFormID
0x6662E6: add     esp, 4
0x6662E9: push    eax; void *
0x6662EA: call    OblivionDynamicCast
0x6662EF: add     esp, 14h
0x6662F2: test    eax, eax
0x6662F4: jz      short loc_666353
0x6662F6: mov     ecx, [esp+21Ch+var_210.member.modlist.data]
0x6662FA: push    ecx
0x6662FB: mov     ecx, eax
0x6662FD: call    sub_529BB0
0x666302: test    eax, eax
0x666304: jz      short loc_666353
0x666306: mov     edx, dword ptr [esp+21Ch+var_1F8.member.type]
0x66630A: push    edx
0x66630B: mov     ecx, eax
0x66630D: call    sub_52AC30
0x666312: mov     ebp, eax
0x666314: test    ebp, ebp
0x666316: jz      short loc_666353
0x666318: mov     edi, ebx
0x66631A: cmp     dword ptr [edi+4], 0
0x66631E: jz      short loc_666329
0x666320: mov     edi, [edi+4]
0x666323: cmp     dword ptr [edi+4], 0
0x666327: jnz     short loc_666320
0x666329: cmp     dword ptr [edi], 0
0x66632C: jz      short loc_666351
0x66632E: push    8; Size
0x666330: call    FormHeapAlloc
0x666335: add     esp, 4
0x666338: test    eax, eax
0x66633A: jz      short loc_66634A
0x66633C: mov     [eax], ebp
0x66633E: mov     dword ptr [eax+4], 0
0x666345: mov     [edi+4], eax
0x666348: jmp     short loc_666353
0x66634A: xor     eax, eax
0x66634C: mov     [edi+4], eax
0x66634F: jmp     short loc_666353
0x666351: mov     [edi], ebp
0x666353: mov     eax, [esp+21Ch+var_210.member.refID]
0x666357: movzx   ecx, word ptr [esp+21Ch+var_210.member.type]
0x66635C: add     eax, 1
0x66635F: cmp     eax, ecx
0x666361: mov     [esp+21Ch+var_210.member.refID], eax
0x666365: jl      loc_6662A4
0x66636B: call    EffectSettingCollection_LoadKnownEffects?
0x666370: mov     edx, [esi]
0x666372: mov     eax, [edx+170h]
0x666378: mov     ecx, esi
0x66637A: call    eax
0x66637C: push    esi
0x66637D: mov     ecx, eax
0x66637F: call    sub_528D90
0x666384: push    1; a2
0x666386: lea     ecx, [esp+220h+var_210.member]
0x66638A: push    ecx; a1
0x66638B: mov     ecx, esi
0x66638D: call    TESForm_LoadDataFromCurrentSaveGame
0x666392: movzx   edx, [esp+21Ch+var_210.member.type]
0x666397: push    edx; a2
0x666398: lea     eax, [esp+220h+var_1C8]
0x66639C: push    eax; a1
0x66639D: mov     ecx, esi
0x66639F: call    TESForm_LoadDataFromCurrentSaveGame
0x6663A4: mov     edx, [esi]
0x6663A6: mov     eax, [edx+170h]
0x6663AC: mov     ecx, esi
0x6663AE: call    eax
0x6663B0: push    0; a3
0x6663B2: lea     ecx, [esp+220h+var_1C8]
0x6663B6: push    ecx; a2
0x6663B7: lea     ecx, [eax+0A4h]; this
0x6663BD: call    BSStringT_Set
0x6663C2: mov     edx, ds:0B33B00h
0x6663C8: cmp     byte ptr [edx+7Ch], 2Ch ; ','
0x6663CC: jb      short loc_666433
0x6663CE: push    0; a2
0x6663D0: mov     ecx, esi; this
0x6663D2: call    Actor_GetActorBaseForm
0x6663D7: mov     ecx, ds:0B33A98h
0x6663DD: mov     edi, eax
0x6663DF: mov     eax, ds:0B37C88h
0x6663E4: push    eax
0x6663E5: call    TESDataHandler_LookupTESClassByFormID
0x6663EA: push    4; a2
0x6663EC: lea     ecx, [esp+220h+var_210.member.flags]
0x6663F0: push    ecx; a1
0x6663F1: mov     ecx, esi
0x6663F3: mov     ebp, eax
0x6663F5: call    TESForm_LoadFormIDFromCurrentSaveGame
0x6663FA: mov     edx, [esp+224h+var_210.vtbl]
0x6663FE: push    0; int
0x666400: push    offset ??_R0?AVTESClass@@@8; struct TypeDescriptor *
0x666405: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x66640A: push    0; int
0x66640C: push    edx; a1
0x66640D: call    TESForm_LookupByFormID
0x666412: add     esp, 4
0x666415: push    eax; void *
0x666416: call    OblivionDynamicCast
0x66641B: add     esp, 14h
0x66641E: test    eax, eax
0x666420: jz      short loc_666433
0x666422: cmp     eax, ebp
0x666424: mov     [edi+104h], eax
0x66642A: jnz     short loc_666433
0x66642C: mov     ecx, eax
0x66642E: call    sub_51C490
0x666433: mov     eax, ds:0B33B00h
0x666438: cmp     byte ptr [eax+7Ch], 45h ; 'E'
0x66643C: pop     ebp
0x66643D: jb      short loc_66647B
0x66643F: push    4; a2
0x666441: lea     ecx, [esp+224h+var_210]
0x666445: push    ecx; a1
0x666446: mov     ecx, esi
0x666448: call    TESForm_LoadFormIDFromCurrentSaveGame
0x66644D: mov     eax, [esp+228h+var_218]
0x666451: test    eax, eax
0x666453: jz      short loc_66647B
0x666455: push    0; int
0x666457: push    offset ??_R0?AVTESClass@@@8; struct TypeDescriptor *
0x66645C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x666461: push    0; int
0x666463: push    eax; a1
0x666464: call    TESForm_LookupByFormID
0x666469: add     esp, 4
0x66646C: push    eax; void *
0x66646D: call    OblivionDynamicCast
0x666472: add     esp, 14h
0x666475: mov     [esi+654h], eax
0x66647B: mov     edx, ds:0B33B00h
0x666481: cmp     byte ptr [edx+7Ch], 7Eh ; '~'
0x666485: jb      short loc_6664A7
0x666487: push    1; a2
0x666489: lea     eax, [esi+116h]
0x66648F: push    eax; a1
0x666490: mov     ecx, esi
0x666492: call    TESForm_LoadDataFromCurrentSaveGame
0x666497: push    4; a2
0x666499: lea     ecx, [esi+700h]
0x66649F: push    ecx; a1
0x6664A0: mov     ecx, esi
0x6664A2: call    TESForm_LoadDataFromCurrentSaveGame
0x6664A7: mov     ecx, ds:0B33B00h
0x6664AD: call    sub_45A170
0x6664B2: test    al, al
0x6664B4: jz      loc_6665BA
0x6664BA: mov     ecx, ds:0B33B00h
0x6664C0: mov     edi, [ecx+80h]
0x6664C6: test    edi, edi
0x6664C8: mov     esi, [ecx+14h]
0x6664CB: jz      loc_66656C
0x6664D1: mov     edx, [edi]
0x6664D3: push    edx; a1
0x6664D4: call    TESForm_LookupByFormID
0x6664D9: movzx   ecx, word ptr [esp+22Ch+var_210.member.type]
0x6664DE: mov     ebx, [esp+22Ch+var_210.member.flags]
0x6664E2: add     ecx, ebx
0x6664E4: add     esp, 4
0x6664E7: cmp     esi, ecx
0x6664E9: jbe     short loc_66652A
0x6664EB: mov     edx, [edi+5]
0x6664EE: movzx   ecx, byte ptr [edi+9]
0x6664F2: push    edx
0x6664F3: mov     edx, [eax]
0x6664F5: push    ecx
0x6664F6: mov     ecx, eax
0x6664F8: mov     eax, [edx+0D4h]
0x6664FE: call    eax
0x666500: mov     ecx, [edi]
0x666502: movzx   edx, word ptr [esp+230h+var_210.member.type]
0x666507: push    eax
0x666508: push    ecx
0x666509: push    2709h
0x66650E: sub     esi, edx
0x666510: push    offset a_AiPlayerchara; ".\\AI\\PlayerCharacter.cpp"
0x666515: sub     esi, ebx
0x666517: push    esi; ArgList
0x666518: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x66651D: call    PrintError
0x666522: add     esp, 20h
0x666525: jmp     loc_6665BA
0x66652A: jnb     loc_6665BA
0x666530: mov     ecx, [edi+5]
0x666533: movzx   edx, byte ptr [edi+9]
0x666537: push    ecx
0x666538: push    edx
0x666539: mov     edx, [eax]
0x66653B: mov     ecx, eax
0x66653D: mov     eax, [edx+0D4h]
0x666543: call    eax
0x666545: mov     ecx, [edi]
0x666547: movzx   edx, word ptr [esp+230h+var_210.member.type]
0x66654C: push    eax
0x66654D: push    ecx
0x66654E: push    2709h
0x666553: sub     edx, esi
0x666555: push    offset a_AiPlayerchara; ".\\AI\\PlayerCharacter.cpp"
0x66655A: add     edx, ebx
0x66655C: push    edx; ArgList
0x66655D: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x666562: call    PrintError
0x666567: add     esp, 20h
0x66656A: jmp     short loc_6665BA
0x66656C: movzx   eax, word ptr [esp+228h+var_210.member.type]
0x666571: mov     edi, [esp+228h+var_210.member.flags]
0x666575: lea     edx, [eax+edi]
0x666578: cmp     esi, edx
0x66657A: jbe     short loc_666597
0x66657C: movzx   ecx, byte ptr [ecx+7Ch]
0x666580: push    ecx
0x666581: push    2709h
0x666586: sub     esi, eax
0x666588: push    offset a_AiPlayerchara; ".\\AI\\PlayerCharacter.cpp"
0x66658D: sub     esi, edi
0x66658F: push    esi
0x666590: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x666595: jmp     short loc_6665B2
0x666597: jnb     short loc_6665BA
0x666599: movzx   edx, byte ptr [ecx+7Ch]
0x66659D: push    edx
0x66659E: push    2709h
0x6665A3: sub     eax, esi
0x6665A5: push    offset a_AiPlayerchara; ".\\AI\\PlayerCharacter.cpp"
0x6665AA: add     eax, edi
0x6665AC: push    eax; ArgList
0x6665AD: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x6665B2: call    PrintError
0x6665B7: add     esp, 14h
0x6665BA: mov     ecx, [esp+228h+var_D4]
0x6665C1: pop     edi
0x6665C2: pop     esi
0x6665C3: pop     ebx
0x6665C4: xor     ecx, esp
0x6665C6: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6665CB: add     esp, 14Ch
0x6665D1: retn    8
