0x4E00F0: mov     eax, [esp+a1]
0x4E00F4: sub     esp, 8
0x4E00F7: push    ebx
0x4E00F8: mov     ebx, [esp+0Ch+arg_0]
0x4E00FC: push    ebp
0x4E00FD: push    esi
0x4E00FE: push    edi
0x4E00FF: push    eax; a3
0x4E0100: push    ebx; Dst
0x4E0101: mov     esi, ecx
0x4E0103: call    TESForm_LoadModifiedForm
0x4E0108: mov     edx, [esi]
0x4E010A: mov     eax, [edx+190h]
0x4E0110: mov     ecx, esi
0x4E0112: call    eax
0x4E0114: test    al, al
0x4E0116: jnz     short loc_4E0129
0x4E0118: test    ebx, 10000h
0x4E011E: jz      short loc_4E0129
0x4E0120: push    1
0x4E0122: mov     ecx, esi
0x4E0124: call    sub_46AA00
0x4E0129: mov     ecx, ds:0B33B00h
0x4E012F: xor     ebp, ebp
0x4E0131: mov     [esp+18h+var_8], ebp
0x4E0135: mov     [esp+18h+arg_0], ebp
0x4E0139: call    sub_45A170
0x4E013E: test    al, al
0x4E0140: jz      loc_4E01E7
0x4E0146: push    4; Size
0x4E0148: lea     ecx, [esp+1Ch+Dst]
0x4E014C: push    ecx; Dst
0x4E014D: mov     ecx, ds:0B33B00h
0x4E0153: call    SaveLoad_LoadData
0x4E0158: cmp     [esp+18h+Dst], 4B4F4C42h
0x4E0160: jz      short loc_4E01CA
0x4E0162: mov     eax, ds:0B33B00h
0x4E0167: mov     edi, [eax+80h]
0x4E016D: test    edi, edi
0x4E016F: jz      short loc_4E01AE
0x4E0171: mov     edx, [edi]
0x4E0173: push    edx; a1
0x4E0174: call    TESForm_LookupByFormID
0x4E0179: mov     ecx, [edi+5]
0x4E017C: movzx   edx, byte ptr [edi+9]
0x4E0180: add     esp, 4
0x4E0183: push    ecx
0x4E0184: push    edx
0x4E0185: mov     edx, [eax]
0x4E0187: mov     ecx, eax
0x4E0189: mov     eax, [edx+0D4h]
0x4E018F: call    eax
0x4E0191: mov     ecx, [edi]
0x4E0193: push    eax
0x4E0194: push    ecx
0x4E0195: push    722h
0x4E019A: push    offset a__TesSharedT_7; "..\\TES Shared\\TESObjectREFR.cpp"
0x4E019F: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x4E01A4: call    PrintError
0x4E01A9: add     esp, 1Ch
0x4E01AC: jmp     short loc_4E01CA
0x4E01AE: movzx   edx, byte ptr [eax+7Ch]
0x4E01B2: push    edx
0x4E01B3: push    722h
0x4E01B8: push    offset a__TesSharedT_7; "..\\TES Shared\\TESObjectREFR.cpp"
0x4E01BD: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x4E01C2: call    PrintError
0x4E01C7: add     esp, 10h
0x4E01CA: mov     ecx, ds:0B33B00h
0x4E01D0: mov     eax, [ecx+14h]
0x4E01D3: push    2; Size
0x4E01D5: lea     edx, [esp+1Ch+var_8]
0x4E01D9: push    edx; Dst
0x4E01DA: mov     [esp+20h+arg_0], eax
0x4E01DE: call    SaveLoad_LoadData
0x4E01E3: mov     ebp, [esp+18h+arg_0]
0x4E01E7: mov     eax, ds:0B33B00h
0x4E01EC: mov     ecx, [eax+18h]
0x4E01EF: shr     ecx, 7
0x4E01F2: test    cl, 1
0x4E01F5: jz      short loc_4E023A
0x4E01F7: lea     ebp, [esi+44h]
0x4E01FA: mov     ecx, ebp
0x4E01FC: call    sub_420260
0x4E0201: mov     edi, eax
0x4E0203: test    edi, edi
0x4E0205: jz      short loc_4E0236
0x4E0207: mov     ecx, ebp
0x4E0209: call    sub_420340
0x4E020E: test    al, al
0x4E0210: mov     ecx, esi; this
0x4E0212: jz      short loc_4E0225
0x4E0214: mov     edx, [edi+8]
0x4E0217: shr     edx, 0Bh
0x4E021A: not     dl
0x4E021C: and     edx, 0FFFFFF01h
0x4E0222: push    edx
0x4E0223: jmp     short loc_4E0231
0x4E0225: mov     eax, [edi+8]
0x4E0228: shr     eax, 0Bh
0x4E022B: and     eax, 0FFFFFF01h
0x4E0230: push    eax; a2
0x4E0231: call    TESForm_SetEnabled?
0x4E0236: mov     ebp, [esp+18h+arg_0]
0x4E023A: test    bl, 1
0x4E023D: jz      short loc_4E0261
0x4E023F: mov     eax, [esi+8]
0x4E0242: mov     ecx, eax
0x4E0244: shr     ecx, 0Bh
0x4E0247: test    cl, 1
0x4E024A: jnz     short loc_4E0253
0x4E024C: shr     eax, 5
0x4E024F: test    al, 1
0x4E0251: jz      short loc_4E0261
0x4E0253: mov     edx, [esi]
0x4E0255: mov     eax, [edx+150h]
0x4E025B: push    0
0x4E025D: mov     ecx, esi
0x4E025F: call    eax
0x4E0261: test    ebx, 8000000h
0x4E0267: jz      short loc_4E02DF
0x4E0269: mov     ecx, esi; this
0x4E026B: call    TESObjectREFR_GetContainer
0x4E0270: mov     edi, eax
0x4E0272: test    edi, edi
0x4E0274: jz      short loc_4E02DF
0x4E0276: mov     edx, [esi]
0x4E0278: mov     eax, [edx+190h]
0x4E027E: mov     ecx, esi
0x4E0280: call    eax
0x4E0282: test    al, al
0x4E0284: jz      short loc_4E02AF
0x4E0286: mov     ecx, esi; this
0x4E0288: call    Actor_IsCreature
0x4E028D: test    al, al
0x4E028F: jz      short loc_4E02AF
0x4E0291: mov     ecx, esi
0x4E0293: call    UnequipWeapon
0x4E0298: push    1
0x4E029A: mov     ecx, esi
0x4E029C: call    sub_4DC8F0
0x4E02A1: mov     ecx, esi
0x4E02A3: call    UnequipLight
0x4E02A8: mov     ecx, esi
0x4E02AA: call    sub_4DCCF0
0x4E02AF: lea     ecx, [esi+44h]
0x4E02B2: call    ExtraDataList_RemoveContainerExtraData
0x4E02B7: mov     edx, [esi]
0x4E02B9: mov     eax, [edx+190h]
0x4E02BF: mov     ecx, esi
0x4E02C1: call    eax
0x4E02C3: test    al, al
0x4E02C5: jz      short loc_4E02CE
0x4E02C7: mov     ecx, esi
0x4E02C9: call    sub_5E9690
0x4E02CE: push    edi
0x4E02CF: push    esi; a1
0x4E02D0: call    ContainerExtraData_GetContainerExtraDataForRef
0x4E02D5: add     esp, 8
0x4E02D8: mov     ecx, eax
0x4E02DA: call    ContainerExtraData_LoadModified
0x4E02DF: mov     ecx, ebx
0x4E02E1: or      ecx, [esp+18h+a1]
0x4E02E5: push    esi
0x4E02E6: lea     edi, [esi+44h]
0x4E02E9: push    ecx
0x4E02EA: mov     ecx, edi
0x4E02EC: call    sub_425900
0x4E02F1: mov     edx, ds:0B33B00h
0x4E02F7: cmp     byte ptr [edx+7Ch], 43h ; 'C'
0x4E02FB: mov     eax, 177577E0h
0x4E0300: jnb     short loc_4E0307
0x4E0302: mov     eax, 177577F0h
0x4E0307: test    ebx, eax
0x4E0309: jnz     short loc_4E031B
0x4E030B: mov     eax, [esi]
0x4E030D: mov     edx, [eax+190h]
0x4E0313: mov     ecx, esi
0x4E0315: call    edx
0x4E0317: test    al, al
0x4E0319: jz      short loc_4E0329
0x4E031B: mov     eax, [esp+18h+a1]
0x4E031F: push    esi
0x4E0320: push    eax
0x4E0321: push    ebx
0x4E0322: mov     ecx, edi
0x4E0324: call    ExtraDataList_LoadModified
0x4E0329: test    ebx, 2000000h
0x4E032F: jz      short loc_4E0365
0x4E0331: mov     edx, [esi]
0x4E0333: mov     eax, [edx+190h]
0x4E0339: mov     ecx, esi
0x4E033B: call    eax
0x4E033D: test    al, al
0x4E033F: jnz     short loc_4E0365
0x4E0341: push    2; a2
0x4E0343: lea     ecx, [esp+1Ch+a1]
0x4E0347: push    ecx; a1
0x4E0348: mov     ecx, esi
0x4E034A: call    TESForm_LoadDataFromCurrentSaveGame
0x4E034F: mov     eax, [esp+18h+a1]
0x4E0353: test    ax, ax
0x4E0356: jz      short loc_4E0365
0x4E0358: mov     ecx, ds:0B33B00h
0x4E035E: push    eax
0x4E035F: push    esi
0x4E0360: call    sub_459020
0x4E0365: test    ebx, 808h
0x4E036B: jz      short loc_4E03A4
0x4E036D: push    2; a2
0x4E036F: lea     edx, [esp+1Ch+a1]
0x4E0373: push    edx; a1
0x4E0374: mov     ecx, esi
0x4E0376: call    TESForm_LoadDataFromCurrentSaveGame
0x4E037B: mov     eax, [esp+18h+a1]
0x4E037F: test    ax, ax
0x4E0382: jz      short loc_4E03A4
0x4E0384: test    ebx, 800h
0x4E038A: mov     ecx, ds:0B33B00h
0x4E0390: jnz     short loc_4E039B
0x4E0392: push    eax
0x4E0393: push    esi
0x4E0394: call    sub_459310
0x4E0399: jmp     short loc_4E03A4
0x4E039B: movzx   eax, ax
0x4E039E: push    eax
0x4E039F: call    SaveLoad_AdvanceBufferOffset
0x4E03A4: mov     ecx, ds:0B33B00h
0x4E03AA: cmp     byte ptr [ecx+7Ch], 43h ; 'C'
0x4E03AE: jb      short loc_4E03D4
0x4E03B0: test    bl, 10h
0x4E03B3: jz      short loc_4E03D4
0x4E03B5: push    4; a2
0x4E03B7: lea     ebp, [esi+38h]
0x4E03BA: push    ebp; a1
0x4E03BB: mov     ecx, esi
0x4E03BD: call    TESForm_LoadDataFromCurrentSaveGame
0x4E03C2: fld     dword ptr [ebp+0]
0x4E03C5: push    ecx
0x4E03C6: mov     ecx, esi
0x4E03C8: fstp    dword ptr [esp+1Ch+var_1C]; float
0x4E03CB: call    sub_4DB520
0x4E03D0: mov     ebp, [esp+18h+arg_0]
0x4E03D4: test    ebx, 40000h
0x4E03DA: jz      short loc_4E03F9
0x4E03DC: push    8
0x4E03DE: mov     ecx, edi
0x4E03E0: call    sub_41F830
0x4E03E5: test    al, al
0x4E03E7: push    8
0x4E03E9: mov     ecx, edi
0x4E03EB: jz      short loc_4E03F4
0x4E03ED: call    sub_423E50
0x4E03F2: jmp     short loc_4E03F9
0x4E03F4: call    sub_423DF0
0x4E03F9: test    ebx, 80000h
0x4E03FF: jz      short loc_4E044E
0x4E0401: mov     ecx, edi
0x4E0403: call    sub_420FF0
0x4E0408: test    ebx, ebx
0x4E040A: mov     eax, ebx
0x4E040C: jnz     short loc_4E041B
0x4E040E: mov     ecx, ds:0B33B00h
0x4E0414: push    ebx
0x4E0415: push    esi
0x4E0416: call    sub_4533F0
0x4E041B: test    eax, 40000h
0x4E0420: push    8
0x4E0422: mov     ecx, edi
0x4E0424: jz      short loc_4E0432
0x4E0426: call    sub_41F830
0x4E042B: test    al, al
0x4E042D: setz    al
0x4E0430: jmp     short loc_4E0437
0x4E0432: call    sub_41F830
0x4E0437: test    al, al
0x4E0439: mov     ecx, edi
0x4E043B: jz      short loc_4E0444
0x4E043D: push    offset aClose; "Close"
0x4E0442: jmp     short loc_4E0449
0x4E0444: push    offset aOpen; "Open"
0x4E0449: call    sub_424DE0
0x4E044E: mov     ecx, ds:0B33B00h
0x4E0454: call    sub_45A170
0x4E0459: test    al, al
0x4E045B: jz      loc_4E0574
0x4E0461: mov     ecx, ds:0B33B00h
0x4E0467: mov     edi, [ecx+80h]
0x4E046D: test    edi, edi
0x4E046F: mov     esi, [ecx+14h]
0x4E0472: jz      loc_4E051A
0x4E0478: mov     edx, [edi]
0x4E047A: push    edx; a1
0x4E047B: call    TESForm_LookupByFormID
0x4E0480: mov     ecx, eax
0x4E0482: movzx   eax, word ptr [esp+1Ch+var_8]
0x4E0487: add     eax, ebp
0x4E0489: add     esp, 4
0x4E048C: cmp     esi, eax
0x4E048E: jbe     short loc_4E04D2
0x4E0490: mov     edx, [edi+5]
0x4E0493: movzx   eax, byte ptr [edi+9]
0x4E0497: push    edx
0x4E0498: mov     edx, [ecx]
0x4E049A: push    eax
0x4E049B: mov     eax, [edx+0D4h]
0x4E04A1: call    eax
0x4E04A3: mov     ecx, [edi]
0x4E04A5: movzx   edx, word ptr [esp+20h+var_8]
0x4E04AA: push    eax
0x4E04AB: push    ecx
0x4E04AC: push    79Ah
0x4E04B1: sub     esi, edx
0x4E04B3: push    offset a__TesSharedT_7; "..\\TES Shared\\TESObjectREFR.cpp"
0x4E04B8: sub     esi, ebp
0x4E04BA: push    esi; ArgList
0x4E04BB: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x4E04C0: call    PrintError
0x4E04C5: add     esp, 20h
0x4E04C8: pop     edi
0x4E04C9: pop     esi
0x4E04CA: pop     ebp
0x4E04CB: pop     ebx
0x4E04CC: add     esp, 8
0x4E04CF: retn    8
0x4E04D2: jnb     loc_4E0574
0x4E04D8: mov     eax, [edi+5]
0x4E04DB: movzx   edx, byte ptr [edi+9]
0x4E04DF: push    eax
0x4E04E0: mov     eax, [ecx]
0x4E04E2: push    edx
0x4E04E3: mov     edx, [eax+0D4h]
0x4E04E9: call    edx
0x4E04EB: movzx   ecx, word ptr [esp+20h+var_8]
0x4E04F0: push    eax
0x4E04F1: mov     eax, [edi]
0x4E04F3: push    eax
0x4E04F4: push    79Ah
0x4E04F9: sub     ecx, esi
0x4E04FB: push    offset a__TesSharedT_7; "..\\TES Shared\\TESObjectREFR.cpp"
0x4E0500: add     ecx, ebp
0x4E0502: push    ecx; ArgList
0x4E0503: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x4E0508: call    PrintError
0x4E050D: add     esp, 20h
0x4E0510: pop     edi
0x4E0511: pop     esi
0x4E0512: pop     ebp
0x4E0513: pop     ebx
0x4E0514: add     esp, 8
0x4E0517: retn    8
0x4E051A: movzx   eax, word ptr [esp+18h+var_8]
0x4E051F: lea     edx, [eax+ebp]
0x4E0522: cmp     esi, edx
0x4E0524: jbe     short loc_4E0551
0x4E0526: movzx   edx, byte ptr [ecx+7Ch]
0x4E052A: push    edx
0x4E052B: push    79Ah
0x4E0530: sub     esi, eax
0x4E0532: push    offset a__TesSharedT_7; "..\\TES Shared\\TESObjectREFR.cpp"
0x4E0537: sub     esi, ebp
0x4E0539: push    esi; ArgList
0x4E053A: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x4E053F: call    PrintError
0x4E0544: add     esp, 14h
0x4E0547: pop     edi
0x4E0548: pop     esi
0x4E0549: pop     ebp
0x4E054A: pop     ebx
0x4E054B: add     esp, 8
0x4E054E: retn    8
0x4E0551: jnb     short loc_4E0574
0x4E0553: movzx   ecx, byte ptr [ecx+7Ch]
0x4E0557: push    ecx
0x4E0558: push    79Ah
0x4E055D: sub     eax, esi
0x4E055F: push    offset a__TesSharedT_7; "..\\TES Shared\\TESObjectREFR.cpp"
0x4E0564: add     eax, ebp
0x4E0566: push    eax; ArgList
0x4E0567: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x4E056C: call    PrintError
0x4E0571: add     esp, 14h
0x4E0574: pop     edi
0x4E0575: pop     esi
0x4E0576: pop     ebp
0x4E0577: pop     ebx
0x4E0578: add     esp, 8
0x4E057B: retn    8
