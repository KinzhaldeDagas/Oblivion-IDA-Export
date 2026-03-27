0x47A640: push    0FFFFFFFFh
0x47A642: push    offset SEH_47A640
0x47A647: mov     eax, large fs:0
0x47A64D: push    eax
0x47A64E: sub     esp, 2Ch
0x47A651: push    ebx
0x47A652: push    ebp
0x47A653: push    esi
0x47A654: push    edi
0x47A655: mov     eax, ds:0B30AACh
0x47A65A: xor     eax, esp
0x47A65C: push    eax
0x47A65D: lea     eax, [esp+4Ch+var_C]
0x47A661: mov     large fs:0, eax
0x47A667: mov     esi, ecx
0x47A669: mov     ebp, [esp+4Ch+a1]
0x47A66D: test    ebp, ebp
0x47A66F: jz      loc_47A9DB
0x47A675: cmp     byte ptr [ebp+4], 16h
0x47A679: jnz     loc_47A9DB
0x47A67F: xor     ebx, ebx
0x47A681: cmp     byte ptr [esp+4Ch+arg_4], bl
0x47A685: push    0
0x47A687: setnz   bl
0x47A68A: push    1
0x47A68C: add     ebx, 6
0x47A68F: mov     eax, ebx
0x47A691: shl     eax, 4
0x47A694: lea     edi, [eax+esi]
0x47A697: lea     eax, [edi+4Ch]
0x47A69A: push    eax
0x47A69B: mov     [esp+58h+Src], edi
0x47A69F: call    sub_478780
0x47A6A4: mov     ecx, [esi+150h]
0x47A6AA: mov     edx, [ecx]
0x47A6AC: mov     eax, [edx+170h]
0x47A6B2: push    ebx; int
0x47A6B3: call    eax
0x47A6B5: mov     ecx, eax
0x47A6B7: call    TESActorBase_IsFemale
0x47A6BC: push    eax; int
0x47A6BD: push    esi; int
0x47A6BE: lea     ecx, [ebp+5Ch]; int
0x47A6C1: call    sub_4691D0
0x47A6C6: lea     ecx, [ebx+5]
0x47A6C9: shl     ecx, 4
0x47A6CC: cmp     dword ptr [ecx+esi], 0
0x47A6D0: lea     ebp, [ecx+esi]
0x47A6D3: jz      loc_47A9DB
0x47A6D9: push    ebx
0x47A6DA: mov     ecx, esi
0x47A6DC: call    sub_478290
0x47A6E1: test    al, al
0x47A6E3: jnz     loc_47A9DB
0x47A6E9: mov     eax, [esi+150h]
0x47A6EF: mov     ecx, ds:0B333C4h
0x47A6F5: cmp     eax, ecx
0x47A6F7: mov     ebp, [ebp+0]
0x47A6FA: mov     [esp+4Ch+arg_4], eax
0x47A6FE: jnz     short loc_47A735
0x47A700: push    esi
0x47A701: call    sub_65D770
0x47A706: mov     ecx, ds:0B333C4h
0x47A70C: push    eax
0x47A70D: call    PlayerCharacter_GetPlayerNode
0x47A712: mov     edx, [esi+150h]
0x47A718: push    eax
0x47A719: mov     eax, [ebp+0]
0x47A71C: push    edx
0x47A71D: mov     edx, [eax+14h]
0x47A720: push    ebx
0x47A721: mov     ecx, ebp
0x47A723: call    edx
0x47A725: push    eax
0x47A726: call    sub_479450
0x47A72B: add     esp, 10h
0x47A72E: xor     ebp, ebp
0x47A730: jmp     loc_47A97C
0x47A735: mov     eax, [ebp+0]
0x47A738: mov     edx, [eax+14h]
0x47A73B: mov     ecx, ebp
0x47A73D: call    edx
0x47A73F: xor     ebp, ebp
0x47A741: cmp     eax, ebp
0x47A743: jz      loc_47A97A
0x47A749: mov     ecx, [esp+4Ch+arg_4]
0x47A74D: cmp     ecx, ebp
0x47A74F: jz      loc_47A97A
0x47A755: mov     ecx, [ecx+3Ch]
0x47A758: cmp     ecx, ebp
0x47A75A: mov     [esp+4Ch+a1], ecx
0x47A75E: jz      loc_47A97A
0x47A764: mov     ecx, ds:0B33A1Ch
0x47A76A: push    1
0x47A76C: push    3
0x47A76E: push    1
0x47A770: push    eax
0x47A771: call    sub_439EB0
0x47A776: mov     esi, eax
0x47A778: lea     ecx, [esp+4Ch+var_28]
0x47A77C: mov     [esp+4Ch+var_34], esi
0x47A780: call    sub_478B90
0x47A785: fld1
0x47A787: fst     [esp+4Ch+var_10]
0x47A78B: fst     [esp+4Ch+var_14]
0x47A78F: fstp    [esp+4Ch+var_18]
0x47A793: mov     [esp+4Ch+var_4], ebp
0x47A797: mov     [esp+4Ch+var_38], ebp
0x47A79B: push    esi
0x47A79C: mov     byte ptr [esp+50h+var_4], 1
0x47A7A1: call    sub_480820
0x47A7A6: add     esp, 4
0x47A7A9: test    al, al
0x47A7AB: jz      short loc_47A7CE
0x47A7AD: mov     ecx, ds:0B333A0h
0x47A7B3: lea     eax, [esp+4Ch+var_28]
0x47A7B7: push    eax
0x47A7B8: push    esi
0x47A7B9: call    sub_4430C0
0x47A7BE: push    eax; a2
0x47A7BF: lea     ecx, [esp+50h+var_38]; this
0x47A7C3: call    NiSmartPointer_Set??
0x47A7C8: mov     ebp, [esp+4Ch+var_38]
0x47A7CC: jmp     short loc_47A7DC
0x47A7CE: lea     ecx, [esp+4Ch+var_28]
0x47A7D2: push    ecx
0x47A7D3: mov     ecx, esi
0x47A7D5: call    sub_700610
0x47A7DA: mov     ebp, eax
0x47A7DC: mov     edx, [esp+4Ch+arg_4]
0x47A7E0: push    edx
0x47A7E1: push    ebx
0x47A7E2: push    ebp
0x47A7E3: push    esi
0x47A7E4: call    sub_478220
0x47A7E9: add     esp, 10h
0x47A7EC: mov     ecx, ebp
0x47A7EE: call    sub_6FFC60
0x47A7F3: test    ebp, ebp
0x47A7F5: jz      loc_47A927
0x47A7FB: push    ebp
0x47A7FC: push    offset dword_B35288
0x47A801: call    NiRTTI__IsObjectOfRTTIType
0x47A806: add     esp, 8
0x47A809: test    al, al
0x47A80B: jz      short loc_47A816
0x47A80D: push    7
0x47A80F: mov     ecx, ebp
0x47A811: call    sub_4A01B0
0x47A816: mov     eax, ds:0B3F9A8h
0x47A81B: mov     [ebp+54h], eax
0x47A81E: mov     ecx, ds:0B3F9ACh
0x47A824: mov     [ebp+58h], ecx
0x47A827: mov     edx, ds:0B3F9B0h
0x47A82D: mov     [ebp+5Ch], edx
0x47A830: lea     edi, [ebp+30h]
0x47A833: mov     ecx, 9
0x47A838: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x47A83D: push    ebp
0x47A83E: rep movsd
0x47A840: call    sub_471B80
0x47A845: add     esp, 4
0x47A848: test    al, al
0x47A84A: jz      short loc_47A862
0x47A84C: mov     eax, [ebp+8]
0x47A84F: push    eax; ArgList
0x47A850: push    offset aTyringToAddSki; "Tyring to add skinned object '%s' as an"...
0x47A855: call    PrintError
0x47A85A: add     esp, 8
0x47A85D: jmp     loc_47A915
0x47A862: mov     eax, [esp+4Ch+var_34]
0x47A866: mov     ecx, [esp+4Ch+a1]
0x47A86A: push    0
0x47A86C: push    0FFFFFFFFh
0x47A86E: push    0
0x47A870: push    eax
0x47A871: push    ebp
0x47A872: push    ecx
0x47A873: call    sub_479140
0x47A878: mov     edx, [ebp+0]
0x47A87B: mov     eax, [edx+8]
0x47A87E: add     esp, 18h
0x47A881: mov     ecx, ebp
0x47A883: call    eax
0x47A885: test    eax, eax
0x47A887: jz      loc_47A915
0x47A88D: mov     edi, [ebp+1Ch]
0x47A890: xor     esi, esi
0x47A892: test    edi, edi
0x47A894: jz      short loc_47A8A0
0x47A896: cmp     ebx, 7
0x47A899: jz      short loc_47A8A0
0x47A89B: cmp     ebx, 6
0x47A89E: jnz     short loc_47A8C8
0x47A8A0: cmp     ebx, 0FFFFFFFFh
0x47A8A3: jz      short loc_47A8C8
0x47A8A5: mov     eax, ds:0B065C8h[ebx*4]
0x47A8AC: cmp     eax, 0FFFFFFFFh
0x47A8AF: jz      short loc_47A8C8
0x47A8B1: mov     ecx, ds:0B06550h[eax*4]
0x47A8B8: mov     edx, [esp+4Ch+a1]
0x47A8BC: push    ecx; a2
0x47A8BD: push    edx; a1
0x47A8BE: call    NiObjectNET_LookupObjectByName
0x47A8C3: add     esp, 8
0x47A8C6: mov     esi, eax
0x47A8C8: test    edi, edi
0x47A8CA: jz      short loc_47A8FA
0x47A8CC: cmp     ebx, 7
0x47A8CF: jz      short loc_47A8D6
0x47A8D1: cmp     ebx, 6
0x47A8D4: jnz     short loc_47A915
0x47A8D6: mov     ecx, [esp+4Ch+arg_4]
0x47A8DA: mov     eax, [ecx]
0x47A8DC: mov     edx, [eax+168h]
0x47A8E2: call    edx
0x47A8E4: test    eax, eax
0x47A8E6: jz      short loc_47A8F0
0x47A8E8: mov     ecx, [ebp+1Ch]
0x47A8EB: cmp     ecx, [eax+20h]
0x47A8EE: jz      short loc_47A915
0x47A8F0: test    esi, esi
0x47A8F2: jz      short loc_47A915
0x47A8F4: mov     eax, [esi]
0x47A8F6: mov     ecx, esi
0x47A8F8: jmp     short loc_47A90A
0x47A8FA: test    esi, esi
0x47A8FC: jz      short loc_47A904
0x47A8FE: mov     eax, [esi]
0x47A900: mov     ecx, esi
0x47A902: jmp     short loc_47A90A
0x47A904: mov     ecx, [esp+4Ch+a1]
0x47A908: mov     eax, [ecx]
0x47A90A: mov     edx, [eax+84h]
0x47A910: push    1
0x47A912: push    ebp
0x47A913: call    edx
0x47A915: mov     ecx, ebp
0x47A917: call    NiNode_UpdateDynamicEffectState
0x47A91C: mov     ecx, ebp; this
0x47A91E: call    NiAVObject_InitializePropertyState
0x47A923: mov     edi, [esp+4Ch+Src]
0x47A927: mov     esi, [esp+4Ch+var_38]
0x47A92B: test    esi, esi
0x47A92D: mov     byte ptr [esp+4Ch+var_4], 0
0x47A932: jz      short loc_47A94C
0x47A934: lea     eax, [esi+4]
0x47A937: push    eax; lpAddend
0x47A938: call    dword ptr ds:0A2807Ch
0x47A93E: test    eax, eax
0x47A940: jnz     short loc_47A94C
0x47A942: mov     edx, [esi]
0x47A944: mov     eax, [edx]
0x47A946: push    1
0x47A948: mov     ecx, esi
0x47A94A: call    eax
0x47A94C: mov     ecx, [esp+4Ch+var_28]
0x47A950: test    ecx, ecx
0x47A952: mov     [esp+4Ch+var_4], 0FFFFFFFFh
0x47A95A: jz      short loc_47A964
0x47A95C: mov     edx, [ecx]
0x47A95E: mov     eax, [edx]
0x47A960: push    1
0x47A962: call    eax
0x47A964: mov     ecx, [esp+4Ch+var_24]
0x47A968: test    ecx, ecx
0x47A96A: jz      short loc_47A974
0x47A96C: mov     edx, [ecx]
0x47A96E: mov     eax, [edx]
0x47A970: push    1
0x47A972: call    eax
0x47A974: mov     eax, ebp
0x47A976: xor     ebp, ebp
0x47A978: jmp     short loc_47A97C
0x47A97A: xor     eax, eax
0x47A97C: mov     [edi+54h], eax
0x47A97F: mov     [esp+4Ch+Src], ebp
0x47A983: mov     [esp+4Ch+var_2C], bp
0x47A988: mov     [esp+4Ch+var_2A], bp
0x47A98D: mov     ecx, [edi+4Ch]
0x47A990: mov     eax, [ecx+0Ch]
0x47A993: mov     edx, [ecx]
0x47A995: push    eax
0x47A996: mov     eax, [edx+0D4h]
0x47A99C: mov     [esp+50h+var_4], 2
0x47A9A4: call    eax
0x47A9A6: mov     ecx, ds:0B06588h[ebx*4]
0x47A9AD: push    eax
0x47A9AE: push    ecx; ArgList
0x47A9AF: lea     edx, [esp+58h+Src]
0x47A9B3: push    offset aSS08x; "%s %s (%08X)"
0x47A9B8: push    edx; int
0x47A9B9: call    BSStringT_Static_Format
0x47A9BE: mov     ecx, [edi+54h]
0x47A9C1: mov     esi, [esp+60h+Src]
0x47A9C5: add     esp, 14h
0x47A9C8: cmp     ecx, ebp
0x47A9CA: jz      short loc_47A9D2
0x47A9CC: push    esi; Src
0x47A9CD: call    NiObjectNET_SetName
0x47A9D2: push    esi
0x47A9D3: call    FormHeapFree
0x47A9D8: add     esp, 4
0x47A9DB: mov     ecx, [esp+4Ch+var_C]
0x47A9DF: mov     large fs:0, ecx
0x47A9E6: pop     ecx
0x47A9E7: pop     edi
0x47A9E8: pop     esi
0x47A9E9: pop     ebp
0x47A9EA: pop     ebx
0x47A9EB: add     esp, 38h
0x47A9EE: retn    8
