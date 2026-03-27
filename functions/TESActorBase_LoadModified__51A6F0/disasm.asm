0x51A6F0: sub     esp, 118h
0x51A6F6: mov     eax, ds:0B30AACh
0x51A6FB: xor     eax, esp
0x51A6FD: mov     [esp+118h+var_4], eax
0x51A704: push    ebp
0x51A705: push    esi
0x51A706: mov     esi, ecx
0x51A708: mov     ecx, ds:0B33B00h
0x51A70E: xor     ebp, ebp
0x51A710: push    edi
0x51A711: mov     [esp+124h+a1.vtbl+1], ebp
0x51A715: call    sub_45A170
0x51A71A: test    al, al
0x51A71C: jz      loc_51A7BB
0x51A722: mov     ecx, ds:0B33B00h
0x51A728: push    4; Size
0x51A72A: lea     eax, [esp+128h+a1.member.pad]
0x51A72E: push    eax; Dst
0x51A72F: call    SaveLoad_LoadData
0x51A734: cmp     dword ptr [esp+124h+a1.member.pad], 4B4F4C42h
0x51A73C: jz      short loc_51A7A6
0x51A73E: mov     eax, ds:0B33B00h
0x51A743: mov     edi, [eax+80h]
0x51A749: cmp     edi, ebp
0x51A74B: jz      short loc_51A78A
0x51A74D: mov     ecx, [edi]
0x51A74F: push    ecx; a1
0x51A750: call    TESForm_LookupByFormID
0x51A755: mov     edx, [edi+5]
0x51A758: movzx   ecx, byte ptr [edi+9]
0x51A75C: add     esp, 4
0x51A75F: push    edx
0x51A760: mov     edx, [eax]
0x51A762: push    ecx
0x51A763: mov     ecx, eax
0x51A765: mov     eax, [edx+0D4h]
0x51A76B: call    eax
0x51A76D: mov     ecx, [edi]
0x51A76F: push    eax
0x51A770: push    ecx
0x51A771: push    23Ah
0x51A776: push    offset a__TesSharedT_8; "..\\TES Shared\\TESActorBase.cpp"
0x51A77B: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x51A780: call    PrintError
0x51A785: add     esp, 1Ch
0x51A788: jmp     short loc_51A7A6
0x51A78A: movzx   edx, byte ptr [eax+7Ch]
0x51A78E: push    edx
0x51A78F: push    23Ah
0x51A794: push    offset a__TesSharedT_8; "..\\TES Shared\\TESActorBase.cpp"
0x51A799: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x51A79E: call    PrintError
0x51A7A3: add     esp, 10h
0x51A7A6: mov     ecx, ds:0B33B00h
0x51A7AC: mov     ebp, [ecx+14h]
0x51A7AF: push    2; Size
0x51A7B1: lea     eax, [esp+128h+a1.vtbl+1]
0x51A7B5: push    eax; Dst
0x51A7B6: call    SaveLoad_LoadData
0x51A7BB: mov     ecx, ds:0B33B00h
0x51A7C1: cmp     byte ptr [ecx+7Ch], 6Dh ; 'm'
0x51A7C5: mov     edi, [esp+124h+Size]
0x51A7CC: push    ebx
0x51A7CD: mov     ebx, [esp+128h+arg_0]
0x51A7D4: jb      short loc_51A7DF
0x51A7D6: push    edi; a3
0x51A7D7: push    ebx; Dst
0x51A7D8: mov     ecx, esi; this
0x51A7DA: call    TESForm_LoadModifiedForm
0x51A7DF: push    edi; Size
0x51A7E0: push    ebx; Dst
0x51A7E1: lea     ecx, [esi+88h]
0x51A7E7: call    TESAttributes_LoadModified
0x51A7EC: push    edi
0x51A7ED: push    ebx
0x51A7EE: lea     ecx, [esi+24h]
0x51A7F1: call    TESActorBaseData_LoadModifiedComponent
0x51A7F6: push    edi
0x51A7F7: push    ebx
0x51A7F8: lea     ecx, [esi+54h]
0x51A7FB: call    TESSpellList_LoadModifiedComponent
0x51A800: push    edi
0x51A801: push    ebx
0x51A802: lea     ecx, [esi+68h]
0x51A805: call    TESAIForm_LoadModifiedComponent
0x51A80A: test    bl, 4
0x51A80D: jz      short loc_51A827
0x51A80F: push    4; a2
0x51A811: lea     edx, [esp+12Ch+a1.member.flags+1]
0x51A815: push    edx; a1
0x51A816: mov     ecx, esi
0x51A818: call    TESForm_LoadDataFromCurrentSaveGame
0x51A81D: mov     eax, [esp+128h+a1.member.flags+1]
0x51A821: mov     [esi+84h], eax
0x51A827: test    ebx, 10000000h
0x51A82D: jz      short loc_51A83A
0x51A82F: lea     ecx, [esi+0D0h]
0x51A835: call    AVCollection_Load
0x51A83A: test    bl, bl
0x51A83C: pop     ebx
0x51A83D: jns     short loc_51A88B
0x51A83F: push    104h
0x51A844: lea     ecx, [esp+128h+a1.member.refID+1]
0x51A848: push    0
0x51A84A: push    ecx
0x51A84B: call    __memset
0x51A850: add     esp, 0Ch
0x51A853: push    1; a2
0x51A855: lea     edx, [esp+128h+a1]
0x51A859: push    edx; a1
0x51A85A: mov     ecx, esi
0x51A85C: call    TESForm_LoadDataFromCurrentSaveGame
0x51A861: mov     al, byte ptr [esp+124h+a1.vtbl]
0x51A865: test    al, al
0x51A867: jz      short loc_51A879
0x51A869: movzx   eax, al
0x51A86C: push    eax; a2
0x51A86D: lea     ecx, [esp+128h+a1.member.refID+1]
0x51A871: push    ecx; a1
0x51A872: mov     ecx, esi
0x51A874: call    TESForm_LoadDataFromCurrentSaveGame
0x51A879: push    0; a3
0x51A87B: lea     edx, [esp+128h+a1.member.refID+1]
0x51A87F: push    edx; a2
0x51A880: lea     ecx, [esi+0A4h]; this
0x51A886: call    BSStringT_Set
0x51A88B: mov     ecx, ds:0B33B00h
0x51A891: call    sub_45A170
0x51A896: test    al, al
0x51A898: jz      loc_51A995
0x51A89E: mov     ecx, ds:0B33B00h
0x51A8A4: mov     edi, [ecx+80h]
0x51A8AA: test    edi, edi
0x51A8AC: mov     esi, [ecx+14h]
0x51A8AF: jz      loc_51A94B
0x51A8B5: mov     eax, [edi]
0x51A8B7: push    eax; a1
0x51A8B8: call    TESForm_LookupByFormID
0x51A8BD: movzx   edx, word ptr [esp+128h+a1.vtbl+1]
0x51A8C2: mov     ecx, eax
0x51A8C4: lea     eax, [edx+ebp]
0x51A8C7: add     esp, 4
0x51A8CA: cmp     esi, eax
0x51A8CC: jbe     short loc_51A90B
0x51A8CE: mov     eax, [edi+5]
0x51A8D1: movzx   edx, byte ptr [edi+9]
0x51A8D5: push    eax
0x51A8D6: mov     eax, [ecx]
0x51A8D8: push    edx
0x51A8D9: mov     edx, [eax+0D4h]
0x51A8DF: call    edx
0x51A8E1: movzx   ecx, word ptr [esp+12Ch+a1.vtbl+1]
0x51A8E6: push    eax
0x51A8E7: mov     eax, [edi]
0x51A8E9: push    eax
0x51A8EA: push    25Eh
0x51A8EF: sub     esi, ecx
0x51A8F1: push    offset a__TesSharedT_8; "..\\TES Shared\\TESActorBase.cpp"
0x51A8F6: sub     esi, ebp
0x51A8F8: push    esi; ArgList
0x51A8F9: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x51A8FE: call    PrintError
0x51A903: add     esp, 20h
0x51A906: jmp     loc_51A995
0x51A90B: jnb     loc_51A995
0x51A911: mov     edx, [edi+5]
0x51A914: movzx   eax, byte ptr [edi+9]
0x51A918: push    edx
0x51A919: mov     edx, [ecx]
0x51A91B: push    eax
0x51A91C: mov     eax, [edx+0D4h]
0x51A922: call    eax
0x51A924: mov     ecx, [edi]
0x51A926: movzx   edx, word ptr [esp+12Ch+a1.vtbl+1]
0x51A92B: push    eax
0x51A92C: push    ecx
0x51A92D: push    25Eh
0x51A932: sub     edx, esi
0x51A934: push    offset a__TesSharedT_8; "..\\TES Shared\\TESActorBase.cpp"
0x51A939: add     edx, ebp
0x51A93B: push    edx; ArgList
0x51A93C: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x51A941: call    PrintError
0x51A946: add     esp, 20h
0x51A949: jmp     short loc_51A995
0x51A94B: movzx   eax, word ptr [esp+124h+a1.vtbl+1]
0x51A950: lea     edx, [eax+ebp]
0x51A953: cmp     esi, edx
0x51A955: jbe     short loc_51A972
0x51A957: movzx   ecx, byte ptr [ecx+7Ch]
0x51A95B: push    ecx
0x51A95C: push    25Eh
0x51A961: sub     esi, eax
0x51A963: push    offset a__TesSharedT_8; "..\\TES Shared\\TESActorBase.cpp"
0x51A968: sub     esi, ebp
0x51A96A: push    esi
0x51A96B: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x51A970: jmp     short loc_51A98D
0x51A972: jnb     short loc_51A995
0x51A974: movzx   edx, byte ptr [ecx+7Ch]
0x51A978: push    edx
0x51A979: push    25Eh
0x51A97E: sub     eax, esi
0x51A980: push    offset a__TesSharedT_8; "..\\TES Shared\\TESActorBase.cpp"
0x51A985: add     eax, ebp
0x51A987: push    eax; ArgList
0x51A988: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x51A98D: call    PrintError
0x51A992: add     esp, 14h
0x51A995: mov     ecx, [esp+124h+var_4]
0x51A99C: pop     edi
0x51A99D: pop     esi
0x51A99E: pop     ebp
0x51A99F: xor     ecx, esp
0x51A9A1: call    @__security_check_cookie@4; __security_check_cookie(x)
0x51A9A6: add     esp, 118h
0x51A9AC: retn    8
