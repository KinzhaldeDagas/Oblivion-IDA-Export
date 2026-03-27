0x661540: sub     esp, 44h
0x661543: push    ebx
0x661544: push    ebp
0x661545: push    esi
0x661546: push    edi
0x661547: mov     esi, ecx
0x661549: mov     ecx, ds:0B33B00h
0x66154F: xor     edi, edi
0x661551: mov     [esp+54h+var_10], edi
0x661555: mov     ebx, [ecx+14h]
0x661558: xor     ebp, ebp
0x66155A: mov     [esp+54h+var_44.vtbl], ebp
0x66155E: call    sub_45A170
0x661563: test    al, al
0x661565: jz      short loc_66159A
0x661567: mov     ecx, ds:0B33B00h
0x66156D: push    4; Size
0x66156F: lea     eax, [esp+58h+Src]
0x661573: push    eax; Src
0x661574: mov     [esp+5Ch+Src], 4B4F4C42h
0x66157C: call    SaveLoad_SaveData
0x661581: mov     ecx, ds:0B33B00h
0x661587: mov     ebp, [ecx+14h]
0x66158A: push    2; Size
0x66158C: lea     edx, [esp+58h+var_10]
0x661590: push    edx; Src
0x661591: mov     [esp+5Ch+var_44.vtbl], ebp
0x661595: call    SaveLoad_SaveData
0x66159A: push    120h; a2
0x66159F: lea     eax, [esi+204h]
0x6615A5: push    eax; a1
0x6615A6: mov     ecx, esi
0x6615A8: call    TESForm_SaveDataToCurrentSaveGame
0x6615AD: push    120h; a2
0x6615B2: lea     ecx, [esi+324h]
0x6615B8: push    ecx; a1
0x6615B9: mov     ecx, esi
0x6615BB: call    TESForm_SaveDataToCurrentSaveGame
0x6615C0: mov     edx, ds:0B33B00h
0x6615C6: cmp     byte ptr [edx+7Ch], 31h ; '1'
0x6615CA: jb      short loc_6615DF
0x6615CC: push    120h; a2
0x6615D1: lea     eax, [esi+450h]
0x6615D7: push    eax; a1
0x6615D8: mov     ecx, esi
0x6615DA: call    TESForm_SaveDataToCurrentSaveGame
0x6615DF: push    4; a2
0x6615E1: lea     ecx, [esi+444h]
0x6615E7: push    ecx; a1
0x6615E8: mov     ecx, esi
0x6615EA: call    TESForm_SaveDataToCurrentSaveGame
0x6615EF: push    4; a2
0x6615F1: lea     edx, [esi+448h]
0x6615F7: push    edx; a1
0x6615F8: mov     ecx, esi
0x6615FA: call    TESForm_SaveDataToCurrentSaveGame
0x6615FF: push    4; a2
0x661601: lea     eax, [esi+44Ch]
0x661607: push    eax; a1
0x661608: mov     ecx, esi
0x66160A: call    TESForm_SaveDataToCurrentSaveGame
0x66160F: cmp     byte ptr ds:0B05BACh, 0
0x661616: jz      short loc_661687
0x661618: mov     eax, ds:0B33B00h
0x66161D: mov     ebp, [eax+84h]
0x661623: test    ebp, ebp
0x661625: mov     edi, [eax+14h]
0x661628: jz      short loc_661667
0x66162A: mov     ecx, [ebp+0]
0x66162D: push    ecx; a1
0x66162E: call    TESForm_LookupByFormID
0x661633: mov     edx, [ebp+5]
0x661636: add     esp, 4
0x661639: push    offset a_AiPlayerchara; ".\\AI\\PlayerCharacter.cpp"
0x66163E: push    234Dh
0x661643: push    edx
0x661644: mov     edx, [eax]
0x661646: mov     ecx, eax
0x661648: mov     eax, [edx+0D4h]
0x66164E: call    eax
0x661650: mov     ecx, [ebp+0]
0x661653: push    eax
0x661654: push    ecx
0x661655: sub     edi, ebx
0x661657: push    edi; ArgList
0x661658: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x66165D: call    sub_40FEC0
0x661662: add     esp, 1Ch
0x661665: jmp     short loc_661681
0x661667: push    offset a_AiPlayerchara; ".\\AI\\PlayerCharacter.cpp"
0x66166C: push    234Dh
0x661671: sub     edi, ebx
0x661673: push    edi; ArgList
0x661674: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x661679: call    sub_40FEC0
0x66167E: add     esp, 10h
0x661681: mov     ebp, [esp+54h+var_44.vtbl]
0x661685: xor     edi, edi
0x661687: mov     ecx, ds:0B33B00h
0x66168D: call    sub_45A170
0x661692: test    al, al
0x661694: jz      short loc_6616C8
0x661696: mov     edx, ds:0B33B00h
0x66169C: mov     edi, [edx+14h]
0x66169F: lea     eax, [ebp+0FFFFh]
0x6616A5: cmp     edi, eax
0x6616A7: jbe     short loc_6616C0
0x6616A9: push    234Dh
0x6616AE: push    offset a_AiPlayerchara; ".\\AI\\PlayerCharacter.cpp"
0x6616B3: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x6616B8: call    PrintError
0x6616BD: add     esp, 0Ch
0x6616C0: sub     edi, ebp
0x6616C2: mov     [ebp+0], di
0x6616C6: xor     edi, edi
0x6616C8: mov     ebx, [esp+54h+a1.vtbl]
0x6616CC: push    ebx
0x6616CD: mov     ecx, esi
0x6616CF: call    j_Actor_Save?
0x6616D4: cmp     byte ptr ds:0B05BACh, 0
0x6616DB: mov     ecx, ds:0B33B00h
0x6616E1: mov     [esp+54h+var_8], edi
0x6616E5: mov     eax, [ecx+14h]
0x6616E8: mov     [esp+54h+Src], edi
0x6616EC: mov     dword ptr [esp+54h+var_44.member.type], eax
0x6616F0: jz      short loc_6616F6
0x6616F2: mov     dword ptr [esp+54h+var_44.member.type], eax
0x6616F6: call    sub_45A170
0x6616FB: test    al, al
0x6616FD: jz      short loc_661732
0x6616FF: push    4; Size
0x661701: lea     ecx, [esp+58h+a1]
0x661705: push    ecx; Src
0x661706: mov     ecx, ds:0B33B00h
0x66170C: mov     [esp+5Ch+a1.vtbl], 4B4F4C42h
0x661714: call    SaveLoad_SaveData
0x661719: mov     ecx, ds:0B33B00h
0x66171F: mov     edx, [ecx+14h]
0x661722: push    2; Size
0x661724: lea     eax, [esp+58h+var_8]
0x661728: push    eax; Src
0x661729: mov     [esp+5Ch+Src], edx
0x66172D: call    SaveLoad_SaveData
0x661732: test    ebx, 2000000h
0x661738: jz      short loc_66174A
0x66173A: mov     ecx, [esi+5CCh]
0x661740: push    ecx
0x661741: push    esi
0x661742: call    sub_473C40
0x661747: add     esp, 8
0x66174A: push    1; a2
0x66174C: lea     edx, [esi+588h]
0x661752: push    edx; a1
0x661753: mov     ecx, esi
0x661755: call    TESForm_SaveDataToCurrentSaveGame
0x66175A: push    1; a2
0x66175C: lea     eax, [esi+589h]
0x661762: push    eax; a1
0x661763: mov     ecx, esi
0x661765: call    TESForm_SaveDataToCurrentSaveGame
0x66176A: push    1; a2
0x66176C: lea     ecx, [esi+58Bh]
0x661772: push    ecx; a1
0x661773: mov     ecx, esi
0x661775: call    TESForm_SaveDataToCurrentSaveGame
0x66177A: push    1; a2
0x66177C: lea     edx, [esi+58Ch]
0x661782: push    edx; a1
0x661783: mov     ecx, esi
0x661785: call    TESForm_SaveDataToCurrentSaveGame
0x66178A: push    4; a2
0x66178C: lea     eax, [esi+590h]
0x661792: push    eax; a1
0x661793: mov     ecx, esi
0x661795: call    TESForm_SaveDataToCurrentSaveGame
0x66179A: push    4; a2
0x66179C: lea     ecx, [esi+59Ch]
0x6617A2: push    ecx; a1
0x6617A3: mov     ecx, esi
0x6617A5: call    TESForm_SaveDataToCurrentSaveGame
0x6617AA: push    4; a2
0x6617AC: lea     edx, [esi+5A0h]
0x6617B2: push    edx; a1
0x6617B3: mov     ecx, esi
0x6617B5: call    TESForm_SaveDataToCurrentSaveGame
0x6617BA: push    4; a2
0x6617BC: lea     eax, [esi+5A4h]
0x6617C2: push    eax; a1
0x6617C3: mov     ecx, esi
0x6617C5: call    TESForm_SaveDataToCurrentSaveGame
0x6617CA: push    1; a2
0x6617CC: lea     ecx, [esi+5A8h]
0x6617D2: push    ecx; a1
0x6617D3: mov     ecx, esi
0x6617D5: call    TESForm_SaveDataToCurrentSaveGame
0x6617DA: push    1; a2
0x6617DC: lea     edx, [esi+600h]
0x6617E2: push    edx; a1
0x6617E3: mov     ecx, esi
0x6617E5: call    TESForm_SaveDataToCurrentSaveGame
0x6617EA: push    4; a2
0x6617EC: lea     eax, [esi+604h]
0x6617F2: push    eax; a1
0x6617F3: mov     ecx, esi
0x6617F5: call    TESForm_SaveDataToCurrentSaveGame
0x6617FA: push    4; a2
0x6617FC: lea     ecx, [esi+608h]
0x661802: push    ecx; a1
0x661803: mov     ecx, esi
0x661805: call    TESForm_SaveDataToCurrentSaveGame
0x66180A: push    4; a2
0x66180C: lea     edx, [esi+60Ch]
0x661812: push    edx; a1
0x661813: mov     ecx, esi
0x661815: call    TESForm_SaveDataToCurrentSaveGame
0x66181A: push    1; a2
0x66181C: lea     eax, [esi+610h]
0x661822: push    eax; a1
0x661823: mov     ecx, esi
0x661825: call    TESForm_SaveDataToCurrentSaveGame
0x66182A: push    1; a2
0x66182C: lea     ecx, [esi+611h]
0x661832: push    ecx; a1
0x661833: mov     ecx, esi
0x661835: call    TESForm_SaveDataToCurrentSaveGame
0x66183A: push    4; a2
0x66183C: lea     edx, [esi+614h]
0x661842: push    edx; a1
0x661843: mov     ecx, esi
0x661845: call    TESForm_SaveDataToCurrentSaveGame
0x66184A: push    1; a2
0x66184C: lea     eax, [esi+620h]
0x661852: push    eax; a1
0x661853: mov     ecx, esi
0x661855: call    TESForm_SaveDataToCurrentSaveGame
0x66185A: push    4; a2
0x66185C: lea     ecx, [esi+61Ch]
0x661862: push    ecx; a1
0x661863: mov     ecx, esi
0x661865: call    TESForm_SaveDataToCurrentSaveGame
0x66186A: push    0Ch; a2
0x66186C: lea     edx, [esi+62Ch]
0x661872: push    edx; a1
0x661873: mov     ecx, esi
0x661875: call    TESForm_SaveDataToCurrentSaveGame
0x66187A: push    4; a2
0x66187C: lea     eax, [esi+5D4h]
0x661882: push    eax; a1
0x661883: mov     ecx, esi
0x661885: call    TESForm_SaveDataToCurrentSaveGame
0x66188A: push    4; a2
0x66188C: lea     ecx, [esi+640h]
0x661892: push    ecx; a1
0x661893: mov     ecx, esi
0x661895: call    TESForm_SaveDataToCurrentSaveGame
0x66189A: push    4; a2
0x66189C: lea     edx, [esi+5BCh]
0x6618A2: push    edx; a1
0x6618A3: mov     ecx, esi
0x6618A5: call    TESForm_SaveDataToCurrentSaveGame
0x6618AA: push    4; a2
0x6618AC: lea     eax, [esi+648h]
0x6618B2: push    eax; a1
0x6618B3: mov     ecx, esi
0x6618B5: call    TESForm_SaveDataToCurrentSaveGame
0x6618BA: push    4; Size
0x6618BC: lea     ecx, [esi+64Ch]
0x6618C2: push    ecx; Src
0x6618C3: mov     ecx, ds:0B33B00h
0x6618C9: call    SaveLoad_SaveData
0x6618CE: push    1; a2
0x6618D0: lea     edx, [esi+594h]
0x6618D6: push    edx; a1
0x6618D7: mov     ecx, esi
0x6618D9: call    TESForm_SaveDataToCurrentSaveGame
0x6618DE: push    4; a2
0x6618E0: lea     eax, [esi+598h]
0x6618E6: push    eax; a1
0x6618E7: mov     ecx, esi
0x6618E9: call    TESForm_SaveDataToCurrentSaveGame
0x6618EE: push    1; a2
0x6618F0: lea     ecx, [esi+6E4h]
0x6618F6: push    ecx; a1
0x6618F7: mov     ecx, esi
0x6618F9: call    TESForm_SaveDataToCurrentSaveGame
0x6618FE: push    1; a2
0x661900: lea     edx, [esi+6E5h]
0x661906: push    edx; a1
0x661907: mov     ecx, esi
0x661909: call    TESForm_SaveDataToCurrentSaveGame
0x66190E: push    1; a2
0x661910: lea     eax, [esi+6E6h]
0x661916: push    eax; a1
0x661917: mov     ecx, esi
0x661919: call    TESForm_SaveDataToCurrentSaveGame
0x66191E: push    4; a2
0x661920: lea     ecx, [esi+6F4h]
0x661926: push    ecx; a1
0x661927: mov     ecx, esi
0x661929: call    TESForm_SaveDataToCurrentSaveGame
0x66192E: push    4; a2
0x661930: lea     edx, [esi+6F8h]
0x661936: push    edx; a1
0x661937: mov     ecx, esi
0x661939: call    TESForm_SaveDataToCurrentSaveGame
0x66193E: push    4; a2
0x661940: lea     eax, [esi+6FCh]
0x661946: push    eax; a1
0x661947: mov     ecx, esi
0x661949: call    TESForm_SaveDataToCurrentSaveGame
0x66194E: push    4; a2
0x661950: lea     ecx, [esi+714h]
0x661956: push    ecx; a1
0x661957: mov     ecx, esi
0x661959: call    TESForm_SaveDataToCurrentSaveGame
0x66195E: push    1; a2
0x661960: lea     edx, [esi+5C0h]
0x661966: push    edx; a1
0x661967: mov     ecx, esi
0x661969: call    TESForm_SaveDataToCurrentSaveGame
0x66196E: mov     eax, ds:0B33B00h
0x661973: mov     al, [eax+7Ch]
0x661976: cmp     al, 28h ; '('
0x661978: jb      short loc_66199A
0x66197A: cmp     al, 2Dh ; '-'
0x66197C: jnb     short loc_66199A
0x66197E: push    0Ch; a2
0x661980: lea     edi, [esi+720h]
0x661986: push    edi; a1
0x661987: mov     ecx, esi
0x661989: call    TESForm_SaveDataToCurrentSaveGame
0x66198E: push    0Ch; a2
0x661990: push    edi; a1
0x661991: mov     ecx, esi
0x661993: call    TESForm_SaveDataToCurrentSaveGame
0x661998: xor     edi, edi
0x66199A: mov     ecx, ds:0B33B00h
0x6619A0: cmp     byte ptr [ecx+7Ch], 39h ; '9'
0x6619A4: jb      short loc_6619C6
0x6619A6: push    70h ; 'p'; a2
0x6619A8: lea     edx, [esi+658h]
0x6619AE: push    edx; a1
0x6619AF: mov     ecx, esi
0x6619B1: call    TESForm_SaveDataToCurrentSaveGame
0x6619B6: push    18h; a2
0x6619B8: lea     eax, [esi+6C8h]
0x6619BE: push    eax; a1
0x6619BF: mov     ecx, esi
0x6619C1: call    TESForm_SaveDataToCurrentSaveGame
0x6619C6: mov     ecx, ds:0B33B00h
0x6619CC: cmp     byte ptr [ecx+7Ch], 3Fh ; '?'
0x6619D0: jb      short loc_6619E2
0x6619D2: push    1; a2
0x6619D4: lea     edx, [esi+738h]
0x6619DA: push    edx; a1
0x6619DB: mov     ecx, esi
0x6619DD: call    TESForm_SaveDataToCurrentSaveGame
0x6619E2: mov     ecx, ds:0B33B00h
0x6619E8: mov     bl, 40h ; '@'
0x6619EA: cmp     [ecx+7Ch], bl
0x6619ED: jb      short loc_661A1D
0x6619EF: push    4; Size
0x6619F1: lea     eax, [esi+57Ch]
0x6619F7: push    eax; Src
0x6619F8: call    SaveLoad_SaveData
0x6619FD: push    4; a2
0x6619FF: lea     ecx, [esi+580h]
0x661A05: push    ecx; a1
0x661A06: mov     ecx, esi
0x661A08: call    TESForm_SaveDataToCurrentSaveGame
0x661A0D: push    4; a2
0x661A0F: lea     edx, [esi+584h]
0x661A15: push    edx; a1
0x661A16: mov     ecx, esi
0x661A18: call    TESForm_SaveDataToCurrentSaveGame
0x661A1D: mov     eax, ds:0B33B00h
0x661A22: cmp     byte ptr [eax+7Ch], 49h ; 'I'
0x661A26: jb      short loc_661A48
0x661A28: push    4; a2
0x661A2A: lea     ecx, [esi+110h]
0x661A30: push    ecx; a1
0x661A31: mov     ecx, esi
0x661A33: call    TESForm_SaveDataToCurrentSaveGame
0x661A38: push    1; a2
0x661A3A: lea     edx, [esi+200h]
0x661A40: push    edx; a1
0x661A41: mov     ecx, esi
0x661A43: call    TESForm_SaveDataToCurrentSaveGame
0x661A48: mov     eax, ds:0B33B00h
0x661A4D: cmp     byte ptr [eax+7Ch], 63h ; 'c'
0x661A51: jb      short loc_661A91
0x661A53: cmp     [esi+5B0h], edi
0x661A59: mov     byte ptr [esp+54h+a1.vtbl], 0
0x661A5E: jz      short loc_661A65
0x661A60: mov     byte ptr [esp+54h+a1.vtbl], 15h
0x661A65: push    1; a2
0x661A67: lea     ecx, [esp+58h+a1]
0x661A6B: push    ecx; a1
0x661A6C: mov     ecx, esi
0x661A6E: call    TESForm_SaveDataToCurrentSaveGame
0x661A73: mov     al, byte ptr [esp+54h+a1.vtbl]
0x661A77: test    al, al
0x661A79: jz      short loc_661A91
0x661A7B: movzx   edx, al
0x661A7E: mov     eax, [esi+5B0h]
0x661A84: add     edx, edx
0x661A86: add     edx, edx
0x661A88: push    edx; a2
0x661A89: push    eax; a1
0x661A8A: mov     ecx, esi
0x661A8C: call    TESForm_SaveDataToCurrentSaveGame
0x661A91: mov     ecx, ds:0B33B00h
0x661A97: cmp     byte ptr [ecx+7Ch], 71h ; 'q'
0x661A9B: jb      short loc_661ADD
0x661A9D: push    1; a2
0x661A9F: lea     edx, [esi+58Ah]
0x661AA5: push    edx; a1
0x661AA6: mov     ecx, esi
0x661AA8: call    TESForm_SaveDataToCurrentSaveGame
0x661AAD: push    1; a2
0x661AAF: lea     eax, [esi+5A9h]
0x661AB5: push    eax; a1
0x661AB6: mov     ecx, esi
0x661AB8: call    TESForm_SaveDataToCurrentSaveGame
0x661ABD: push    4; a2
0x661ABF: lea     ecx, [esi+718h]
0x661AC5: push    ecx; a1
0x661AC6: mov     ecx, esi
0x661AC8: call    TESForm_SaveDataToCurrentSaveGame
0x661ACD: push    4
0x661ACF: lea     edx, [esi+760h]
0x661AD5: push    edx
0x661AD6: mov     ecx, esi
0x661AD8: call    TESForm_SaveFormIDToCurrentSaveGame
0x661ADD: mov     eax, ds:0B33B00h
0x661AE2: cmp     byte ptr [eax+7Ch], 78h ; 'x'
0x661AE6: jb      short loc_661B04
0x661AE8: push    1; a2
0x661AEA: push    offset byte_B3BAEA; a1
0x661AEF: mov     ecx, esi
0x661AF1: call    TESForm_SaveDataToCurrentSaveGame
0x661AF6: push    4; a2
0x661AF8: push    offset flt_B3BAFC; a1
0x661AFD: mov     ecx, esi
0x661AFF: call    TESForm_SaveDataToCurrentSaveGame
0x661B04: mov     ecx, ds:0B33B00h
0x661B0A: cmp     byte ptr [ecx+7Ch], 7Ah ; 'z'
0x661B0E: jb      short loc_661B1E
0x661B10: push    4; a2
0x661B12: push    (offset qword_B3BB20+4); a1
0x661B17: mov     ecx, esi
0x661B19: call    TESForm_SaveDataToCurrentSaveGame
0x661B1E: mov     eax, [esi+118h]
0x661B24: cmp     eax, edi
0x661B26: mov     [esp+54h+var_44.vtbl], edi
0x661B2A: jz      short loc_661B33
0x661B2C: mov     edx, [eax+0Ch]
0x661B2F: mov     [esp+54h+var_44.vtbl], edx
0x661B33: push    4
0x661B35: lea     eax, [esp+58h+var_44]
0x661B39: push    eax
0x661B3A: mov     ecx, esi
0x661B3C: call    TESForm_SaveFormIDToCurrentSaveGame
0x661B41: mov     eax, [esi+644h]
0x661B47: cmp     eax, edi
0x661B49: mov     [esp+54h+var_44.member.flags], edi
0x661B4D: jz      short loc_661B56
0x661B4F: mov     ecx, [eax+0Ch]
0x661B52: mov     [esp+54h+var_44.member.flags], ecx
0x661B56: push    4
0x661B58: lea     edx, [esp+58h+var_44.member.flags]
0x661B5C: push    edx
0x661B5D: mov     ecx, esi
0x661B5F: call    TESForm_SaveFormIDToCurrentSaveGame
0x661B64: mov     eax, ds:0B3BAD0h
0x661B69: cmp     eax, edi
0x661B6B: mov     [esp+54h+var_44.member.refID], edi
0x661B6F: jz      short loc_661B78
0x661B71: mov     eax, [eax+0Ch]
0x661B74: mov     [esp+54h+var_44.member.refID], eax
0x661B78: push    4
0x661B7A: lea     ecx, [esp+58h+var_44.member.refID]
0x661B7E: push    ecx
0x661B7F: mov     ecx, esi
0x661B81: call    TESForm_SaveFormIDToCurrentSaveGame
0x661B86: mov     eax, [esi+624h]
0x661B8C: cmp     eax, edi
0x661B8E: mov     [esp+54h+var_44.member.modlist.data], edi
0x661B92: jz      short loc_661BB4
0x661B94: push    edi; int
0x661B95: push    offset ??_R0?AVSpellItem@@@8; struct TypeDescriptor *
0x661B9A: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x661B9F: push    edi; int
0x661BA0: push    eax; void *
0x661BA1: call    OblivionDynamicCast
0x661BA6: add     esp, 14h
0x661BA9: cmp     eax, edi
0x661BAB: jz      short loc_661BB4
0x661BAD: mov     edx, [eax+0Ch]
0x661BB0: mov     [esp+54h+var_44.member.modlist.data], edx
0x661BB4: push    4
0x661BB6: lea     eax, [esp+58h+var_44.member.modlist]
0x661BBA: push    eax
0x661BBB: mov     ecx, esi
0x661BBD: call    TESForm_SaveFormIDToCurrentSaveGame
0x661BC2: mov     ecx, [esi+1E8h]; int
0x661BC8: cmp     ecx, edi
0x661BCA: mov     [esp+54h+var_44.member.modlist.next], edi
0x661BCE: jz      short loc_661BD9
0x661BD0: call    MagicItem_GetFormID
0x661BD5: mov     [esp+54h+var_44.member.modlist.next], eax
0x661BD9: push    4
0x661BDB: lea     ecx, [esp+58h+var_44.member.modlist.next]
0x661BDF: push    ecx
0x661BE0: mov     ecx, esi
0x661BE2: call    TESForm_SaveFormIDToCurrentSaveGame
0x661BE7: mov     ecx, [esi+1ECh]
0x661BED: cmp     ecx, edi
0x661BEF: mov     [esp+54h+var_2C], edi
0x661BF3: jz      short loc_661BFE
0x661BF5: call    MagicTarget_GetParentFormID
0x661BFA: mov     [esp+54h+var_2C], eax
0x661BFE: push    4
0x661C00: lea     edx, [esp+58h+var_2C]
0x661C04: push    edx
0x661C05: mov     ecx, esi
0x661C07: call    TESForm_SaveFormIDToCurrentSaveGame
0x661C0C: mov     eax, [esi+1E0h]
0x661C12: cmp     eax, edi
0x661C14: mov     [esp+54h+var_28], edi
0x661C18: jz      short loc_661C21
0x661C1A: mov     eax, [eax+0Ch]
0x661C1D: mov     [esp+54h+var_28], eax
0x661C21: push    4
0x661C23: lea     ecx, [esp+58h+var_28]
0x661C27: push    ecx
0x661C28: mov     ecx, esi
0x661C2A: call    TESForm_SaveFormIDToCurrentSaveGame
0x661C2F: mov     eax, [esi+6E8h]
0x661C35: cmp     eax, edi
0x661C37: mov     [esp+54h+var_24], edi
0x661C3B: jz      short loc_661C44
0x661C3D: mov     edx, [eax+0Ch]
0x661C40: mov     [esp+54h+var_24], edx
0x661C44: push    4
0x661C46: lea     eax, [esp+58h+var_24]
0x661C4A: push    eax
0x661C4B: mov     ecx, esi
0x661C4D: call    TESForm_SaveFormIDToCurrentSaveGame
0x661C52: mov     eax, [esi+628h]
0x661C58: cmp     eax, edi
0x661C5A: mov     [esp+54h+var_20], edi
0x661C5E: jz      short loc_661C67
0x661C60: mov     ecx, [eax+0Ch]
0x661C63: mov     [esp+54h+var_20], ecx
0x661C67: push    4
0x661C69: lea     edx, [esp+58h+var_20]
0x661C6D: push    edx
0x661C6E: mov     ecx, esi
0x661C70: call    TESForm_SaveFormIDToCurrentSaveGame
0x661C75: mov     eax, [esi+650h]
0x661C7B: cmp     eax, edi
0x661C7D: mov     [esp+54h+var_1C], edi
0x661C81: jz      short loc_661C8A
0x661C83: mov     eax, [eax+0Ch]
0x661C86: mov     [esp+54h+var_1C], eax
0x661C8A: push    4
0x661C8C: lea     ecx, [esp+58h+var_1C]
0x661C90: push    ecx
0x661C91: mov     ecx, esi
0x661C93: call    TESForm_SaveFormIDToCurrentSaveGame
0x661C98: mov     eax, [esi+6E0h]
0x661C9E: cmp     eax, edi
0x661CA0: mov     [esp+54h+var_18], edi
0x661CA4: jz      short loc_661CAD
0x661CA6: mov     edx, [eax+0Ch]
0x661CA9: mov     [esp+54h+var_18], edx
0x661CAD: push    4
0x661CAF: lea     eax, [esp+58h+var_18]
0x661CB3: push    eax
0x661CB4: mov     ecx, esi
0x661CB6: call    TESForm_SaveFormIDToCurrentSaveGame
0x661CBB: mov     eax, ds:0B33B00h
0x661CC0: mov     cl, [eax+7Ch]
0x661CC3: cmp     cl, 28h ; '('
0x661CC6: jb      short loc_661CF5
0x661CC8: cmp     cl, 2Dh ; '-'
0x661CCB: jnb     short loc_661CF5
0x661CCD: mov     eax, [esi+72Ch]
0x661CD3: cmp     eax, edi
0x661CD5: mov     [esp+54h+a1.vtbl], edi
0x661CD9: jz      short loc_661CE2
0x661CDB: mov     ecx, [eax+0Ch]
0x661CDE: mov     [esp+54h+a1.vtbl], ecx
0x661CE2: push    4
0x661CE4: lea     edx, [esp+58h+a1]
0x661CE8: push    edx
0x661CE9: mov     ecx, esi
0x661CEB: call    TESForm_SaveFormIDToCurrentSaveGame
0x661CF0: mov     eax, ds:0B33B00h
0x661CF5: cmp     [eax+7Ch], bl
0x661CF8: jb      short loc_661D22
0x661CFA: mov     eax, [esi+578h]
0x661D00: cmp     eax, edi
0x661D02: mov     [esp+54h+a1.vtbl], edi
0x661D06: jz      short loc_661D0F
0x661D08: mov     eax, [eax+0Ch]
0x661D0B: mov     [esp+54h+a1.vtbl], eax
0x661D0F: push    4
0x661D11: lea     ecx, [esp+58h+a1]
0x661D15: push    ecx
0x661D16: mov     ecx, esi
0x661D18: call    TESForm_SaveFormIDToCurrentSaveGame
0x661D1D: mov     eax, ds:0B33B00h
0x661D22: cmp     byte ptr [eax+7Ch], 42h ; 'B'
0x661D26: jb      short loc_661D4F
0x661D28: mov     eax, ds:0B3BAD4h
0x661D2D: cmp     eax, edi
0x661D2F: mov     [esp+54h+a1.vtbl], edi
0x661D33: jz      short loc_661D3C
0x661D35: mov     edx, [eax+0Ch]
0x661D38: mov     [esp+54h+a1.vtbl], edx
0x661D3C: push    4
0x661D3E: lea     eax, [esp+58h+a1]
0x661D42: push    eax
0x661D43: mov     ecx, esi
0x661D45: call    TESForm_SaveFormIDToCurrentSaveGame
0x661D4A: mov     eax, ds:0B33B00h
0x661D4F: cmp     byte ptr [eax+7Ch], 57h ; 'W'
0x661D53: jb      short loc_661D7D
0x661D55: mov     eax, [esi+570h]
0x661D5B: cmp     eax, edi
0x661D5D: mov     [esp+54h+a1.vtbl], edi
0x661D61: jz      short loc_661D6A
0x661D63: mov     ecx, [eax+0Ch]
0x661D66: mov     [esp+54h+a1.vtbl], ecx
0x661D6A: push    4
0x661D6C: lea     edx, [esp+58h+a1]
0x661D70: push    edx
0x661D71: mov     ecx, esi
0x661D73: call    TESForm_SaveFormIDToCurrentSaveGame
0x661D78: mov     eax, ds:0B33B00h
0x661D7D: cmp     byte ptr [eax+7Ch], 60h ; '`'
0x661D81: jb      short loc_661DAB
0x661D83: mov     eax, [esi+638h]
0x661D89: cmp     eax, edi
0x661D8B: mov     [esp+54h+a1.vtbl], edi
0x661D8F: jz      short loc_661D98
0x661D91: mov     eax, [eax+0Ch]
0x661D94: mov     [esp+54h+a1.vtbl], eax
0x661D98: push    4
0x661D9A: lea     ecx, [esp+58h+a1]
0x661D9E: push    ecx
0x661D9F: mov     ecx, esi
0x661DA1: call    TESForm_SaveFormIDToCurrentSaveGame
0x661DA6: mov     eax, ds:0B33B00h
0x661DAB: cmp     byte ptr [eax+7Ch], 63h ; 'c'
0x661DAF: jb      short loc_661E16
0x661DB1: push    2; a2
0x661DB3: lea     edx, [esp+58h+a1]
0x661DB7: xor     ebx, ebx
0x661DB9: mov     [esp+58h+a1.vtbl], ebx
0x661DBD: mov     ebp, [eax+14h]
0x661DC0: push    edx; a1
0x661DC1: mov     ecx, esi
0x661DC3: call    TESForm_SaveDataToCurrentSaveGame
0x661DC8: mov     edi, [esi+5ACh]
0x661DCE: cmp     edi, ebx
0x661DD0: jz      short loc_661E06
0x661DD2: cmp     [edi+4], ebx
0x661DD5: jnz     short loc_661DDB
0x661DD7: cmp     [edi], ebx
0x661DD9: jz      short loc_661E06
0x661DDB: mov     eax, [edi]
0x661DDD: cmp     eax, ebx
0x661DDF: mov     [esp+54h+var_14], ebx
0x661DE3: jz      short loc_661DEC
0x661DE5: mov     eax, [eax+0Ch]
0x661DE8: mov     [esp+54h+var_14], eax
0x661DEC: push    4
0x661DEE: lea     ecx, [esp+58h+var_14]
0x661DF2: push    ecx
0x661DF3: mov     ecx, esi
0x661DF5: call    TESForm_SaveFormIDToCurrentSaveGame
0x661DFA: add     [esp+54h+a1.vtbl], 1
0x661DFF: mov     edi, [edi+4]
0x661E02: cmp     edi, ebx
0x661E04: jnz     short loc_661DD2
0x661E06: mov     dx, word ptr [esp+54h+a1.vtbl]
0x661E0B: mov     [ebp+0], dx
0x661E0F: mov     eax, ds:0B33B00h
0x661E14: xor     edi, edi
0x661E16: cmp     byte ptr [eax+7Ch], 6Ch ; 'l'
0x661E1A: jb      short loc_661E4B
0x661E1C: mov     eax, [esi+6E8h]
0x661E22: cmp     eax, edi
0x661E24: mov     [esp+54h+a1.vtbl], edi
0x661E28: jz      short loc_661E38
0x661E2A: mov     eax, [eax+24h]
0x661E2D: cmp     eax, edi
0x661E2F: jz      short loc_661E38
0x661E31: mov     eax, [eax+0Ch]
0x661E34: mov     [esp+54h+a1.vtbl], eax
0x661E38: push    4
0x661E3A: lea     ecx, [esp+58h+a1]
0x661E3E: push    ecx
0x661E3F: mov     ecx, esi
0x661E41: call    TESForm_SaveFormIDToCurrentSaveGame
0x661E46: mov     eax, ds:0B33B00h
0x661E4B: cmp     byte ptr [eax+7Ch], 6Fh ; 'o'
0x661E4F: jb      loc_661EED
0x661E55: movzx   edx, word ptr [esi+794h]
0x661E5C: push    2; a2
0x661E5E: lea     eax, [esp+58h+var_4]
0x661E62: push    eax; a1
0x661E63: mov     ecx, esi
0x661E65: mov     [esp+5Ch+var_4], edx
0x661E69: call    TESForm_SaveDataToCurrentSaveGame
0x661E6E: mov     ecx, [esi+78Ch]
0x661E74: lea     edi, [esi+788h]
0x661E7A: xor     ebp, ebp
0x661E7C: xor     eax, eax
0x661E7E: cmp     ecx, ebp
0x661E80: jbe     short loc_661E95
0x661E82: mov     ebx, [edi+8]
0x661E85: mov     edx, ebx
0x661E87: cmp     [edx], ebp
0x661E89: jnz     short loc_661EE8
0x661E8B: add     eax, 1
0x661E8E: add     edx, 4
0x661E91: cmp     eax, ecx
0x661E93: jb      short loc_661E87
0x661E95: xor     eax, eax
0x661E97: cmp     eax, ebp
0x661E99: mov     [esp+54h+var_10], eax
0x661E9D: jz      short loc_661EE1
0x661E9F: nop
0x661EA0: lea     ecx, [esp+54h+a1]
0x661EA4: push    ecx
0x661EA5: lea     edx, [esp+58h+var_14]
0x661EA9: push    edx
0x661EAA: lea     eax, [esp+5Ch+var_10]
0x661EAE: push    eax
0x661EAF: mov     ecx, edi
0x661EB1: mov     [esp+60h+var_14], ebp
0x661EB5: mov     byte ptr [esp+60h+a1.vtbl], 0
0x661EBA: call    sub_65DDC0
0x661EBF: push    4
0x661EC1: lea     ecx, [esp+58h+var_14]
0x661EC5: push    ecx
0x661EC6: mov     ecx, esi
0x661EC8: call    TESForm_SaveFormIDToCurrentSaveGame
0x661ECD: push    1; a2
0x661ECF: lea     edx, [esp+58h+a1]
0x661ED3: push    edx; a1
0x661ED4: mov     ecx, esi
0x661ED6: call    TESForm_SaveDataToCurrentSaveGame
0x661EDB: cmp     [esp+54h+var_10], ebp
0x661EDF: jnz     short loc_661EA0
0x661EE1: mov     eax, ds:0B33B00h
0x661EE6: jmp     short loc_661EEF
0x661EE8: mov     eax, [ebx+eax*4]
0x661EEB: jmp     short loc_661E97
0x661EED: xor     ebp, ebp
0x661EEF: cmp     byte ptr [eax+7Ch], 73h ; 's'
0x661EF3: jb      short loc_661F4C
0x661EF5: mov     [esp+54h+a1.vtbl], ebp
0x661EF9: mov     ebx, [eax+14h]
0x661EFC: push    2; a2
0x661EFE: lea     eax, [esp+58h+a1]
0x661F02: push    eax; a1
0x661F03: mov     ecx, esi
0x661F05: call    TESForm_SaveDataToCurrentSaveGame
0x661F0A: mov     edi, offset dword_B3BB44
0x661F0F: nop
0x661F10: cmp     [edi+4], ebp
0x661F13: jnz     short loc_661F19
0x661F15: cmp     [edi], ebp
0x661F17: jz      short loc_661F44
0x661F19: mov     eax, [edi]
0x661F1B: cmp     eax, ebp
0x661F1D: mov     [esp+54h+var_10], ebp
0x661F21: jz      short loc_661F2A
0x661F23: mov     ecx, [eax+0Ch]
0x661F26: mov     [esp+54h+var_10], ecx
0x661F2A: push    4
0x661F2C: lea     edx, [esp+58h+var_10]
0x661F30: push    edx
0x661F31: mov     ecx, esi
0x661F33: call    TESForm_SaveFormIDToCurrentSaveGame
0x661F38: add     [esp+54h+a1.vtbl], 1
0x661F3D: mov     edi, [edi+4]
0x661F40: cmp     edi, ebp
0x661F42: jnz     short loc_661F10
0x661F44: mov     ax, word ptr [esp+54h+a1.vtbl]
0x661F49: mov     [ebx], ax
0x661F4C: mov     ecx, [esi+1E4h]
0x661F52: push    esi
0x661F53: push    ecx
0x661F54: call    ActiveEffect_Base_SaveAEList
0x661F59: add     esp, 8
0x661F5C: push    54h ; 'T'; a2
0x661F5E: lea     edx, [esi+130h]
0x661F64: push    edx; a1
0x661F65: mov     ecx, esi
0x661F67: call    TESForm_SaveDataToCurrentSaveGame
0x661F6C: mov     eax, ds:0B33B00h
0x661F71: mov     bl, 58h ; 'X'
0x661F73: cmp     [eax+7Ch], bl
0x661F76: jb      short loc_661FE2
0x661F78: mov     eax, [esi+5B4h]
0x661F7E: cmp     eax, ebp
0x661F80: jz      short loc_661F98
0x661F82: xor     ecx, ecx
0x661F84: cmp     [eax], ebp
0x661F86: jz      short loc_661F8B
0x661F88: add     ecx, 1
0x661F8B: mov     eax, [eax+4]
0x661F8E: cmp     eax, ebp
0x661F90: jnz     short loc_661F84
0x661F92: mov     [esp+54h+a1.vtbl], ecx
0x661F96: jmp     short loc_661F9C
0x661F98: mov     [esp+54h+a1.vtbl], ebp
0x661F9C: push    4; a2
0x661F9E: lea     ecx, [esp+58h+a1]
0x661FA2: push    ecx; a1
0x661FA3: mov     ecx, esi
0x661FA5: call    TESForm_SaveDataToCurrentSaveGame
0x661FAA: cmp     [esp+54h+a1.vtbl], ebp
0x661FAE: jle     short loc_661FE2
0x661FB0: mov     edi, [esi+5B4h]
0x661FB6: cmp     edi, ebp
0x661FB8: jz      short loc_661FE2
0x661FBA: lea     ebx, [ebx+0]
0x661FC0: cmp     [edi+4], ebp
0x661FC3: mov     eax, [edi]
0x661FC5: jnz     short loc_661FCD
0x661FC7: cmp     eax, ebp
0x661FC9: jz      short loc_661FE2
0x661FCB: jmp     short loc_661FD1
0x661FCD: cmp     eax, ebp
0x661FCF: jz      short loc_661FDB
0x661FD1: push    8; a2
0x661FD3: push    eax; a1
0x661FD4: mov     ecx, esi
0x661FD6: call    TESForm_SaveDataToCurrentSaveGame
0x661FDB: mov     edi, [edi+4]
0x661FDE: cmp     edi, ebp
0x661FE0: jnz     short loc_661FC0
0x661FE2: mov     edx, ds:0B33B00h
0x661FE8: cmp     [edx+7Ch], bl
0x661FEB: jnb     short loc_662031
0x661FED: mov     eax, [esi+5B4h]
0x661FF3: cmp     eax, ebp
0x661FF5: jz      short loc_661FFB
0x661FF7: mov     edi, [eax]
0x661FF9: jmp     short loc_662016
0x661FFB: push    8; Size
0x661FFD: call    FormHeapAlloc
0x662002: add     esp, 4
0x662005: cmp     eax, ebp
0x662007: jz      short loc_662012
0x662009: xor     ecx, ecx
0x66200B: mov     [eax], ecx
0x66200D: mov     [eax+4], ecx
0x662010: jmp     short loc_662014
0x662012: xor     eax, eax
0x662014: mov     edi, eax
0x662016: push    8; a2
0x662018: push    edi; a1
0x662019: mov     ecx, esi
0x66201B: call    TESForm_SaveDataToCurrentSaveGame
0x662020: cmp     [esi+5B4h], ebp
0x662026: jnz     short loc_662031
0x662028: push    edi
0x662029: call    FormHeapFree
0x66202E: add     esp, 4
0x662031: push    3; a2
0x662033: lea     eax, [esi+5B8h]
0x662039: push    eax; a1
0x66203A: mov     ecx, esi
0x66203C: call    TESForm_SaveDataToCurrentSaveGame
0x662041: push    54h ; 'T'; a2
0x662043: lea     ecx, [esi+188h]
0x662049: push    ecx; a1
0x66204A: mov     ecx, esi
0x66204C: call    TESForm_SaveDataToCurrentSaveGame
0x662051: push    4; a2
0x662053: lea     edx, [esi+184h]
0x662059: push    edx; a1
0x66205A: mov     ecx, esi
0x66205C: call    TESForm_SaveDataToCurrentSaveGame
0x662061: push    1; a2
0x662063: lea     eax, [esi+1DCh]
0x662069: push    eax; a1
0x66206A: mov     ecx, esi
0x66206C: call    TESForm_SaveDataToCurrentSaveGame
0x662071: mov     eax, [esi+5F4h]
0x662077: cmp     eax, ebp
0x662079: mov     [esp+54h+a1.vtbl], ebp
0x66207D: jz      short loc_662086
0x66207F: mov     ecx, [eax+0Ch]
0x662082: mov     [esp+54h+a1.vtbl], ecx
0x662086: push    4
0x662088: lea     edx, [esp+58h+a1]
0x66208C: push    edx
0x66208D: mov     ecx, esi
0x66208F: call    TESForm_SaveFormIDToCurrentSaveGame
0x662094: mov     eax, ds:0B33B00h
0x662099: push    2; a2
0x66209B: lea     ecx, [esp+58h+a1]
0x66209F: push    ecx; a1
0x6620A0: mov     [esp+5Ch+a1.vtbl], ebp
0x6620A4: mov     ebx, [eax+14h]
0x6620A7: mov     ecx, esi
0x6620A9: call    TESForm_SaveDataToCurrentSaveGame
0x6620AE: lea     edi, [esi+5E4h]
0x6620B4: cmp     edi, ebp
0x6620B6: jz      short loc_6620E4
0x6620B8: cmp     [edi+4], ebp
0x6620BB: jnz     short loc_6620C1
0x6620BD: cmp     [edi], ebp
0x6620BF: jz      short loc_6620E4
0x6620C1: mov     edx, [edi]
0x6620C3: mov     eax, [edx+0Ch]
0x6620C6: push    4
0x6620C8: lea     ecx, [esp+58h+var_4]
0x6620CC: push    ecx
0x6620CD: mov     ecx, esi
0x6620CF: mov     [esp+5Ch+var_4], eax
0x6620D3: call    TESForm_SaveFormIDToCurrentSaveGame
0x6620D8: add     [esp+54h+a1.vtbl], 1
0x6620DD: mov     edi, [edi+4]
0x6620E0: cmp     edi, ebp
0x6620E2: jnz     short loc_6620B8
0x6620E4: mov     dx, word ptr [esp+54h+a1.vtbl]
0x6620E9: mov     [ebx], dx
0x6620EC: mov     eax, ds:0B33B00h
0x6620F1: mov     [esp+54h+var_44.vtbl], 0
0x6620F9: mov     ecx, [eax+14h]
0x6620FC: push    2; a2
0x6620FE: lea     edx, [esp+58h+var_44]
0x662102: mov     [esp+58h+var_18], ecx
0x662106: push    edx; a1
0x662107: mov     ecx, esi
0x662109: call    TESForm_SaveDataToCurrentSaveGame
0x66210E: lea     ebp, [esi+5ECh]
0x662114: test    ebp, ebp
0x662116: jz      loc_6621BC
0x66211C: lea     esp, [esp+0]
0x662120: cmp     dword ptr [ebp+4], 0
0x662124: jnz     short loc_662130
0x662126: cmp     dword ptr [ebp+0], 0
0x66212A: jz      loc_6621BC
0x662130: mov     ebx, [ebp+0]
0x662133: mov     eax, [ebx+68h]
0x662136: mov     ecx, [eax+0Ch]
0x662139: mov     [esp+54h+var_14], ecx
0x66213D: mov     byte ptr [esp+54h+a1.vtbl], 0
0x662142: mov     dl, [ebx+60h]
0x662145: lea     edi, [eax+40h]
0x662148: test    edi, edi
0x66214A: mov     byte ptr [esp+54h+var_10], dl
0x66214E: jz      short loc_662182
0x662150: cmp     dword ptr [edi+4], 0
0x662154: jnz     short loc_66215B
0x662156: cmp     dword ptr [edi], 0
0x662159: jz      short loc_662182
0x66215B: mov     eax, [esp+54h+var_10]
0x66215F: mov     ecx, [edi]
0x662161: push    eax
0x662162: mov     [esp+58h+var_4], ecx
0x662166: call    sub_52AC30
0x66216B: cmp     ebx, eax
0x66216D: jz      short loc_662178
0x66216F: mov     edi, [edi+4]
0x662172: test    edi, edi
0x662174: jnz     short loc_662150
0x662176: jmp     short loc_662182
0x662178: mov     ecx, [esp+54h+var_4]
0x66217C: mov     dl, [ecx]
0x66217E: mov     byte ptr [esp+54h+a1.vtbl], dl
0x662182: push    4
0x662184: lea     eax, [esp+58h+var_14]
0x662188: push    eax
0x662189: mov     ecx, esi
0x66218B: call    TESForm_SaveFormIDToCurrentSaveGame
0x662190: push    1; a2
0x662192: lea     ecx, [esp+58h+a1]
0x662196: push    ecx; a1
0x662197: mov     ecx, esi
0x662199: call    TESForm_SaveDataToCurrentSaveGame
0x66219E: push    1; a2
0x6621A0: lea     edx, [esp+58h+var_10]
0x6621A4: push    edx; a1
0x6621A5: mov     ecx, esi
0x6621A7: call    TESForm_SaveDataToCurrentSaveGame
0x6621AC: add     [esp+54h+var_44.vtbl], 1
0x6621B1: mov     ebp, [ebp+4]
0x6621B4: test    ebp, ebp
0x6621B6: jnz     loc_662120
0x6621BC: mov     ax, word ptr [esp+54h+var_44.vtbl]
0x6621C1: mov     ecx, [esp+54h+var_18]
0x6621C5: mov     [ecx], ax
0x6621C8: call    sub_416BA0
0x6621CD: mov     edx, [esi]
0x6621CF: mov     eax, [edx+170h]
0x6621D5: mov     ecx, esi
0x6621D7: call    eax
0x6621D9: push    esi
0x6621DA: mov     ecx, eax
0x6621DC: call    sub_526230
0x6621E1: mov     ecx, esi; this
0x6621E3: call    TESObjectREFR_GetName
0x6621E8: mov     edi, eax
0x6621EA: lea     edx, [eax+1]
0x6621ED: lea     ecx, [ecx+0]
0x6621F0: mov     cl, [eax]
0x6621F2: add     eax, 1
0x6621F5: test    cl, cl
0x6621F7: jnz     short loc_6621F0
0x6621F9: sub     eax, edx
0x6621FB: push    1; a2
0x6621FD: lea     ecx, [esp+58h+a1]
0x662201: add     al, 1
0x662203: push    ecx; a1
0x662204: mov     ecx, esi
0x662206: mov     byte ptr [esp+5Ch+a1.vtbl], al
0x66220A: call    TESForm_SaveDataToCurrentSaveGame
0x66220F: movzx   edx, byte ptr [esp+54h+a1.vtbl]
0x662214: push    edx; a2
0x662215: push    edi; a1
0x662216: mov     ecx, esi
0x662218: call    TESForm_SaveDataToCurrentSaveGame
0x66221D: mov     eax, ds:0B33B00h
0x662222: cmp     byte ptr [eax+7Ch], 2Ch ; ','
0x662226: jb      short loc_66227B
0x662228: push    0; a2
0x66222A: mov     ecx, esi; this
0x66222C: call    Actor_GetActorBaseForm
0x662231: mov     ecx, ds:0B37C88h
0x662237: mov     edi, [eax+104h]
0x66223D: push    ecx
0x66223E: mov     ecx, ds:0B33A98h
0x662244: call    TESDataHandler_LookupTESClassByFormID
0x662249: test    edi, edi
0x66224B: mov     ebx, eax
0x66224D: mov     [esp+54h+a1.vtbl], 0
0x662255: jz      short loc_66225E
0x662257: mov     edx, [edi+0Ch]
0x66225A: mov     [esp+54h+a1.vtbl], edx
0x66225E: push    4
0x662260: lea     eax, [esp+58h+a1]
0x662264: push    eax
0x662265: mov     ecx, esi
0x662267: call    TESForm_SaveFormIDToCurrentSaveGame
0x66226C: test    edi, edi
0x66226E: jz      short loc_66227B
0x662270: cmp     edi, ebx
0x662272: jnz     short loc_66227B
0x662274: mov     ecx, edi
0x662276: call    sub_51C3B0
0x66227B: mov     ecx, ds:0B33B00h
0x662281: cmp     byte ptr [ecx+7Ch], 45h ; 'E'
0x662285: jb      short loc_6622AE
0x662287: mov     eax, [esi+654h]
0x66228D: test    eax, eax
0x66228F: mov     [esp+54h+a1.vtbl], 0
0x662297: jz      short loc_6622A0
0x662299: mov     edx, [eax+0Ch]
0x66229C: mov     [esp+54h+a1.vtbl], edx
0x6622A0: push    4
0x6622A2: lea     eax, [esp+58h+a1]
0x6622A6: push    eax
0x6622A7: mov     ecx, esi
0x6622A9: call    TESForm_SaveFormIDToCurrentSaveGame
0x6622AE: mov     ecx, ds:0B33B00h
0x6622B4: cmp     byte ptr [ecx+7Ch], 7Eh ; '~'
0x6622B8: jb      short loc_6622DA
0x6622BA: push    1; a2
0x6622BC: lea     edx, [esi+116h]
0x6622C2: push    edx; a1
0x6622C3: mov     ecx, esi
0x6622C5: call    TESForm_SaveDataToCurrentSaveGame
0x6622CA: push    4; a2
0x6622CC: lea     eax, [esi+700h]
0x6622D2: push    eax; a1
0x6622D3: mov     ecx, esi
0x6622D5: call    TESForm_SaveDataToCurrentSaveGame
0x6622DA: cmp     byte ptr ds:0B05BACh, 0
0x6622E1: jz      short loc_66234E
0x6622E3: mov     eax, ds:0B33B00h
0x6622E8: mov     edi, [eax+84h]
0x6622EE: test    edi, edi
0x6622F0: mov     esi, [eax+14h]
0x6622F3: jz      short loc_662332
0x6622F5: mov     ecx, [edi]
0x6622F7: push    ecx; a1
0x6622F8: call    TESForm_LookupByFormID
0x6622FD: mov     edx, [edi+5]
0x662300: add     esp, 4
0x662303: push    offset a_AiPlayerchara; ".\\AI\\PlayerCharacter.cpp"
0x662308: push    251Ah
0x66230D: push    edx
0x66230E: mov     edx, [eax]
0x662310: mov     ecx, eax
0x662312: mov     eax, [edx+0D4h]
0x662318: call    eax
0x66231A: mov     ecx, [edi]
0x66231C: sub     esi, dword ptr [esp+60h+var_44.member.type]
0x662320: push    eax
0x662321: push    ecx
0x662322: push    esi; ArgList
0x662323: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x662328: call    sub_40FEC0
0x66232D: add     esp, 1Ch
0x662330: jmp     short loc_66234E
0x662332: sub     esi, dword ptr [esp+54h+var_44.member.type]
0x662336: push    offset a_AiPlayerchara; ".\\AI\\PlayerCharacter.cpp"
0x66233B: push    251Ah
0x662340: push    esi; ArgList
0x662341: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x662346: call    sub_40FEC0
0x66234B: add     esp, 10h
0x66234E: mov     ecx, ds:0B33B00h
0x662354: call    sub_45A170
0x662359: test    al, al
0x66235B: jz      short loc_662390
0x66235D: mov     edx, ds:0B33B00h
0x662363: mov     edi, [esp+54h+Src]
0x662367: mov     esi, [edx+14h]
0x66236A: lea     eax, [edi+0FFFFh]
0x662370: cmp     esi, eax
0x662372: jbe     short loc_66238B
0x662374: push    251Ah
0x662379: push    offset a_AiPlayerchara; ".\\AI\\PlayerCharacter.cpp"
0x66237E: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x662383: call    PrintError
0x662388: add     esp, 0Ch
0x66238B: sub     esi, edi
0x66238D: mov     [edi], si
0x662390: pop     edi
0x662391: pop     esi
0x662392: pop     ebp
0x662393: pop     ebx
0x662394: add     esp, 44h
0x662397: retn    4
