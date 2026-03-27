0x61B550: sub     esp, 24h
0x61B553: push    ebx
0x61B554: push    ebp
0x61B555: push    esi
0x61B556: push    edi
0x61B557: mov     esi, ecx
0x61B559: call    sub_567F70
0x61B55E: mov     ecx, ds:0B33B00h
0x61B564: xor     ebx, ebx
0x61B566: mov     dword ptr [esp+34h+a1.member.type], ebx
0x61B56A: xor     ebp, ebp
0x61B56C: call    sub_45A170
0x61B571: test    al, al
0x61B573: jz      loc_61B612
0x61B579: mov     ecx, ds:0B33B00h
0x61B57F: push    4; Size
0x61B581: lea     eax, [esp+38h+Dst]
0x61B585: push    eax; Dst
0x61B586: call    SaveLoad_LoadData
0x61B58B: cmp     [esp+34h+Dst], 4B4F4C42h
0x61B593: jz      short loc_61B5FD
0x61B595: mov     eax, ds:0B33B00h
0x61B59A: mov     edi, [eax+80h]
0x61B5A0: cmp     edi, ebx
0x61B5A2: jz      short loc_61B5E1
0x61B5A4: mov     ecx, [edi]
0x61B5A6: push    ecx; a1
0x61B5A7: call    TESForm_LookupByFormID
0x61B5AC: mov     edx, [edi+5]
0x61B5AF: movzx   ecx, byte ptr [edi+9]
0x61B5B3: add     esp, 4
0x61B5B6: push    edx
0x61B5B7: mov     edx, [eax]
0x61B5B9: push    ecx
0x61B5BA: mov     ecx, eax
0x61B5BC: mov     eax, [edx+0D4h]
0x61B5C2: call    eax
0x61B5C4: mov     ecx, [edi]
0x61B5C6: push    eax
0x61B5C7: push    ecx
0x61B5C8: push    28B5h
0x61B5CD: push    offset a_AiCombatcontr; ".\\AI\\CombatController.cpp"
0x61B5D2: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x61B5D7: call    PrintError
0x61B5DC: add     esp, 1Ch
0x61B5DF: jmp     short loc_61B5FD
0x61B5E1: movzx   edx, byte ptr [eax+7Ch]
0x61B5E5: push    edx
0x61B5E6: push    28B5h
0x61B5EB: push    offset a_AiCombatcontr; ".\\AI\\CombatController.cpp"
0x61B5F0: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x61B5F5: call    PrintError
0x61B5FA: add     esp, 10h
0x61B5FD: mov     ecx, ds:0B33B00h
0x61B603: mov     ebp, [ecx+14h]
0x61B606: push    2; Size
0x61B608: lea     eax, [esp+38h+a1.member]
0x61B60C: push    eax; Dst
0x61B60D: call    SaveLoad_LoadData
0x61B612: push    2; a2
0x61B614: lea     ecx, [esp+38h+a1]
0x61B618: push    ecx; a1
0x61B619: mov     ecx, esi
0x61B61B: call    TESForm_LoadDataFromCurrentSaveGame
0x61B620: xor     edi, edi
0x61B622: cmp     word ptr [esp+34h+a1.vtbl], bx
0x61B627: jbe     loc_61B702
0x61B62D: mov     ecx, ds:0B33B00h
0x61B633: fldz
0x61B635: push    4; Size
0x61B637: lea     edx, [esp+38h+a1.member.refID]
0x61B63B: fst     [esp+38h+a1.member.modlist.data]
0x61B63F: push    edx; Dst
0x61B640: fstp    [esp+3Ch+a1.member.modlist.next]
0x61B644: mov     byte ptr [esp+3Ch+var_24+3], bl
0x61B648: call    SaveLoad_LoadFormID
0x61B64D: mov     ecx, ds:0B33B00h
0x61B653: push    4; Size
0x61B655: lea     eax, [esp+40h+a1]
0x61B659: push    eax; Dst
0x61B65A: call    SaveLoad_LoadData
0x61B65F: cmp     [esp+3Ch+a1.vtbl], ebx
0x61B663: jge     short loc_61B669
0x61B665: mov     [esp+3Ch+a1.vtbl], ebx
0x61B669: mov     ecx, ds:0B33B00h
0x61B66F: cmp     byte ptr [ecx+7Ch], 1Eh
0x61B673: jb      short loc_61B687
0x61B675: push    1; Size
0x61B677: lea     edx, [esp+40h+var_2C+3]
0x61B67B: push    edx; Dst
0x61B67C: call    SaveLoad_LoadData
0x61B681: mov     ecx, ds:0B33B00h
0x61B687: cmp     byte ptr [ecx+7Ch], 29h ; ')'
0x61B68B: jb      short loc_61B6B1
0x61B68D: push    4; Size
0x61B68F: lea     eax, [esp+40h+a1.member.flags]
0x61B693: push    eax; Dst
0x61B694: call    SaveLoad_LoadData
0x61B699: push    4; Size
0x61B69B: lea     ecx, [esp+40h+a1.member.refID]
0x61B69F: push    ecx; Dst
0x61B6A0: mov     ecx, ds:0B33B00h
0x61B6A6: call    SaveLoad_LoadData
0x61B6AB: mov     ecx, ds:0B33B00h
0x61B6B1: cmp     dword ptr [esp+3Ch+a1.member.type], ebx
0x61B6B5: jz      short loc_61B6F2
0x61B6B7: push    14h; Size
0x61B6B9: call    FormHeapAlloc
0x61B6BE: mov     edx, dword ptr [esp+40h+a1.member.type]
0x61B6C2: mov     [eax], edx
0x61B6C4: mov     ecx, [esp+40h+a1.vtbl]
0x61B6C8: mov     [eax+4], ecx
0x61B6CB: mov     dl, byte ptr [esp+40h+var_2C+3]
0x61B6CF: mov     [eax+8], dl
0x61B6D2: fld     [esp+40h+a1.member.flags]
0x61B6D6: fstp    dword ptr [eax+0Ch]
0x61B6D9: add     esp, 4
0x61B6DC: fld     [esp+3Ch+a1.member.refID]
0x61B6E0: push    eax
0x61B6E1: fstp    dword ptr [eax+10h]
0x61B6E4: mov     ecx, [esi+40h]
0x61B6E7: call    BSSimpleList_PushBack
0x61B6EC: mov     ecx, ds:0B33B00h
0x61B6F2: movzx   eax, word ptr [esp+3Ch+var_28]
0x61B6F7: add     edi, 1
0x61B6FA: cmp     edi, eax
0x61B6FC: jl      loc_61B633
0x61B702: push    4; a2
0x61B704: lea     ecx, [esi+44h]
0x61B707: push    ecx; a1
0x61B708: mov     ecx, esi
0x61B70A: call    TESForm_LoadDataFromCurrentSaveGame
0x61B70F: push    1; a2
0x61B711: lea     edx, [esi+48h]
0x61B714: push    edx; a1
0x61B715: mov     ecx, esi
0x61B717: call    TESForm_LoadDataFromCurrentSaveGame
0x61B71C: push    1; a2
0x61B71E: lea     eax, [esi+49h]
0x61B721: push    eax; a1
0x61B722: mov     ecx, esi
0x61B724: call    TESForm_LoadDataFromCurrentSaveGame
0x61B729: push    1; a2
0x61B72B: lea     ecx, [esi+4Ah]
0x61B72E: push    ecx; a1
0x61B72F: mov     ecx, esi
0x61B731: call    TESForm_LoadDataFromCurrentSaveGame
0x61B736: push    1; a2
0x61B738: lea     edx, [esi+4Bh]
0x61B73B: push    edx; a1
0x61B73C: mov     ecx, esi
0x61B73E: call    TESForm_LoadDataFromCurrentSaveGame
0x61B743: push    1; a2
0x61B745: lea     eax, [esi+4Ch]
0x61B748: push    eax; a1
0x61B749: mov     ecx, esi
0x61B74B: call    TESForm_LoadDataFromCurrentSaveGame
0x61B750: push    1; a2
0x61B752: lea     ecx, [esi+4Dh]
0x61B755: push    ecx; a1
0x61B756: mov     ecx, esi
0x61B758: call    TESForm_LoadDataFromCurrentSaveGame
0x61B75D: push    1; a2
0x61B75F: lea     edx, [esi+4Eh]
0x61B762: push    edx; a1
0x61B763: mov     ecx, esi
0x61B765: call    TESForm_LoadDataFromCurrentSaveGame
0x61B76A: push    1; a2
0x61B76C: lea     eax, [esi+4Fh]
0x61B76F: push    eax; a1
0x61B770: mov     ecx, esi
0x61B772: call    TESForm_LoadDataFromCurrentSaveGame
0x61B777: push    4; Size
0x61B779: lea     ecx, [esi+50h]
0x61B77C: push    ecx; Dst
0x61B77D: mov     ecx, ds:0B33B00h
0x61B783: call    SaveLoad_LoadData
0x61B788: push    4; a2
0x61B78A: lea     edx, [esi+54h]
0x61B78D: push    edx; a1
0x61B78E: mov     ecx, esi
0x61B790: call    TESForm_LoadDataFromCurrentSaveGame
0x61B795: push    1; a2
0x61B797: lea     eax, [esi+58h]
0x61B79A: push    eax; a1
0x61B79B: mov     ecx, esi
0x61B79D: call    TESForm_LoadDataFromCurrentSaveGame
0x61B7A2: push    1; a2
0x61B7A4: lea     ecx, [esi+59h]
0x61B7A7: push    ecx; a1
0x61B7A8: mov     ecx, esi
0x61B7AA: call    TESForm_LoadDataFromCurrentSaveGame
0x61B7AF: mov     ecx, ds:0B33B00h
0x61B7B5: push    4; Size
0x61B7B7: lea     edx, [esi+6Ch]
0x61B7BA: push    edx; Dst
0x61B7BB: call    SaveLoad_LoadData
0x61B7C0: mov     ecx, ds:0B33B00h
0x61B7C6: push    4; Size
0x61B7C8: lea     eax, [esi+70h]
0x61B7CB: push    eax; Dst
0x61B7CC: call    SaveLoad_LoadData
0x61B7D1: push    4; Size
0x61B7D3: lea     ecx, [esi+74h]
0x61B7D6: push    ecx; Dst
0x61B7D7: mov     ecx, ds:0B33B00h
0x61B7DD: call    SaveLoad_LoadData
0x61B7E2: push    14h; a2
0x61B7E4: lea     edx, [esi+0B0h]
0x61B7EA: push    edx; a1
0x61B7EB: mov     ecx, esi
0x61B7ED: call    TESForm_LoadDataFromCurrentSaveGame
0x61B7F2: push    4; a2
0x61B7F4: lea     eax, [esi+0CCh]
0x61B7FA: push    eax; a1
0x61B7FB: mov     ecx, esi
0x61B7FD: call    TESForm_LoadDataFromCurrentSaveGame
0x61B802: push    4; a2
0x61B804: lea     ecx, [esi+0D0h]
0x61B80A: push    ecx; a1
0x61B80B: mov     ecx, esi
0x61B80D: call    TESForm_LoadDataFromCurrentSaveGame
0x61B812: mov     ecx, ds:0B33B00h
0x61B818: push    0Ch; Size
0x61B81A: lea     edx, [esi+0D4h]
0x61B820: push    edx; Dst
0x61B821: call    SaveLoad_LoadData
0x61B826: mov     ecx, ds:0B33B00h
0x61B82C: push    0Ch; Size
0x61B82E: lea     eax, [esi+0E0h]
0x61B834: push    eax; Dst
0x61B835: call    SaveLoad_LoadData
0x61B83A: push    0Ch; Size
0x61B83C: lea     ecx, [esi+0ECh]
0x61B842: push    ecx; Dst
0x61B843: mov     ecx, ds:0B33B00h
0x61B849: call    SaveLoad_LoadData
0x61B84E: mov     ecx, ds:0B33B00h
0x61B854: push    0Ch; Size
0x61B856: lea     edx, [esi+0F8h]
0x61B85C: push    edx; Dst
0x61B85D: call    SaveLoad_LoadData
0x61B862: mov     ecx, ds:0B33B00h
0x61B868: push    4; Size
0x61B86A: lea     eax, [esp+40h+a1.member.modlist]
0x61B86E: push    eax; Dst
0x61B86F: mov     [esp+44h+a1.member.modlist.data], ebx
0x61B873: call    SaveLoad_LoadFormID
0x61B878: mov     eax, [esp+44h+a1.member.flags]
0x61B87C: cmp     eax, ebx
0x61B87E: jz      short loc_61B886
0x61B880: mov     [esi+12Ch], eax
0x61B886: push    0Ch; Size
0x61B888: lea     ecx, [esi+164h]
0x61B88E: push    ecx; Dst
0x61B88F: mov     ecx, ds:0B33B00h
0x61B895: call    SaveLoad_LoadData
0x61B89A: push    1; a2
0x61B89C: lea     edx, [esi+114h]
0x61B8A2: push    edx; a1
0x61B8A3: mov     ecx, esi
0x61B8A5: call    TESForm_LoadDataFromCurrentSaveGame
0x61B8AA: mov     eax, ds:0B33B00h
0x61B8AF: cmp     byte ptr [eax+7Ch], 3Ah ; ':'
0x61B8B3: jb      short loc_61B8C5
0x61B8B5: push    4; a2
0x61B8B7: lea     ecx, [esi+170h]
0x61B8BD: push    ecx; a1
0x61B8BE: mov     ecx, esi
0x61B8C0: call    TESForm_LoadDataFromCurrentSaveGame
0x61B8C5: mov     edx, ds:0B33B00h
0x61B8CB: cmp     byte ptr [edx+7Ch], 3Dh ; '='
0x61B8CF: jb      short loc_61B8E1
0x61B8D1: push    1; a2
0x61B8D3: lea     eax, [esi+17Dh]
0x61B8D9: push    eax; a1
0x61B8DA: mov     ecx, esi
0x61B8DC: call    TESForm_LoadDataFromCurrentSaveGame
0x61B8E1: mov     ecx, ds:0B33B00h
0x61B8E7: cmp     byte ptr [ecx+7Ch], 5Fh ; '_'
0x61B8EB: jb      loc_61B9F5
0x61B8F1: lea     edx, [esi+5Ch]
0x61B8F4: push    edx
0x61B8F5: mov     ecx, esi
0x61B8F7: call    sub_6181F0
0x61B8FC: lea     eax, [esi+60h]
0x61B8FF: push    eax
0x61B900: mov     ecx, esi
0x61B902: call    sub_6181F0
0x61B907: lea     ecx, [esi+64h]
0x61B90A: push    ecx
0x61B90B: mov     ecx, esi
0x61B90D: call    sub_6181F0
0x61B912: mov     ecx, ds:0B33B00h
0x61B918: push    4; Size
0x61B91A: lea     edx, [esp+48h+a1.member]
0x61B91E: push    edx; Dst
0x61B91F: mov     dword ptr [esp+4Ch+a1.member.type], ebx
0x61B923: call    SaveLoad_LoadFormID
0x61B928: mov     eax, [esp+4Ch+var_24]
0x61B92C: push    4; Size
0x61B92E: lea     ecx, [esp+50h+var_24]
0x61B932: mov     [esi+7Ch], eax
0x61B935: push    ecx; Dst
0x61B936: mov     ecx, ds:0B33B00h
0x61B93C: mov     [esp+54h+var_24], ebx
0x61B940: call    SaveLoad_LoadFormID
0x61B945: mov     edx, [esp+54h+var_2C]
0x61B949: push    4; Size
0x61B94B: lea     eax, [esp+58h+var_2C]
0x61B94F: mov     [esi+80h], edx
0x61B955: mov     ecx, ds:0B33B00h
0x61B95B: push    eax; Dst
0x61B95C: mov     [esp+5Ch+var_2C], ebx
0x61B960: call    SaveLoad_LoadFormID
0x61B965: mov     ecx, [esp+5Ch+var_34]
0x61B969: push    4; Size
0x61B96B: lea     edx, [esp+60h+var_34]
0x61B96F: mov     [esi+84h], ecx
0x61B975: mov     ecx, ds:0B33B00h
0x61B97B: push    edx; Dst
0x61B97C: mov     [esp+64h+var_34], ebx
0x61B980: call    SaveLoad_LoadFormID
0x61B985: mov     eax, [esp+64h+var_3C]
0x61B989: push    4; Size
0x61B98B: lea     ecx, [esp+68h+var_3C]
0x61B98F: mov     [esi+88h], eax
0x61B995: push    ecx; Dst
0x61B996: mov     ecx, ds:0B33B00h
0x61B99C: mov     [esp+6Ch+var_3C], ebx
0x61B9A0: call    SaveLoad_LoadFormID
0x61B9A5: mov     edx, [esp+6Ch+var_44]
0x61B9A9: lea     eax, [esi+90h]
0x61B9AF: push    eax; Dst
0x61B9B0: mov     ecx, esi
0x61B9B2: mov     [esi+8Ch], edx
0x61B9B8: call    sub_618290
0x61B9BD: lea     ecx, [esi+94h]
0x61B9C3: push    ecx; Dst
0x61B9C4: mov     ecx, esi
0x61B9C6: call    sub_618290
0x61B9CB: lea     edx, [esi+98h]
0x61B9D1: push    edx; Dst
0x61B9D2: mov     ecx, esi
0x61B9D4: call    sub_618290
0x61B9D9: lea     eax, [esi+9Ch]
0x61B9DF: push    eax; Dst
0x61B9E0: mov     ecx, esi
0x61B9E2: call    sub_618290
0x61B9E7: lea     ecx, [esi+0A0h]
0x61B9ED: push    ecx; Dst
0x61B9EE: mov     ecx, esi
0x61B9F0: call    sub_618290
0x61B9F5: mov     edx, ds:0B33B00h
0x61B9FB: cmp     byte ptr [edx+7Ch], 66h ; 'f'
0x61B9FF: jb      short loc_61BA0C
0x61BA01: lea     eax, [esi+68h]
0x61BA04: push    eax
0x61BA05: mov     ecx, esi
0x61BA07: call    sub_6181F0
0x61BA0C: mov     ecx, ds:0B33B00h
0x61BA12: call    sub_45A170
0x61BA17: test    al, al
0x61BA19: jz      loc_61BB2D
0x61BA1F: mov     ecx, ds:0B33B00h
0x61BA25: mov     edi, [ecx+80h]
0x61BA2B: cmp     edi, ebx
0x61BA2D: mov     esi, [ecx+14h]
0x61BA30: jz      loc_61BAD5
0x61BA36: mov     ecx, [edi]
0x61BA38: push    ecx; a1
0x61BA39: call    TESForm_LookupByFormID
0x61BA3E: movzx   edx, [esp+70h+var_54]
0x61BA43: mov     ecx, eax
0x61BA45: lea     eax, [edx+ebp]
0x61BA48: add     esp, 4
0x61BA4B: cmp     esi, eax
0x61BA4D: jbe     short loc_61BA8F
0x61BA4F: mov     eax, [edi+5]
0x61BA52: movzx   edx, byte ptr [edi+9]
0x61BA56: push    eax
0x61BA57: mov     eax, [ecx]
0x61BA59: push    edx
0x61BA5A: mov     edx, [eax+0D4h]
0x61BA60: call    edx
0x61BA62: movzx   ecx, [esp+74h+var_54]
0x61BA67: push    eax
0x61BA68: mov     eax, [edi]
0x61BA6A: push    eax
0x61BA6B: push    2922h
0x61BA70: sub     esi, ecx
0x61BA72: push    offset a_AiCombatcontr; ".\\AI\\CombatController.cpp"
0x61BA77: sub     esi, ebp
0x61BA79: push    esi; ArgList
0x61BA7A: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x61BA7F: call    PrintError
0x61BA84: add     esp, 20h
0x61BA87: pop     edi
0x61BA88: pop     esi
0x61BA89: pop     ebp
0x61BA8A: pop     ebx
0x61BA8B: add     esp, 24h
0x61BA8E: retn
0x61BA8F: jnb     loc_61BB2D
0x61BA95: mov     edx, [edi+5]
0x61BA98: movzx   eax, byte ptr [edi+9]
0x61BA9C: push    edx
0x61BA9D: mov     edx, [ecx]
0x61BA9F: push    eax
0x61BAA0: mov     eax, [edx+0D4h]
0x61BAA6: call    eax
0x61BAA8: mov     ecx, [edi]
0x61BAAA: movzx   edx, [esp+74h+var_54]
0x61BAAF: push    eax
0x61BAB0: push    ecx
0x61BAB1: push    2922h
0x61BAB6: sub     edx, esi
0x61BAB8: push    offset a_AiCombatcontr; ".\\AI\\CombatController.cpp"
0x61BABD: add     edx, ebp
0x61BABF: push    edx; ArgList
0x61BAC0: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x61BAC5: call    PrintError
0x61BACA: add     esp, 20h
0x61BACD: pop     edi
0x61BACE: pop     esi
0x61BACF: pop     ebp
0x61BAD0: pop     ebx
0x61BAD1: add     esp, 24h
0x61BAD4: retn
0x61BAD5: movzx   eax, [esp+6Ch+var_54]
0x61BADA: lea     edx, [eax+ebp]
0x61BADD: cmp     esi, edx
0x61BADF: jbe     short loc_61BB0A
0x61BAE1: movzx   ecx, byte ptr [ecx+7Ch]
0x61BAE5: push    ecx
0x61BAE6: push    2922h
0x61BAEB: sub     esi, eax
0x61BAED: push    offset a_AiCombatcontr; ".\\AI\\CombatController.cpp"
0x61BAF2: sub     esi, ebp
0x61BAF4: push    esi; ArgList
0x61BAF5: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x61BAFA: call    PrintError
0x61BAFF: add     esp, 14h
0x61BB02: pop     edi
0x61BB03: pop     esi
0x61BB04: pop     ebp
0x61BB05: pop     ebx
0x61BB06: add     esp, 24h
0x61BB09: retn
0x61BB0A: jnb     short loc_61BB2D
0x61BB0C: movzx   edx, byte ptr [ecx+7Ch]
0x61BB10: push    edx
0x61BB11: push    2922h
0x61BB16: sub     eax, esi
0x61BB18: push    offset a_AiCombatcontr; ".\\AI\\CombatController.cpp"
0x61BB1D: add     eax, ebp
0x61BB1F: push    eax; ArgList
0x61BB20: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x61BB25: call    PrintError
0x61BB2A: add     esp, 14h
0x61BB2D: pop     edi
0x61BB2E: pop     esi
0x61BB2F: pop     ebp
0x61BB30: pop     ebx
0x61BB31: add     esp, 24h
0x61BB34: retn
