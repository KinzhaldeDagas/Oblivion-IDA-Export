0x719500: push    ebx
0x719501: push    esi
0x719502: mov     esi, dword ptr [esp+8+arg_0]
0x719506: push    edi
0x719507: push    esi
0x719508: mov     edi, ecx
0x71950A: call    sub_700B10
0x71950F: mov     eax, ds:0B3FCF0h
0x719514: push    eax; ArgList
0x719515: call    TESOutput_PrintString
0x71951A: movzx   ebx, word ptr [esi+0Ah]
0x71951E: movzx   ecx, word ptr [esi+8]
0x719522: add     esp, 4
0x719525: cmp     ebx, ecx
0x719527: mov     dword ptr [esp+0Ch+arg_0], eax
0x71952B: jb      short loc_71953B
0x71952D: movzx   edx, word ptr [esi+0Eh]
0x719531: add     edx, ebx
0x719533: push    edx
0x719534: mov     ecx, esi
0x719536: call    NiTArray_SetSize
0x71953B: lea     eax, [esp+0Ch+arg_0]
0x71953F: push    eax
0x719540: push    ebx
0x719541: mov     ecx, esi
0x719543: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x719548: mov     cl, [edi+18h]
0x71954B: and     cl, 1
0x71954E: mov     [esp+0Ch+arg_0], cl
0x719552: mov     edx, dword ptr [esp+0Ch+arg_0]
0x719556: push    edx; char
0x719557: push    offset aM_benable; "m_bEnable"
0x71955C: call    TESOutput_PrintLabeledBool
0x719561: movzx   ebx, word ptr [esi+0Ah]
0x719565: mov     dword ptr [esp+14h+arg_0], eax
0x719569: movzx   eax, word ptr [esi+8]
0x71956D: add     esp, 8
0x719570: cmp     ebx, eax
0x719572: jb      short loc_719582
0x719574: movzx   ecx, word ptr [esi+0Eh]
0x719578: add     ecx, ebx
0x71957A: push    ecx
0x71957B: mov     ecx, esi
0x71957D: call    NiTArray_SetSize
0x719582: lea     edx, [esp+0Ch+arg_0]
0x719586: push    edx
0x719587: push    ebx
0x719588: mov     ecx, esi
0x71958A: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x71958F: mov     eax, [edi+1Ch]
0x719592: push    eax; int
0x719593: push    offset aM_uiref; "m_uiRef"
0x719598: call    TESOutput_PrintLabeledUnsignedInt
0x71959D: movzx   ebx, word ptr [esi+0Ah]
0x7195A1: mov     dword ptr [esp+14h+arg_0], eax
0x7195A5: movzx   eax, word ptr [esi+8]
0x7195A9: add     esp, 8
0x7195AC: cmp     ebx, eax
0x7195AE: jb      short loc_7195BE
0x7195B0: movzx   ecx, word ptr [esi+0Eh]
0x7195B4: add     ecx, ebx
0x7195B6: push    ecx
0x7195B7: mov     ecx, esi
0x7195B9: call    NiTArray_SetSize
0x7195BE: lea     edx, [esp+0Ch+arg_0]
0x7195C2: push    edx
0x7195C3: push    ebx
0x7195C4: mov     ecx, esi
0x7195C6: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7195CB: mov     eax, [edi+20h]
0x7195CE: push    eax; int
0x7195CF: push    offset aM_uimask; "m_uiMask"
0x7195D4: call    TESOutput_PrintLabeledUnsignedInt
0x7195D9: movzx   ebx, word ptr [esi+0Ah]
0x7195DD: mov     dword ptr [esp+14h+arg_0], eax
0x7195E1: movzx   eax, word ptr [esi+8]
0x7195E5: add     esp, 8
0x7195E8: cmp     ebx, eax
0x7195EA: jb      short loc_7195FA
0x7195EC: movzx   ecx, word ptr [esi+0Eh]
0x7195F0: add     ecx, ebx
0x7195F2: push    ecx
0x7195F3: mov     ecx, esi
0x7195F5: call    NiTArray_SetSize
0x7195FA: lea     edx, [esp+0Ch+arg_0]
0x7195FE: push    edx
0x7195FF: push    ebx
0x719600: mov     ecx, esi
0x719602: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x719607: movzx   eax, word ptr [edi+18h]
0x71960B: shr     eax, 0Ch
0x71960E: push    eax; int
0x71960F: push    offset aM_etest; "m_eTest"
0x719614: call    sub_718C30
0x719619: movzx   ebx, word ptr [esi+0Ah]
0x71961D: mov     dword ptr [esp+14h+arg_0], eax
0x719621: movzx   eax, word ptr [esi+8]
0x719625: add     esp, 8
0x719628: cmp     ebx, eax
0x71962A: jb      short loc_71963A
0x71962C: movzx   ecx, word ptr [esi+0Eh]
0x719630: add     ecx, ebx
0x719632: push    ecx
0x719633: mov     ecx, esi
0x719635: call    NiTArray_SetSize
0x71963A: lea     edx, [esp+0Ch+arg_0]
0x71963E: push    edx
0x71963F: push    ebx
0x719640: mov     ecx, esi
0x719642: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x719647: movzx   eax, byte ptr [edi+18h]
0x71964B: shr     eax, 1
0x71964D: and     eax, 7
0x719650: push    eax; int
0x719651: push    offset aM_efailact; "m_eFailAct"
0x719656: call    sub_718D40
0x71965B: movzx   ebx, word ptr [esi+0Ah]
0x71965F: mov     dword ptr [esp+14h+arg_0], eax
0x719663: movzx   eax, word ptr [esi+8]
0x719667: add     esp, 8
0x71966A: cmp     ebx, eax
0x71966C: jb      short loc_71967C
0x71966E: movzx   ecx, word ptr [esi+0Eh]
0x719672: add     ecx, ebx
0x719674: push    ecx
0x719675: mov     ecx, esi
0x719677: call    NiTArray_SetSize
0x71967C: lea     edx, [esp+0Ch+arg_0]
0x719680: push    edx
0x719681: push    ebx
0x719682: mov     ecx, esi
0x719684: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x719689: movzx   eax, byte ptr [edi+18h]
0x71968D: shr     eax, 4
0x719690: and     eax, 7
0x719693: push    eax; int
0x719694: push    offset aM_ezfailact; "m_eZFailAct"
0x719699: call    sub_718D40
0x71969E: movzx   ebx, word ptr [esi+0Ah]
0x7196A2: mov     dword ptr [esp+14h+arg_0], eax
0x7196A6: movzx   eax, word ptr [esi+8]
0x7196AA: add     esp, 8
0x7196AD: cmp     ebx, eax
0x7196AF: jb      short loc_7196BF
0x7196B1: movzx   ecx, word ptr [esi+0Eh]
0x7196B5: add     ecx, ebx
0x7196B7: push    ecx
0x7196B8: mov     ecx, esi
0x7196BA: call    NiTArray_SetSize
0x7196BF: lea     edx, [esp+0Ch+arg_0]
0x7196C3: push    edx
0x7196C4: push    ebx
0x7196C5: mov     ecx, esi
0x7196C7: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7196CC: movzx   eax, word ptr [edi+18h]
0x7196D0: shr     eax, 7
0x7196D3: and     eax, 7
0x7196D6: push    eax; int
0x7196D7: push    offset aM_epassact; "m_ePassAct"
0x7196DC: call    sub_718D40
0x7196E1: movzx   ebx, word ptr [esi+0Ah]
0x7196E5: mov     dword ptr [esp+14h+arg_0], eax
0x7196E9: movzx   eax, word ptr [esi+8]
0x7196ED: add     esp, 8
0x7196F0: cmp     ebx, eax
0x7196F2: jb      short loc_719702
0x7196F4: movzx   ecx, word ptr [esi+0Eh]
0x7196F8: add     ecx, ebx
0x7196FA: push    ecx
0x7196FB: mov     ecx, esi
0x7196FD: call    NiTArray_SetSize
0x719702: lea     edx, [esp+0Ch+arg_0]
0x719706: push    edx
0x719707: push    ebx
0x719708: mov     ecx, esi
0x71970A: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x71970F: movzx   edi, word ptr [edi+18h]
0x719713: shr     edi, 0Ah
0x719716: and     edi, 3
0x719719: push    edi; int
0x71971A: push    offset aM_edrawmode; "m_eDrawMode"
0x71971F: call    sub_718E20
0x719724: movzx   edi, word ptr [esi+0Ah]
0x719728: mov     dword ptr [esp+14h+arg_0], eax
0x71972C: movzx   eax, word ptr [esi+8]
0x719730: add     esp, 8
0x719733: cmp     edi, eax
0x719735: jb      short loc_719745
0x719737: movzx   ecx, word ptr [esi+0Eh]
0x71973B: add     ecx, edi
0x71973D: push    ecx
0x71973E: mov     ecx, esi
0x719740: call    NiTArray_SetSize
0x719745: lea     edx, [esp+0Ch+arg_0]
0x719749: push    edx
0x71974A: push    edi
0x71974B: mov     ecx, esi
0x71974D: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x719752: pop     edi
0x719753: pop     esi
0x719754: pop     ebx
0x719755: retn    4
