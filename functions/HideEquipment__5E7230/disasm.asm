0x5E7230: sub     esp, 14h
0x5E7233: push    esi
0x5E7234: mov     esi, ecx
0x5E7236: mov     ecx, [esi+58h]
0x5E7239: test    ecx, ecx
0x5E723B: jz      loc_5E7A4B
0x5E7241: mov     eax, ds:0B33A98h
0x5E7246: cmp     byte ptr [eax+0CD4h], 0
0x5E724D: jnz     loc_5E7A4B
0x5E7253: mov     edx, [ecx]
0x5E7255: mov     eax, [edx+0F0h]
0x5E725B: push    ebx
0x5E725C: push    ebp
0x5E725D: push    edi
0x5E725E: push    0
0x5E7260: mov     [esp+28h+var_13], 0
0x5E7265: call    eax
0x5E7267: mov     ecx, [esi+58h]
0x5E726A: mov     edx, [ecx]
0x5E726C: mov     ebx, eax
0x5E726E: mov     eax, [edx+0F8h]
0x5E7274: push    0
0x5E7276: call    eax
0x5E7278: mov     ecx, [esi+58h]
0x5E727B: mov     edx, [ecx]
0x5E727D: mov     ebp, eax
0x5E727F: mov     eax, [edx+0ECh]
0x5E7285: push    0
0x5E7287: call    eax
0x5E7289: lea     ecx, [esi+44h]; this
0x5E728C: mov     dword ptr [esp+24h+var_4], eax
0x5E7290: call    ExtraDataList_GetContainerChanges
0x5E7295: mov     edx, [esi]
0x5E7297: mov     edi, eax
0x5E7299: mov     eax, [edx+18Ch]
0x5E729F: mov     ecx, esi
0x5E72A1: mov     [esp+24h+var_11], 0
0x5E72A6: call    eax
0x5E72A8: cmp     eax, 4
0x5E72AB: jnz     short loc_5E72B2
0x5E72AD: mov     [esp+24h+var_11], 1
0x5E72B2: xor     eax, eax
0x5E72B4: cmp     edi, eax
0x5E72B6: mov     [esp+24h+var_8], eax
0x5E72BA: mov     [esp+24h+var_10], eax
0x5E72BE: jz      short loc_5E72DD
0x5E72C0: push    eax
0x5E72C1: push    0Dh
0x5E72C3: mov     ecx, edi
0x5E72C5: call    ContainerExtraData_GetEquippedInstance
0x5E72CA: push    0
0x5E72CC: push    0Eh
0x5E72CE: mov     ecx, edi
0x5E72D0: mov     [esp+2Ch+var_8], eax
0x5E72D4: call    ContainerExtraData_GetEquippedInstance
0x5E72D9: mov     [esp+24h+var_10], eax
0x5E72DD: mov     ecx, [esi+58h]
0x5E72E0: mov     edx, [ecx]
0x5E72E2: mov     eax, [edx+304h]
0x5E72E8: mov     [esp+24h+var_12], 0
0x5E72ED: call    eax
0x5E72EF: test    al, al
0x5E72F1: mov     [esp+24h+var_14], al
0x5E72F5: jnz     short loc_5E7308
0x5E72F7: mov     ecx, [esi+58h]
0x5E72FA: mov     edx, [ecx]
0x5E72FC: mov     eax, [edx+2FCh]
0x5E7302: call    eax
0x5E7304: mov     [esp+24h+var_14], al
0x5E7308: cmp     [esp+24h+arg_4], 0
0x5E730D: jnz     short loc_5E7324
0x5E730F: cmp     [esp+24h+var_14], 0
0x5E7314: jnz     short loc_5E7324
0x5E7316: call    InterfaceManager_IsMenuMode
0x5E731B: test    al, al
0x5E731D: jz      short loc_5E7324
0x5E731F: mov     [esp+24h+var_14], 1
0x5E7324: mov     ecx, [esp+24h+arg_0]
0x5E7328: test    ecx, ecx
0x5E732A: mov     byte ptr [esp+24h+var_C], 1
0x5E732F: jz      short loc_5E7338
0x5E7331: cmp     [esp+24h+arg_4], 0
0x5E7336: jz      short loc_5E733D
0x5E7338: mov     byte ptr [esp+24h+var_C], 0
0x5E733D: mov     edi, dword ptr [esp+24h+var_4]
0x5E7341: test    edi, edi
0x5E7343: jz      short loc_5E736A
0x5E7345: mov     edx, [edi+8]
0x5E7348: mov     al, [edx+90h]
0x5E734E: cmp     al, 1
0x5E7350: jz      short loc_5E7362
0x5E7352: cmp     al, 2
0x5E7354: jle     short loc_5E735A
0x5E7356: cmp     al, 5
0x5E7358: jle     short loc_5E7362
0x5E735A: xor     dl, dl
0x5E735C: mov     [esp+24h+var_12], dl
0x5E7360: jmp     short loc_5E736E
0x5E7362: mov     dl, 1
0x5E7364: mov     [esp+24h+var_12], dl
0x5E7368: jmp     short loc_5E736E
0x5E736A: mov     dl, [esp+24h+var_12]
0x5E736E: test    ecx, ecx
0x5E7370: jz      loc_5E767A
0x5E7376: movzx   eax, byte ptr [ecx+4]
0x5E737A: cmp     eax, 14h
0x5E737D: jz      loc_5E75A6
0x5E7383: cmp     eax, 1Ah
0x5E7386: jz      loc_5E7520
0x5E738C: cmp     eax, 21h ; '!'
0x5E738F: jnz     loc_5E7A02
0x5E7395: cmp     [esp+24h+var_12], 0
0x5E739A: jz      short loc_5E7405
0x5E739C: test    ebp, ebp
0x5E739E: jz      short loc_5E73C8
0x5E73A0: push    0
0x5E73A2: mov     ecx, ebp
0x5E73A4: call    ContainerEntryExtraData_HasWorn
0x5E73A9: test    al, al
0x5E73AB: jz      short loc_5E73C8
0x5E73AD: push    0
0x5E73AF: push    0
0x5E73B1: push    0
0x5E73B3: mov     ecx, ebp
0x5E73B5: call    sub_4853B0
0x5E73BA: push    1
0x5E73BC: mov     ecx, esi
0x5E73BE: call    sub_4DC8F0
0x5E73C3: mov     [esp+24h+var_13], 1
0x5E73C8: test    ebx, ebx
0x5E73CA: jz      loc_5E7A02
0x5E73D0: push    0
0x5E73D2: mov     ecx, ebx
0x5E73D4: call    ContainerEntryExtraData_HasWorn
0x5E73D9: test    al, al
0x5E73DB: jz      loc_5E7A02
0x5E73E1: cmp     [esp+24h+var_14], 0
0x5E73E6: jz      loc_5E7A02
0x5E73EC: push    0
0x5E73EE: push    0
0x5E73F0: push    0
0x5E73F2: mov     ecx, ebx
0x5E73F4: call    sub_4853B0
0x5E73F9: mov     ecx, esi
0x5E73FB: call    UnequipLight
0x5E7400: jmp     loc_5E7A02
0x5E7405: cmp     [esp+24h+var_14], 0
0x5E740A: jnz     short loc_5E744C
0x5E740C: test    ebx, ebx
0x5E740E: jz      short loc_5E744C
0x5E7410: test    ebp, ebp
0x5E7412: jz      loc_5E79C0
0x5E7418: push    0
0x5E741A: mov     ecx, ebp
0x5E741C: call    ContainerEntryExtraData_HasWorn
0x5E7421: test    al, al
0x5E7423: jz      loc_5E79C0
0x5E7429: push    0
0x5E742B: push    0
0x5E742D: push    0
0x5E742F: mov     ecx, ebp
0x5E7431: call    sub_4853B0
0x5E7436: mov     eax, [esp+24h+var_C]
0x5E743A: push    eax
0x5E743B: mov     ecx, esi
0x5E743D: call    sub_4DC8F0
0x5E7442: mov     [esp+24h+var_13], 1
0x5E7447: jmp     loc_5E79C0
0x5E744C: test    edi, edi
0x5E744E: jz      loc_5E7A02
0x5E7454: cmp     [esp+24h+var_14], 0
0x5E7459: jnz     short loc_5E7463
0x5E745B: test    ebx, ebx
0x5E745D: jnz     loc_5E7A02
0x5E7463: test    ebp, ebp
0x5E7465: jz      short loc_5E74AF
0x5E7467: push    0
0x5E7469: mov     ecx, ebp
0x5E746B: call    ContainerEntryExtraData_HasWorn
0x5E7470: test    al, al
0x5E7472: jnz     short loc_5E74AF
0x5E7474: mov     edx, [esi]
0x5E7476: mov     eax, [edx+198h]
0x5E747C: push    0
0x5E747E: mov     ecx, esi
0x5E7480: call    eax
0x5E7482: test    al, al
0x5E7484: jnz     short loc_5E74AF
0x5E7486: mov     eax, [esp+24h+var_8]
0x5E748A: test    eax, eax
0x5E748C: jz      short loc_5E749F
0x5E748E: mov     ecx, [ebp+0]
0x5E7491: test    ecx, ecx
0x5E7493: jz      short loc_5E749F
0x5E7495: mov     edx, [eax]
0x5E7497: mov     eax, [edx]
0x5E7499: push    eax
0x5E749A: call    BSSimpleList_PushFront
0x5E749F: mov     ecx, [ebp+8]
0x5E74A2: push    ecx
0x5E74A3: mov     ecx, esi
0x5E74A5: call    EquipShield
0x5E74AA: mov     [esp+24h+var_13], 1
0x5E74AF: test    ebx, ebx
0x5E74B1: jz      loc_5E7A02
0x5E74B7: push    0
0x5E74B9: mov     ecx, ebx
0x5E74BB: call    ContainerEntryExtraData_HasWorn
0x5E74C0: test    al, al
0x5E74C2: jz      short loc_5E74E8
0x5E74C4: cmp     [esp+24h+var_14], 0
0x5E74C9: jz      short loc_5E74E8
0x5E74CB: test    ebp, ebp
0x5E74CD: jz      short loc_5E74E8
0x5E74CF: push    0
0x5E74D1: push    0
0x5E74D3: push    0
0x5E74D5: mov     ecx, ebx
0x5E74D7: call    sub_4853B0
0x5E74DC: mov     ecx, esi
0x5E74DE: call    UnequipLight
0x5E74E3: jmp     loc_5E7A02
0x5E74E8: push    0
0x5E74EA: mov     ecx, ebx
0x5E74EC: call    ContainerEntryExtraData_HasWorn
0x5E74F1: test    al, al
0x5E74F3: jnz     loc_5E7A02
0x5E74F9: mov     edx, [esi]
0x5E74FB: mov     eax, [edx+198h]
0x5E7501: push    0
0x5E7503: mov     ecx, esi
0x5E7505: call    eax
0x5E7507: test    al, al
0x5E7509: jnz     loc_5E7A02
0x5E750F: cmp     [esp+24h+var_14], al
0x5E7513: jz      loc_5E79DF
0x5E7519: test    ebp, ebp
0x5E751B: jmp     loc_5E79DD
0x5E7520: test    dl, dl
0x5E7522: jz      short loc_5E7572
0x5E7524: cmp     [esp+24h+var_14], 0
0x5E7529: jnz     short loc_5E758E
0x5E752B: test    ebp, ebp
0x5E752D: jz      loc_5E7A02
0x5E7533: push    0
0x5E7535: mov     ecx, ebp
0x5E7537: call    ContainerEntryExtraData_HasWorn
0x5E753C: test    al, al
0x5E753E: jz      loc_5E7A02
0x5E7544: cmp     [esp+24h+var_14], 0
0x5E7549: jnz     loc_5E7A02
0x5E754F: push    0
0x5E7551: push    0
0x5E7553: push    0
0x5E7555: mov     ecx, ebp
0x5E7557: call    sub_4853B0
0x5E755C: mov     edx, [esp+24h+var_C]
0x5E7560: push    edx
0x5E7561: mov     ecx, esi
0x5E7563: call    sub_4DC8F0
0x5E7568: mov     [esp+24h+var_13], 1
0x5E756D: jmp     loc_5E7A02
0x5E7572: cmp     [esp+24h+var_14], 0
0x5E7577: jz      short loc_5E752B
0x5E7579: test    ebp, ebp
0x5E757B: jz      loc_5E7A02
0x5E7581: push    0
0x5E7583: mov     ecx, ebp
0x5E7585: call    ContainerEntryExtraData_HasWorn
0x5E758A: test    al, al
0x5E758C: jz      short loc_5E752B
0x5E758E: test    ebx, ebx
0x5E7590: jz      loc_5E7A02
0x5E7596: push    0
0x5E7598: mov     ecx, ebx
0x5E759A: call    ContainerEntryExtraData_HasWorn
0x5E759F: test    al, al
0x5E75A1: jmp     loc_5E73E6
0x5E75A6: push    0
0x5E75A8: push    0Dh
0x5E75AA: add     ecx, 64h ; 'd'
0x5E75AD: call    TESBipedModelForm_CoversSlot
0x5E75B2: test    al, al
0x5E75B4: jz      loc_5E7A02
0x5E75BA: cmp     [esp+24h+var_14], 0
0x5E75BF: jz      short loc_5E763B
0x5E75C1: test    ebp, ebp
0x5E75C3: jz      short loc_5E75F0
0x5E75C5: test    edi, edi
0x5E75C7: jz      short loc_5E75F0
0x5E75C9: test    ebx, ebx
0x5E75CB: jz      short loc_5E7643
0x5E75CD: push    0
0x5E75CF: mov     ecx, ebx
0x5E75D1: call    ContainerEntryExtraData_HasWorn
0x5E75D6: test    al, al
0x5E75D8: jz      short loc_5E7643
0x5E75DA: push    0
0x5E75DC: push    0
0x5E75DE: push    0
0x5E75E0: mov     ecx, ebx
0x5E75E2: call    sub_4853B0
0x5E75E7: mov     ecx, esi
0x5E75E9: call    UnequipLight
0x5E75EE: jmp     short loc_5E7643
0x5E75F0: test    ebx, ebx
0x5E75F2: jz      short loc_5E7643
0x5E75F4: push    0
0x5E75F6: mov     ecx, ebx
0x5E75F8: call    ContainerEntryExtraData_HasWorn
0x5E75FD: test    al, al
0x5E75FF: jnz     short loc_5E7643
0x5E7601: mov     eax, [esi]
0x5E7603: mov     edx, [eax+198h]
0x5E7609: push    0
0x5E760B: mov     ecx, esi
0x5E760D: call    edx
0x5E760F: test    al, al
0x5E7611: jnz     short loc_5E7643
0x5E7613: cmp     [esp+24h+var_10], 0
0x5E7618: jz      short loc_5E762E
0x5E761A: mov     ecx, [ebx]
0x5E761C: test    ecx, ecx
0x5E761E: jz      short loc_5E762E
0x5E7620: mov     eax, [esp+24h+var_10]
0x5E7624: mov     edx, [eax]
0x5E7626: mov     eax, [edx]
0x5E7628: push    eax
0x5E7629: call    BSSimpleList_PushFront
0x5E762E: mov     ecx, [ebx+8]
0x5E7631: push    ecx
0x5E7632: mov     ecx, esi
0x5E7634: call    EquipLight
0x5E7639: jmp     short loc_5E7643
0x5E763B: test    ebx, ebx
0x5E763D: jz      short loc_5E7643
0x5E763F: test    ebp, ebp
0x5E7641: jnz     short loc_5E765A
0x5E7643: test    edi, edi
0x5E7645: jz      short loc_5E7652
0x5E7647: cmp     [esp+24h+var_12], 0
0x5E764C: jz      loc_5E7A02
0x5E7652: test    ebp, ebp
0x5E7654: jz      loc_5E7A02
0x5E765A: push    0
0x5E765C: push    0
0x5E765E: push    0
0x5E7660: mov     ecx, ebp
0x5E7662: call    sub_4853B0
0x5E7667: push    0
0x5E7669: mov     ecx, esi
0x5E766B: call    sub_4DC8F0
0x5E7670: mov     [esp+24h+var_13], 1
0x5E7675: jmp     loc_5E7A02
0x5E767A: test    dl, dl
0x5E767C: jz      loc_5E771D
0x5E7682: test    ebp, ebp
0x5E7684: jz      short loc_5E76B1
0x5E7686: push    0
0x5E7688: mov     ecx, ebp
0x5E768A: call    ContainerEntryExtraData_HasWorn
0x5E768F: test    al, al
0x5E7691: jz      short loc_5E76B1
0x5E7693: push    0
0x5E7695: push    0
0x5E7697: push    0
0x5E7699: mov     ecx, ebp
0x5E769B: call    sub_4853B0
0x5E76A0: mov     edx, [esp+24h+var_C]
0x5E76A4: push    edx
0x5E76A5: mov     ecx, esi
0x5E76A7: call    sub_4DC8F0
0x5E76AC: mov     [esp+24h+var_13], 1
0x5E76B1: test    ebx, ebx
0x5E76B3: jz      loc_5E7973
0x5E76B9: push    0
0x5E76BB: mov     ecx, ebx
0x5E76BD: call    ContainerEntryExtraData_HasWorn
0x5E76C2: test    al, al
0x5E76C4: jz      short loc_5E76E6
0x5E76C6: cmp     [esp+24h+var_14], 0
0x5E76CB: jz      short loc_5E76F1
0x5E76CD: push    0
0x5E76CF: push    0
0x5E76D1: push    0
0x5E76D3: mov     ecx, ebx
0x5E76D5: call    sub_4853B0
0x5E76DA: mov     ecx, esi
0x5E76DC: call    UnequipLight
0x5E76E1: jmp     loc_5E7973
0x5E76E6: cmp     [esp+24h+var_14], 0
0x5E76EB: jnz     loc_5E7973
0x5E76F1: mov     eax, [esi]
0x5E76F3: mov     edx, [eax+198h]
0x5E76F9: push    0
0x5E76FB: mov     ecx, esi
0x5E76FD: call    edx
0x5E76FF: test    al, al
0x5E7701: jnz     loc_5E7973
0x5E7707: push    0
0x5E7709: mov     ecx, ebx
0x5E770B: call    ContainerEntryExtraData_HasWorn
0x5E7710: test    al, al
0x5E7712: jnz     loc_5E791A
0x5E7718: jmp     loc_5E7902
0x5E771D: test    edi, edi
0x5E771F: jnz     loc_5E77C5
0x5E7725: test    ebp, ebp
0x5E7727: jz      short loc_5E7750
0x5E7729: push    edi
0x5E772A: mov     ecx, ebp
0x5E772C: call    ContainerEntryExtraData_HasWorn
0x5E7731: test    al, al
0x5E7733: jz      short loc_5E7750
0x5E7735: push    edi
0x5E7736: push    edi
0x5E7737: push    edi
0x5E7738: mov     ecx, ebp
0x5E773A: call    sub_4853B0
0x5E773F: mov     ecx, [esp+24h+var_C]
0x5E7743: push    ecx
0x5E7744: mov     ecx, esi
0x5E7746: call    sub_4DC8F0
0x5E774B: mov     [esp+24h+var_13], 1
0x5E7750: test    ebx, ebx
0x5E7752: jz      loc_5E7973
0x5E7758: push    0
0x5E775A: mov     ecx, ebx
0x5E775C: call    ContainerEntryExtraData_HasWorn
0x5E7761: test    al, al
0x5E7763: jnz     short loc_5E779F
0x5E7765: mov     edx, [esi]
0x5E7767: mov     eax, [edx+198h]
0x5E776D: push    0
0x5E776F: mov     ecx, esi
0x5E7771: call    eax
0x5E7773: test    al, al
0x5E7775: jnz     short loc_5E779F
0x5E7777: mov     eax, [esp+24h+var_10]
0x5E777B: test    eax, eax
0x5E777D: jz      short loc_5E778F
0x5E777F: mov     ecx, [ebx]
0x5E7781: test    ecx, ecx
0x5E7783: jz      short loc_5E778F
0x5E7785: mov     edx, [eax]
0x5E7787: mov     eax, [edx]
0x5E7789: push    eax
0x5E778A: call    BSSimpleList_PushFront
0x5E778F: mov     ecx, [ebx+8]
0x5E7792: push    ecx
0x5E7793: mov     ecx, esi
0x5E7795: call    EquipLight
0x5E779A: jmp     loc_5E7973
0x5E779F: mov     edx, [esi]
0x5E77A1: mov     eax, [edx+198h]
0x5E77A7: push    0
0x5E77A9: mov     ecx, esi
0x5E77AB: call    eax
0x5E77AD: test    al, al
0x5E77AF: jnz     loc_5E7973
0x5E77B5: mov     ecx, [ebx+8]
0x5E77B8: push    ecx
0x5E77B9: mov     ecx, esi
0x5E77BB: call    EquipLight
0x5E77C0: jmp     loc_5E7973
0x5E77C5: cmp     [esp+24h+var_14], 0
0x5E77CA: jz      loc_5E78AC
0x5E77D0: test    ebp, ebp
0x5E77D2: jz      short loc_5E784E
0x5E77D4: push    0
0x5E77D6: mov     ecx, ebp
0x5E77D8: call    ContainerEntryExtraData_HasWorn
0x5E77DD: test    al, al
0x5E77DF: jnz     short loc_5E784E
0x5E77E1: mov     edx, [esi]
0x5E77E3: mov     eax, [edx+198h]
0x5E77E9: push    0
0x5E77EB: mov     ecx, esi
0x5E77ED: call    eax
0x5E77EF: test    al, al
0x5E77F1: jnz     short loc_5E784E
0x5E77F3: mov     eax, [esp+24h+var_8]
0x5E77F7: test    eax, eax
0x5E77F9: jz      short loc_5E780C
0x5E77FB: mov     ecx, [ebp+0]
0x5E77FE: test    ecx, ecx
0x5E7800: jz      short loc_5E780C
0x5E7802: mov     edx, [eax]
0x5E7804: mov     eax, [edx]
0x5E7806: push    eax
0x5E7807: call    BSSimpleList_PushFront
0x5E780C: mov     ecx, [ebp+8]
0x5E780F: push    ecx
0x5E7810: mov     ecx, esi
0x5E7812: call    EquipShield
0x5E7817: test    ebx, ebx
0x5E7819: mov     [esp+24h+var_13], 1
0x5E781E: jz      loc_5E7973
0x5E7824: push    0
0x5E7826: mov     ecx, ebx
0x5E7828: call    ContainerEntryExtraData_HasWorn
0x5E782D: test    al, al
0x5E782F: jz      loc_5E7973
0x5E7835: push    0
0x5E7837: push    0
0x5E7839: push    0
0x5E783B: mov     ecx, ebx
0x5E783D: call    sub_4853B0
0x5E7842: mov     ecx, esi
0x5E7844: call    UnequipLight
0x5E7849: jmp     loc_5E7973
0x5E784E: test    ebx, ebx
0x5E7850: jz      loc_5E7973
0x5E7856: push    0
0x5E7858: mov     ecx, ebx
0x5E785A: call    ContainerEntryExtraData_HasWorn
0x5E785F: test    al, al
0x5E7861: jnz     loc_5E7973
0x5E7867: test    ebp, ebp
0x5E7869: jnz     loc_5E7973
0x5E786F: mov     edx, [esi]
0x5E7871: mov     eax, [edx+198h]
0x5E7877: push    ebp
0x5E7878: mov     ecx, esi
0x5E787A: call    eax
0x5E787C: test    al, al
0x5E787E: jnz     loc_5E7973
0x5E7884: mov     eax, [esp+24h+var_10]
0x5E7888: test    eax, eax
0x5E788A: jz      short loc_5E789C
0x5E788C: mov     ecx, [ebx]
0x5E788E: test    ecx, ecx
0x5E7890: jz      short loc_5E789C
0x5E7892: mov     edx, [eax]
0x5E7894: mov     eax, [edx]
0x5E7896: push    eax
0x5E7897: call    BSSimpleList_PushFront
0x5E789C: mov     ecx, [ebx+8]
0x5E789F: push    ecx
0x5E78A0: mov     ecx, esi
0x5E78A2: call    EquipLight
0x5E78A7: jmp     loc_5E7973
0x5E78AC: test    ebx, ebx
0x5E78AE: jz      short loc_5E7927
0x5E78B0: test    ebp, ebp
0x5E78B2: jz      short loc_5E78DF
0x5E78B4: push    0
0x5E78B6: mov     ecx, ebp
0x5E78B8: call    ContainerEntryExtraData_HasWorn
0x5E78BD: test    al, al
0x5E78BF: jz      short loc_5E78DF
0x5E78C1: push    0
0x5E78C3: push    0
0x5E78C5: push    0
0x5E78C7: mov     ecx, ebp
0x5E78C9: call    sub_4853B0
0x5E78CE: mov     edx, [esp+24h+var_C]
0x5E78D2: push    edx
0x5E78D3: mov     ecx, esi
0x5E78D5: call    sub_4DC8F0
0x5E78DA: mov     [esp+24h+var_13], 1
0x5E78DF: push    0
0x5E78E1: mov     ecx, ebx
0x5E78E3: call    ContainerEntryExtraData_HasWorn
0x5E78E8: test    al, al
0x5E78EA: jnz     loc_5E7973
0x5E78F0: mov     eax, [esi]
0x5E78F2: mov     edx, [eax+198h]
0x5E78F8: push    0
0x5E78FA: mov     ecx, esi
0x5E78FC: call    edx
0x5E78FE: test    al, al
0x5E7900: jnz     short loc_5E7973
0x5E7902: mov     eax, [esp+24h+var_10]
0x5E7906: test    eax, eax
0x5E7908: jz      short loc_5E791A
0x5E790A: mov     ecx, [ebx]
0x5E790C: test    ecx, ecx
0x5E790E: jz      short loc_5E791A
0x5E7910: mov     eax, [eax]
0x5E7912: mov     edx, [eax]
0x5E7914: push    edx
0x5E7915: call    BSSimpleList_PushFront
0x5E791A: mov     eax, [ebx+8]
0x5E791D: push    eax
0x5E791E: mov     ecx, esi
0x5E7920: call    EquipLight
0x5E7925: jmp     short loc_5E7973
0x5E7927: test    ebp, ebp
0x5E7929: jz      short loc_5E7973
0x5E792B: push    0
0x5E792D: mov     ecx, ebp
0x5E792F: call    ContainerEntryExtraData_HasWorn
0x5E7934: test    al, al
0x5E7936: jnz     short loc_5E7973
0x5E7938: mov     edx, [esi]
0x5E793A: mov     eax, [edx+198h]
0x5E7940: push    0
0x5E7942: mov     ecx, esi
0x5E7944: call    eax
0x5E7946: test    al, al
0x5E7948: jnz     short loc_5E7973
0x5E794A: mov     eax, [esp+24h+var_8]
0x5E794E: test    eax, eax
0x5E7950: jz      short loc_5E7963
0x5E7952: mov     ecx, [ebp+0]
0x5E7955: test    ecx, ecx
0x5E7957: jz      short loc_5E7963
0x5E7959: mov     edx, [eax]
0x5E795B: mov     eax, [edx]
0x5E795D: push    eax
0x5E795E: call    BSSimpleList_PushFront
0x5E7963: mov     ecx, [ebp+8]
0x5E7966: push    ecx
0x5E7967: mov     ecx, esi
0x5E7969: call    EquipShield
0x5E796E: mov     [esp+24h+var_13], 1
0x5E7973: cmp     [esp+24h+var_11], 0
0x5E7978: jz      loc_5E7A02
0x5E797E: mov     edx, [esi]
0x5E7980: mov     eax, [edx+380h]
0x5E7986: mov     ecx, esi
0x5E7988: call    eax
0x5E798A: test    eax, eax
0x5E798C: jnz     short loc_5E7A02
0x5E798E: test    ebp, ebp
0x5E7990: jz      short loc_5E79BC
0x5E7992: push    eax
0x5E7993: mov     ecx, ebp
0x5E7995: call    ContainerEntryExtraData_HasWorn
0x5E799A: test    al, al
0x5E799C: jz      short loc_5E79BC
0x5E799E: push    0
0x5E79A0: push    0
0x5E79A2: push    0
0x5E79A4: mov     ecx, ebp
0x5E79A6: call    sub_4853B0
0x5E79AB: mov     ecx, [esp+24h+var_C]
0x5E79AF: push    ecx
0x5E79B0: mov     ecx, esi
0x5E79B2: call    sub_4DC8F0
0x5E79B7: mov     [esp+24h+var_13], 1
0x5E79BC: test    ebx, ebx
0x5E79BE: jz      short loc_5E7A02
0x5E79C0: push    0
0x5E79C2: mov     ecx, ebx
0x5E79C4: call    ContainerEntryExtraData_HasWorn
0x5E79C9: test    al, al
0x5E79CB: jnz     short loc_5E7A02
0x5E79CD: mov     edx, [esi]
0x5E79CF: mov     eax, [edx+198h]
0x5E79D5: push    0
0x5E79D7: mov     ecx, esi
0x5E79D9: call    eax
0x5E79DB: test    al, al
0x5E79DD: jnz     short loc_5E7A02
0x5E79DF: mov     eax, [esp+24h+var_10]
0x5E79E3: test    eax, eax
0x5E79E5: jz      short loc_5E79F7
0x5E79E7: mov     ecx, [ebx]
0x5E79E9: test    ecx, ecx
0x5E79EB: jz      short loc_5E79F7
0x5E79ED: mov     edx, [eax]
0x5E79EF: mov     eax, [edx]
0x5E79F1: push    eax
0x5E79F2: call    BSSimpleList_PushFront
0x5E79F7: mov     ecx, [ebx+8]
0x5E79FA: push    ecx
0x5E79FB: mov     ecx, esi
0x5E79FD: call    EquipLight
0x5E7A02: mov     edi, [esp+24h+var_8]
0x5E7A06: test    edi, edi
0x5E7A08: jz      short loc_5E7A1A
0x5E7A0A: mov     ecx, edi
0x5E7A0C: call    ContainerEntryExtraData_DestroyDataTable
0x5E7A11: push    edi
0x5E7A12: call    FormHeapFree
0x5E7A17: add     esp, 4
0x5E7A1A: cmp     [esp+24h+var_10], 0
0x5E7A1F: jz      short loc_5E7A35
0x5E7A21: mov     edi, [esp+24h+var_10]
0x5E7A25: mov     ecx, edi
0x5E7A27: call    ContainerEntryExtraData_DestroyDataTable
0x5E7A2C: push    edi
0x5E7A2D: call    FormHeapFree
0x5E7A32: add     esp, 4
0x5E7A35: cmp     [esp+24h+var_13], 0
0x5E7A3A: pop     edi
0x5E7A3B: pop     ebp
0x5E7A3C: pop     ebx
0x5E7A3D: jz      short loc_5E7A4B
0x5E7A3F: mov     edx, [esi]
0x5E7A41: mov     eax, [edx+2C0h]
0x5E7A47: mov     ecx, esi
0x5E7A49: call    eax
0x5E7A4B: pop     esi
0x5E7A4C: add     esp, 14h
0x5E7A4F: retn    8
