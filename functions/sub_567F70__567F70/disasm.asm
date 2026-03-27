0x567F70: push    0FFFFFFFFh
0x567F72: push    offset SEH_567F70
0x567F77: mov     eax, large fs:0
0x567F7D: push    eax
0x567F7E: sub     esp, 10h
0x567F81: push    ebx
0x567F82: push    esi
0x567F83: push    edi
0x567F84: mov     eax, ds:0B30AACh
0x567F89: xor     eax, esp
0x567F8B: push    eax
0x567F8C: lea     eax, [esp+2Ch+a1.member.refID+1]
0x567F90: mov     large fs:0, eax
0x567F96: mov     edi, ecx
0x567F98: mov     ecx, ds:0B33B00h
0x567F9E: mov     [esp+2Ch+a1.vtbl+1], 0
0x567FA6: xor     ebx, ebx
0x567FA8: call    sub_45A170
0x567FAD: test    al, al
0x567FAF: jz      loc_56804E
0x567FB5: mov     ecx, ds:0B33B00h
0x567FBB: push    4; Size
0x567FBD: lea     eax, [esp+30h+a1.member.pad]
0x567FC1: push    eax; Dst
0x567FC2: call    SaveLoad_LoadData
0x567FC7: cmp     dword ptr [esp+2Ch+a1.member.pad], 4B4F4C42h
0x567FCF: jz      short loc_568039
0x567FD1: mov     eax, ds:0B33B00h
0x567FD6: mov     esi, [eax+80h]
0x567FDC: test    esi, esi
0x567FDE: jz      short loc_56801D
0x567FE0: mov     ecx, [esi]
0x567FE2: push    ecx; a1
0x567FE3: call    TESForm_LookupByFormID
0x567FE8: mov     edx, [esi+5]
0x567FEB: movzx   ecx, byte ptr [esi+9]
0x567FEF: add     esp, 4
0x567FF2: push    edx
0x567FF3: mov     edx, [eax]
0x567FF5: push    ecx
0x567FF6: mov     ecx, eax
0x567FF8: mov     eax, [edx+0D4h]
0x567FFE: call    eax
0x568000: mov     ecx, [esi]
0x568002: push    eax
0x568003: push    ecx
0x568004: push    0EC0h
0x568009: push    offset a__TesSharedPac; "..\\TES Shared\\Package.cpp"
0x56800E: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x568013: call    PrintError
0x568018: add     esp, 1Ch
0x56801B: jmp     short loc_568039
0x56801D: movzx   edx, byte ptr [eax+7Ch]
0x568021: push    edx
0x568022: push    0EC0h
0x568027: push    offset a__TesSharedPac; "..\\TES Shared\\Package.cpp"
0x56802C: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x568031: call    PrintError
0x568036: add     esp, 10h
0x568039: mov     ecx, ds:0B33B00h
0x56803F: mov     ebx, [ecx+14h]
0x568042: push    2; Size
0x568044: lea     eax, [esp+30h+a1.vtbl+1]
0x568048: push    eax; Dst
0x568049: call    SaveLoad_LoadData
0x56804E: push    8; Size
0x568050: lea     ecx, [edi+1Ch]
0x568053: push    ecx; Dst
0x568054: mov     ecx, ds:0B33B00h
0x56805A: call    SaveLoad_LoadData
0x56805F: push    1; a2
0x568061: lea     edx, [esp+30h+a1]
0x568065: push    edx; a1
0x568066: mov     ecx, edi
0x568068: call    TESForm_LoadDataFromCurrentSaveGame
0x56806D: or      esi, 0FFFFFFFFh
0x568070: test    byte ptr [esp+2Ch+a1.vtbl], 1
0x568075: jz      short loc_5680AA
0x568077: push    0Ch; Size
0x568079: call    FormHeapAlloc
0x56807E: add     esp, 4
0x568081: mov     [esp+2Ch+a1.member.flags+1], eax
0x568085: test    eax, eax
0x568087: mov     [esp+2Ch+a1.member.modlist.next+1], 0
0x56808F: jz      short loc_56809A
0x568091: mov     ecx, eax
0x568093: call    TESPackage_LocationData_constr
0x568098: jmp     short loc_56809C
0x56809A: xor     eax, eax
0x56809C: mov     ecx, eax; Dst
0x56809E: mov     [esp+2Ch+a1.member.modlist.next+1], esi
0x5680A2: mov     [edi+24h], eax
0x5680A5: call    sub_569A40
0x5680AA: test    byte ptr [esp+2Ch+a1.vtbl], 2
0x5680AF: jz      short loc_5680E4
0x5680B1: push    0Ch; Size
0x5680B3: call    FormHeapAlloc
0x5680B8: add     esp, 4
0x5680BB: mov     [esp+2Ch+a1.member.flags+1], eax
0x5680BF: test    eax, eax
0x5680C1: mov     [esp+2Ch+a1.member.modlist.next+1], 1
0x5680C9: jz      short loc_5680D4
0x5680CB: mov     ecx, eax
0x5680CD: call    TESPackage_TargetData_constr
0x5680D2: jmp     short loc_5680D6
0x5680D4: xor     eax, eax
0x5680D6: mov     ecx, eax; Dst
0x5680D8: mov     [esp+2Ch+a1.member.modlist.next+1], esi
0x5680DC: mov     [edi+28h], eax
0x5680DF: call    sub_56A020
0x5680E4: mov     ecx, ds:0B33B00h
0x5680EA: push    4; Size
0x5680EC: add     edi, 18h
0x5680EF: push    edi; Dst
0x5680F0: call    SaveLoad_LoadData
0x5680F5: mov     ecx, ds:0B33B00h
0x5680FB: call    sub_45A170
0x568100: test    al, al
0x568102: jz      loc_56821E
0x568108: mov     ecx, ds:0B33B00h
0x56810E: mov     edi, [ecx+80h]
0x568114: test    edi, edi
0x568116: mov     esi, [ecx+14h]
0x568119: jz      loc_5681D4
0x56811F: mov     eax, [edi]
0x568121: push    eax; a1
0x568122: call    TESForm_LookupByFormID
0x568127: movzx   edx, word ptr [esp+30h+a1.vtbl+1]
0x56812C: mov     ecx, eax
0x56812E: lea     eax, [edx+ebx]
0x568131: add     esp, 4
0x568134: cmp     esi, eax
0x568136: jbe     short loc_568183
0x568138: mov     eax, [edi+5]
0x56813B: movzx   edx, byte ptr [edi+9]
0x56813F: push    eax
0x568140: mov     eax, [ecx]
0x568142: push    edx
0x568143: mov     edx, [eax+0D4h]
0x568149: call    edx
0x56814B: movzx   ecx, word ptr [esp+34h+a1.vtbl+1]
0x568150: push    eax
0x568151: mov     eax, [edi]
0x568153: push    eax
0x568154: push    0ED7h
0x568159: sub     esi, ecx
0x56815B: push    offset a__TesSharedPac; "..\\TES Shared\\Package.cpp"
0x568160: sub     esi, ebx
0x568162: push    esi; ArgList
0x568163: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x568168: call    PrintError
0x56816D: add     esp, 20h
0x568170: mov     ecx, [esp+2Ch+a1.member.refID+1]
0x568174: mov     large fs:0, ecx
0x56817B: pop     ecx
0x56817C: pop     edi
0x56817D: pop     esi
0x56817E: pop     ebx
0x56817F: add     esp, 1Ch
0x568182: retn
0x568183: jnb     loc_56821E
0x568189: mov     edx, [edi+5]
0x56818C: movzx   eax, byte ptr [edi+9]
0x568190: push    edx
0x568191: mov     edx, [ecx]
0x568193: push    eax
0x568194: mov     eax, [edx+0D4h]
0x56819A: call    eax
0x56819C: mov     ecx, [edi]
0x56819E: movzx   edx, word ptr [esp+34h+a1.vtbl+1]
0x5681A3: push    eax
0x5681A4: push    ecx
0x5681A5: push    0ED7h
0x5681AA: sub     edx, esi
0x5681AC: push    offset a__TesSharedPac; "..\\TES Shared\\Package.cpp"
0x5681B1: add     edx, ebx
0x5681B3: push    edx; ArgList
0x5681B4: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x5681B9: call    PrintError
0x5681BE: add     esp, 20h
0x5681C1: mov     ecx, [esp+2Ch+a1.member.refID+1]
0x5681C5: mov     large fs:0, ecx
0x5681CC: pop     ecx
0x5681CD: pop     edi
0x5681CE: pop     esi
0x5681CF: pop     ebx
0x5681D0: add     esp, 1Ch
0x5681D3: retn
0x5681D4: movzx   eax, word ptr [esp+2Ch+a1.vtbl+1]
0x5681D9: lea     edx, [eax+ebx]
0x5681DC: cmp     esi, edx
0x5681DE: jbe     short loc_5681FB
0x5681E0: movzx   ecx, byte ptr [ecx+7Ch]
0x5681E4: push    ecx
0x5681E5: push    0ED7h
0x5681EA: sub     esi, eax
0x5681EC: push    offset a__TesSharedPac; "..\\TES Shared\\Package.cpp"
0x5681F1: sub     esi, ebx
0x5681F3: push    esi
0x5681F4: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x5681F9: jmp     short loc_568216
0x5681FB: jnb     short loc_56821E
0x5681FD: movzx   edx, byte ptr [ecx+7Ch]
0x568201: push    edx
0x568202: push    0ED7h
0x568207: sub     eax, esi
0x568209: push    offset a__TesSharedPac; "..\\TES Shared\\Package.cpp"
0x56820E: add     eax, ebx
0x568210: push    eax; ArgList
0x568211: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x568216: call    PrintError
0x56821B: add     esp, 14h
0x56821E: mov     ecx, [esp+2Ch+a1.member.refID+1]
0x568222: mov     large fs:0, ecx
0x568229: pop     ecx
0x56822A: pop     edi
0x56822B: pop     esi
0x56822C: pop     ebx
0x56822D: add     esp, 1Ch
0x568230: retn
