0x6B8750: sub     esp, 1Ch
0x6B8753: push    ebx
0x6B8754: push    ebp
0x6B8755: push    esi
0x6B8756: mov     esi, ecx
0x6B8758: mov     ecx, ds:0B33B00h
0x6B875E: xor     ebx, ebx
0x6B8760: mov     [esp+28h+var_4], ebx
0x6B8764: mov     ebp, [ecx+14h]
0x6B8767: push    edi
0x6B8768: mov     [esp+2Ch+var_C], ebx
0x6B876C: call    sub_45A170
0x6B8771: test    al, al
0x6B8773: jz      short loc_6B87A8
0x6B8775: mov     ecx, ds:0B33B00h
0x6B877B: push    4; Size
0x6B877D: lea     eax, [esp+30h+Src]
0x6B8781: push    eax; Src
0x6B8782: mov     [esp+34h+Src], 4B4F4C42h
0x6B878A: call    SaveLoad_SaveData
0x6B878F: mov     ecx, ds:0B33B00h
0x6B8795: mov     edx, [ecx+14h]
0x6B8798: push    2; Size
0x6B879A: lea     eax, [esp+30h+var_4]
0x6B879E: push    eax; Src
0x6B879F: mov     [esp+34h+var_C], edx
0x6B87A3: call    SaveLoad_SaveData
0x6B87A8: mov     edi, [esi]
0x6B87AA: mov     eax, edi
0x6B87AC: lea     edx, [eax+1]
0x6B87AF: nop
0x6B87B0: mov     cl, [eax]
0x6B87B2: add     eax, 1
0x6B87B5: cmp     cl, bl
0x6B87B7: jnz     short loc_6B87B0
0x6B87B9: push    1; Size
0x6B87BB: lea     ecx, [esp+30h+var_19]
0x6B87BF: sub     eax, edx
0x6B87C1: push    ecx; Src
0x6B87C2: mov     ecx, ds:0B33B00h
0x6B87C8: mov     [esp+34h+var_19], al
0x6B87CC: call    SaveLoad_SaveData
0x6B87D1: mov     al, [esp+2Ch+var_19]
0x6B87D5: cmp     al, bl
0x6B87D7: jz      short loc_6B87E9
0x6B87D9: mov     ecx, ds:0B33B00h
0x6B87DF: movzx   edx, al
0x6B87E2: push    edx; Size
0x6B87E3: push    edi; Src
0x6B87E4: call    SaveLoad_SaveData
0x6B87E9: mov     ecx, ds:0B33B00h
0x6B87EF: push    1; Size
0x6B87F1: lea     eax, [esi+8]
0x6B87F4: push    eax; Src
0x6B87F5: call    SaveLoad_SaveData
0x6B87FA: push    1; Size
0x6B87FC: lea     ecx, [esi+20h]
0x6B87FF: push    ecx; Src
0x6B8800: mov     ecx, ds:0B33B00h
0x6B8806: call    SaveLoad_SaveData
0x6B880B: mov     ecx, ds:0B33B00h
0x6B8811: push    1; Size
0x6B8813: lea     edx, [esi+21h]
0x6B8816: push    edx; Src
0x6B8817: call    SaveLoad_SaveData
0x6B881C: mov     eax, [esi+14h]
0x6B881F: cmp     eax, ebx
0x6B8821: mov     [esp+2Ch+var_18], ebx
0x6B8825: jz      short loc_6B882E
0x6B8827: mov     eax, [eax+0Ch]
0x6B882A: mov     [esp+2Ch+var_18], eax
0x6B882E: push    4
0x6B8830: lea     ecx, [esp+30h+var_18]
0x6B8834: push    ecx
0x6B8835: mov     ecx, ds:0B33B00h
0x6B883B: call    SaveLoad_SaveFormID
0x6B8840: mov     eax, [esi+24h]
0x6B8843: cmp     eax, ebx
0x6B8845: mov     [esp+2Ch+var_14], ebx
0x6B8849: jz      short loc_6B8852
0x6B884B: mov     edx, [eax+0Ch]
0x6B884E: mov     [esp+2Ch+var_14], edx
0x6B8852: mov     ecx, ds:0B33B00h
0x6B8858: push    4
0x6B885A: lea     eax, [esp+30h+var_14]
0x6B885E: push    eax
0x6B885F: call    SaveLoad_SaveFormID
0x6B8864: mov     esi, [esi+18h]
0x6B8867: cmp     esi, ebx
0x6B8869: mov     [esp+2Ch+var_10], ebx
0x6B886D: jz      short loc_6B8876
0x6B886F: mov     ecx, [esi+0Ch]
0x6B8872: mov     [esp+2Ch+var_10], ecx
0x6B8876: mov     ecx, ds:0B33B00h
0x6B887C: push    4
0x6B887E: lea     edx, [esp+30h+var_10]
0x6B8882: push    edx
0x6B8883: call    SaveLoad_SaveFormID
0x6B8888: cmp     ds:0B05BACh, bl
0x6B888E: jz      short loc_6B88F7
0x6B8890: mov     eax, ds:0B33B00h
0x6B8895: mov     edi, [eax+84h]
0x6B889B: cmp     edi, ebx
0x6B889D: mov     esi, [eax+14h]
0x6B88A0: jz      short loc_6B88DD
0x6B88A2: mov     eax, [edi]
0x6B88A4: push    eax; a1
0x6B88A5: call    TESForm_LookupByFormID
0x6B88AA: mov     ecx, [edi+5]
0x6B88AD: mov     edx, [eax]
0x6B88AF: add     esp, 4
0x6B88B2: push    offset a_DialogueMenut; ".\\Dialogue\\MenuTopic.cpp"
0x6B88B7: push    22Fh
0x6B88BC: push    ecx
0x6B88BD: mov     ecx, eax
0x6B88BF: mov     eax, [edx+0D4h]
0x6B88C5: call    eax
0x6B88C7: mov     ecx, [edi]
0x6B88C9: push    eax
0x6B88CA: push    ecx
0x6B88CB: sub     esi, ebp
0x6B88CD: push    esi; ArgList
0x6B88CE: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x6B88D3: call    sub_40FEC0
0x6B88D8: add     esp, 1Ch
0x6B88DB: jmp     short loc_6B88F7
0x6B88DD: push    offset a_DialogueMenut; ".\\Dialogue\\MenuTopic.cpp"
0x6B88E2: push    22Fh
0x6B88E7: sub     esi, ebp
0x6B88E9: push    esi; ArgList
0x6B88EA: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x6B88EF: call    sub_40FEC0
0x6B88F4: add     esp, 10h
0x6B88F7: mov     ecx, ds:0B33B00h
0x6B88FD: call    sub_45A170
0x6B8902: test    al, al
0x6B8904: jz      short loc_6B8939
0x6B8906: mov     edx, ds:0B33B00h
0x6B890C: mov     edi, [esp+2Ch+var_C]
0x6B8910: mov     esi, [edx+14h]
0x6B8913: lea     eax, [edi+0FFFFh]
0x6B8919: cmp     esi, eax
0x6B891B: jbe     short loc_6B8934
0x6B891D: push    22Fh
0x6B8922: push    offset a_DialogueMenut; ".\\Dialogue\\MenuTopic.cpp"
0x6B8927: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x6B892C: call    PrintError
0x6B8931: add     esp, 0Ch
0x6B8934: sub     esi, edi
0x6B8936: mov     [edi], si
0x6B8939: pop     edi
0x6B893A: pop     esi
0x6B893B: pop     ebp
0x6B893C: pop     ebx
0x6B893D: add     esp, 1Ch
0x6B8940: retn
