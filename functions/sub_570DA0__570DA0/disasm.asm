0x570DA0: sub     esp, 34h
0x570DA3: push    ebp
0x570DA4: push    esi
0x570DA5: mov     esi, ecx
0x570DA7: mov     ecx, ds:0B33B00h
0x570DAD: mov     [esp+3Ch+var_24], 0
0x570DB5: mov     ebp, [ecx+14h]
0x570DB8: push    edi
0x570DB9: mov     [esp+40h+var_2C], 0
0x570DC1: call    sub_45A170
0x570DC6: test    al, al
0x570DC8: jz      short loc_570DFD
0x570DCA: mov     ecx, ds:0B33B00h
0x570DD0: push    4; Size
0x570DD2: lea     eax, [esp+44h+Src]
0x570DD6: push    eax; Src
0x570DD7: mov     [esp+48h+Src], 4B4F4C42h
0x570DDF: call    SaveLoad_SaveData
0x570DE4: mov     ecx, ds:0B33B00h
0x570DEA: mov     edx, [ecx+14h]
0x570DED: push    2; Size
0x570DEF: lea     eax, [esp+44h+var_24]
0x570DF3: push    eax; Src
0x570DF4: mov     [esp+48h+var_2C], edx
0x570DF8: call    SaveLoad_SaveData
0x570DFD: mov     ecx, esi
0x570DFF: call    sub_56BD80
0x570E04: mov     eax, [esi+1Ch]
0x570E07: lea     edx, [eax+1]
0x570E0A: lea     ebx, [ebx+0]
0x570E10: mov     cl, [eax]
0x570E12: add     eax, 1
0x570E15: test    cl, cl
0x570E17: jnz     short loc_570E10
0x570E19: push    1; Size
0x570E1B: lea     ecx, [esp+44h+var_31]
0x570E1F: sub     eax, edx
0x570E21: push    ecx; Src
0x570E22: mov     ecx, ds:0B33B00h
0x570E28: mov     [esp+48h+var_31], al
0x570E2C: call    SaveLoad_SaveData
0x570E31: movzx   edx, [esp+40h+var_31]
0x570E36: mov     eax, [esi+1Ch]
0x570E39: mov     ecx, ds:0B33B00h
0x570E3F: push    edx; Size
0x570E40: push    eax; Src
0x570E41: call    SaveLoad_SaveData
0x570E46: mov     ecx, [esi+18h]
0x570E49: add     ecx, 30h ; '0'
0x570E4C: push    ecx
0x570E4D: lea     ecx, [esp+44h+var_10]
0x570E51: call    sub_7150F0
0x570E56: mov     ecx, ds:0B33B00h
0x570E5C: push    10h; Size
0x570E5E: lea     edx, [esp+44h+var_10]
0x570E62: push    edx; Src
0x570E63: call    SaveLoad_SaveData
0x570E68: mov     eax, [esi+18h]
0x570E6B: mov     ecx, [eax+54h]
0x570E6E: mov     [esp+40h+var_1C], ecx
0x570E72: mov     edx, [eax+58h]
0x570E75: push    0Ch; Size
0x570E77: lea     ecx, [esp+44h+var_1C]
0x570E7B: mov     [esp+44h+var_18], edx
0x570E7F: mov     eax, [eax+5Ch]
0x570E82: push    ecx; Src
0x570E83: mov     ecx, ds:0B33B00h
0x570E89: mov     [esp+48h+var_14], eax
0x570E8D: call    SaveLoad_SaveData
0x570E92: mov     edx, [esi+18h]
0x570E95: fld     dword ptr [edx+60h]
0x570E98: mov     ecx, ds:0B33B00h
0x570E9E: push    4; Size
0x570EA0: fstp    [esp+44h+var_20]
0x570EA4: lea     eax, [esp+44h+var_20]
0x570EA8: push    eax; Src
0x570EA9: call    SaveLoad_SaveData
0x570EAE: mov     ecx, [esi+18h]
0x570EB1: mov     [esp+40h+var_30], 0
0x570EB9: mov     esi, [ecx+0Ch]
0x570EBC: test    esi, esi
0x570EBE: jz      short loc_570EFE
0x570EC0: mov     edx, [esi]
0x570EC2: mov     eax, [edx+4]
0x570EC5: mov     ecx, esi
0x570EC7: call    eax
0x570EC9: test    eax, eax
0x570ECB: jz      short loc_570EE2
0x570ECD: lea     ecx, [ecx+0]
0x570ED0: cmp     eax, offset stru_B3CAC0
0x570ED5: jz      loc_570F81
0x570EDB: mov     eax, [eax+4]
0x570EDE: test    eax, eax
0x570EE0: jnz     short loc_570ED0
0x570EE2: xor     al, al
0x570EE4: neg     al
0x570EE6: sbb     eax, eax
0x570EE8: and     eax, esi
0x570EEA: mov     esi, eax
0x570EEC: jz      short loc_570EFE
0x570EEE: push    esi
0x570EEF: call    sub_4DA760
0x570EF4: movzx   ecx, ax
0x570EF7: add     esp, 4
0x570EFA: mov     [esp+40h+var_30], ecx
0x570EFE: mov     ecx, ds:0B33B00h
0x570F04: push    2; Size
0x570F06: lea     edx, [esp+44h+var_30]
0x570F0A: push    edx; Src
0x570F0B: call    SaveLoad_SaveData
0x570F10: cmp     word ptr [esp+40h+var_30], 0
0x570F16: jz      short loc_570F2B
0x570F18: fld     dword ptr ds:0A30634h
0x570F1E: push    ecx
0x570F1F: fstp    [esp+44h+var_44]; float
0x570F22: push    esi; int
0x570F23: call    sub_4DA7F0
0x570F28: add     esp, 8
0x570F2B: cmp     byte ptr ds:0B05BACh, 0
0x570F32: jz      short loc_570FA2
0x570F34: mov     eax, ds:0B33B00h
0x570F39: mov     edi, [eax+84h]
0x570F3F: test    edi, edi
0x570F41: mov     esi, [eax+14h]
0x570F44: jz      short loc_570F88
0x570F46: mov     eax, [edi]
0x570F48: push    eax; a1
0x570F49: call    TESForm_LookupByFormID
0x570F4E: mov     ecx, [edi+5]
0x570F51: mov     edx, [eax]
0x570F53: add     esp, 4
0x570F56: push    offset a__TesShared_11; "..\\TES Shared\\TempEffects\\BSTempEffe"...
0x570F5B: push    12Bh
0x570F60: push    ecx
0x570F61: mov     ecx, eax
0x570F63: mov     eax, [edx+0D4h]
0x570F69: call    eax
0x570F6B: mov     ecx, [edi]
0x570F6D: push    eax
0x570F6E: push    ecx
0x570F6F: sub     esi, ebp
0x570F71: push    esi; ArgList
0x570F72: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x570F77: call    sub_40FEC0
0x570F7C: add     esp, 1Ch
0x570F7F: jmp     short loc_570FA2
0x570F81: mov     al, 1
0x570F83: jmp     loc_570EE4
0x570F88: push    offset a__TesShared_11; "..\\TES Shared\\TempEffects\\BSTempEffe"...
0x570F8D: push    12Bh
0x570F92: sub     esi, ebp
0x570F94: push    esi; ArgList
0x570F95: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x570F9A: call    sub_40FEC0
0x570F9F: add     esp, 10h
0x570FA2: mov     ecx, ds:0B33B00h
0x570FA8: call    sub_45A170
0x570FAD: test    al, al
0x570FAF: jz      short loc_570FE4
0x570FB1: mov     edx, ds:0B33B00h
0x570FB7: mov     edi, [esp+40h+var_2C]
0x570FBB: mov     esi, [edx+14h]
0x570FBE: lea     eax, [edi+0FFFFh]
0x570FC4: cmp     esi, eax
0x570FC6: jbe     short loc_570FDF
0x570FC8: push    12Bh
0x570FCD: push    offset a__TesShared_11; "..\\TES Shared\\TempEffects\\BSTempEffe"...
0x570FD2: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x570FD7: call    PrintError
0x570FDC: add     esp, 0Ch
0x570FDF: sub     esi, edi
0x570FE1: mov     [edi], si
0x570FE4: pop     edi
0x570FE5: pop     esi
0x570FE6: pop     ebp
0x570FE7: add     esp, 34h
0x570FEA: retn
