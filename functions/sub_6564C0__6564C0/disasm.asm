0x6564C0: push    0FFFFFFFFh
0x6564C2: push    offset SEH_6564C0
0x6564C7: mov     eax, large fs:0
0x6564CD: push    eax
0x6564CE: sub     esp, 40h
0x6564D1: push    ebx
0x6564D2: push    ebp
0x6564D3: push    esi
0x6564D4: push    edi
0x6564D5: mov     eax, ds:0B30AACh
0x6564DA: xor     eax, esp
0x6564DC: push    eax
0x6564DD: lea     eax, [esp+60h+var_C]
0x6564E1: mov     large fs:0, eax
0x6564E7: mov     esi, ecx
0x6564E9: mov     ebp, [esp+60h+arg_8]
0x6564ED: push    0; int
0x6564EF: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x6564F4: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x6564F9: push    0; int
0x6564FB: push    ebp; void *
0x6564FC: call    OblivionDynamicCast
0x656501: mov     ebx, [esp+74h+arg_4]
0x656505: add     esp, 14h
0x656508: push    ebp; int
0x656509: mov     edi, eax
0x65650B: mov     eax, [esp+64h+arg_0]
0x65650F: push    ebx; Dst
0x656510: push    eax; int
0x656511: mov     ecx, esi
0x656513: mov     [esp+6Ch+var_44], edi
0x656517: call    sub_658DF0
0x65651C: mov     ecx, ds:0B33B00h
0x656522: xor     eax, eax
0x656524: mov     [esp+60h+var_48], eax
0x656528: mov     [esp+60h+var_40], eax
0x65652C: call    sub_45A170
0x656531: test    al, al
0x656533: jz      loc_6565DA
0x656539: push    4; Size
0x65653B: lea     ecx, [esp+64h+Dst]
0x65653F: push    ecx; Dst
0x656540: mov     ecx, ds:0B33B00h
0x656546: call    SaveLoad_LoadData
0x65654B: cmp     [esp+60h+Dst], 4B4F4C42h
0x656553: jz      short loc_6565C1
0x656555: mov     eax, ds:0B33B00h
0x65655A: mov     edi, [eax+80h]
0x656560: test    edi, edi
0x656562: jz      short loc_6565A1
0x656564: mov     edx, [edi]
0x656566: push    edx; a1
0x656567: call    TESForm_LookupByFormID
0x65656C: mov     ecx, [edi+5]
0x65656F: movzx   edx, byte ptr [edi+9]
0x656573: add     esp, 4
0x656576: push    ecx
0x656577: push    edx
0x656578: mov     edx, [eax]
0x65657A: mov     ecx, eax
0x65657C: mov     eax, [edx+0D4h]
0x656582: call    eax
0x656584: mov     ecx, [edi]
0x656586: push    eax
0x656587: push    ecx
0x656588: push    1A56h
0x65658D: push    offset a_AiMiddlehighp; ".\\AI\\MiddleHighProcess.cpp"
0x656592: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x656597: call    PrintError
0x65659C: add     esp, 1Ch
0x65659F: jmp     short loc_6565BD
0x6565A1: movzx   edx, byte ptr [eax+7Ch]
0x6565A5: push    edx
0x6565A6: push    1A56h
0x6565AB: push    offset a_AiMiddlehighp; ".\\AI\\MiddleHighProcess.cpp"
0x6565B0: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x6565B5: call    PrintError
0x6565BA: add     esp, 10h
0x6565BD: mov     edi, [esp+60h+var_44]
0x6565C1: mov     ecx, ds:0B33B00h
0x6565C7: mov     eax, [ecx+14h]
0x6565CA: push    2; Size
0x6565CC: lea     edx, [esp+64h+var_48]
0x6565D0: push    edx; Dst
0x6565D1: mov     [esp+68h+var_40], eax
0x6565D5: call    SaveLoad_LoadData
0x6565DA: mov     ecx, ds:0B33B00h
0x6565E0: push    1; Size
0x6565E2: lea     eax, [esi+114h]
0x6565E8: push    eax; Dst
0x6565E9: call    SaveLoad_LoadData
0x6565EE: push    1; Size
0x6565F0: lea     ecx, [esi+115h]
0x6565F6: push    ecx; Dst
0x6565F7: mov     ecx, ds:0B33B00h
0x6565FD: call    SaveLoad_LoadData
0x656602: mov     ecx, ds:0B33B00h
0x656608: cmp     byte ptr [ecx+7Ch], 34h ; '4'
0x65660C: jb      short loc_656630
0x65660E: push    1; Size
0x656610: lea     edx, [esi+14Ch]
0x656616: push    edx; Dst
0x656617: call    SaveLoad_LoadData
0x65661C: mov     ecx, ds:0B33B00h
0x656622: push    4; Size
0x656624: lea     eax, [esi+154h]
0x65662A: push    eax; Dst
0x65662B: call    SaveLoad_LoadData
0x656630: mov     ecx, ds:0B33B00h
0x656636: cmp     byte ptr [ecx+7Ch], 4Dh ; 'M'
0x65663A: jb      short loc_65664A
0x65663C: push    4; Size
0x65663E: lea     edx, [esi+158h]
0x656644: push    edx; Dst
0x656645: call    SaveLoad_LoadData
0x65664A: test    [esp+60h+arg_0], 28000000h
0x656652: jnz     short loc_656660
0x656654: test    ebx, 28000000h
0x65665A: jz      loc_6566E0
0x656660: xor     bl, bl
0x656662: cmp     [esi+0F4h], bl
0x656668: jnz     short loc_656685
0x65666A: mov     eax, [ebp+3Ch]
0x65666D: test    eax, eax
0x65666F: jz      short loc_656685
0x656671: push    offset aArrowbone; "ArrowBone"
0x656676: push    eax; a1
0x656677: call    NiObjectNET_LookupObjectByName
0x65667C: add     esp, 8
0x65667F: test    eax, eax
0x656681: jz      short loc_656685
0x656683: mov     bl, 1
0x656685: mov     eax, [esi]
0x656687: mov     edx, [eax+3ECh]
0x65668D: push    ebp
0x65668E: mov     ecx, esi
0x656690: call    edx
0x656692: cmp     byte ptr [esi+0F4h], 0
0x656699: jnz     short loc_6566A8
0x65669B: test    bl, bl
0x65669D: jz      short loc_6566A8
0x65669F: push    0
0x6566A1: mov     ecx, edi
0x6566A3: call    sub_5E13D0
0x6566A8: mov     eax, [ebp+3Ch]
0x6566AB: test    eax, eax
0x6566AD: jz      short loc_6566E0
0x6566AF: mov     ecx, ds:0B333C4h
0x6566B5: cmp     ebp, ecx
0x6566B7: jnz     short loc_6566D8
0x6566B9: cmp     byte ptr [ecx+588h], 0
0x6566C0: jnz     short loc_6566D8
0x6566C2: cmp     word ptr [eax+0B6h], 0
0x6566CA: ja      short loc_6566D0
0x6566CC: xor     eax, eax
0x6566CE: jmp     short loc_6566D8
0x6566D0: mov     eax, [eax+0B0h]
0x6566D6: mov     eax, [eax]
0x6566D8: push    eax
0x6566D9: mov     ecx, edi
0x6566DB: call    sub_5EA1A0
0x6566E0: test    dword ptr [esp+64h], 80000h
0x6566E8: jz      loc_65678D
0x6566EE: push    4; Size
0x6566F0: lea     ecx, [esp+68h+var_40]
0x6566F4: push    ecx; Dst
0x6566F5: mov     ecx, ds:0B33B00h
0x6566FB: call    SaveLoad_LoadFormID
0x656700: cmp     [esp+6Ch+var_48], 0
0x656705: jz      loc_65678D
0x65670B: mov     ecx, ds:0B33B00h
0x656711: push    1; Size
0x656713: lea     edx, [esp+70h+var_40]
0x656717: push    edx; Dst
0x656718: call    SaveLoad_LoadData
0x65671D: test    edi, edi
0x65671F: jnz     short loc_656733
0x656721: mov     ecx, ds:0B34D90h
0x656727: mov     eax, [ecx]
0x656729: mov     edx, [eax+18h]
0x65672C: push    offset aPackageBeingCr; "Package being created on non-actor!"
0x656731: call    edx
0x656733: mov     eax, [esp+70h+var_44]
0x656737: mov     ecx, [esp+70h+var_4C]
0x65673B: push    eax
0x65673C: push    edi
0x65673D: push    ecx
0x65673E: mov     ecx, ds:0B33B00h
0x656744: call    sub_463EC0
0x656749: mov     edi, eax
0x65674B: mov     edx, [edi]
0x65674D: mov     eax, [edx+0E4h]
0x656753: mov     ecx, edi
0x656755: call    eax
0x656757: mov     [esi+0C0h], edi
0x65675D: mov     ecx, ds:0B33B00h
0x656763: push    4; Size
0x656765: lea     edi, [esi+0CCh]
0x65676B: push    edi; Dst
0x65676C: call    SaveLoad_LoadData
0x656771: mov     ecx, [esi+0C0h]
0x656777: mov     eax, [ecx+18h]
0x65677A: push    eax
0x65677B: call    sub_673980
0x656780: add     esp, 4
0x656783: cmp     [edi], eax
0x656785: jl      short loc_65678D
0x656787: mov     dword ptr [edi], 0
0x65678D: mov     ecx, ds:0B33B00h
0x656793: push    4; Size
0x656795: lea     edx, [esp+74h+var_40]
0x656799: push    edx; Dst
0x65679A: call    SaveLoad_LoadFormID
0x65679F: mov     eax, [esp+78h+var_48]
0x6567A3: push    4; Size
0x6567A5: lea     ecx, [esi+0E0h]
0x6567AB: mov     [esi+13Ch], eax
0x6567B1: push    ecx; Dst
0x6567B2: mov     ecx, ds:0B33B00h
0x6567B8: call    SaveLoad_LoadData
0x6567BD: mov     ecx, ds:0B33B00h
0x6567C3: push    1; Size
0x6567C5: lea     edx, [esi+180h]
0x6567CB: push    edx; Dst
0x6567CC: call    SaveLoad_LoadData
0x6567D1: mov     ecx, ds:0B33B00h
0x6567D7: cmp     byte ptr [ecx+7Ch], 18h
0x6567DB: jnb     short loc_6567EF
0x6567DD: push    1; Size
0x6567DF: lea     eax, [esp+7Ch+var_64+3]
0x6567E3: push    eax; Dst
0x6567E4: call    SaveLoad_LoadData
0x6567E9: mov     ecx, ds:0B33B00h
0x6567EF: push    0Ch; Size
0x6567F1: lea     edx, [esi+0D4h]
0x6567F7: push    edx; Dst
0x6567F8: call    SaveLoad_LoadData
0x6567FD: mov     ecx, ds:0B33B00h
0x656803: push    4; Size
0x656805: lea     eax, [esi+0C4h]
0x65680B: push    eax; Dst
0x65680C: call    SaveLoad_LoadData
0x656811: push    2; Size
0x656813: lea     ecx, [esi+138h]
0x656819: push    ecx; Dst
0x65681A: mov     ecx, ds:0B33B00h
0x656820: call    SaveLoad_LoadData
0x656825: mov     ecx, ds:0B33B00h
0x65682B: push    1; Size
0x65682D: lea     edx, [esi+11Dh]
0x656833: push    edx; Dst
0x656834: call    SaveLoad_LoadData
0x656839: mov     ecx, ds:0B33B00h
0x65683F: push    1; Size
0x656841: lea     eax, [esi+124h]
0x656847: push    eax; Dst
0x656848: call    SaveLoad_LoadData
0x65684D: push    4; Size
0x65684F: lea     ecx, [esp+7Ch+var_44]
0x656853: push    ecx; Dst
0x656854: mov     ecx, ds:0B33B00h
0x65685A: call    SaveLoad_LoadFormID
0x65685F: mov     edx, [esp+80h+var_4C]
0x656863: push    4; Size
0x656865: lea     eax, [esp+84h+var_48]
0x656869: mov     [esi+120h], edx
0x65686F: mov     ecx, ds:0B33B00h
0x656875: push    eax; Dst
0x656876: call    SaveLoad_LoadData
0x65687B: push    1; Size
0x65687D: lea     ecx, [esp+84h+var_18]
0x656881: push    ecx; Dst
0x656882: mov     ecx, ds:0B33B00h
0x656888: call    SaveLoad_LoadData
0x65688D: mov     ecx, ds:0B33B00h
0x656893: push    0Ch; Size
0x656895: lea     edx, [esp+84h+Dst]
0x656899: push    edx; Dst
0x65689A: call    SaveLoad_LoadData
0x65689F: fld     [esp+80h+var_48]
0x6568A3: push    ecx
0x6568A4: lea     edi, [esi+128h]
0x6568AA: fstp    [esp+84h+var_84]; float
0x6568AD: mov     ecx, edi
0x6568AF: call    sub_6FAEE0
0x6568B4: movzx   eax, [esp+80h+var_18]
0x6568B9: mov     ecx, [esp+80h+var_34]
0x6568BD: mov     edx, [esp+80h+var_30]
0x6568C1: mov     [esi+136h], al
0x6568C7: mov     eax, [esp+80h+Dst]
0x6568CB: mov     [edi], eax
0x6568CD: mov     [edi+4], ecx
0x6568D0: push    1; Size
0x6568D2: lea     eax, [esp+84h+var_14]
0x6568D6: mov     [edi+8], edx
0x6568D9: mov     ecx, ds:0B33B00h
0x6568DF: push    eax; Dst
0x6568E0: call    SaveLoad_LoadData
0x6568E5: cmp     [esp+80h+var_14], 0
0x6568EA: jnz     short loc_656912
0x6568EC: push    0; int
0x6568EE: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x6568F3: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x6568F8: push    0; int
0x6568FA: push    ebp; void *
0x6568FB: call    OblivionDynamicCast
0x656900: mov     edx, [esi]
0x656902: add     esp, 14h
0x656905: push    eax
0x656906: mov     eax, [edx+2F8h]
0x65690C: mov     ecx, esi
0x65690E: call    eax
0x656910: jmp     short loc_656982
0x656912: test    byte ptr [esp+80h+var_1C], 8
0x656917: jnz     short loc_656982
0x656919: mov     ecx, ds:0B33B00h
0x65691F: cmp     byte ptr [ecx+7Ch], 2Fh ; '/'
0x656923: jnb     short loc_656982
0x656925: push    1; Size
0x656927: lea     edx, [esp+84h+anonymous_0+3]
0x65692B: push    edx; Dst
0x65692C: call    SaveLoad_LoadData
0x656931: cmp     byte ptr [esp+80h+anonymous_0+3], 0
0x656936: jz      short loc_656982
0x656938: push    8; Size
0x65693A: call    FormHeapAlloc
0x65693F: add     esp, 4
0x656942: mov     [esp+80h+var_3C], eax
0x656946: test    eax, eax
0x656948: mov     [esp+80h+var_24], 0
0x656950: jz      short loc_65695D
0x656952: mov     ecx, eax
0x656954: call    sub_497210
0x656959: mov     edi, eax
0x65695B: jmp     short loc_65695F
0x65695D: xor     edi, edi
0x65695F: mov     ecx, edi; Dst
0x656961: mov     [esp+80h+var_24], 0FFFFFFFFh
0x656969: call    sub_4973D0
0x65696E: test    edi, edi
0x656970: jz      short loc_656982
0x656972: mov     ecx, edi
0x656974: call    sub_497220
0x656979: push    edi
0x65697A: call    FormHeapFree
0x65697F: add     esp, 4
0x656982: test    [esp+84h+var_20], 2000000h
0x65698A: mov     al, [esp+84h+var_18]
0x65698E: mov     [esi+11Ch], al
0x656994: jz      short loc_6569A6
0x656996: mov     ecx, [esi+17Ch]
0x65699C: push    ecx
0x65699D: push    ebp
0x65699E: call    sub_470780
0x6569A3: add     esp, 8
0x6569A6: mov     ecx, ds:0B33B00h
0x6569AC: push    4; Size
0x6569AE: lea     edx, [esp+88h+var_48]
0x6569B2: push    edx; Dst
0x6569B3: call    SaveLoad_LoadFormID
0x6569B8: mov     eax, [esp+8Ch+var_50]
0x6569BC: push    4; Size
0x6569BE: lea     ecx, [esp+90h+var_4C]
0x6569C2: mov     [esi+144h], eax
0x6569C8: push    ecx; Dst
0x6569C9: mov     ecx, ds:0B33B00h
0x6569CF: call    SaveLoad_LoadFormID
0x6569D4: mov     eax, [esp+94h+var_78]
0x6569D8: mov     ecx, [esi+174h]
0x6569DE: mov     edx, [esp+94h+var_54]
0x6569E2: push    eax
0x6569E3: push    ecx
0x6569E4: mov     [esi+178h], edx
0x6569EA: call    ActiveEffect_Base_LoadAEList?
0x6569EF: mov     ecx, ds:0B33B00h
0x6569F5: add     esp, 8
0x6569F8: cmp     byte ptr [ecx+7Ch], 45h ; 'E'
0x6569FC: jb      short loc_656A12
0x6569FE: push    1; Size
0x656A00: lea     edx, [esi+0C8h]
0x656A06: push    edx; Dst
0x656A07: call    SaveLoad_LoadData
0x656A0C: mov     ecx, ds:0B33B00h
0x656A12: cmp     byte ptr [ecx+7Ch], 49h ; 'I'
0x656A16: jb      short loc_656A40
0x656A18: push    1; Size
0x656A1A: lea     eax, [esi+168h]
0x656A20: push    eax; Dst
0x656A21: call    SaveLoad_LoadData
0x656A26: push    1; Size
0x656A28: lea     ecx, [esi+169h]
0x656A2E: push    ecx; Dst
0x656A2F: mov     ecx, ds:0B33B00h
0x656A35: call    SaveLoad_LoadData
0x656A3A: mov     ecx, ds:0B33B00h
0x656A40: cmp     byte ptr [ecx+7Ch], 65h ; 'e'
0x656A44: jb      loc_656B25
0x656A4A: mov     bl, 68h ; 'h'
0x656A4C: cmp     [ecx+7Ch], bl
0x656A4F: jnb     short loc_656A5E
0x656A51: push    4
0x656A53: call    SaveLoad_AdvanceBufferOffset
0x656A58: mov     ecx, ds:0B33B00h
0x656A5E: push    4; Size
0x656A60: lea     edx, [esi+0B8h]
0x656A66: push    edx; Dst
0x656A67: call    SaveLoad_LoadData
0x656A6C: mov     ecx, ds:0B33B00h
0x656A72: push    4; Size
0x656A74: lea     eax, [esi+0BCh]
0x656A7A: push    eax; Dst
0x656A7B: call    SaveLoad_LoadData
0x656A80: mov     ecx, ds:0B33B00h
0x656A86: cmp     [ecx+7Ch], bl
0x656A89: jnb     short loc_656A98
0x656A8B: push    4
0x656A8D: call    SaveLoad_AdvanceBufferOffset
0x656A92: mov     ecx, ds:0B33B00h
0x656A98: push    2; Size
0x656A9A: lea     edx, [esp+98h+var_30]
0x656A9E: push    edx; Dst
0x656A9F: call    SaveLoad_LoadData
0x656AA4: xor     ebx, ebx
0x656AA6: cmp     word ptr [esp+94h+var_30], bx
0x656AAB: jbe     short loc_656B1F
0x656AAD: lea     ecx, [ecx+0]
0x656AB0: mov     ecx, ds:0B33B00h
0x656AB6: push    4; Size
0x656AB8: lea     eax, [esp+98h+var_68]
0x656ABC: push    eax; Dst
0x656ABD: call    SaveLoad_LoadFormID
0x656AC2: mov     eax, [esp+9Ch+var_70]
0x656AC6: test    eax, eax
0x656AC8: mov     edi, eax
0x656ACA: jz      short loc_656B13
0x656ACC: cmp     dword ptr [esi+0A8h], 0
0x656AD3: jz      short loc_656B0D
0x656AD5: push    8; Size
0x656AD7: call    FormHeapAlloc
0x656ADC: add     esp, 4
0x656ADF: test    eax, eax
0x656AE1: jz      short loc_656AF4
0x656AE3: mov     ecx, [esi+0A8h]
0x656AE9: mov     [eax], ecx
0x656AEB: mov     dword ptr [eax+4], 0
0x656AF2: jmp     short loc_656AF6
0x656AF4: xor     eax, eax
0x656AF6: mov     edx, [esi+0ACh]
0x656AFC: mov     [eax+4], edx
0x656AFF: mov     [esi+0ACh], eax
0x656B05: mov     [esi+0A8h], edi
0x656B0B: jmp     short loc_656B13
0x656B0D: mov     [esi+0A8h], eax
0x656B13: movzx   eax, word ptr [esp+9Ch+Dst]
0x656B18: add     ebx, 1
0x656B1B: cmp     ebx, eax
0x656B1D: jb      short loc_656AB0
0x656B1F: mov     ecx, ds:0B33B00h
0x656B25: cmp     byte ptr [ecx+7Ch], 6Dh ; 'm'
0x656B29: jb      short loc_656B3F
0x656B2B: push    1; Size
0x656B2D: lea     edx, [esi+16Bh]
0x656B33: push    edx; Dst
0x656B34: call    SaveLoad_LoadData
0x656B39: mov     ecx, ds:0B33B00h
0x656B3F: cmp     byte ptr [ecx+7Ch], 71h ; 'q'
0x656B43: jb      short loc_656B61
0x656B45: push    4; Size
0x656B47: lea     eax, [esp+0A0h+var_58]
0x656B4B: push    eax; Dst
0x656B4C: call    SaveLoad_LoadFormID
0x656B51: mov     ecx, [esp+0A4h+var_60]
0x656B55: mov     [esi+148h], ecx
0x656B5B: mov     ecx, ds:0B33B00h
0x656B61: call    sub_45A170
0x656B66: test    al, al
0x656B68: jz      loc_656C6C
0x656B6E: mov     ecx, ds:0B33B00h
0x656B74: mov     edi, [ecx+80h]
0x656B7A: test    edi, edi
0x656B7C: mov     esi, [ecx+14h]
0x656B7F: jz      loc_656C1E
0x656B85: mov     edx, [edi]
0x656B87: push    edx; a1
0x656B88: call    TESForm_LookupByFormID
0x656B8D: mov     ebx, [esp+0A8h+var_84]
0x656B91: mov     ecx, eax
0x656B93: movzx   eax, [esp+0A8h+var_8C]
0x656B98: add     eax, ebx
0x656B9A: add     esp, 4
0x656B9D: cmp     esi, eax
0x656B9F: jbe     short loc_656BDE
0x656BA1: mov     edx, [edi+5]
0x656BA4: movzx   eax, byte ptr [edi+9]
0x656BA8: push    edx
0x656BA9: mov     edx, [ecx]
0x656BAB: push    eax
0x656BAC: mov     eax, [edx+0D4h]
0x656BB2: call    eax
0x656BB4: mov     ecx, [edi]
0x656BB6: movzx   edx, [esp+0ACh+var_8C]
0x656BBB: push    eax
0x656BBC: push    ecx
0x656BBD: push    1B28h
0x656BC2: sub     esi, edx
0x656BC4: push    offset a_AiMiddlehighp; ".\\AI\\MiddleHighProcess.cpp"
0x656BC9: sub     esi, ebx
0x656BCB: push    esi; ArgList
0x656BCC: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x656BD1: call    PrintError
0x656BD6: add     esp, 20h
0x656BD9: jmp     loc_656C6C
0x656BDE: jnb     loc_656C6C
0x656BE4: mov     eax, [edi+5]
0x656BE7: movzx   edx, byte ptr [edi+9]
0x656BEB: push    eax
0x656BEC: mov     eax, [ecx]
0x656BEE: push    edx
0x656BEF: mov     edx, [eax+0D4h]
0x656BF5: call    edx
0x656BF7: movzx   ecx, [esp+0ACh+var_8C]
0x656BFC: push    eax
0x656BFD: mov     eax, [edi]
0x656BFF: push    eax
0x656C00: push    1B28h
0x656C05: sub     ecx, esi
0x656C07: push    offset a_AiMiddlehighp; ".\\AI\\MiddleHighProcess.cpp"
0x656C0C: add     ecx, ebx
0x656C0E: push    ecx; ArgList
0x656C0F: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x656C14: call    PrintError
0x656C19: add     esp, 20h
0x656C1C: jmp     short loc_656C6C
0x656C1E: movzx   eax, [esp+0A4h+var_8C]
0x656C23: mov     edi, [esp+0A4h+var_84]
0x656C27: lea     edx, [eax+edi]
0x656C2A: cmp     esi, edx
0x656C2C: jbe     short loc_656C49
0x656C2E: movzx   edx, byte ptr [ecx+7Ch]
0x656C32: push    edx
0x656C33: push    1B28h
0x656C38: sub     esi, eax
0x656C3A: push    offset a_AiMiddlehighp; ".\\AI\\MiddleHighProcess.cpp"
0x656C3F: sub     esi, edi
0x656C41: push    esi
0x656C42: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x656C47: jmp     short loc_656C64
0x656C49: jnb     short loc_656C6C
0x656C4B: movzx   ecx, byte ptr [ecx+7Ch]
0x656C4F: push    ecx
0x656C50: push    1B28h
0x656C55: sub     eax, esi
0x656C57: push    offset a_AiMiddlehighp; ".\\AI\\MiddleHighProcess.cpp"
0x656C5C: add     eax, edi
0x656C5E: push    eax; ArgList
0x656C5F: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x656C64: call    PrintError
0x656C69: add     esp, 14h
0x656C6C: mov     ecx, [esp+0A4h+var_50]
0x656C70: mov     large fs:0, ecx
0x656C77: pop     ecx
0x656C78: pop     edi
0x656C79: pop     esi
0x656C7A: pop     ebp
0x656C7B: pop     ebx
0x656C7C: add     esp, 4Ch
0x656C7F: retn    0Ch
