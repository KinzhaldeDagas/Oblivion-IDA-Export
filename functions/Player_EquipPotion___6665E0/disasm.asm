0x6665E0: push    ebx
0x6665E1: push    esi
0x6665E2: push    edi
0x6665E3: mov     edi, [esp+0Ch+arg_0]
0x6665E7: mov     eax, [edi]
0x6665E9: mov     edx, [eax+18h]
0x6665EC: mov     esi, ecx
0x6665EE: mov     ecx, edi
0x6665F0: mov     bl, 1
0x6665F2: call    edx
0x6665F4: cmp     eax, 7
0x6665F7: mov     ecx, esi
0x6665F9: jnz     short loc_66662D
0x6665FB: mov     eax, [esi]
0x6665FD: mov     edx, [eax+284h]
0x666603: push    ebp
0x666604: push    13h
0x666606: call    edx
0x666608: push    eax
0x666609: call    Calc_AlchemyMaxPotions
0x66660E: add     esp, 4
0x666611: mov     ecx, esi
0x666613: mov     ebp, eax
0x666615: call    Player_GetNumberActivePotions?
0x66661A: cmp     eax, ebp
0x66661C: pop     ebp
0x66661D: jge     short loc_666646
0x66661F: mov     ecx, [esi+1F8h]
0x666625: push    edi
0x666626: call    BSSimpleList_PushFront
0x66662B: mov     ecx, esi
0x66662D: push    1
0x66662F: push    edi
0x666630: call    sub_5E45F0
0x666635: push    edi
0x666636: lea     ecx, [esi+68h]
0x666639: call    MagicTarget_ProcessEffectsFromItem
0x66663E: pop     edi
0x66663F: pop     esi
0x666640: mov     al, bl
0x666642: pop     ebx
0x666643: retn    4
0x666646: mov     eax, ds:0B38CF0h
0x66664B: mov     ecx, ds:0B388F0h
0x666651: push    0
0x666653: push    eax
0x666654: push    1
0x666656: push    0
0x666658: push    ecx
0x666659: call    ShowUIMessageBox
0x66665E: add     esp, 14h
0x666661: pop     edi
0x666662: pop     esi
0x666663: xor     al, al
0x666665: pop     ebx
0x666666: retn    4
