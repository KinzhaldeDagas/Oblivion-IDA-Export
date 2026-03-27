0x56C1D0: sub     esp, 28h
0x56C1D3: push    esi
0x56C1D4: push    edi
0x56C1D5: xor     edi, edi
0x56C1D7: cmp     byte ptr ds:0B05BACh, 0
0x56C1DE: mov     esi, ecx
0x56C1E0: mov     ecx, ds:0B33B00h
0x56C1E6: mov     [esp+30h+var_18], edi
0x56C1EA: mov     eax, [ecx+14h]
0x56C1ED: mov     [esp+30h+var_1C], edi
0x56C1F1: mov     [esp+30h+var_24], eax
0x56C1F5: jz      short loc_56C1FB
0x56C1F7: mov     [esp+30h+var_24], eax
0x56C1FB: call    sub_45A170
0x56C200: test    al, al
0x56C202: jz      short loc_56C237
0x56C204: mov     ecx, ds:0B33B00h
0x56C20A: push    4; Size
0x56C20C: lea     eax, [esp+34h+Src]
0x56C210: push    eax; Src
0x56C211: mov     [esp+38h+Src], 4B4F4C42h
0x56C219: call    SaveLoad_SaveData
0x56C21E: mov     ecx, ds:0B33B00h
0x56C224: mov     edx, [ecx+14h]
0x56C227: push    2; Size
0x56C229: lea     eax, [esp+34h+var_18]
0x56C22D: push    eax; Src
0x56C22E: mov     [esp+38h+var_1C], edx
0x56C232: call    SaveLoad_SaveData
0x56C237: mov     ecx, esi
0x56C239: call    sub_56BD80
0x56C23E: mov     ecx, [esi+18h]
0x56C241: mov     eax, [ecx]
0x56C243: cmp     eax, edi
0x56C245: jz      short loc_56C24C
0x56C247: mov     eax, [eax+34h]
0x56C24A: jmp     short loc_56C24E
0x56C24C: xor     eax, eax
0x56C24E: mov     ecx, ds:0B33B00h
0x56C254: push    ebx; ArgList
0x56C255: push    eax; void *
0x56C256: call    sub_45E940
0x56C25B: mov     edx, [esi+18h]
0x56C25E: mov     ecx, ds:0B33B00h
0x56C264: push    4; Size
0x56C266: add     edx, 4
0x56C269: push    edx; Src
0x56C26A: call    SaveLoad_SaveData
0x56C26F: mov     eax, [esi+18h]
0x56C272: add     eax, 8
0x56C275: push    eax
0x56C276: lea     ecx, [esp+38h+var_10]
0x56C27A: call    sub_7150F0
0x56C27F: push    10h; Size
0x56C281: lea     ecx, [esp+38h+var_10]
0x56C285: push    ecx; Src
0x56C286: mov     ecx, ds:0B33B00h
0x56C28C: call    SaveLoad_SaveData
0x56C291: mov     edx, [esi+18h]
0x56C294: mov     ecx, ds:0B33B00h
0x56C29A: push    0Ch; Size
0x56C29C: add     edx, 2Ch ; ','
0x56C29F: push    edx; Src
0x56C2A0: call    SaveLoad_SaveData
0x56C2A5: mov     eax, [esi+18h]
0x56C2A8: mov     ecx, ds:0B33B00h
0x56C2AE: push    4; Size
0x56C2B0: add     eax, 38h ; '8'
0x56C2B3: push    eax; Src
0x56C2B4: call    SaveLoad_SaveData
0x56C2B9: mov     ecx, [esi+18h]
0x56C2BC: add     ecx, 3Ch ; '<'
0x56C2BF: push    4
0x56C2C1: push    ecx
0x56C2C2: mov     ecx, ds:0B33B00h
0x56C2C8: call    SaveLoad_SaveFormID
0x56C2CD: mov     edx, [esi+18h]
0x56C2D0: mov     ecx, ds:0B33B00h
0x56C2D6: push    4; Size
0x56C2D8: add     edx, 40h ; '@'
0x56C2DB: push    edx; Src
0x56C2DC: call    SaveLoad_SaveData
0x56C2E1: mov     eax, [esi+18h]
0x56C2E4: mov     ecx, ds:0B33B00h
0x56C2EA: push    1; Size
0x56C2EC: add     eax, 44h ; 'D'
0x56C2EF: push    eax; Src
0x56C2F0: call    SaveLoad_SaveData
0x56C2F5: mov     ecx, [esi+18h]
0x56C2F8: mov     eax, [ecx+3Ch]
0x56C2FB: xor     ebx, ebx
0x56C2FD: cmp     eax, edi
0x56C2FF: jz      short loc_56C321
0x56C301: push    edi; int
0x56C302: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x56C307: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x56C30C: push    edi; int
0x56C30D: push    eax; a1
0x56C30E: call    TESForm_LookupByFormID
0x56C313: add     esp, 4
0x56C316: push    eax; void *
0x56C317: call    OblivionDynamicCast
0x56C31C: add     esp, 14h
0x56C31F: mov     ebx, eax
0x56C321: cmp     ebx, edi
0x56C323: mov     byte ptr [esp+34h+Src], 0
0x56C328: jz      short loc_56C32F
0x56C32A: mov     edi, [ebx+3Ch]
0x56C32D: jmp     short loc_56C33E
0x56C32F: mov     ecx, [esi+0Ch]; this
0x56C332: call    TESObjectCELL_GetNiNode?
0x56C337: mov     edi, eax
0x56C339: mov     byte ptr [esp+34h+Src], 1
0x56C33E: mov     edx, [esi+18h]
0x56C341: mov     eax, [edx+48h]
0x56C344: push    ebp
0x56C345: mov     ebp, [esp+38h+Src]
0x56C349: push    ebp
0x56C34A: push    1
0x56C34C: push    eax
0x56C34D: push    edi
0x56C34E: call    sub_481210
0x56C353: add     esp, 10h
0x56C356: cmp     eax, 0FFFFFFFFh
0x56C359: mov     [esp+38h+var_28], eax
0x56C35D: jnz     short loc_56C389
0x56C35F: mov     ecx, ds:0B333C4h
0x56C365: cmp     ebx, ecx
0x56C367: jnz     short loc_56C389
0x56C369: push    1
0x56C36B: call    PlayerCharacter_GetPlayerNode
0x56C370: mov     edi, eax
0x56C372: mov     eax, [esi+18h]
0x56C375: mov     eax, [eax+48h]
0x56C378: push    ebp
0x56C379: push    1
0x56C37B: push    eax
0x56C37C: push    edi
0x56C37D: call    sub_481210
0x56C382: add     esp, 10h
0x56C385: mov     [esp+38h+var_28], eax
0x56C389: push    ebp
0x56C38A: push    1
0x56C38C: push    edi
0x56C38D: call    sub_480F00
0x56C392: add     esp, 0Ch
0x56C395: cmp     [esp+38h+var_28], 0FFFFFFFFh
0x56C39A: mov     [esp+38h+var_14], eax
0x56C39E: pop     ebp
0x56C39F: jnz     short loc_56C3D2
0x56C3A1: test    ebx, ebx
0x56C3A3: jz      short loc_56C3C5
0x56C3A5: mov     edx, [ebx]
0x56C3A7: mov     eax, [edx+0D4h]
0x56C3AD: mov     esi, [ebx+0Ch]
0x56C3B0: mov     ecx, ebx
0x56C3B2: call    eax
0x56C3B4: push    eax
0x56C3B5: push    esi; ArgList
0x56C3B6: push    offset aCouldNotFindGe; "Could not find geometry index for refer"...
0x56C3BB: call    PrintError
0x56C3C0: add     esp, 0Ch
0x56C3C3: jmp     short loc_56C3D2
0x56C3C5: push    offset aCouldNotFin_14; "Could not find geometry index for UNKNO"...
0x56C3CA: call    PrintError
0x56C3CF: add     esp, 4
0x56C3D2: push    4; Size
0x56C3D4: lea     ecx, [esp+38h+var_14]
0x56C3D8: push    ecx; Src
0x56C3D9: mov     ecx, ds:0B33B00h
0x56C3DF: call    SaveLoad_SaveData
0x56C3E4: mov     ecx, ds:0B33B00h
0x56C3EA: push    4; Size
0x56C3EC: lea     edx, [esp+38h+var_28]
0x56C3F0: push    edx; Src
0x56C3F1: call    SaveLoad_SaveData
0x56C3F6: cmp     byte ptr ds:0B05BACh, 0
0x56C3FD: pop     ebx
0x56C3FE: jz      short loc_56C46B
0x56C400: mov     eax, ds:0B33B00h
0x56C405: mov     edi, [eax+84h]
0x56C40B: test    edi, edi
0x56C40D: mov     esi, [eax+14h]
0x56C410: jz      short loc_56C44F
0x56C412: mov     eax, [edi]
0x56C414: push    eax; a1
0x56C415: call    TESForm_LookupByFormID
0x56C41A: mov     ecx, [edi+5]
0x56C41D: mov     edx, [eax]
0x56C41F: add     esp, 4
0x56C422: push    offset a__TesSharedTem; "..\\TES Shared\\TempEffects\\BSTempEffe"...
0x56C427: push    0D2h ; 'Ò'
0x56C42C: push    ecx
0x56C42D: mov     ecx, eax
0x56C42F: mov     eax, [edx+0D4h]
0x56C435: call    eax
0x56C437: mov     ecx, [edi]
0x56C439: sub     esi, [esp+3Ch+var_24]
0x56C43D: push    eax
0x56C43E: push    ecx
0x56C43F: push    esi; ArgList
0x56C440: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x56C445: call    sub_40FEC0
0x56C44A: add     esp, 1Ch
0x56C44D: jmp     short loc_56C46B
0x56C44F: sub     esi, [esp+30h+var_24]
0x56C453: push    offset a__TesSharedTem; "..\\TES Shared\\TempEffects\\BSTempEffe"...
0x56C458: push    0D2h ; 'Ò'
0x56C45D: push    esi; ArgList
0x56C45E: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x56C463: call    sub_40FEC0
0x56C468: add     esp, 10h
0x56C46B: mov     ecx, ds:0B33B00h
0x56C471: call    sub_45A170
0x56C476: test    al, al
0x56C478: jz      short loc_56C4AD
0x56C47A: mov     edx, ds:0B33B00h
0x56C480: mov     edi, [esp+30h+var_1C]
0x56C484: mov     esi, [edx+14h]
0x56C487: lea     eax, [edi+0FFFFh]
0x56C48D: cmp     esi, eax
0x56C48F: jbe     short loc_56C4A8
0x56C491: push    0D2h ; 'Ò'
0x56C496: push    offset a__TesSharedTem; "..\\TES Shared\\TempEffects\\BSTempEffe"...
0x56C49B: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x56C4A0: call    PrintError
0x56C4A5: add     esp, 0Ch
0x56C4A8: sub     esi, edi
0x56C4AA: mov     [edi], si
0x56C4AD: pop     edi
0x56C4AE: pop     esi
0x56C4AF: add     esp, 28h
0x56C4B2: retn
