0x68E53B: mov     eax, [esp+arg_38]
0x68E53F: mov     edx, [edi]
0x68E541: mov     edx, [edx+7Ch]
0x68E544: push    eax
0x68E545: push    ebp
0x68E546: mov     ecx, edi
0x68E548: call    edx
0x68E54A: mov     esi, [ebp+34h]
0x68E54D: cmp     esi, ebx
0x68E54F: jnz     short loc_68E570
0x68E551: push    8; Size
0x68E553: call    FormHeapAlloc
0x68E558: add     esp, 4
0x68E55B: cmp     eax, ebx
0x68E55D: jz      short loc_68E569
0x68E55F: mov     [eax], edi
0x68E561: mov     [eax+4], ebx
0x68E564: mov     [ebp+34h], eax
0x68E567: jmp     short loc_68E598
0x68E569: xor     eax, eax
0x68E56B: mov     [ebp+34h], eax
0x68E56E: jmp     short loc_68E598
0x68E570: cmp     [esi], ebx
0x68E572: jz      short loc_68E596
0x68E574: push    8; Size
0x68E576: call    FormHeapAlloc
0x68E57B: add     esp, 4
0x68E57E: cmp     eax, ebx
0x68E580: jz      short loc_68E58B
0x68E582: mov     ecx, [esi]
0x68E584: mov     [eax], ecx
0x68E586: mov     [eax+4], ebx
0x68E589: jmp     short loc_68E58D
0x68E58B: xor     eax, eax
0x68E58D: mov     edx, [esi+4]
0x68E590: mov     [eax+4], edx
0x68E593: mov     [esi+4], eax
0x68E596: mov     [esi], edi
0x68E598: mov     eax, [esp+arg_14]
0x68E59C: movzx   ecx, [esp+arg_12]
0x68E5A1: add     eax, 1
0x68E5A4: cmp     eax, ecx
0x68E5A6: mov     [esp+arg_14], eax
0x68E5AA: jb      ActiveEffect_Base_LoadEffect___LoopBody
