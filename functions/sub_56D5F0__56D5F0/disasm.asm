0x56D5F0: sub     esp, 34h
0x56D5F3: push    esi
0x56D5F4: push    edi
0x56D5F5: xor     edi, edi
0x56D5F7: cmp     byte ptr ds:0B05BACh, 0
0x56D5FE: mov     esi, ecx
0x56D600: mov     ecx, ds:0B33B00h
0x56D606: mov     [esp+3Ch+var_18], edi
0x56D60A: mov     eax, [ecx+14h]
0x56D60D: mov     [esp+3Ch+var_1C], edi
0x56D611: mov     [esp+3Ch+var_24], eax
0x56D615: jz      short loc_56D61B
0x56D617: mov     [esp+3Ch+var_24], eax
0x56D61B: call    sub_45A170
0x56D620: test    al, al
0x56D622: jz      short loc_56D657
0x56D624: mov     ecx, ds:0B33B00h
0x56D62A: push    4; Size
0x56D62C: lea     eax, [esp+40h+Src]
0x56D630: push    eax; Src
0x56D631: mov     [esp+44h+Src], 4B4F4C42h
0x56D639: call    SaveLoad_SaveData
0x56D63E: mov     ecx, ds:0B33B00h
0x56D644: mov     edx, [ecx+14h]
0x56D647: push    2; Size
0x56D649: lea     eax, [esp+40h+var_18]
0x56D64D: push    eax; Src
0x56D64E: mov     [esp+44h+var_1C], edx
0x56D652: call    SaveLoad_SaveData
0x56D657: mov     ecx, esi
0x56D659: call    sub_56BD80
0x56D65E: mov     ecx, [esi+18h]
0x56D661: mov     eax, [ecx]
0x56D663: cmp     eax, edi
0x56D665: jz      short loc_56D66C
0x56D667: mov     eax, [eax+34h]
0x56D66A: jmp     short loc_56D66E
0x56D66C: xor     eax, eax
0x56D66E: mov     ecx, ds:0B33B00h
0x56D674: push    ebx
0x56D675: push    ebp
0x56D676: push    eax; void *
0x56D677: call    sub_45E940
0x56D67C: mov     edx, [esi+18h]
0x56D67F: mov     ecx, ds:0B33B00h
0x56D685: push    4; Size
0x56D687: add     edx, 4
0x56D68A: push    edx; Src
0x56D68B: call    SaveLoad_SaveData
0x56D690: mov     eax, [esi+18h]
0x56D693: add     eax, 8
0x56D696: push    eax
0x56D697: lea     ecx, [esp+48h+var_10]
0x56D69B: call    sub_7150F0
0x56D6A0: push    10h; Size
0x56D6A2: lea     ecx, [esp+48h+var_10]
0x56D6A6: push    ecx; Src
0x56D6A7: mov     ecx, ds:0B33B00h
0x56D6AD: call    SaveLoad_SaveData
0x56D6B2: mov     edx, [esi+18h]
0x56D6B5: mov     ecx, ds:0B33B00h
0x56D6BB: push    0Ch; Size
0x56D6BD: add     edx, 2Ch ; ','
0x56D6C0: push    edx; Src
0x56D6C1: call    SaveLoad_SaveData
0x56D6C6: mov     eax, [esi+18h]
0x56D6C9: mov     ecx, ds:0B33B00h
0x56D6CF: push    4; Size
0x56D6D1: add     eax, 38h ; '8'
0x56D6D4: push    eax; Src
0x56D6D5: call    SaveLoad_SaveData
0x56D6DA: mov     ecx, [esi+18h]
0x56D6DD: add     ecx, 3Ch ; '<'
0x56D6E0: push    4
0x56D6E2: push    ecx
0x56D6E3: mov     ecx, ds:0B33B00h
0x56D6E9: call    SaveLoad_SaveFormID
0x56D6EE: mov     edx, [esi+18h]
0x56D6F1: mov     ecx, ds:0B33B00h
0x56D6F7: push    4; Size
0x56D6F9: add     edx, 40h ; '@'
0x56D6FC: push    edx; Src
0x56D6FD: call    SaveLoad_SaveData
0x56D702: mov     eax, [esi+18h]
0x56D705: mov     ecx, ds:0B33B00h
0x56D70B: push    1; Size
0x56D70D: add     eax, 44h ; 'D'
0x56D710: push    eax; Src
0x56D711: call    SaveLoad_SaveData
0x56D716: mov     ecx, [esi+18h]
0x56D719: mov     edx, [ecx+3Ch]
0x56D71C: push    edi; int
0x56D71D: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x56D722: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x56D727: push    edi; int
0x56D728: push    edx; a1
0x56D729: call    TESForm_LookupByFormID
0x56D72E: add     esp, 4
0x56D731: push    eax; void *
0x56D732: call    OblivionDynamicCast
0x56D737: mov     ebx, [esi+20h]
0x56D73A: add     esp, 14h
0x56D73D: test    ebx, ebx
0x56D73F: mov     ebp, eax
0x56D741: mov     edi, [ebp+3Ch]
0x56D744: jnz     short loc_56D76D
0x56D746: mov     eax, [ebp+0Ch]
0x56D749: mov     edx, [ebp+0]
0x56D74C: mov     [esp+44h+Src], eax
0x56D750: mov     eax, [edx+0D4h]
0x56D756: mov     ecx, ebp
0x56D758: call    eax
0x56D75A: mov     ecx, [esp+44h+Src]
0x56D75E: push    eax
0x56D75F: push    ecx; ArgList
0x56D760: push    offset aCouldNotFindAt; "Could not find attached geometry for de"...
0x56D765: call    PrintError
0x56D76A: add     esp, 0Ch
0x56D76D: push    0
0x56D76F: push    1
0x56D771: push    ebx
0x56D772: push    edi
0x56D773: call    sub_4810A0
0x56D778: add     esp, 10h
0x56D77B: cmp     eax, 0FFFFFFFFh
0x56D77E: mov     [esp+44h+var_34], eax
0x56D782: jnz     short loc_56D7A9
0x56D784: mov     ecx, ds:0B333C4h
0x56D78A: cmp     ebp, ecx
0x56D78C: jnz     short loc_56D7A9
0x56D78E: push    1
0x56D790: call    PlayerCharacter_GetPlayerNode
0x56D795: push    0
0x56D797: push    1
0x56D799: mov     edi, eax
0x56D79B: push    ebx
0x56D79C: push    edi
0x56D79D: call    sub_4810A0
0x56D7A2: add     esp, 10h
0x56D7A5: mov     [esp+44h+var_34], eax
0x56D7A9: push    0
0x56D7AB: push    1
0x56D7AD: push    edi
0x56D7AE: call    sub_480F00
0x56D7B3: add     esp, 0Ch
0x56D7B6: cmp     [esp+44h+var_34], 0FFFFFFFFh
0x56D7BB: mov     [esp+44h+var_14], eax
0x56D7BF: jnz     short loc_56D7E0
0x56D7C1: mov     edx, [ebp+0]
0x56D7C4: mov     eax, [edx+0D4h]
0x56D7CA: mov     edi, [ebp+0Ch]
0x56D7CD: mov     ecx, ebp
0x56D7CF: call    eax
0x56D7D1: push    eax
0x56D7D2: push    edi; ArgList
0x56D7D3: push    offset aCouldNotFindGe; "Could not find geometry index for refer"...
0x56D7D8: call    PrintError
0x56D7DD: add     esp, 0Ch
0x56D7E0: push    4; Size
0x56D7E2: lea     ecx, [esp+48h+var_14]
0x56D7E6: push    ecx; Src
0x56D7E7: mov     ecx, ds:0B33B00h
0x56D7ED: call    SaveLoad_SaveData
0x56D7F2: mov     ecx, ds:0B33B00h
0x56D7F8: push    4; Size
0x56D7FA: lea     edx, [esp+48h+var_34]
0x56D7FE: push    edx; Src
0x56D7FF: call    SaveLoad_SaveData
0x56D804: mov     esi, [esi+1Ch]
0x56D807: mov     edi, [esi+0B4h]
0x56D80D: mov     esi, [esi+0B8h]
0x56D813: mov     eax, [esi+8]
0x56D816: movzx   ecx, word ptr [edi+8]
0x56D81A: mov     ebp, [eax+44h]
0x56D81D: mov     [esp+44h+var_30], ecx
0x56D821: movzx   edx, word ptr [edi+44h]
0x56D825: mov     [esp+44h+var_20], edx
0x56D829: mov     eax, [esi+8]
0x56D82C: movzx   ecx, word ptr [eax+40h]
0x56D830: push    2; Size
0x56D832: lea     edx, [esp+48h+var_30]
0x56D836: mov     [esp+48h+var_28], ecx
0x56D83A: mov     ecx, ds:0B33B00h
0x56D840: push    edx; Src
0x56D841: call    SaveLoad_SaveData
0x56D846: mov     ecx, ds:0B33B00h
0x56D84C: push    2; Size
0x56D84E: lea     eax, [esp+48h+var_20]
0x56D852: push    eax; Src
0x56D853: call    SaveLoad_SaveData
0x56D858: push    2; Size
0x56D85A: lea     ecx, [esp+48h+var_28]
0x56D85E: push    ecx; Src
0x56D85F: mov     ecx, ds:0B33B00h
0x56D865: call    SaveLoad_SaveData
0x56D86A: movzx   eax, word ptr [esp+44h+var_30]
0x56D86F: mov     ecx, ds:0B33B00h
0x56D875: lea     edx, [eax+eax*2]
0x56D878: mov     eax, [edi+1Ch]
0x56D87B: add     edx, edx
0x56D87D: add     edx, edx
0x56D87F: push    edx; Size
0x56D880: push    eax; Src
0x56D881: call    SaveLoad_SaveData
0x56D886: movzx   eax, word ptr [esp+44h+var_30]
0x56D88B: mov     edx, [edi+20h]
0x56D88E: lea     ecx, [eax+eax*2]
0x56D891: add     ecx, ecx
0x56D893: add     ecx, ecx
0x56D895: push    ecx; Size
0x56D896: mov     ecx, ds:0B33B00h
0x56D89C: push    edx; Src
0x56D89D: call    SaveLoad_SaveData
0x56D8A2: movzx   eax, word ptr [esp+44h+var_20]
0x56D8A7: mov     ecx, [edi+48h]
0x56D8AA: add     eax, eax
0x56D8AC: push    eax; Size
0x56D8AD: push    ecx; Src
0x56D8AE: mov     ecx, ds:0B33B00h
0x56D8B4: call    SaveLoad_SaveData
0x56D8B9: xor     ebx, ebx
0x56D8BB: cmp     word ptr [esp+44h+var_28], bx
0x56D8C0: jbe     short loc_56D921
0x56D8C2: lea     edi, [ebp+44h]
0x56D8C5: jmp     short loc_56D8D0
0x56D8C7: align 10h
0x56D8D0: movzx   edx, word ptr [edi+4]
0x56D8D4: mov     ecx, ds:0B33B00h
0x56D8DA: push    2; Size
0x56D8DC: lea     eax, [esp+48h+Src]
0x56D8E0: push    eax; Src
0x56D8E1: mov     [esp+4Ch+Src], edx
0x56D8E5: call    SaveLoad_SaveData
0x56D8EA: xor     esi, esi
0x56D8EC: cmp     word ptr [esp+44h+Src], si
0x56D8F1: jbe     short loc_56D912
0x56D8F3: mov     ecx, [edi]
0x56D8F5: lea     edx, [ecx+esi*8]
0x56D8F8: mov     ecx, ds:0B33B00h
0x56D8FE: push    8; Size
0x56D900: push    edx; Src
0x56D901: call    SaveLoad_SaveData
0x56D906: movzx   eax, word ptr [esp+44h+Src]
0x56D90B: add     esi, 1
0x56D90E: cmp     esi, eax
0x56D910: jb      short loc_56D8F3
0x56D912: movzx   ecx, word ptr [esp+44h+var_28]
0x56D917: add     ebx, 1
0x56D91A: add     edi, 4Ch ; 'L'
0x56D91D: cmp     ebx, ecx
0x56D91F: jl      short loc_56D8D0
0x56D921: cmp     byte ptr ds:0B05BACh, 0
0x56D928: pop     ebp
0x56D929: pop     ebx
0x56D92A: jz      short loc_56D997
0x56D92C: mov     eax, ds:0B33B00h
0x56D931: mov     edi, [eax+84h]
0x56D937: test    edi, edi
0x56D939: mov     esi, [eax+14h]
0x56D93C: jz      short loc_56D97B
0x56D93E: mov     edx, [edi]
0x56D940: push    edx; a1
0x56D941: call    TESForm_LookupByFormID
0x56D946: mov     ecx, [edi+5]
0x56D949: mov     edx, [eax]
0x56D94B: add     esp, 4
0x56D94E: push    offset a__TesShared_10; "..\\TES Shared\\TempEffects\\BSTempEffe"...
0x56D953: push    580h
0x56D958: push    ecx
0x56D959: mov     ecx, eax
0x56D95B: mov     eax, [edx+0D4h]
0x56D961: call    eax
0x56D963: mov     ecx, [edi]
0x56D965: sub     esi, [esp+48h+var_24]
0x56D969: push    eax
0x56D96A: push    ecx
0x56D96B: push    esi; ArgList
0x56D96C: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x56D971: call    sub_40FEC0
0x56D976: add     esp, 1Ch
0x56D979: jmp     short loc_56D997
0x56D97B: sub     esi, [esp+3Ch+var_24]
0x56D97F: push    offset a__TesShared_10; "..\\TES Shared\\TempEffects\\BSTempEffe"...
0x56D984: push    580h
0x56D989: push    esi; ArgList
0x56D98A: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x56D98F: call    sub_40FEC0
0x56D994: add     esp, 10h
0x56D997: mov     ecx, ds:0B33B00h
0x56D99D: call    sub_45A170
0x56D9A2: test    al, al
0x56D9A4: jz      short loc_56D9D9
0x56D9A6: mov     edx, ds:0B33B00h
0x56D9AC: mov     edi, [esp+3Ch+var_1C]
0x56D9B0: mov     esi, [edx+14h]
0x56D9B3: lea     eax, [edi+0FFFFh]
0x56D9B9: cmp     esi, eax
0x56D9BB: jbe     short loc_56D9D4
0x56D9BD: push    580h
0x56D9C2: push    offset a__TesShared_10; "..\\TES Shared\\TempEffects\\BSTempEffe"...
0x56D9C7: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x56D9CC: call    PrintError
0x56D9D1: add     esp, 0Ch
0x56D9D4: sub     esi, edi
0x56D9D6: mov     [edi], si
0x56D9D9: pop     edi
0x56D9DA: pop     esi
0x56D9DB: add     esp, 34h
0x56D9DE: retn
