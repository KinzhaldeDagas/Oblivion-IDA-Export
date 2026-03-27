0x44A7D0: push    0FFFFFFFFh
0x44A7D2: push    offset TESDataHandler_PlaceObjectRef_SEH
0x44A7D7: mov     eax, large fs:0
0x44A7DD: push    eax
0x44A7DE: sub     esp, 24h
0x44A7E1: push    ebx
0x44A7E2: push    ebp
0x44A7E3: push    esi
0x44A7E4: push    edi
0x44A7E5: mov     eax, ds:0B30AACh
0x44A7EA: xor     eax, esp
0x44A7EC: push    eax
0x44A7ED: lea     eax, [esp+44h+var_C]
0x44A7F1: mov     large fs:0, eax
0x44A7F7: mov     ebx, [esp+44h+arg_C]
0x44A7FB: xor     ebp, ebp
0x44A7FD: test    ebx, ebx
0x44A7FF: jz      short loc_44A80E
0x44A801: mov     ecx, ebx; this
0x44A803: call    TESObjectCELL_IsInterior
0x44A808: test    al, al
0x44A80A: jnz     short loc_44A88B
0x44A80C: xor     ebx, ebx
0x44A80E: mov     edi, [esp+44h+arg_10]
0x44A812: mov     esi, [esp+44h+a2]
0x44A816: test    esi, esi
0x44A818: jz      loc_44ABBF
0x44A81E: test    ebx, ebx
0x44A820: jnz     short loc_44A82A
0x44A822: test    edi, edi
0x44A824: jz      loc_44ABBF
0x44A82A: mov     ebp, [esp+44h+arg_14]
0x44A82E: test    ebp, ebp
0x44A830: jz      short TESDataHandler_PlaceObjectRef___SwitchRefType
0x44A832: mov     ecx, ebp; this
0x44A834: call    TESObjectREFR_IsPersistent?
0x44A839: push    0; a2
0x44A83B: mov     ecx, ebp; this
0x44A83D: mov     byte ptr [esp+48h+arg_10], al
0x44A841: call    TESObjectREFR_SetPersistance
0x44A846: mov     ecx, ebp; this
0x44A848: call    TESObjectREFR_GetParentCell
0x44A84D: test    eax, eax
0x44A84F: jz      short loc_44A859
0x44A851: push    ebp
0x44A852: mov     ecx, eax
0x44A854: call    sub_4CECD0
0x44A859: mov     eax, [ebp+0]
0x44A85C: mov     edx, [eax+170h]
0x44A862: mov     ecx, ebp
0x44A864: call    edx
0x44A866: test    eax, eax
0x44A868: jnz     short loc_44A872
0x44A86A: push    esi; a2
0x44A86B: mov     ecx, ebp; this
0x44A86D: call    TESObjectREFR_SetBaseForm
0x44A872: mov     ecx, ebp
0x44A874: call    sub_4DB3C0
0x44A879: test    al, al
0x44A87B: jz      loc_44A96D
0x44A881: mov     byte ptr [esp+44h+arg_10], 1
0x44A886: jmp     loc_44A96D
0x44A88B: xor     edi, edi
0x44A88D: jmp     short loc_44A812
