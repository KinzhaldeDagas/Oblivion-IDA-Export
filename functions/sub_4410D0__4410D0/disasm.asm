0x4410D0: sub     esp, 10h
0x4410D3: push    ebx
0x4410D4: push    ebp
0x4410D5: push    esi
0x4410D6: mov     esi, ecx
0x4410D8: mov     ecx, ds:0B33B00h
0x4410DE: xor     ebx, ebx
0x4410E0: mov     [esp+1Ch+var_8], ebx
0x4410E4: mov     ebp, [ecx+14h]
0x4410E7: push    edi
0x4410E8: mov     [esp+20h+var_C], ebx
0x4410EC: call    sub_45A170
0x4410F1: test    al, al
0x4410F3: jz      short loc_441128
0x4410F5: mov     ecx, ds:0B33B00h
0x4410FB: push    4; Size
0x4410FD: lea     eax, [esp+24h+Src]
0x441101: push    eax; Src
0x441102: mov     [esp+28h+Src], 4B4F4C42h
0x44110A: call    SaveLoad_SaveData
0x44110F: mov     ecx, ds:0B33B00h
0x441115: mov     edx, [ecx+14h]
0x441118: push    2; Size
0x44111A: lea     eax, [esp+24h+var_8]
0x44111E: push    eax; Src
0x44111F: mov     [esp+28h+var_C], edx
0x441123: call    SaveLoad_SaveData
0x441128: add     esi, 8Ch ; 'Œ'
0x44112E: xor     ecx, ecx
0x441130: cmp     esi, ebx
0x441132: mov     eax, esi
0x441134: jz      short loc_441144
0x441136: cmp     [eax], ebx
0x441138: jz      short loc_44113D
0x44113A: add     ecx, 1
0x44113D: mov     eax, [eax+4]
0x441140: cmp     eax, ebx
0x441142: jnz     short loc_441136
0x441144: mov     [esp+20h+var_4], ecx
0x441148: push    4; Size
0x44114A: lea     ecx, [esp+24h+var_4]
0x44114E: push    ecx; Src
0x44114F: mov     ecx, ds:0B33B00h
0x441155: call    SaveLoad_SaveData
0x44115A: cmp     esi, ebx
0x44115C: jz      short loc_4411A1
0x44115E: mov     edi, edi
0x441160: mov     edi, [esi]
0x441162: cmp     edi, ebx
0x441164: jz      short loc_44119A
0x441166: mov     eax, [edi]
0x441168: cmp     eax, ebx
0x44116A: mov     [esp+20h+Src], ebx
0x44116E: jz      short loc_441177
0x441170: mov     edx, [eax+0Ch]
0x441173: mov     [esp+20h+Src], edx
0x441177: mov     ecx, ds:0B33B00h
0x44117D: push    4
0x44117F: lea     eax, [esp+24h+Src]
0x441183: push    eax
0x441184: call    SaveLoad_SaveFormID
0x441189: mov     ecx, ds:0B33B00h
0x44118F: push    2; Size
0x441191: add     edi, 4
0x441194: push    edi; Src
0x441195: call    SaveLoad_SaveData
0x44119A: mov     esi, [esi+4]
0x44119D: cmp     esi, ebx
0x44119F: jnz     short loc_441160
0x4411A1: mov     ecx, ds:0B33B00h
0x4411A7: cmp     byte ptr [ecx+7Ch], 32h ; '2'
0x4411AB: jb      short loc_4411BF
0x4411AD: push    4; Size
0x4411AF: push    offset flt_B33A30; Src
0x4411B4: call    SaveLoad_SaveData
0x4411B9: mov     ecx, ds:0B33B00h
0x4411BF: cmp     ds:0B05BACh, bl
0x4411C5: jz      short loc_44122F
0x4411C7: mov     edi, [ecx+84h]
0x4411CD: cmp     edi, ebx
0x4411CF: mov     esi, [ecx+14h]
0x4411D2: jz      short loc_44120F
0x4411D4: mov     ecx, [edi]
0x4411D6: push    ecx; a1
0x4411D7: call    TESForm_LookupByFormID
0x4411DC: mov     edx, [edi+5]
0x4411DF: add     esp, 4
0x4411E2: push    offset a__TesSharedTes; "..\\TES Shared\\TES.cpp"
0x4411E7: push    15F0h
0x4411EC: push    edx
0x4411ED: mov     edx, [eax]
0x4411EF: mov     ecx, eax
0x4411F1: mov     eax, [edx+0D4h]
0x4411F7: call    eax
0x4411F9: mov     ecx, [edi]
0x4411FB: push    eax
0x4411FC: push    ecx
0x4411FD: sub     esi, ebp
0x4411FF: push    esi; ArgList
0x441200: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x441205: call    sub_40FEC0
0x44120A: add     esp, 1Ch
0x44120D: jmp     short loc_441229
0x44120F: push    offset a__TesSharedTes; "..\\TES Shared\\TES.cpp"
0x441214: push    15F0h
0x441219: sub     esi, ebp
0x44121B: push    esi; ArgList
0x44121C: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x441221: call    sub_40FEC0
0x441226: add     esp, 10h
0x441229: mov     ecx, ds:0B33B00h
0x44122F: call    sub_45A170
0x441234: test    al, al
0x441236: jz      short loc_44126B
0x441238: mov     edx, ds:0B33B00h
0x44123E: mov     edi, [esp+20h+var_C]
0x441242: mov     esi, [edx+14h]
0x441245: lea     eax, [edi+0FFFFh]
0x44124B: cmp     esi, eax
0x44124D: jbe     short loc_441266
0x44124F: push    15F0h
0x441254: push    offset a__TesSharedTes; "..\\TES Shared\\TES.cpp"
0x441259: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x44125E: call    PrintError
0x441263: add     esp, 0Ch
0x441266: sub     esi, edi
0x441268: mov     [edi], si
0x44126B: pop     edi
0x44126C: pop     esi
0x44126D: pop     ebp
0x44126E: pop     ebx
0x44126F: add     esp, 10h
0x441272: retn
