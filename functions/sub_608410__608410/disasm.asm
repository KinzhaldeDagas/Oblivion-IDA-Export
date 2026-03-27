0x608410: sub     esp, 2Ch
0x608413: mov     eax, [esp+2Ch+arg_4]
0x608417: push    ebx
0x608418: push    ebp
0x608419: push    esi
0x60841A: push    edi
0x60841B: mov     ebp, ecx
0x60841D: mov     ecx, [esp+3Ch+arg_0]
0x608421: push    eax
0x608422: push    ecx
0x608423: mov     ecx, ebp
0x608425: call    MobileObject_LoadModifiedForm
0x60842A: mov     ecx, ds:0B33B00h
0x608430: xor     edi, edi
0x608432: mov     dword ptr [esp+3Ch+a1.member.type], edi
0x608436: xor     ebx, ebx
0x608438: call    sub_45A170
0x60843D: test    al, al
0x60843F: jz      loc_6084DE
0x608445: mov     ecx, ds:0B33B00h
0x60844B: push    4; Size
0x60844D: lea     edx, [esp+40h+a1.member.flags]
0x608451: push    edx; Dst
0x608452: call    SaveLoad_LoadData
0x608457: cmp     [esp+3Ch+a1.member.flags], 4B4F4C42h
0x60845F: jz      short loc_6084C9
0x608461: mov     eax, ds:0B33B00h
0x608466: mov     esi, [eax+80h]
0x60846C: cmp     esi, edi
0x60846E: jz      short loc_6084AD
0x608470: mov     eax, [esi]
0x608472: push    eax; a1
0x608473: call    TESForm_LookupByFormID
0x608478: mov     ecx, [esi+5]
0x60847B: movzx   edx, byte ptr [esi+9]
0x60847F: add     esp, 4
0x608482: push    ecx
0x608483: push    edx
0x608484: mov     edx, [eax]
0x608486: mov     ecx, eax
0x608488: mov     eax, [edx+0D4h]
0x60848E: call    eax
0x608490: mov     ecx, [esi]
0x608492: push    eax
0x608493: push    ecx
0x608494: push    8F1h
0x608499: push    offset a_AiArrowprojec; ".\\AI\\ArrowProjectile.cpp"
0x60849E: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x6084A3: call    PrintError
0x6084A8: add     esp, 1Ch
0x6084AB: jmp     short loc_6084C9
0x6084AD: movzx   edx, byte ptr [eax+7Ch]
0x6084B1: push    edx
0x6084B2: push    8F1h
0x6084B7: push    offset a_AiArrowprojec; ".\\AI\\ArrowProjectile.cpp"
0x6084BC: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x6084C1: call    PrintError
0x6084C6: add     esp, 10h
0x6084C9: mov     ecx, ds:0B33B00h
0x6084CF: mov     ebx, [ecx+14h]
0x6084D2: push    2; Size
0x6084D4: lea     eax, [esp+40h+a1.member]
0x6084D8: push    eax; Dst
0x6084D9: call    SaveLoad_LoadData
0x6084DE: mov     ecx, ds:0B33B00h
0x6084E4: push    4; Size
0x6084E6: lea     esi, [ebp+60h]
0x6084E9: push    esi; Dst
0x6084EA: call    SaveLoad_LoadData
0x6084EF: push    4; a2
0x6084F1: lea     ecx, [ebp+64h]
0x6084F4: push    ecx; a1
0x6084F5: mov     ecx, ebp
0x6084F7: call    TESForm_LoadDataFromCurrentSaveGame
0x6084FC: push    4; a2
0x6084FE: lea     edx, [ebp+68h]
0x608501: push    edx; a1
0x608502: mov     ecx, ebp
0x608504: call    TESForm_LoadDataFromCurrentSaveGame
0x608509: push    4; a2
0x60850B: lea     eax, [ebp+6Ch]
0x60850E: push    eax; a1
0x60850F: mov     ecx, ebp
0x608511: call    TESForm_LoadDataFromCurrentSaveGame
0x608516: push    4; a2
0x608518: lea     ecx, [ebp+70h]
0x60851B: push    ecx; a1
0x60851C: mov     ecx, ebp
0x60851E: call    TESForm_LoadDataFromCurrentSaveGame
0x608523: push    4; a2
0x608525: lea     edx, [ebp+74h]
0x608528: push    edx; a1
0x608529: mov     ecx, ebp
0x60852B: call    TESForm_LoadDataFromCurrentSaveGame
0x608530: push    0Ch; a2
0x608532: lea     eax, [ebp+88h]
0x608538: push    eax; a1
0x608539: mov     ecx, ebp
0x60853B: call    TESForm_LoadDataFromCurrentSaveGame
0x608540: push    4; a2
0x608542: lea     ecx, [esp+40h+a1.member.refID]
0x608546: push    ecx; a1
0x608547: mov     ecx, ebp
0x608549: call    TESForm_LoadFormIDFromCurrentSaveGame
0x60854E: mov     edx, dword ptr [esp+44h+a1.member.type]
0x608552: push    4; a2
0x608554: lea     eax, [esp+48h+a1.member.flags]
0x608558: push    eax; a1
0x608559: mov     ecx, ebp
0x60855B: mov     [ebp+78h], edx
0x60855E: call    TESForm_LoadFormIDFromCurrentSaveGame
0x608563: mov     ecx, [esp+4Ch+a1.vtbl]
0x608567: push    4; a2
0x608569: lea     edx, [esp+50h+a1.member]
0x60856D: mov     [ebp+7Ch], ecx
0x608570: push    edx; a1
0x608571: mov     ecx, ebp
0x608573: call    TESForm_LoadFormIDFromCurrentSaveGame
0x608578: mov     eax, [esp+54h+var_30]
0x60857C: mov     [ebp+84h], eax
0x608582: mov     ecx, ds:0B33B00h
0x608588: cmp     byte ptr [ecx+7Ch], 20h ; ' '
0x60858C: jnb     short loc_60859B
0x60858E: push    8
0x608590: call    SaveLoad_AdvanceBufferOffset
0x608595: mov     ecx, ds:0B33B00h
0x60859B: mov     [esp+54h+var_10], 0
0x6085A0: cmp     byte ptr [ecx+7Ch], 20h ; ' '
0x6085A4: jb      short loc_6085C0
0x6085A6: push    1; a2
0x6085A8: lea     ecx, [esp+58h+var_10]
0x6085AC: push    ecx; a1
0x6085AD: mov     ecx, ebp
0x6085AF: call    TESForm_LoadDataFromCurrentSaveGame
0x6085B4: mov     ecx, ds:0B33B00h
0x6085BA: cmp     byte ptr [ecx+7Ch], 20h ; ' '
0x6085BE: jnb     short loc_6085DD
0x6085C0: mov     esi, [esi]
0x6085C2: cmp     esi, 1
0x6085C5: jz      short loc_6085D6
0x6085C7: cmp     esi, 2
0x6085CA: jz      short loc_6085D6
0x6085CC: mov     [esp+54h+var_10], 0
0x6085D1: jmp     loc_608745
0x6085D6: mov     [esp+54h+var_10], 1
0x6085DB: jmp     short loc_6085E8
0x6085DD: cmp     [esp+54h+var_10], 0
0x6085E2: jz      loc_608745
0x6085E8: push    54h ; 'T'; Size
0x6085EA: call    FormHeapAlloc
0x6085EF: mov     [ebp+5Ch], eax
0x6085F2: mov     [eax+2Ch], edi
0x6085F5: mov     edx, [ebp+5Ch]
0x6085F8: mov     [edx+28h], edi
0x6085FB: mov     edi, [ebp+5Ch]
0x6085FE: add     esp, 4
0x608601: add     edi, 30h ; '0'
0x608604: mov     ecx, 9
0x608609: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x60860E: rep movsd
0x608610: mov     eax, [ebp+5Ch]
0x608613: mov     ecx, ds:0B33B00h
0x608619: push    4; Size
0x60861B: push    eax; Dst
0x60861C: call    SaveLoad_LoadData
0x608621: mov     ecx, [ebp+5Ch]
0x608624: add     ecx, 4
0x608627: push    0Ch; a2
0x608629: push    ecx; a1
0x60862A: mov     ecx, ebp
0x60862C: call    TESForm_LoadDataFromCurrentSaveGame
0x608631: mov     edx, [ebp+5Ch]
0x608634: push    0Ch; a2
0x608636: add     edx, 10h
0x608639: push    edx; a1
0x60863A: mov     ecx, ebp
0x60863C: call    TESForm_LoadDataFromCurrentSaveGame
0x608641: mov     eax, [ebp+5Ch]
0x608644: push    0Ch; a2
0x608646: add     eax, 1Ch
0x608649: push    eax; a1
0x60864A: mov     ecx, ebp
0x60864C: call    TESForm_LoadDataFromCurrentSaveGame
0x608651: mov     ecx, ds:0B33B00h
0x608657: cmp     byte ptr [ecx+7Ch], 50h ; 'P'
0x60865B: jb      short loc_60867F
0x60865D: push    10h; Size
0x60865F: lea     edx, [esp+58h+a1.member]
0x608663: push    edx; Dst
0x608664: call    SaveLoad_LoadData
0x608669: mov     eax, [ebp+5Ch]
0x60866C: add     eax, 30h ; '0'
0x60866F: push    eax
0x608670: lea     ecx, [esp+58h+a1.member]
0x608674: call    sub_47C600
0x608679: mov     ecx, ds:0B33B00h
0x60867F: mov     edx, [ebp+5Ch]
0x608682: mov     eax, [edx]
0x608684: cmp     eax, 1
0x608687: jz      short loc_608691
0x608689: test    eax, eax
0x60868B: jnz     loc_608745
0x608691: push    4; a2
0x608693: lea     eax, [esp+58h+a1]
0x608697: push    eax; a1
0x608698: mov     ecx, ebp
0x60869A: call    TESForm_LoadFormIDFromCurrentSaveGame
0x60869F: mov     ecx, [ebp+5Ch]
0x6086A2: mov     edx, [esp+5Ch+var_34]
0x6086A6: mov     [ecx+28h], edx
0x6086A9: mov     ecx, ds:0B33B00h
0x6086AF: cmp     byte ptr [ecx+7Ch], 20h ; ' '
0x6086B3: jb      short loc_6086F2
0x6086B5: push    2; a2
0x6086B7: lea     eax, [esp+60h+a1.member.modlist]
0x6086BB: push    eax; a1
0x6086BC: mov     ecx, ebp
0x6086BE: call    TESForm_LoadDataFromCurrentSaveGame
0x6086C3: push    2; a2
0x6086C5: lea     ecx, [esp+60h+var_4C]
0x6086C9: push    ecx; a1
0x6086CA: mov     ecx, ebp
0x6086CC: call    TESForm_LoadDataFromCurrentSaveGame
0x6086D1: movzx   edx, word ptr [esp+5Ch+a1.member.modlist.data]
0x6086D6: movsx   eax, word ptr [esp+5Ch+var_4C.vtbl]
0x6086DB: mov     ecx, [ebp+5Ch]
0x6086DE: shl     edx, 10h
0x6086E1: add     edx, eax
0x6086E3: mov     [ecx+2Ch], edx
0x6086E6: mov     ecx, ds:0B33B00h
0x6086EC: cmp     byte ptr [ecx+7Ch], 20h ; ' '
0x6086F0: jnb     short loc_608745
0x6086F2: push    1; a2
0x6086F4: lea     edx, [esp+60h+a1.member.modlist]
0x6086F8: push    edx; a1
0x6086F9: mov     ecx, ebp
0x6086FB: call    TESForm_LoadDataFromCurrentSaveGame
0x608700: movzx   eax, byte ptr [esp+5Ch+a1.member.modlist.data]
0x608705: add     eax, 1
0x608708: push    1
0x60870A: push    eax
0x60870B: mov     ecx, offset FormHeap
0x608710: call    j_MemoryHeap_Alloc
0x608715: mov     esi, eax
0x608717: movzx   eax, byte ptr [esp+5Ch+a1.member.modlist.data]
0x60871C: add     eax, 1
0x60871F: push    eax
0x608720: push    0
0x608722: push    esi
0x608723: call    __memset
0x608728: movzx   ecx, byte ptr [esp+68h+a1.member.modlist.data]
0x60872D: add     esp, 0Ch
0x608730: push    ecx; a2
0x608731: push    esi; a1
0x608732: mov     ecx, ebp
0x608734: call    TESForm_LoadDataFromCurrentSaveGame
0x608739: mov     edx, [ebp+5Ch]
0x60873C: mov     [edx+2Ch], esi
0x60873F: mov     ecx, ds:0B33B00h
0x608745: cmp     byte ptr [ecx+7Ch], 54h ; 'T'
0x608749: jb      short loc_608761
0x60874B: push    1; a2
0x60874D: lea     eax, [ebp+95h]
0x608753: push    eax; a1
0x608754: mov     ecx, ebp
0x608756: call    TESForm_LoadDataFromCurrentSaveGame
0x60875B: mov     ecx, ds:0B33B00h
0x608761: cmp     byte ptr [ecx+7Ch], 55h ; 'U'
0x608765: jb      short loc_60877D
0x608767: push    1; a2
0x608769: lea     ecx, [ebp+96h]
0x60876F: push    ecx; a1
0x608770: mov     ecx, ebp
0x608772: call    TESForm_LoadDataFromCurrentSaveGame
0x608777: mov     ecx, ds:0B33B00h
0x60877D: call    sub_45A170
0x608782: test    al, al
0x608784: jz      loc_60889D
0x60878A: mov     ecx, ds:0B33B00h
0x608790: mov     edi, [ecx+80h]
0x608796: test    edi, edi
0x608798: mov     esi, [ecx+14h]
0x60879B: jz      loc_608843
0x6087A1: mov     edx, [edi]
0x6087A3: push    edx; a1
0x6087A4: call    TESForm_LookupByFormID
0x6087A9: mov     ecx, eax
0x6087AB: movzx   eax, word ptr [esp+58h+var_4C.member.refID]
0x6087B0: add     eax, ebx
0x6087B2: add     esp, 4
0x6087B5: cmp     esi, eax
0x6087B7: jbe     short loc_6087FB
0x6087B9: mov     edx, [edi+5]
0x6087BC: movzx   eax, byte ptr [edi+9]
0x6087C0: push    edx
0x6087C1: mov     edx, [ecx]
0x6087C3: push    eax
0x6087C4: mov     eax, [edx+0D4h]
0x6087CA: call    eax
0x6087CC: mov     ecx, [edi]
0x6087CE: movzx   edx, word ptr [esp+5Ch+var_4C.member.refID]
0x6087D3: push    eax
0x6087D4: push    ecx
0x6087D5: push    961h
0x6087DA: sub     esi, edx
0x6087DC: push    offset a_AiArrowprojec; ".\\AI\\ArrowProjectile.cpp"
0x6087E1: sub     esi, ebx
0x6087E3: push    esi; ArgList
0x6087E4: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x6087E9: call    PrintError
0x6087EE: add     esp, 20h
0x6087F1: pop     edi
0x6087F2: pop     esi
0x6087F3: pop     ebp
0x6087F4: pop     ebx
0x6087F5: add     esp, 2Ch
0x6087F8: retn    8
0x6087FB: jnb     loc_60889D
0x608801: mov     eax, [edi+5]
0x608804: movzx   edx, byte ptr [edi+9]
0x608808: push    eax
0x608809: mov     eax, [ecx]
0x60880B: push    edx
0x60880C: mov     edx, [eax+0D4h]
0x608812: call    edx
0x608814: movzx   ecx, word ptr [esp+5Ch+var_4C.member.refID]
0x608819: push    eax
0x60881A: mov     eax, [edi]
0x60881C: push    eax
0x60881D: push    961h
0x608822: sub     ecx, esi
0x608824: push    offset a_AiArrowprojec; ".\\AI\\ArrowProjectile.cpp"
0x608829: add     ecx, ebx
0x60882B: push    ecx; ArgList
0x60882C: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x608831: call    PrintError
0x608836: add     esp, 20h
0x608839: pop     edi
0x60883A: pop     esi
0x60883B: pop     ebp
0x60883C: pop     ebx
0x60883D: add     esp, 2Ch
0x608840: retn    8
0x608843: movzx   eax, word ptr [esp+54h+var_4C.member.refID]
0x608848: lea     edx, [eax+ebx]
0x60884B: cmp     esi, edx
0x60884D: jbe     short loc_60887A
0x60884F: movzx   edx, byte ptr [ecx+7Ch]
0x608853: push    edx
0x608854: push    961h
0x608859: sub     esi, eax
0x60885B: push    offset a_AiArrowprojec; ".\\AI\\ArrowProjectile.cpp"
0x608860: sub     esi, ebx
0x608862: push    esi; ArgList
0x608863: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x608868: call    PrintError
0x60886D: add     esp, 14h
0x608870: pop     edi
0x608871: pop     esi
0x608872: pop     ebp
0x608873: pop     ebx
0x608874: add     esp, 2Ch
0x608877: retn    8
0x60887A: jnb     short loc_60889D
0x60887C: movzx   ecx, byte ptr [ecx+7Ch]
0x608880: push    ecx
0x608881: push    961h
0x608886: sub     eax, esi
0x608888: push    offset a_AiArrowprojec; ".\\AI\\ArrowProjectile.cpp"
0x60888D: add     eax, ebx
0x60888F: push    eax; ArgList
0x608890: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x608895: call    PrintError
0x60889A: add     esp, 14h
0x60889D: pop     edi
0x60889E: pop     esi
0x60889F: pop     ebp
0x6088A0: pop     ebx
0x6088A1: add     esp, 2Ch
0x6088A4: retn    8
