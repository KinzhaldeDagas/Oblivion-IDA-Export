0x529FF0: push    0FFFFFFFFh
0x529FF2: push    offset TESQuest_LoadGame_SEH
0x529FF7: mov     eax, large fs:0
0x529FFD: push    eax
0x529FFE: sub     esp, 24h
0x52A001: push    ebx
0x52A002: push    ebp
0x52A003: push    esi
0x52A004: push    edi
0x52A005: mov     eax, ds:0B30AACh
0x52A00A: xor     eax, esp
0x52A00C: push    eax
0x52A00D: lea     eax, [esp+44h+var_C]
0x52A011: mov     large fs:0, eax
0x52A017: mov     ebp, ecx
0x52A019: mov     eax, [esp+44h+arg_4.vtbl]
0x52A01D: mov     ecx, [esp+44h+Dst]
0x52A021: push    eax; a3
0x52A022: push    ecx; Dst
0x52A023: mov     ecx, ebp; this
0x52A025: call    TESForm_LoadModifiedForm
0x52A02A: mov     ecx, ds:0B33B00h
0x52A030: xor     edi, edi
0x52A032: xor     ebx, ebx
0x52A034: mov     [esp+44h+a1.member.flags], edi
0x52A038: mov     [esp+44h+a1.member.refID], ebx
0x52A03C: call    sub_45A170
0x52A041: test    al, al
0x52A043: jz      loc_52A0EA
0x52A049: mov     ecx, ds:0B33B00h
0x52A04F: push    4; Size
0x52A051: lea     edx, [esp+48h+var_18]
0x52A055: push    edx; Dst
0x52A056: call    SaveLoad_LoadData
0x52A05B: cmp     dword ptr [esp+44h+var_18], 4B4F4C42h
0x52A063: jz      short loc_52A0CD
0x52A065: mov     eax, ds:0B33B00h
0x52A06A: mov     esi, [eax+80h]
0x52A070: cmp     esi, edi
0x52A072: jz      short loc_52A0B1
0x52A074: mov     eax, [esi]
0x52A076: push    eax; a1
0x52A077: call    TESForm_LookupByFormID
0x52A07C: mov     ecx, [esi+5]
0x52A07F: movzx   edx, byte ptr [esi+9]
0x52A083: add     esp, 4
0x52A086: push    ecx
0x52A087: push    edx
0x52A088: mov     edx, [eax]
0x52A08A: mov     ecx, eax
0x52A08C: mov     eax, [edx+0D4h]
0x52A092: call    eax
0x52A094: mov     ecx, [esi]
0x52A096: push    eax
0x52A097: push    ecx
0x52A098: push    0C66h
0x52A09D: push    offset a__TesSharedT_9; "..\\TES Shared\\TESQuest.cpp"
0x52A0A2: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x52A0A7: call    PrintError
0x52A0AC: add     esp, 1Ch
0x52A0AF: jmp     short loc_52A0CD
0x52A0B1: movzx   edx, byte ptr [eax+7Ch]
0x52A0B5: push    edx
0x52A0B6: push    0C66h
0x52A0BB: push    offset a__TesSharedT_9; "..\\TES Shared\\TESQuest.cpp"
0x52A0C0: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x52A0C5: call    PrintError
0x52A0CA: add     esp, 10h
0x52A0CD: mov     ecx, ds:0B33B00h
0x52A0D3: mov     eax, [ecx+14h]
0x52A0D6: push    2; Size
0x52A0D8: lea     edx, [esp+48h+a1.member.flags]
0x52A0DC: push    edx; Dst
0x52A0DD: mov     [esp+4Ch+a1.member.refID], eax
0x52A0E1: call    SaveLoad_LoadData
0x52A0E6: mov     ebx, [esp+44h+a1.member.refID]
0x52A0EA: test    byte ptr [esp+44h+Dst], 4
0x52A0EF: jz      short loc_52A106
0x52A0F1: push    1; a2
0x52A0F3: lea     eax, [esp+48h+a1.vtbl+2]
0x52A0F7: push    eax; a1
0x52A0F8: mov     ecx, ebp
0x52A0FA: call    TESForm_LoadDataFromCurrentSaveGame
0x52A0FF: mov     cl, byte ptr [esp+44h+a1.vtbl+2]
0x52A103: mov     [ebp+3Ch], cl
0x52A106: test    [esp+44h+Dst], 10000000h
0x52A10E: jz      loc_52A2D7
0x52A114: push    1; a2
0x52A116: lea     edx, [esp+48h+a1.vtbl+1]
0x52A11A: push    edx; a1
0x52A11B: mov     ecx, ebp
0x52A11D: call    TESForm_LoadDataFromCurrentSaveGame
0x52A122: cmp     byte ptr [esp+44h+a1.vtbl+1], 0
0x52A127: mov     [esp+44h+a1.member.modlist.next], edi
0x52A12B: jbe     loc_52A2CC
0x52A131: push    1; a2
0x52A133: lea     eax, [esp+48h+arg_4]
0x52A137: push    eax; a1
0x52A138: mov     ecx, ebp
0x52A13A: call    TESForm_LoadDataFromCurrentSaveGame
0x52A13F: push    1; a2
0x52A141: lea     ecx, [esp+48h+a1.vtbl+3]
0x52A145: push    ecx; a1
0x52A146: mov     ecx, ebp
0x52A148: call    TESForm_LoadDataFromCurrentSaveGame
0x52A14D: lea     eax, [ebp+40h]
0x52A150: test    eax, eax
0x52A152: jz      short loc_52A16D
0x52A154: mov     dl, byte ptr [esp+44h+arg_4.vtbl]
0x52A158: mov     ecx, [eax]
0x52A15A: test    ecx, ecx
0x52A15C: jz      short loc_52A166
0x52A15E: cmp     [ecx], dl
0x52A160: jz      loc_52A23C
0x52A166: mov     eax, [eax+4]
0x52A169: test    eax, eax
0x52A16B: jnz     short loc_52A158
0x52A16D: mov     eax, [ebp+0]
0x52A170: mov     edx, [eax+0D4h]
0x52A176: mov     ecx, ebp
0x52A178: xor     ebx, ebx
0x52A17A: call    edx
0x52A17C: push    eax
0x52A17D: movzx   eax, byte ptr [esp+48h+arg_4.vtbl]
0x52A182: push    eax; ArgList
0x52A183: push    offset aCouldNotFin_11; "Could not find stage %i in quest %s dur"...
0x52A188: call    PrintError
0x52A18D: add     esp, 0Ch
0x52A190: push    1; a2
0x52A192: lea     ecx, [esp+48h+a1]
0x52A196: push    ecx; a1
0x52A197: mov     ecx, ebp
0x52A199: call    TESForm_LoadDataFromCurrentSaveGame
0x52A19E: cmp     byte ptr [esp+44h+a1.vtbl], 0
0x52A1A3: mov     [esp+44h+a1.member.modlist.data], 0
0x52A1AB: jbe     loc_52A2B0
0x52A1B1: lea     ecx, [esp+44h+a1.member]
0x52A1B5: call    sub_47D260
0x52A1BA: push    1; a2
0x52A1BC: lea     edx, [esp+48h+var_14]
0x52A1C0: push    edx; a1
0x52A1C1: mov     ecx, ebp
0x52A1C3: mov     [esp+4Ch+var_4], 0
0x52A1CB: call    TESForm_LoadDataFromCurrentSaveGame
0x52A1D0: mov     ecx, ds:0B33B00h
0x52A1D6: push    4; Size
0x52A1D8: lea     eax, [esp+48h+a1.member]
0x52A1DC: push    eax; Dst
0x52A1DD: call    SaveLoad_LoadData
0x52A1E2: test    ebx, ebx
0x52A1E4: jz      loc_52A287
0x52A1EA: mov     ecx, [esp+44h+var_14]
0x52A1EE: push    ecx
0x52A1EF: mov     ecx, ebx
0x52A1F1: call    sub_52AC30
0x52A1F6: mov     esi, eax
0x52A1F8: test    esi, esi
0x52A1FA: jz      loc_52A287
0x52A200: lea     ecx, [esp+44h+a1.member]
0x52A204: call    sub_47D290
0x52A209: test    ax, ax
0x52A20C: jnz     short loc_52A24A
0x52A20E: lea     ecx, [esp+44h+a1.member]
0x52A212: call    QuestStageItem_GetYear
0x52A217: test    ax, ax
0x52A21A: jnz     short loc_52A24A
0x52A21C: mov     edi, [esi+64h]
0x52A21F: test    edi, edi
0x52A221: jz      short loc_52A287
0x52A223: mov     ecx, edi; void *
0x52A225: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x52A22A: push    edi
0x52A22B: call    FormHeapFree
0x52A230: add     esp, 4
0x52A233: mov     dword ptr [esi+64h], 0
0x52A23A: jmp     short loc_52A287
0x52A23C: mov     dl, byte ptr [esp+44h+a1.vtbl+3]
0x52A240: mov     ebx, ecx
0x52A242: mov     [ecx+1], dl
0x52A245: jmp     loc_52A190
0x52A24A: mov     ecx, [esi+64h]
0x52A24D: test    ecx, ecx
0x52A24F: jz      short loc_52A25D
0x52A251: lea     edx, [esp+44h+a1.member]
0x52A255: push    edx
0x52A256: call    sub_47D270
0x52A25B: jmp     short loc_52A287
0x52A25D: push    4; Size
0x52A25F: call    FormHeapAlloc
0x52A264: add     esp, 4
0x52A267: mov     [esp+44h+var_10], eax
0x52A26B: test    eax, eax
0x52A26D: mov     byte ptr [esp+44h+var_4], 1
0x52A272: jz      short loc_52A282
0x52A274: lea     ecx, [esp+44h+a1.member]
0x52A278: push    ecx
0x52A279: mov     ecx, eax
0x52A27B: call    sub_47D270
0x52A280: jmp     short loc_52A284
0x52A282: xor     eax, eax
0x52A284: mov     [esi+64h], eax
0x52A287: lea     ecx, [esp+44h+a1.member]; void *
0x52A28B: mov     [esp+44h+var_4], 0FFFFFFFFh
0x52A293: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x52A298: mov     eax, [esp+44h+a1.member.modlist.data]
0x52A29C: movzx   edx, byte ptr [esp+44h+a1.vtbl]
0x52A2A1: add     eax, 1
0x52A2A4: cmp     eax, edx
0x52A2A6: mov     [esp+44h+a1.member.modlist.data], eax
0x52A2AA: jl      loc_52A1B1
0x52A2B0: mov     eax, [esp+44h+a1.member.modlist.next]
0x52A2B4: movzx   ecx, byte ptr [esp+44h+a1.vtbl+1]
0x52A2B9: add     eax, 1
0x52A2BC: cmp     eax, ecx
0x52A2BE: mov     [esp+44h+a1.member.modlist.next], eax
0x52A2C2: jl      loc_52A131
0x52A2C8: mov     ebx, [esp+44h+a1.member.refID]
0x52A2CC: mov     ecx, ebp
0x52A2CE: mov     byte ptr [ebp+5Ch], 0
0x52A2D2: call    sub_529B70
0x52A2D7: mov     edi, 8000000h
0x52A2DC: test    [esp+44h+Dst], edi
0x52A2E0: jz      short loc_52A342
0x52A2E2: mov     ecx, [ebp+58h]
0x52A2E5: test    ecx, ecx
0x52A2E7: jnz     short loc_52A33D
0x52A2E9: push    14h; Size
0x52A2EB: call    FormHeapAlloc
0x52A2F0: add     esp, 4
0x52A2F3: mov     [esp+44h+Dst], eax
0x52A2F7: test    eax, eax
0x52A2F9: mov     [esp+44h+var_4], 2
0x52A301: jz      short loc_52A30E
0x52A303: mov     ecx, eax
0x52A305: call    sub_4F9DB0
0x52A30A: mov     esi, eax
0x52A30C: jmp     short loc_52A310
0x52A30E: xor     esi, esi
0x52A310: mov     ecx, esi
0x52A312: mov     [esp+44h+var_4], 0FFFFFFFFh
0x52A31A: call    ScriptEventList_Load?
0x52A31F: test    esi, esi
0x52A321: jz      short loc_52A333
0x52A323: mov     ecx, esi
0x52A325: call    ScriptEventList_destr??
0x52A32A: push    esi
0x52A32B: call    FormHeapFree
0x52A330: add     esp, 4
0x52A333: mov     eax, ds:0B33B00h
0x52A338: or      [eax+50h], edi
0x52A33B: jmp     short loc_52A342
0x52A33D: call    ScriptEventList_Load?
0x52A342: mov     ecx, ds:0B33B00h
0x52A348: call    sub_45A170
0x52A34D: test    al, al
0x52A34F: jz      loc_52A44B
0x52A355: mov     ecx, ds:0B33B00h
0x52A35B: mov     edi, [ecx+80h]
0x52A361: test    edi, edi
0x52A363: mov     esi, [ecx+14h]
0x52A366: jz      loc_52A401
0x52A36C: mov     edx, [edi]
0x52A36E: push    edx; a1
0x52A36F: call    TESForm_LookupByFormID
0x52A374: mov     ecx, eax
0x52A376: movzx   eax, word ptr [esp+48h+a1.member.flags]
0x52A37B: add     eax, ebx
0x52A37D: add     esp, 4
0x52A380: cmp     esi, eax
0x52A382: jbe     short loc_52A3C1
0x52A384: mov     edx, [edi+5]
0x52A387: movzx   eax, byte ptr [edi+9]
0x52A38B: push    edx
0x52A38C: mov     edx, [ecx]
0x52A38E: push    eax
0x52A38F: mov     eax, [edx+0D4h]
0x52A395: call    eax
0x52A397: mov     ecx, [edi]
0x52A399: movzx   edx, word ptr [esp+4Ch+a1.member.flags]
0x52A39E: push    eax
0x52A39F: push    ecx
0x52A3A0: push    0CC7h
0x52A3A5: sub     esi, edx
0x52A3A7: push    offset a__TesSharedT_9; "..\\TES Shared\\TESQuest.cpp"
0x52A3AC: sub     esi, ebx
0x52A3AE: push    esi; ArgList
0x52A3AF: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x52A3B4: call    PrintError
0x52A3B9: add     esp, 20h
0x52A3BC: jmp     loc_52A44B
0x52A3C1: jnb     loc_52A44B
0x52A3C7: mov     eax, [edi+5]
0x52A3CA: movzx   edx, byte ptr [edi+9]
0x52A3CE: push    eax
0x52A3CF: mov     eax, [ecx]
0x52A3D1: push    edx
0x52A3D2: mov     edx, [eax+0D4h]
0x52A3D8: call    edx
0x52A3DA: movzx   ecx, word ptr [esp+4Ch+a1.member.flags]
0x52A3DF: push    eax
0x52A3E0: mov     eax, [edi]
0x52A3E2: push    eax
0x52A3E3: push    0CC7h
0x52A3E8: sub     ecx, esi
0x52A3EA: push    offset a__TesSharedT_9; "..\\TES Shared\\TESQuest.cpp"
0x52A3EF: add     ecx, ebx
0x52A3F1: push    ecx; ArgList
0x52A3F2: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x52A3F7: call    PrintError
0x52A3FC: add     esp, 20h
0x52A3FF: jmp     short loc_52A44B
0x52A401: movzx   eax, word ptr [esp+44h+a1.member.flags]
0x52A406: lea     edx, [eax+ebx]
0x52A409: cmp     esi, edx
0x52A40B: jbe     short loc_52A428
0x52A40D: movzx   edx, byte ptr [ecx+7Ch]
0x52A411: push    edx
0x52A412: push    0CC7h
0x52A417: sub     esi, eax
0x52A419: push    offset a__TesSharedT_9; "..\\TES Shared\\TESQuest.cpp"
0x52A41E: sub     esi, ebx
0x52A420: push    esi
0x52A421: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x52A426: jmp     short loc_52A443
0x52A428: jnb     short loc_52A44B
0x52A42A: movzx   ecx, byte ptr [ecx+7Ch]
0x52A42E: push    ecx
0x52A42F: push    0CC7h
0x52A434: sub     eax, esi
0x52A436: push    offset a__TesSharedT_9; "..\\TES Shared\\TESQuest.cpp"
0x52A43B: add     eax, ebx
0x52A43D: push    eax; ArgList
0x52A43E: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x52A443: call    PrintError
0x52A448: add     esp, 14h
0x52A44B: mov     ecx, [esp+44h+var_C]
0x52A44F: mov     large fs:0, ecx
0x52A456: pop     ecx
0x52A457: pop     edi
0x52A458: pop     esi
0x52A459: pop     ebp
0x52A45A: pop     ebx
0x52A45B: add     esp, 30h
0x52A45E: retn    8
