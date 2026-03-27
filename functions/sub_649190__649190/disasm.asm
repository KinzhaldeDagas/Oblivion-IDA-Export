0x649190: sub     esp, 0Ch
0x649193: push    ebp
0x649194: push    edi
0x649195: mov     edi, ecx
0x649197: mov     eax, [edi+8]
0x64919A: xor     ebp, ebp
0x64919C: cmp     eax, ebp
0x64919E: jz      loc_649301
0x6491A4: push    esi
0x6491A5: mov     esi, [eax+24h]
0x6491A8: cmp     esi, ebp
0x6491AA: jz      loc_649300
0x6491B0: mov     ecx, esi
0x6491B2: call    sub_569740
0x6491B7: test    eax, eax
0x6491B9: mov     ecx, esi
0x6491BB: jnz     short loc_6491CE
0x6491BD: call    sub_5697E0
0x6491C2: pop     esi
0x6491C3: mov     [edi+30h], eax
0x6491C6: pop     edi
0x6491C7: pop     ebp
0x6491C8: add     esp, 0Ch
0x6491CB: retn    4
0x6491CE: call    sub_569A10
0x6491D3: test    al, al
0x6491D5: jz      loc_649300
0x6491DB: mov     eax, [edi+8]
0x6491DE: mov     ecx, [eax+1Ch]
0x6491E1: shr     ecx, 2
0x6491E4: test    cl, 1
0x6491E7: jz      loc_649322
0x6491ED: push    ebx
0x6491EE: lea     ecx, [edi+4Ch]
0x6491F1: call    BSSimpleList_IsEmpty
0x6491F6: test    al, al
0x6491F8: mov     ebx, [esp+1Ch+arg_0]
0x6491FC: jz      loc_6492E5
0x649202: mov     ecx, ebx; this
0x649204: call    TESObjectREFR_GetParentCell
0x649209: mov     edx, [ebx]
0x64920B: mov     [esp+1Ch+arg_0], eax
0x64920F: mov     eax, [edx+174h]
0x649215: mov     ecx, ebx
0x649217: call    eax
0x649219: mov     ecx, [eax]
0x64921B: mov     [esp+1Ch+a2], ecx
0x64921F: mov     edx, [eax+4]
0x649222: mov     [esp+1Ch+var_8], edx
0x649226: mov     eax, [eax+8]
0x649229: mov     ecx, esi
0x64922B: mov     [esp+1Ch+var_4], eax
0x64922F: call    sub_569740
0x649234: cmp     eax, 4
0x649237: jnz     short loc_649248
0x649239: mov     ecx, esi
0x64923B: call    sub_569820
0x649240: mov     [edi+68h], eax
0x649243: mov     [edi+6Ch], ebp
0x649246: jmp     short loc_64925A
0x649248: cmp     eax, 5
0x64924B: jnz     short loc_64925A
0x64924D: mov     ecx, esi
0x64924F: mov     [edi+68h], ebp
0x649252: call    sub_569830
0x649257: mov     [edi+6Ch], eax
0x64925A: mov     ecx, offset fAIAcquireObjectDistance
0x64925F: call    GameSetting_GetSafeFloatPointer
0x649264: mov     ecx, offset fAIAcquireObjectDistance
0x649269: mov     esi, eax
0x64926B: call    GameSetting_GetSafeFloatPointer
0x649270: fld     dword ptr [esi]
0x649272: mov     edx, [ebx]
0x649274: push    ebx; a7
0x649275: push    offset sub_646A80; a6
0x64927A: push    ecx
0x64927B: mov     ebp, eax
0x64927D: fstp    [esp+28h+a5]; a5
0x649280: mov     eax, [edx+174h]
0x649286: mov     ecx, ebx
0x649288: call    eax
0x64928A: fld     dword ptr [ebp+0]
0x64928D: mov     edx, [esp+28h+arg_0]
0x649291: push    eax; a4
0x649292: push    ecx
0x649293: fstp    [esp+30h+a3]; a3
0x649296: lea     ecx, [esp+30h+a2]
0x64929A: push    ecx; a2
0x64929B: mov     ecx, ds:0B33A98h
0x6492A1: push    edx; a1
0x6492A2: call    sub_446B90
0x6492A7: xor     ebp, ebp
0x6492A9: lea     esi, [edi+5Ch]
0x6492AC: cmp     esi, ebp
0x6492AE: mov     [edi+6Ch], ebp
0x6492B1: mov     [edi+68h], ebp
0x6492B4: jz      short loc_6492E5
0x6492B6: mov     eax, [esi]
0x6492B8: cmp     eax, ebp
0x6492BA: jz      short loc_6492E5
0x6492BC: push    eax
0x6492BD: lea     ecx, [edi+4Ch]
0x6492C0: call    BSSimpleList_PushFront
0x6492C5: mov     eax, [esi+4]
0x6492C8: cmp     eax, ebp
0x6492CA: jz      short loc_6492E1
0x6492CC: mov     ecx, [eax+4]
0x6492CF: mov     [esi+4], ecx
0x6492D2: mov     edx, [eax]
0x6492D4: push    eax
0x6492D5: mov     [esi], edx
0x6492D7: call    FormHeapFree
0x6492DC: add     esp, 4
0x6492DF: jmp     short loc_6492B6
0x6492E1: mov     [esi], ebp
0x6492E3: jmp     short loc_6492B6
0x6492E5: lea     esi, [edi+4Ch]
0x6492E8: mov     ecx, esi
0x6492EA: call    BSSimpleList_IsEmpty
0x6492EF: test    al, al
0x6492F1: jnz     short loc_649309
0x6492F3: mov     eax, [esi]
0x6492F5: mov     ecx, esi
0x6492F7: mov     [edi+30h], eax
0x6492FA: call    sub_67F100
0x6492FF: pop     ebx
0x649300: pop     esi
0x649301: pop     edi
0x649302: pop     ebp
0x649303: add     esp, 0Ch
0x649306: retn    4
0x649309: mov     edx, [edi]
0x64930B: mov     eax, [edx+188h]
0x649311: push    1
0x649313: push    ebx
0x649314: mov     ecx, edi
0x649316: call    eax
0x649318: pop     ebx
0x649319: pop     esi
0x64931A: pop     edi
0x64931B: pop     ebp
0x64931C: add     esp, 0Ch
0x64931F: retn    4
0x649322: mov     edx, [edi]
0x649324: mov     eax, [esp+18h+arg_0]
0x649328: mov     edx, [edx+188h]
0x64932E: push    1
0x649330: push    eax
0x649331: mov     ecx, edi
0x649333: call    edx
0x649335: pop     esi
0x649336: pop     edi
0x649337: pop     ebp
0x649338: add     esp, 0Ch
0x64933B: retn    4
