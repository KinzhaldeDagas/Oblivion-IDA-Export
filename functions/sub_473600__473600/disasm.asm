0x473600: sub     esp, 20h
0x473603: push    ebx
0x473604: push    ebp
0x473605: push    esi
0x473606: xor     esi, esi
0x473608: cmp     byte ptr ds:0B05BACh, 0
0x47360F: mov     ebp, ecx
0x473611: mov     ecx, ds:0B33B00h
0x473617: mov     [esp+2Ch+var_8], esi
0x47361B: mov     eax, [ecx+14h]
0x47361E: push    edi
0x47361F: mov     [esp+30h+var_C], esi
0x473623: mov     [esp+30h+var_14], eax
0x473627: jz      short loc_47362D
0x473629: mov     [esp+30h+var_14], eax
0x47362D: call    sub_45A170
0x473632: test    al, al
0x473634: jz      short loc_473669
0x473636: mov     ecx, ds:0B33B00h
0x47363C: push    4; Size
0x47363E: lea     eax, [esp+34h+Src]
0x473642: push    eax; Src
0x473643: mov     [esp+38h+Src], 4B4F4C42h
0x47364B: call    SaveLoad_SaveData
0x473650: mov     ecx, ds:0B33B00h
0x473656: mov     edx, [ecx+14h]
0x473659: push    2; Size
0x47365B: lea     eax, [esp+34h+var_8]
0x47365F: push    eax; Src
0x473660: mov     [esp+38h+var_C], edx
0x473664: call    SaveLoad_SaveData
0x473669: push    4; Size
0x47366B: lea     ecx, [ebp+0BCh]
0x473671: push    ecx; Src
0x473672: mov     ecx, ds:0B33B00h
0x473678: call    SaveLoad_SaveData
0x47367D: mov     ecx, ds:0B33B00h
0x473683: push    4; Size
0x473685: lea     edx, [ebp+0C0h]
0x47368B: push    edx; Src
0x47368C: call    SaveLoad_SaveData
0x473691: mov     ecx, ds:0B33B00h
0x473697: push    0Ch; Size
0x473699: lea     eax, [ebp+0Ch]
0x47369C: push    eax; Src
0x47369D: call    SaveLoad_SaveData
0x4736A2: push    4; Size
0x4736A4: lea     ecx, [ebp+38h]
0x4736A7: push    ecx; Src
0x4736A8: mov     ecx, ds:0B33B00h
0x4736AE: call    SaveLoad_SaveData
0x4736B3: mov     ecx, ds:0B33B00h
0x4736B9: push    1; Size
0x4736BB: lea     edx, [ebp+90h]
0x4736C1: push    edx; Src
0x4736C2: call    SaveLoad_SaveData
0x4736C7: xor     bl, bl
0x4736C9: lea     esi, [ebp+3Ch]
0x4736CC: mov     [esp+30h+var_1D], bl
0x4736D0: xor     ecx, ecx
0x4736D2: mov     edi, esi
0x4736D4: mov     edx, 5
0x4736D9: lea     esp, [esp+0]
0x4736E0: movzx   eax, word ptr [edi]
0x4736E3: cmp     ax, 0FFh
0x4736E7: jz      short loc_4736F5
0x4736E9: cmp     ax, 0FFFFh
0x4736ED: jz      short loc_4736F5
0x4736EF: mov     al, 1
0x4736F1: shl     al, cl
0x4736F3: or      bl, al
0x4736F5: add     ecx, 1
0x4736F8: add     edi, 2
0x4736FB: sub     edx, 1
0x4736FE: jnz     short loc_4736E0
0x473700: push    1; Size
0x473702: lea     ecx, [esp+34h+var_1D]
0x473706: push    ecx; Src
0x473707: mov     ecx, ds:0B33B00h
0x47370D: mov     [esp+38h+var_1D], bl
0x473711: call    SaveLoad_SaveData
0x473716: lea     edi, [ebp+0A0h]
0x47371C: mov     [esp+30h+var_18], 0
0x473724: mov     [esp+30h+var_1C], edi
0x473728: mov     [esp+30h+Src], 5
0x473730: movzx   eax, word ptr [esi]
0x473733: cmp     ax, 0FFh
0x473737: jz      loc_473829
0x47373D: cmp     ax, 0FFFFh
0x473741: jz      loc_473829
0x473747: mov     ecx, ds:0B33B00h
0x47374D: push    2; Size
0x47374F: push    esi; Src
0x473750: call    SaveLoad_SaveData
0x473755: mov     ecx, ds:0B33B00h
0x47375B: push    4; Size
0x47375D: add     edi, 0FFFFFFA8h
0x473760: push    edi; Src
0x473761: call    SaveLoad_SaveData
0x473766: mov     ecx, ds:0B33B00h
0x47376C: lea     ebx, [edi+34h]
0x47376F: push    4; Size
0x473771: lea     edx, [ebx-20h]
0x473774: push    edx; Src
0x473775: call    SaveLoad_SaveData
0x47377A: mov     ecx, ds:0B33B00h
0x473780: push    2; Size
0x473782: lea     eax, [esi+34h]
0x473785: push    eax; Src
0x473786: call    SaveLoad_SaveData
0x47378B: mov     ecx, ds:0B33B00h
0x473791: push    4; Size
0x473793: push    ebx; Src
0x473794: call    SaveLoad_SaveData
0x473799: movzx   edx, word ptr [esi]
0x47379C: lea     ecx, [esp+30h+var_4]
0x4737A0: push    ecx
0x4737A1: mov     ecx, [ebp+9Ch]
0x4737A7: push    edx
0x4737A8: mov     [esp+38h+var_1E], 0FFh
0x4737AD: call    sub_470960
0x4737B2: test    al, al
0x4737B4: mov     ebx, [esp+30h+var_1C]
0x4737B8: jz      short loc_4737CC
0x4737BA: mov     ecx, [esp+30h+var_4]
0x4737BE: mov     eax, [ecx]
0x4737C0: mov     edx, [ebx]
0x4737C2: mov     eax, [eax+14h]
0x4737C5: push    edx
0x4737C6: call    eax
0x4737C8: mov     [esp+30h+var_1E], al
0x4737CC: cmp     dword ptr [ebx], 0
0x4737CF: jnz     short loc_473802
0x4737D1: mov     edx, [edi]
0x4737D3: mov     ecx, [esp+30h+arg_0]
0x4737D7: mov     eax, [ecx+0Ch]
0x4737DA: push    edx
0x4737DB: movzx   edx, word ptr [esi]
0x4737DE: push    edx
0x4737DF: mov     edx, [esp+38h+var_18]
0x4737E3: push    edx
0x4737E4: push    eax
0x4737E5: mov     eax, [ecx]
0x4737E7: mov     edx, [eax+0D4h]
0x4737ED: call    edx
0x4737EF: push    eax; ArgList
0x4737F0: push    offset aS08xHasASequen; "%s %08X has a sequence in slot %i with "...
0x4737F5: call    PrintError
0x4737FA: add     esp, 18h
0x4737FD: mov     [esp+30h+var_1E], 0FEh ; 'þ'
0x473802: mov     ecx, ds:0B33B00h
0x473808: push    1; Size
0x47380A: lea     eax, [esp+34h+var_1E]
0x47380E: push    eax; Src
0x47380F: call    SaveLoad_SaveData
0x473814: mov     ecx, [ebx]
0x473816: test    ecx, ecx
0x473818: jz      short loc_473829
0x47381A: fld     dword ptr [ebp+94h]
0x473820: push    ecx
0x473821: fstp    [esp+34h+var_34]; Src
0x473824: call    sub_49F570
0x473829: mov     edi, [esp+30h+var_1C]
0x47382D: mov     ebx, 1
0x473832: add     [esp+30h+var_18], ebx
0x473836: add     edi, 4
0x473839: add     esi, 2
0x47383C: sub     [esp+30h+Src], ebx
0x473840: mov     [esp+30h+var_1C], edi
0x473844: jnz     loc_473730
0x47384A: mov     esi, [esp+30h+arg_0]
0x47384E: xor     edi, edi
0x473850: test    esi, esi
0x473852: jz      short loc_473866
0x473854: mov     edx, [esi]
0x473856: mov     eax, [edx+190h]
0x47385C: mov     ecx, esi
0x47385E: call    eax
0x473860: test    al, al
0x473862: jz      short loc_473866
0x473864: mov     edi, esi
0x473866: mov     eax, [ebp+0D0h]
0x47386C: fld     dword ptr [ebp+94h]
0x473872: test    eax, eax
0x473874: push    ecx
0x473875: fstp    [esp+34h+var_34]; float
0x473878: push    ebp; int
0x473879: jz      short loc_47387E
0x47387B: push    eax
0x47387C: jmp     short loc_473885
0x47387E: mov     ecx, [ebp+0CCh]
0x473884: push    ecx; void *
0x473885: push    edi; int
0x473886: call    sub_472D10
0x47388B: mov     ecx, ds:0B33B00h
0x473891: add     esp, 10h
0x473894: push    ebx; Size
0x473895: lea     edx, [ebp+0C4h]
0x47389B: push    edx; Src
0x47389C: call    SaveLoad_SaveData
0x4738A1: mov     eax, [edi+5Ch]
0x4738A4: mov     edx, [eax+30h]
0x4738A7: lea     ecx, [edi+5Ch]
0x4738AA: mov     [esp+30h+var_1F], 0
0x4738AF: call    edx
0x4738B1: test    eax, eax
0x4738B3: mov     bl, 40h ; '@'
0x4738B5: jz      loc_4739AD
0x4738BB: mov     eax, [ebp+98h]
0x4738C1: mov     ecx, [eax+7Ch]
0x4738C4: mov     edx, [ecx]
0x4738C6: mov     eax, [edx+4Ch]
0x4738C9: push    offset aMagicnode; "magicNode"
0x4738CE: call    eax
0x4738D0: test    eax, eax
0x4738D2: jz      loc_4739AD
0x4738D8: mov     edx, [eax]
0x4738DA: mov     ecx, eax
0x4738DC: mov     eax, [edx+8]
0x4738DF: call    eax
0x4738E1: test    eax, eax
0x4738E3: jz      loc_4739AD
0x4738E9: cmp     word ptr [eax+0B6h], 0
0x4738F1: jbe     loc_4739AD
0x4738F7: mov     ecx, [eax+0B0h]
0x4738FD: mov     eax, [ecx]
0x4738FF: test    eax, eax
0x473901: jz      loc_4739AD
0x473907: mov     esi, [eax+0Ch]
0x47390A: test    esi, esi
0x47390C: jz      loc_4739AD
0x473912: mov     edx, [esi]
0x473914: mov     eax, [edx+4]
0x473917: mov     ecx, esi
0x473919: call    eax
0x47391B: test    eax, eax
0x47391D: jz      short loc_473932
0x47391F: nop
0x473920: cmp     eax, offset stru_B3CAC0
0x473925: jz      loc_473A24
0x47392B: mov     eax, [eax+4]
0x47392E: test    eax, eax
0x473930: jnz     short loc_473920
0x473932: xor     al, al
0x473934: neg     al
0x473936: sbb     eax, eax
0x473938: and     eax, esi
0x47393A: jz      short loc_4739AD
0x47393C: lea     ecx, [esp+30h+arg_0]
0x473940: push    ecx
0x473941: push    offset aSpecialidle_ca; "SpecialIdle_Cast"
0x473946: lea     ecx, [eax+58h]
0x473949: call    NiTMap_GetAt
0x47394E: test    al, al
0x473950: jz      short loc_4739AD
0x473952: mov     esi, [esp+30h+arg_0]
0x473956: test    esi, esi
0x473958: jz      short loc_4739AD
0x47395A: mov     ecx, ds:0B33B00h
0x473960: mov     [esp+30h+var_1F], 1
0x473965: cmp     [ecx+7Ch], bl
0x473968: jb      short loc_473976
0x47396A: push    1; Size
0x47396C: lea     edx, [esp+34h+var_1F]
0x473970: push    edx; Src
0x473971: call    SaveLoad_SaveData
0x473976: fld     dword ptr [ebp+94h]
0x47397C: push    ecx
0x47397D: mov     ecx, esi
0x47397F: fstp    [esp+34h+var_34]; Src
0x473982: call    sub_49F570
0x473987: fldz
0x473989: mov     eax, [edi+60h]
0x47398C: fstp    [esp+30h+arg_0]
0x473990: test    eax, eax
0x473992: jz      short loc_47399B
0x473994: fld     dword ptr [eax+10h]
0x473997: fstp    [esp+30h+arg_0]
0x47399B: mov     ecx, ds:0B33B00h
0x4739A1: push    4; Size
0x4739A3: lea     eax, [esp+34h+arg_0]
0x4739A7: push    eax; Src
0x4739A8: call    SaveLoad_SaveData
0x4739AD: mov     ecx, ds:0B33B00h
0x4739B3: cmp     [ecx+7Ch], bl
0x4739B6: jb      short loc_4739D1
0x4739B8: cmp     [esp+30h+var_1F], 0
0x4739BD: jnz     short loc_4739D1
0x4739BF: push    1; Size
0x4739C1: lea     edx, [esp+34h+var_1F]
0x4739C5: push    edx; Src
0x4739C6: call    SaveLoad_SaveData
0x4739CB: mov     ecx, ds:0B33B00h
0x4739D1: cmp     byte ptr ds:0B05BACh, 0
0x4739D8: jz      short loc_473A4D
0x4739DA: mov     edi, [ecx+84h]
0x4739E0: test    edi, edi
0x4739E2: mov     esi, [ecx+14h]
0x4739E5: jz      short loc_473A2B
0x4739E7: mov     eax, [edi]
0x4739E9: push    eax; a1
0x4739EA: call    TESForm_LookupByFormID
0x4739EF: mov     ecx, [edi+5]
0x4739F2: mov     edx, [eax]
0x4739F4: add     esp, 4
0x4739F7: push    offset a__TesSharedAni; "..\\TES Shared\\Animation.cpp"
0x4739FC: push    1256h
0x473A01: push    ecx
0x473A02: mov     ecx, eax
0x473A04: mov     eax, [edx+0D4h]
0x473A0A: call    eax
0x473A0C: mov     ecx, [edi]
0x473A0E: sub     esi, [esp+3Ch+var_14]
0x473A12: push    eax
0x473A13: push    ecx
0x473A14: push    esi; ArgList
0x473A15: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x473A1A: call    sub_40FEC0
0x473A1F: add     esp, 1Ch
0x473A22: jmp     short loc_473A47
0x473A24: mov     al, 1
0x473A26: jmp     loc_473934
0x473A2B: sub     esi, [esp+30h+var_14]
0x473A2F: push    offset a__TesSharedAni; "..\\TES Shared\\Animation.cpp"
0x473A34: push    1256h
0x473A39: push    esi; ArgList
0x473A3A: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x473A3F: call    sub_40FEC0
0x473A44: add     esp, 10h
0x473A47: mov     ecx, ds:0B33B00h
0x473A4D: call    sub_45A170
0x473A52: test    al, al
0x473A54: jz      short loc_473A89
0x473A56: mov     edx, ds:0B33B00h
0x473A5C: mov     edi, [esp+30h+var_C]
0x473A60: mov     esi, [edx+14h]
0x473A63: lea     eax, [edi+0FFFFh]
0x473A69: cmp     esi, eax
0x473A6B: jbe     short loc_473A84
0x473A6D: push    1256h
0x473A72: push    offset a__TesSharedAni; "..\\TES Shared\\Animation.cpp"
0x473A77: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x473A7C: call    PrintError
0x473A81: add     esp, 0Ch
0x473A84: sub     esi, edi
0x473A86: mov     [edi], si
0x473A89: pop     edi
0x473A8A: pop     esi
0x473A8B: pop     ebp
0x473A8C: pop     ebx
0x473A8D: add     esp, 20h
0x473A90: retn    4
