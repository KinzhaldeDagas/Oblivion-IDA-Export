0x633790: push    ebx
0x633791: push    esi
0x633792: mov     esi, ecx
0x633794: cmp     dword ptr [esi+13Ch], 0
0x63379B: push    1
0x63379D: jnz     short loc_6337B5
0x63379F: mov     ecx, [esp+0Ch+arg_0]
0x6337A3: mov     eax, [esi]
0x6337A5: mov     edx, [eax+188h]
0x6337AB: push    ecx
0x6337AC: mov     ecx, esi
0x6337AE: call    edx
0x6337B0: pop     esi
0x6337B1: pop     ebx
0x6337B2: retn    4
0x6337B5: mov     ecx, [esi+13Ch]
0x6337BB: mov     eax, [ecx]
0x6337BD: mov     edx, [eax+334h]
0x6337C3: call    edx
0x6337C5: test    al, al
0x6337C7: jnz     short loc_633822
0x6337C9: mov     ecx, ds:0B333C4h
0x6337CF: cmp     [esi+13Ch], ecx
0x6337D5: jnz     short loc_6337F0
0x6337D7: push    0
0x6337D9: call    PlayerCharacter_IsPlayerInCombat
0x6337DE: test    al, al
0x6337E0: jnz     short loc_633822
0x6337E2: mov     ecx, ds:0B333C4h
0x6337E8: cmp     [esi+13Ch], ecx
0x6337EE: jz      short loc_633806
0x6337F0: mov     ecx, [esp+8+arg_0]
0x6337F4: mov     eax, [esi]
0x6337F6: mov     edx, [eax+520h]
0x6337FC: push    ecx
0x6337FD: mov     ecx, esi
0x6337FF: call    edx
0x633801: pop     esi
0x633802: pop     ebx
0x633803: retn    4
0x633806: mov     ecx, [esp+8+arg_0]
0x63380A: mov     eax, [esi]
0x63380C: mov     edx, [eax+198h]
0x633812: push    0
0x633814: push    0FFFFFFFFh
0x633816: push    0
0x633818: push    ecx
0x633819: mov     ecx, esi
0x63381B: call    edx
0x63381D: pop     esi
0x63381E: pop     ebx
0x63381F: retn    4
0x633822: mov     eax, ds:0B333C4h
0x633827: cmp     [esi+13Ch], eax
0x63382D: push    ebp
0x63382E: push    edi
0x63382F: jnz     loc_6338B9
0x633835: push    1
0x633837: push    0Ch
0x633839: push    eax
0x63383A: mov     ecx, offset ActorProcessManager_ptr
0x63383F: call    sub_6758E0
0x633844: mov     ebp, eax
0x633846: test    ebp, ebp
0x633848: jz      loc_633905
0x63384E: mov     ebx, [esp+10h+arg_0]
0x633852: mov     ecx, [ebp+0]
0x633855: test    ecx, ecx
0x633857: jz      loc_633905
0x63385D: mov     eax, [ecx]
0x63385F: mov     edx, [eax+190h]
0x633865: call    edx
0x633867: test    al, al
0x633869: jz      short loc_6338AB
0x63386B: mov     edi, [ebp+0]
0x63386E: test    edi, edi
0x633870: jz      short loc_6338AB
0x633872: push    edi
0x633873: mov     ecx, offset dword_B3BDB0
0x633878: mov     byte ptr [esp+14h+arg_0], 1
0x63387D: call    sub_67CB50
0x633882: test    al, al
0x633884: jz      short loc_63388B
0x633886: mov     byte ptr [esp+10h+arg_0], 0
0x63388B: mov     eax, [esp+10h+arg_0]
0x63388F: mov     edx, [esi]
0x633891: push    1
0x633893: push    0
0x633895: push    0
0x633897: push    0
0x633899: push    eax
0x63389A: push    0
0x63389C: push    0
0x63389E: push    eax
0x63389F: mov     eax, [edx+228h]
0x6338A5: push    edi
0x6338A6: push    ebx
0x6338A7: mov     ecx, esi
0x6338A9: call    eax
0x6338AB: mov     ebp, [ebp+4]
0x6338AE: test    ebp, ebp
0x6338B0: jnz     short loc_633852
0x6338B2: pop     edi
0x6338B3: pop     ebp
0x6338B4: pop     esi
0x6338B5: pop     ebx
0x6338B6: retn    4
0x6338B9: mov     ecx, [esi+13Ch]
0x6338BF: mov     edx, [ecx]
0x6338C1: mov     eax, [edx+330h]
0x6338C7: call    eax
0x6338C9: test    eax, eax
0x6338CB: jz      short loc_633905
0x6338CD: mov     edi, [eax+40h]
0x6338D0: test    edi, edi
0x6338D2: jz      short loc_633905
0x6338D4: mov     ebp, [esp+10h+arg_0]
0x6338D8: mov     eax, [edi]
0x6338DA: test    eax, eax
0x6338DC: jz      short loc_633905
0x6338DE: mov     eax, [eax]
0x6338E0: mov     edx, [esi]
0x6338E2: mov     edx, [edx+228h]
0x6338E8: push    1
0x6338EA: push    0
0x6338EC: push    0
0x6338EE: push    0
0x6338F0: push    0
0x6338F2: push    0
0x6338F4: push    0
0x6338F6: push    0
0x6338F8: push    eax
0x6338F9: push    ebp
0x6338FA: mov     ecx, esi
0x6338FC: call    edx
0x6338FE: mov     edi, [edi+4]
0x633901: test    edi, edi
0x633903: jnz     short loc_6338D8
0x633905: pop     edi
0x633906: pop     ebp
0x633907: pop     esi
0x633908: pop     ebx
0x633909: retn    4
