0x465130: push    0FFFFFFFFh
0x465132: push    offset TESSaveLoadGame_SaveGame?_SEH
0x465137: mov     eax, large fs:0
0x46513D: push    eax
0x46513E: sub     esp, 48h
0x465141: push    ebx
0x465142: push    ebp
0x465143: push    esi
0x465144: push    edi
0x465145: mov     eax, ds:0B30AACh
0x46514A: xor     eax, esp
0x46514C: push    eax
0x46514D: lea     eax, [esp+68h+var_C]
0x465151: mov     large fs:0, eax
0x465157: mov     ebp, ecx
0x465159: mov     eax, [ebp+18h]
0x46515C: mov     ebx, [esp+68h+arg_4]
0x465160: shr     eax, 9
0x465163: test    al, 1
0x465165: jnz     short loc_4651A5
0x465167: call    sub_452330
0x46516C: test    al, al
0x46516E: jnz     short loc_4651A5
0x465170: test    ebx, ebx
0x465172: jz      short loc_465186
0x465174: mov     edi, offset aAutosave; "autosave"
0x465179: mov     esi, ebx
0x46517B: mov     ecx, 9
0x465180: xor     edx, edx
0x465182: repe cmpsb
0x465184: jz      short loc_4651A5
0x465186: fld1
0x465188: mov     eax, ds:0B38788h
0x46518D: push    ecx
0x46518E: fstp    [esp+6Ch+duration]; duration
0x465191: push    1; unk2
0x465193: push    0; unk1
0x465195: push    eax; string
0x465196: call    GameUI_QueueMessage
0x46519B: add     esp, 10h
0x46519E: xor     al, al
0x4651A0: jmp     loc_465843
0x4651A5: mov     ecx, ds:0B3BF80h
0x4651AB: xor     edi, edi
0x4651AD: cmp     ecx, edi
0x4651AF: jz      short loc_4651B6
0x4651B1: call    sub_683490
0x4651B6: mov     ecx, ds:0B33A10h
0x4651BC: call    sub_432860
0x4651C1: mov     ecx, ebp
0x4651C3: call    ??0?$NiTMap@IPAV?$NiTSimpleList@PAUExpiredCellData@@@@@@QAE@XZ; NiTMap<uint,NiTSimpleList<ExpiredCellData *> *>::NiTMap<uint,NiTSimpleList<ExpiredCellData *> *>(void)
0x4651C8: mov     ecx, [ebp+18h]
0x4651CB: shr     ecx, 9
0x4651CE: xor     esi, esi
0x4651D0: test    cl, 1
0x4651D3: jnz     short loc_4651E5
0x4651D5: mov     edx, [esp+68h+arg_0]
0x4651D9: push    edi
0x4651DA: push    ebx
0x4651DB: push    edx
0x4651DC: mov     ecx, ebp
0x4651DE: call    Savegame_Rename
0x4651E3: mov     esi, eax
0x4651E5: cmp     byte ptr [esp+68h+arg_8], 0
0x4651EA: jz      short loc_465218
0x4651EC: push    8; Size
0x4651EE: call    FormHeapAlloc
0x4651F3: add     esp, 4
0x4651F6: mov     [esp+68h+arg_8], eax
0x4651FA: cmp     eax, edi
0x4651FC: mov     [esp+68h+var_4], edi
0x465200: jz      short loc_46520B
0x465202: mov     ecx, eax
0x465204: call    sub_45F0F0
0x465209: jmp     short loc_46520D
0x46520B: xor     eax, eax
0x46520D: mov     [esp+68h+var_4], 0FFFFFFFFh
0x465215: mov     [ebp+40h], eax
0x465218: mov     al, 7Dh ; '}'
0x46521A: push    ebx
0x46521B: push    esi
0x46521C: mov     ecx, ebp
0x46521E: mov     byte ptr [ebp+70h], 0
0x465222: mov     [ebp+71h], al
0x465225: mov     [ebp+7Ch], al
0x465228: call    sub_464AB0
0x46522D: push    esi
0x46522E: mov     ecx, ebp
0x465230: call    sub_45C870
0x465235: mov     eax, [ebp+18h]
0x465238: shr     eax, 9
0x46523B: and     al, 1
0x46523D: mov     [esp+68h+var_50], edi
0x465241: jnz     short loc_465255
0x465243: mov     ecx, [esi+30h]
0x465246: cmp     ecx, 0FFFFFFFFh
0x465249: jnz     short loc_465251
0x46524B: mov     ecx, [esi+148h]
0x465251: mov     [esp+68h+var_50], ecx
0x465255: test    al, al
0x465257: mov     [esp+68h+var_48], edi
0x46525B: jz      short loc_465266
0x46525D: add     dword ptr [ebp+90h], 4
0x465264: jmp     short loc_465288
0x465266: mov     ecx, [esi+8]
0x465269: push    1
0x46526B: lea     edx, [esp+6Ch+arg_8]
0x46526F: push    edx
0x465270: push    4
0x465272: lea     eax, [esp+74h+var_48]
0x465276: push    eax
0x465277: push    esi
0x465278: mov     [esp+7Ch+arg_8], 1
0x465283: call    ecx
0x465285: add     esp, 14h
0x465288: mov     edx, [ebp+18h]
0x46528B: shr     edx, 9
0x46528E: test    dl, 1
0x465291: jz      short loc_46529C
0x465293: add     dword ptr [ebp+90h], 4
0x46529A: jmp     short loc_4652BE
0x46529C: mov     edx, [esi+8]
0x46529F: push    1
0x4652A1: lea     eax, [esp+6Ch+arg_8]
0x4652A5: push    eax
0x4652A6: push    4
0x4652A8: lea     ecx, [esp+74h+var_48]
0x4652AC: push    ecx
0x4652AD: push    esi
0x4652AE: mov     [esp+7Ch+arg_8], 1
0x4652B9: call    edx
0x4652BB: add     esp, 14h
0x4652BE: push    esi
0x4652BF: mov     ecx, ebp
0x4652C1: call    sub_462280
0x4652C6: mov     edx, [ebp+0]
0x4652C9: mov     [esp+68h+var_54], edi
0x4652CD: mov     ecx, [edx+4]
0x4652D0: xor     eax, eax
0x4652D2: cmp     ecx, edi
0x4652D4: jbe     short loc_4652F5
0x4652D6: mov     edi, [edx+8]
0x4652D9: mov     edx, edi
0x4652DB: jmp     short loc_4652E0
0x4652DD: align 10h
0x4652E0: cmp     dword ptr [edx], 0
0x4652E3: jnz     loc_46539B
0x4652E9: add     eax, 1
0x4652EC: add     edx, 4
0x4652EF: cmp     eax, ecx
0x4652F1: jb      short loc_4652E0
0x4652F3: xor     edi, edi
0x4652F5: xor     eax, eax
0x4652F7: cmp     eax, edi
0x4652F9: mov     [esp+68h+var_3C], eax
0x4652FD: jz      loc_465717
0x465303: lea     eax, [esp+68h+var_40]
0x465307: push    eax
0x465308: lea     ecx, [esp+6Ch+a1]
0x46530C: push    ecx
0x46530D: mov     ecx, [ebp+0]
0x465310: lea     edx, [esp+70h+var_3C]
0x465314: xor     edi, edi
0x465316: push    edx
0x465317: mov     [esp+74h+var_40], edi
0x46531B: mov     [esp+74h+a1], edi
0x46531F: call    sub_452600
0x465324: mov     ecx, [esp+68h+a1]
0x465328: cmp     ecx, edi
0x46532A: jz      loc_46570C
0x465330: mov     eax, [esp+68h+var_40]
0x465334: test    eax, eax
0x465336: jz      loc_46570C
0x46533C: mov     edx, [eax+4]
0x46533F: test    edx, edx
0x465341: mov     [ebp+14h], edx
0x465344: mov     eax, [eax]
0x465346: mov     [esp+68h+var_2B], eax
0x46534A: mov     al, [ebp+7Ch]
0x46534D: mov     [esp+68h+var_30], ecx
0x465351: mov     [esp+68h+var_27], al
0x465355: jz      loc_465472
0x46535B: mov     eax, ds:0B33B00h
0x465360: mov     ecx, [eax+14h]
0x465363: mov     edx, [ecx]
0x465365: mov     [esp+68h+arg_0], edx
0x465369: add     dword ptr [eax+14h], 4
0x46536D: mov     al, byte ptr [esp+68h+arg_0+2]
0x465371: mov     cl, byte ptr [esp+68h+arg_0+3]
0x465375: mov     [esp+68h+var_2C], al
0x465379: mov     eax, ds:0B33B00h
0x46537E: mov     [esp+68h+var_27], cl
0x465382: mov     edx, [eax+18h]
0x465385: shr     edx, 9
0x465388: test    dl, 1
0x46538B: mov     edi, 1
0x465390: jz      short loc_4653A5
0x465392: add     dword ptr [eax+90h], 0Ah
0x465399: jmp     short loc_4653BF
0x46539B: mov     eax, [edi+eax*4]
0x46539E: xor     edi, edi
0x4653A0: jmp     loc_4652F7
0x4653A5: mov     edx, [esi+8]
0x4653A8: push    edi
0x4653A9: lea     eax, [esp+6Ch+var_40]
0x4653AD: push    eax
0x4653AE: push    0Ah
0x4653B0: lea     ecx, [esp+74h+var_30]
0x4653B4: push    ecx
0x4653B5: push    esi
0x4653B6: mov     [esp+7Ch+var_40], edi
0x4653BA: call    edx
0x4653BC: add     esp, 14h
0x4653BF: mov     eax, [ebp+18h]
0x4653C2: add     [esp+68h+var_54], edi
0x4653C6: shr     eax, 9
0x4653C9: test    al, 1
0x4653CB: jz      short loc_4653D6
0x4653CD: add     dword ptr [ebp+90h], 2
0x4653D4: jmp     short loc_4653F0
0x4653D6: mov     eax, [esi+8]
0x4653D9: push    edi
0x4653DA: lea     ecx, [esp+6Ch+var_40]
0x4653DE: push    ecx
0x4653DF: push    2
0x4653E1: lea     edx, [esp+74h+arg_0]
0x4653E5: push    edx
0x4653E6: push    esi
0x4653E7: mov     [esp+7Ch+var_40], edi
0x4653EB: call    eax
0x4653ED: add     esp, 14h
0x4653F0: mov     edx, [esp+68h+arg_0]
0x4653F4: test    dx, dx
0x4653F7: jz      short loc_46542E
0x4653F9: mov     ecx, [ebp+18h]
0x4653FC: shr     ecx, 9
0x4653FF: test    cl, 1
0x465402: movzx   eax, dx
0x465405: jz      short loc_46540F
0x465407: add     [ebp+90h], eax
0x46540D: jmp     short loc_46542E
0x46540F: mov     ecx, [esi+8]
0x465412: push    edi
0x465413: lea     edx, [esp+6Ch+var_40]
0x465417: push    edx
0x465418: push    eax
0x465419: mov     eax, [ebp+14h]
0x46541C: push    eax
0x46541D: push    esi
0x46541E: mov     [esp+7Ch+var_40], edi
0x465422: call    ecx
0x465424: mov     edx, [esp+7Ch+arg_0]
0x46542B: add     esp, 14h
0x46542E: mov     ecx, [ebp+40h]
0x465431: test    ecx, ecx
0x465433: jz      short loc_465466
0x465435: mov     eax, [esp+68h+var_2B]
0x465439: mov     [esp+68h+var_1F], eax
0x46543D: mov     eax, [esp+68h+var_30]
0x465441: mov     [esp+68h+var_24], eax
0x465445: movzx   eax, [esp+68h+var_2C]
0x46544A: mov     [esp+68h+var_20], al
0x46544E: movzx   eax, [esp+68h+var_27]
0x465453: mov     [esp+68h+var_1A], dx
0x465458: lea     edx, [esp+68h+var_24]
0x46545C: push    edx
0x46545D: mov     [esp+6Ch+var_1B], al
0x465461: call    sub_45AD00
0x465466: mov     dword ptr [ebp+14h], 0
0x46546D: jmp     loc_46570C
0x465472: push    ecx; a1
0x465473: call    TESForm_LookupByFormID
0x465478: mov     edi, eax
0x46547A: add     esp, 4
0x46547D: test    edi, edi
0x46547F: jz      loc_465611
0x465485: mov     ecx, [esp+68h+var_2B]
0x465489: mov     al, [edi+4]
0x46548C: push    ecx
0x46548D: push    edi
0x46548E: mov     ecx, ebp
0x465490: mov     [esp+70h+var_2C], al
0x465494: call    sub_4535A0
0x465499: mov     [esp+68h+var_2B], eax
0x46549D: mov     eax, ds:0B33B00h
0x4654A2: mov     edx, [eax+18h]
0x4654A5: shr     edx, 9
0x4654A8: mov     ebx, 1
0x4654AD: test    bl, dl
0x4654AF: jz      short loc_4654BA
0x4654B1: add     dword ptr [eax+90h], 0Ah
0x4654B8: jmp     short TESSaveLoadGame_SaveGame?___GetFormSaveSize
0x4654BA: mov     edx, [esi+8]
0x4654BD: push    ebx
0x4654BE: lea     eax, [esp+6Ch+var_40]
0x4654C2: push    eax
0x4654C3: push    0Ah
0x4654C5: lea     ecx, [esp+74h+var_30]
0x4654C9: push    ecx
0x4654CA: push    esi
0x4654CB: mov     [esp+7Ch+var_40], ebx
0x4654CF: call    edx
0x4654D1: add     esp, 14h
0x4654D4: add     [esp+68h+var_54], ebx
0x4654D8: lea     eax, [esp+68h+var_30]
0x4654DC: mov     [ebp+84h], eax
0x4654E2: mov     edx, [edi]
0x4654E4: mov     eax, [esp+68h+var_2B]
0x4654E8: mov     edx, [edx+4Ch]
0x4654EB: push    eax
0x4654EC: mov     ecx, edi
0x4654EE: call    edx
0x4654F0: mov     ecx, [esp+68h+var_2B]
0x4654F4: movzx   eax, ax
0x4654F7: push    ecx
0x4654F8: push    edi
0x4654F9: mov     ecx, ebp
0x4654FB: mov     [esp+70h+arg_4], eax
0x4654FF: call    sub_452250
0x465504: mov     edx, [ebp+18h]
0x465507: add     word ptr [esp+68h+arg_4], ax
0x46550C: shr     edx, 9
0x46550F: test    dl, 1
0x465512: jz      short loc_46551D
0x465514: add     dword ptr [ebp+90h], 2
0x46551B: jmp     short loc_465537
0x46551D: mov     edx, [esi+8]
0x465520: push    ebx
0x465521: lea     eax, [esp+6Ch+var_40]
0x465525: push    eax
0x465526: push    2
0x465528: lea     ecx, [esp+74h+arg_4]
0x46552C: push    ecx
0x46552D: push    esi
0x46552E: mov     [esp+7Ch+var_40], ebx
0x465532: call    edx
0x465534: add     esp, 14h
0x465537: mov     ax, word ptr [esp+68h+arg_4]
0x46553C: test    ax, ax
0x46553F: jz      loc_4655CA
0x465545: movzx   eax, ax
0x465548: push    ebx
0x465549: push    eax
0x46554A: mov     ecx, offset FormHeap
0x46554F: call    j_MemoryHeap_Alloc
0x465554: test    eax, eax
0x465556: mov     [ebp+14h], eax
0x465559: jnz     short TESSaveLoadGame_SaveGame?___SaveForm
0x46555B: push    offset aCouldNotCreate; "Could not create save buffer, out of me"...
0x465560: call    sub_404EC0
0x465565: add     esp, 4
0x465568: mov     eax, [esp+68h+var_2B]
0x46556C: mov     ebx, [ebp+14h]
0x46556F: push    eax
0x465570: push    edi
0x465571: mov     ecx, ebp
0x465573: call    SaveLoad_SaveFormModifiedFlags??
0x465578: mov     edx, [edi]
0x46557A: mov     eax, [esp+68h+var_2B]
0x46557E: mov     edx, [edx+50h]
0x465581: push    eax
0x465582: mov     ecx, edi
0x465584: call    edx
0x465586: movzx   eax, word ptr [esp+68h+arg_4]
0x46558B: add     eax, ebx
0x46558D: cmp     eax, [ebp+14h]
0x465590: jz      short loc_4655A4
0x465592: mov     ecx, ds:0B34D90h
0x465598: mov     edx, [ecx]
0x46559A: mov     eax, [edx+18h]
0x46559D: push    offset aSavegameCallDi; "SaveGame() call did not properly fill b"...
0x4655A2: call    eax
0x4655A4: movzx   ecx, word ptr [esp+68h+arg_4]
0x4655A9: push    ecx
0x4655AA: push    ebx
0x4655AB: push    esi
0x4655AC: mov     ecx, ebp
0x4655AE: call    sub_45C4A0
0x4655B3: push    ebx; void *
0x4655B4: mov     ecx, offset FormHeap
0x4655B9: call    MemoryHeap_Free_checked
0x4655BE: mov     dword ptr [ebp+14h], 0
0x4655C5: mov     ebx, 1
0x4655CA: mov     ecx, [ebp+40h]
0x4655CD: test    ecx, ecx
0x4655CF: mov     dword ptr [ebp+84h], 0
0x4655D9: jz      short loc_465616
0x4655DB: mov     eax, [esp+68h+var_30]
0x4655DF: mov     edx, [esp+68h+var_2B]
0x4655E3: mov     [esp+68h+var_18], eax
0x4655E7: mov     al, [esp+68h+var_27]
0x4655EB: mov     [esp+68h+var_13], edx
0x4655EF: mov     dl, [esp+68h+var_2C]
0x4655F3: mov     [esp+68h+var_F], al
0x4655F7: mov     [esp+68h+var_14], dl
0x4655FB: mov     dx, word ptr [esp+68h+arg_4]
0x465600: lea     eax, [esp+68h+var_18]
0x465604: push    eax
0x465605: mov     [esp+6Ch+var_E], dx
0x46560A: call    sub_45AD00
0x46560F: jmp     short loc_465616
0x465611: mov     ebx, 1
0x465616: cmp     edi, ds:0B333C4h
0x46561C: jnz     loc_46570C
0x465622: mov     eax, ds:0B33B00h
0x465627: mov     [esp+68h+var_30], 0FEFFFFFFh
0x46562F: mov     ecx, [eax+18h]
0x465632: shr     ecx, 9
0x465635: test    cl, 1
0x465638: jz      short loc_465643
0x46563A: add     dword ptr [eax+90h], 0Ah
0x465641: jmp     short loc_46565D
0x465643: mov     ecx, [esi+8]
0x465646: push    ebx
0x465647: lea     edx, [esp+6Ch+var_40]
0x46564B: push    edx
0x46564C: push    0Ah
0x46564E: lea     eax, [esp+74h+var_30]
0x465652: push    eax
0x465653: push    esi
0x465654: mov     [esp+7Ch+var_40], ebx
0x465658: call    ecx
0x46565A: add     esp, 14h
0x46565D: mov     edx, [ebp+18h]
0x465660: add     [esp+68h+var_54], ebx
0x465664: shr     edx, 9
0x465667: test    dl, 1
0x46566A: mov     [esp+68h+var_38], 5
0x465672: jz      short loc_46567D
0x465674: add     dword ptr [ebp+90h], 2
0x46567B: jmp     short loc_465697
0x46567D: mov     edx, [esi+8]
0x465680: push    ebx
0x465681: lea     eax, [esp+6Ch+var_40]
0x465685: push    eax
0x465686: push    2
0x465688: lea     ecx, [esp+74h+var_38]
0x46568C: push    ecx
0x46568D: push    esi
0x46568E: mov     [esp+7Ch+var_40], ebx
0x465692: call    edx
0x465694: add     esp, 14h
0x465697: mov     eax, ds:0B333C4h
0x46569C: mov     cl, [eax+116h]
0x4656A2: mov     edx, [ebp+18h]
0x4656A5: mov     byte ptr [esp+68h+arg_8], cl
0x4656A9: fld     dword ptr [eax+700h]
0x4656AF: shr     edx, 9
0x4656B2: fstp    [esp+68h+var_34]
0x4656B6: test    dl, 1
0x4656B9: jz      short loc_4656C3
0x4656BB: add     [ebp+90h], ebx
0x4656C1: jmp     short loc_4656DF
0x4656C3: mov     edx, [esi+8]
0x4656C6: push    ebx
0x4656C7: lea     eax, [esp+6Ch+var_40]
0x4656CB: push    eax
0x4656CC: push    ebx
0x4656CD: lea     ecx, [esp+74h+arg_8]
0x4656D4: push    ecx
0x4656D5: push    esi
0x4656D6: mov     [esp+7Ch+var_40], ebx
0x4656DA: call    edx
0x4656DC: add     esp, 14h
0x4656DF: mov     eax, [ebp+18h]
0x4656E2: shr     eax, 9
0x4656E5: test    al, 1
0x4656E7: jz      short loc_4656F2
0x4656E9: add     dword ptr [ebp+90h], 4
0x4656F0: jmp     short loc_46570C
0x4656F2: mov     eax, [esi+8]
0x4656F5: push    ebx
0x4656F6: lea     ecx, [esp+6Ch+var_40]
0x4656FA: push    ecx
0x4656FB: push    4
0x4656FD: lea     edx, [esp+74h+var_34]
0x465701: push    edx
0x465702: push    esi
0x465703: mov     [esp+7Ch+var_40], ebx
0x465707: call    eax
0x465709: add     esp, 14h
0x46570C: cmp     [esp+68h+var_3C], 0
0x465711: jnz     loc_465303
0x465717: push    esi
0x465718: mov     ecx, ebp
0x46571A: call    sub_45FB50
0x46571F: mov     ecx, [ebp+18h]
0x465722: xor     ebx, ebx
0x465724: shr     ecx, 9
0x465727: test    cl, 1
0x46572A: mov     [esp+68h+var_4C], ebx
0x46572E: jnz     short loc_465748
0x465730: mov     eax, [esi+30h]
0x465733: cmp     eax, 0FFFFFFFFh
0x465736: jz      short loc_46573E
0x465738: mov     [esp+68h+var_4C], eax
0x46573C: jmp     short loc_465748
0x46573E: mov     edx, [esi+148h]
0x465744: mov     [esp+68h+var_4C], edx
0x465748: push    esi
0x465749: mov     ecx, ebp
0x46574B: call    sub_45E220
0x465750: mov     eax, [ebp+18h]
0x465753: shr     eax, 9
0x465756: test    al, 1
0x465758: jnz     short TESSaveLoadGame_SaveGame?___OBSE_SavegameHook
0x46575A: mov     eax, ds:0A853D0h
0x46575F: mov     ecx, [esp+68h+var_50]
0x465763: mov     edx, [esi]
0x465765: mov     edx, [edx+0Ch]
0x465768: push    eax
0x465769: push    ecx
0x46576A: mov     ecx, esi
0x46576C: call    edx
0x46576E: mov     eax, [ebp+18h]
0x465771: shr     eax, 9
0x465774: test    al, 1
0x465776: jz      short loc_465781
0x465778: add     dword ptr [ebp+90h], 4
0x46577F: jmp     short loc_4657A3
0x465781: mov     eax, [esi+8]
0x465784: push    1
0x465786: lea     ecx, [esp+6Ch+arg_8]
0x46578A: push    ecx
0x46578B: push    4
0x46578D: lea     edx, [esp+74h+var_4C]
0x465791: push    edx
0x465792: push    esi
0x465793: mov     [esp+7Ch+arg_8], 1
0x46579E: call    eax
0x4657A0: add     esp, 14h
0x4657A3: mov     ecx, [ebp+18h]
0x4657A6: shr     ecx, 9
0x4657A9: test    cl, 1
0x4657AC: jz      short loc_4657B7
0x4657AE: add     dword ptr [ebp+90h], 4
0x4657B5: jmp     short TESSaveLoadGame_SaveGame?___OBSE_SavegameHook
0x4657B7: mov     ecx, [esi+8]
0x4657BA: push    1
0x4657BC: lea     edx, [esp+6Ch+var_50]
0x4657C0: push    edx
0x4657C1: push    4
0x4657C3: lea     eax, [esp+74h+var_54]
0x4657C7: push    eax
0x4657C8: push    esi
0x4657C9: mov     [esp+7Ch+var_50], 1
0x4657D1: call    ecx
0x4657D3: add     esp, 14h
0x4657D6: mov     ecx, [ebp+40h]
0x4657D9: cmp     ecx, ebx
0x4657DB: jz      short loc_465800
0x4657DD: lea     edx, [esi+3Ch]
0x4657E0: push    edx
0x4657E1: call    TESSaveLoadGame_PrintChangeRecords?
0x4657E6: mov     edi, [ebp+40h]
0x4657E9: cmp     edi, ebx
0x4657EB: jz      short loc_4657FD
0x4657ED: mov     ecx, edi
0x4657EF: call    sub_4530A0
0x4657F4: push    edi
0x4657F5: call    FormHeapFree
0x4657FA: add     esp, 4
0x4657FD: mov     [ebp+40h], ebx
0x465800: mov     eax, [ebp+18h]
0x465803: shr     eax, 9
0x465806: test    al, 1
0x465808: jnz     short loc_465836
0x46580A: mov     ecx, esi
0x46580C: call    NiFile_Flush
0x465811: push    esi
0x465812: mov     ecx, ebp
0x465814: call    sub_45A190
0x465819: cmp     esi, ebx
0x46581B: jz      short loc_465836
0x46581D: mov     ebp, [ebp+6Ch]
0x465820: cmp     ebp, ebx
0x465822: jz      short loc_46582C
0x465824: push    esi
0x465825: mov     ecx, ebp
0x465827: call    BSSimpleList_Remove
0x46582C: mov     edx, [esi]
0x46582E: mov     eax, [edx]
0x465830: push    1
0x465832: mov     ecx, esi
0x465834: call    eax
0x465836: mov     ecx, ds:0B33A10h
0x46583C: call    sub_432890
0x465841: mov     al, 1
0x465843: mov     ecx, dword ptr [esp+68h+var_C]
0x465847: mov     large fs:0, ecx
0x46584E: pop     ecx
0x46584F: pop     edi
0x465850: pop     esi
0x465851: pop     ebp
0x465852: pop     ebx
0x465853: add     esp, 54h
0x465856: retn    0Ch
