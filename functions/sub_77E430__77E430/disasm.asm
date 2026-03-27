0x77E430: sub     esp, 14h
0x77E433: mov     eax, [esp+14h+arg_4]
0x77E437: push    ebx
0x77E438: push    ebp
0x77E439: mov     ebp, [esp+1Ch+arg_0]
0x77E43D: push    esi
0x77E43E: push    edi
0x77E43F: mov     edi, [ebp+1Ch]
0x77E442: mov     esi, ecx
0x77E444: mov     ecx, [ebp+8]
0x77E447: xor     edx, edx
0x77E449: cmp     eax, edi
0x77E44B: mov     [esp+24h+var_10], edx
0x77E44F: mov     [esp+24h+var_4], ecx
0x77E453: jnb     short loc_77E461
0x77E455: mov     ebx, [ebp+20h]
0x77E458: mov     eax, [ebx+eax*4]
0x77E45B: mov     [esp+24h+var_8], eax
0x77E45F: jmp     short loc_77E467
0x77E461: mov     [esp+24h+var_8], edx
0x77E465: mov     eax, edx
0x77E467: mov     ebx, [ebp+18h]
0x77E46A: imul    ebx, eax
0x77E46D: cmp     edi, 1
0x77E470: mov     [esp+24h+arg_4], edx
0x77E474: mov     [esp+24h+var_C], edx
0x77E478: jbe     loc_77E56A
0x77E47E: movzx   eax, word ptr [esi+34h]
0x77E482: cmp     eax, edi
0x77E484: jnb     short loc_77E49A
0x77E486: push    edi
0x77E487: lea     ecx, [esi+2Ch]
0x77E48A: call    NiTArray_SetSize
0x77E48F: push    edi
0x77E490: lea     ecx, [esi+3Ch]
0x77E493: call    NiTArray_SetSize
0x77E498: xor     edx, edx
0x77E49A: movzx   ecx, word ptr [esi+34h]
0x77E49E: cmp     [esi+4Ch], ecx
0x77E4A1: jb      short loc_77E4A6
0x77E4A3: mov     [esi+4Ch], edx
0x77E4A6: mov     eax, [esi+4Ch]
0x77E4A9: mov     ecx, [esi+30h]
0x77E4AC: mov     ecx, [ecx+eax*4]
0x77E4AF: cmp     ecx, edx
0x77E4B1: mov     [esp+24h+arg_0], ecx
0x77E4B5: jnz     short loc_77E4E3
0x77E4B7: push    edx
0x77E4B8: push    edx
0x77E4B9: mov     edx, [esi+8]
0x77E4BC: push    edx
0x77E4BD: push    800h
0x77E4C2: call    sub_77E0A0
0x77E4C7: mov     ecx, [esi+4Ch]
0x77E4CA: add     esp, 10h
0x77E4CD: mov     [esp+24h+arg_0], eax
0x77E4D1: lea     eax, [esp+24h+arg_0]
0x77E4D5: push    eax
0x77E4D6: push    ecx
0x77E4D7: lea     ecx, [esi+2Ch]
0x77E4DA: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x77E4DF: mov     ecx, [esp+24h+arg_0]
0x77E4E3: mov     dl, [ebp+10h]
0x77E4E6: mov     byte ptr [esp+24h+var_4], dl
0x77E4EA: mov     eax, [esp+24h+var_4]
0x77E4EE: push    eax
0x77E4EF: push    1
0x77E4F1: lea     edx, [esp+2Ch+var_C]
0x77E4F5: push    edx
0x77E4F6: lea     eax, [esp+30h+arg_4]
0x77E4FA: push    eax
0x77E4FB: push    ebx
0x77E4FC: call    sub_7829A0
0x77E501: mov     ecx, [esi+4Ch]
0x77E504: mov     edx, [esi+40h]
0x77E507: mov     edi, [edx+ecx*4]
0x77E50A: test    edi, edi
0x77E50C: jnz     short loc_77E538
0x77E50E: mov     ecx, [esp+24h+arg_4]
0x77E512: push    edi
0x77E513: push    ebx
0x77E514: push    ecx
0x77E515: push    eax
0x77E516: push    edi
0x77E517: call    sub_4BFD40
0x77E51C: add     esp, 14h
0x77E51F: mov     edi, eax
0x77E521: mov     eax, [esi+4Ch]
0x77E524: lea     edx, [esp+24h+var_10]
0x77E528: push    edx
0x77E529: push    eax
0x77E52A: lea     ecx, [esi+3Ch]
0x77E52D: mov     [esp+2Ch+var_10], edi
0x77E531: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x77E536: jmp     short loc_77E545
0x77E538: mov     [edi+8], eax
0x77E53B: mov     ecx, [esp+24h+arg_4]
0x77E53F: mov     [edi+0Ch], ecx
0x77E542: mov     [edi+14h], ebx
0x77E545: mov     edx, [esp+24h+arg_0]
0x77E549: mov     [edi+4], edx
0x77E54C: mov     eax, [esp+24h+var_C]
0x77E550: mov     [edi+10h], eax
0x77E553: mov     dword ptr [ebp+34h], 0
0x77E55A: add     dword ptr [esi+4Ch], 1
0x77E55E: mov     eax, edi
0x77E560: pop     edi
0x77E561: pop     esi
0x77E562: pop     ebp
0x77E563: pop     ebx
0x77E564: add     esp, 14h
0x77E567: retn    8
0x77E56A: cmp     ecx, edx
0x77E56C: mov     [esp+24h+var_14], edx
0x77E570: jz      short loc_77E576
0x77E572: mov     edi, ecx
0x77E574: jmp     short loc_77E57E
0x77E576: mov     edi, eax
0x77E578: or      edi, 80000000h
0x77E57E: lea     edx, [esp+24h+var_14]
0x77E582: push    edx
0x77E583: lea     ecx, [esi+0Ch]
0x77E586: push    edi
0x77E587: call    NiTMap_GetAt
0x77E58C: test    al, al
0x77E58E: jz      short loc_77E597
0x77E590: cmp     [esp+24h+var_14], 0
0x77E595: jnz     short loc_77E5BD
0x77E597: mov     eax, [esp+24h+var_4]
0x77E59B: mov     ecx, [esi+8]
0x77E59E: push    0
0x77E5A0: push    eax
0x77E5A1: push    ecx
0x77E5A2: push    800h
0x77E5A7: call    sub_77E0A0
0x77E5AC: add     esp, 10h
0x77E5AF: push    eax; a3
0x77E5B0: push    edi; a2
0x77E5B1: lea     ecx, [esi+0Ch]; this
0x77E5B4: mov     [esp+2Ch+var_14], eax
0x77E5B8: call    NiTMap_SetAt
0x77E5BD: mov     dl, [ebp+10h]
0x77E5C0: mov     byte ptr [esp+24h+var_4], dl
0x77E5C4: mov     eax, [esp+24h+var_4]
0x77E5C8: push    eax
0x77E5C9: push    0
0x77E5CB: lea     ecx, [esp+2Ch+var_C]
0x77E5CF: push    ecx
0x77E5D0: mov     ecx, [esp+30h+var_14]
0x77E5D4: lea     edx, [esp+30h+arg_4]
0x77E5D8: push    edx
0x77E5D9: push    ebx
0x77E5DA: call    sub_7829A0
0x77E5DF: mov     [esp+24h+var_4], eax
0x77E5E3: lea     eax, [esp+24h+var_10]
0x77E5E7: push    eax
0x77E5E8: lea     ebp, [esi+1Ch]
0x77E5EB: push    edi
0x77E5EC: mov     ecx, ebp
0x77E5EE: call    NiTMap_GetAt
0x77E5F3: mov     esi, [esp+24h+var_10]
0x77E5F7: test    esi, esi
0x77E5F9: jnz     short loc_77E61D
0x77E5FB: mov     ecx, [esp+24h+arg_4]
0x77E5FF: mov     edx, [esp+24h+var_4]
0x77E603: push    esi
0x77E604: push    ebx
0x77E605: push    ecx
0x77E606: push    edx
0x77E607: push    esi
0x77E608: call    sub_4BFD40
0x77E60D: add     esp, 14h
0x77E610: mov     esi, eax
0x77E612: push    esi; a3
0x77E613: push    edi; a2
0x77E614: mov     ecx, ebp; this
0x77E616: call    NiTMap_SetAt
0x77E61B: jmp     short loc_77E62E
0x77E61D: mov     eax, [esp+24h+var_4]
0x77E621: mov     [esi+8], eax
0x77E624: mov     ecx, [esp+24h+arg_4]
0x77E628: mov     [esi+0Ch], ecx
0x77E62B: mov     [esi+14h], ebx
0x77E62E: mov     edx, [esp+24h+var_14]
0x77E632: mov     [esi+4], edx
0x77E635: mov     eax, [esp+24h+var_C]
0x77E639: mov     [esi+10h], eax
0x77E63C: mov     eax, [esp+24h+arg_4]
0x77E640: xor     edx, edx
0x77E642: div     [esp+24h+var_8]
0x77E646: mov     ecx, [esp+24h+arg_0]
0x77E64A: pop     edi
0x77E64B: mov     [ecx+34h], eax
0x77E64E: mov     eax, esi
0x77E650: pop     esi
0x77E651: pop     ebp
0x77E652: pop     ebx
0x77E653: add     esp, 14h
0x77E656: retn    8
