0x67B840: sub     esp, 20h
0x67B843: push    ebp
0x67B844: push    esi
0x67B845: push    edi
0x67B846: xor     edi, edi
0x67B848: cmp     byte ptr ds:0B05BACh, 0
0x67B84F: mov     ebp, ecx
0x67B851: mov     ecx, ds:0B33B00h
0x67B857: mov     [esp+2Ch+var_C], edi
0x67B85B: mov     eax, [ecx+14h]
0x67B85E: mov     [esp+2Ch+var_14], edi
0x67B862: mov     [esp+2Ch+var_1C], eax
0x67B866: jz      short loc_67B86C
0x67B868: mov     [esp+2Ch+var_1C], eax
0x67B86C: call    sub_45A170
0x67B871: test    al, al
0x67B873: jz      short loc_67B8A8
0x67B875: mov     ecx, ds:0B33B00h
0x67B87B: push    4; Size
0x67B87D: lea     eax, [esp+30h+Src]
0x67B881: push    eax; Src
0x67B882: mov     [esp+34h+Src], 4B4F4C42h
0x67B88A: call    SaveLoad_SaveData
0x67B88F: mov     ecx, ds:0B33B00h
0x67B895: mov     edx, [ecx+14h]
0x67B898: push    2; Size
0x67B89A: lea     eax, [esp+30h+var_C]
0x67B89E: push    eax; Src
0x67B89F: mov     [esp+34h+var_14], edx
0x67B8A3: call    SaveLoad_SaveData
0x67B8A8: mov     ecx, ds:0B33B00h
0x67B8AE: mov     [esp+2Ch+var_20], edi
0x67B8B2: mov     edx, [ecx+14h]
0x67B8B5: push    2; Size
0x67B8B7: lea     eax, [esp+30h+var_20]
0x67B8BB: push    eax; Src
0x67B8BC: mov     [esp+34h+var_8], edx
0x67B8C0: call    SaveLoad_SaveData
0x67B8C5: mov     esi, [ebp+0]
0x67B8C8: cmp     esi, edi
0x67B8CA: jz      short loc_67B92E
0x67B8CC: mov     ecx, ds:0B33B00h
0x67B8D2: cmp     dword ptr [esi+4], 0
0x67B8D6: jnz     short loc_67B8DD
0x67B8D8: cmp     dword ptr [esi], 0
0x67B8DB: jz      short loc_67B92E
0x67B8DD: mov     edi, [esi]
0x67B8DF: mov     edx, [edi]
0x67B8E1: mov     eax, [edx+0Ch]
0x67B8E4: push    4
0x67B8E6: lea     edx, [esp+30h+Src]
0x67B8EA: push    edx
0x67B8EB: mov     [esp+34h+Src], eax
0x67B8EF: call    SaveLoad_SaveFormID
0x67B8F4: mov     ecx, ds:0B33B00h
0x67B8FA: push    1; Size
0x67B8FC: lea     eax, [edi+4]
0x67B8FF: push    eax; Src
0x67B900: call    SaveLoad_SaveData
0x67B905: mov     ecx, ds:0B33B00h
0x67B90B: cmp     byte ptr [ecx+7Ch], 39h ; '9'
0x67B90F: jb      short loc_67B922
0x67B911: push    4; Size
0x67B913: add     edi, 8
0x67B916: push    edi; Src
0x67B917: call    SaveLoad_SaveData
0x67B91C: mov     ecx, ds:0B33B00h
0x67B922: add     [esp+2Ch+var_20], 1
0x67B927: mov     esi, [esi+4]
0x67B92A: test    esi, esi
0x67B92C: jnz     short loc_67B8D2
0x67B92E: mov     cx, word ptr [esp+2Ch+var_20]
0x67B933: mov     edx, [esp+2Ch+var_8]
0x67B937: mov     [edx], cx
0x67B93A: mov     eax, [ebp+4]
0x67B93D: test    eax, eax
0x67B93F: mov     [esp+2Ch+var_18], 0
0x67B947: jz      short loc_67B950
0x67B949: mov     eax, [eax+0Ch]
0x67B94C: mov     [esp+2Ch+var_18], eax
0x67B950: push    4
0x67B952: lea     ecx, [esp+30h+var_18]
0x67B956: push    ecx
0x67B957: mov     ecx, ds:0B33B00h
0x67B95D: call    SaveLoad_SaveFormID
0x67B962: mov     edx, [ebp+8]
0x67B965: mov     eax, [edx+0Ch]
0x67B968: push    4
0x67B96A: lea     ecx, [esp+30h+var_4]
0x67B96E: push    ecx
0x67B96F: mov     ecx, ds:0B33B00h
0x67B975: mov     [esp+34h+var_4], eax
0x67B979: call    SaveLoad_SaveFormID
0x67B97E: mov     ecx, [ebp+8]
0x67B981: mov     edx, [ecx]
0x67B983: mov     eax, [edx+0E0h]
0x67B989: call    eax
0x67B98B: push    4; Size
0x67B98D: lea     ecx, [ebp+0Ch]
0x67B990: push    ecx; Src
0x67B991: mov     ecx, ds:0B33B00h
0x67B997: call    SaveLoad_SaveData
0x67B99C: mov     ecx, ds:0B33B00h
0x67B9A2: push    4; Size
0x67B9A4: lea     edx, [ebp+10h]
0x67B9A7: push    edx; Src
0x67B9A8: call    SaveLoad_SaveData
0x67B9AD: mov     ecx, ds:0B33B00h
0x67B9B3: push    0Ch; Size
0x67B9B5: lea     eax, [ebp+14h]
0x67B9B8: push    eax; Src
0x67B9B9: call    SaveLoad_SaveData
0x67B9BE: mov     ecx, ds:0B33B00h
0x67B9C4: push    4; Size
0x67B9C6: add     ebp, 20h ; ' '
0x67B9C9: push    ebp; Src
0x67B9CA: call    SaveLoad_SaveData
0x67B9CF: cmp     byte ptr ds:0B05BACh, 0
0x67B9D6: jz      short loc_67BA43
0x67B9D8: mov     eax, ds:0B33B00h
0x67B9DD: mov     edi, [eax+84h]
0x67B9E3: test    edi, edi
0x67B9E5: mov     esi, [eax+14h]
0x67B9E8: jz      short loc_67BA27
0x67B9EA: mov     ecx, [edi]
0x67B9EC: push    ecx; a1
0x67B9ED: call    TESForm_LookupByFormID
0x67B9F2: mov     edx, [edi+5]
0x67B9F5: add     esp, 4
0x67B9F8: push    offset a_AiSpectatorpa; ".\\AI\\SpectatorPackage.cpp"
0x67B9FD: push    147h
0x67BA02: push    edx
0x67BA03: mov     edx, [eax]
0x67BA05: mov     ecx, eax
0x67BA07: mov     eax, [edx+0D4h]
0x67BA0D: call    eax
0x67BA0F: mov     ecx, [edi]
0x67BA11: sub     esi, [esp+38h+var_1C]
0x67BA15: push    eax
0x67BA16: push    ecx
0x67BA17: push    esi; ArgList
0x67BA18: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x67BA1D: call    sub_40FEC0
0x67BA22: add     esp, 1Ch
0x67BA25: jmp     short loc_67BA43
0x67BA27: sub     esi, [esp+2Ch+var_1C]
0x67BA2B: push    offset a_AiSpectatorpa; ".\\AI\\SpectatorPackage.cpp"
0x67BA30: push    147h
0x67BA35: push    esi; ArgList
0x67BA36: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x67BA3B: call    sub_40FEC0
0x67BA40: add     esp, 10h
0x67BA43: mov     ecx, ds:0B33B00h
0x67BA49: call    sub_45A170
0x67BA4E: test    al, al
0x67BA50: jz      short loc_67BA85
0x67BA52: mov     edx, ds:0B33B00h
0x67BA58: mov     edi, [esp+2Ch+var_14]
0x67BA5C: mov     esi, [edx+14h]
0x67BA5F: lea     eax, [edi+0FFFFh]
0x67BA65: cmp     esi, eax
0x67BA67: jbe     short loc_67BA80
0x67BA69: push    147h
0x67BA6E: push    offset a_AiSpectatorpa; ".\\AI\\SpectatorPackage.cpp"
0x67BA73: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x67BA78: call    PrintError
0x67BA7D: add     esp, 0Ch
0x67BA80: sub     esi, edi
0x67BA82: mov     [edi], si
0x67BA85: pop     edi
0x67BA86: pop     esi
0x67BA87: pop     ebp
0x67BA88: add     esp, 20h
0x67BA8B: retn
