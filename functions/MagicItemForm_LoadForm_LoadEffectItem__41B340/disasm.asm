0x41B340: mov     eax, [edi]
0x41B342: mov     edx, [eax+0D4h]
0x41B348: mov     ecx, edi
0x41B34A: call    edx
0x41B34C: test    eax, eax
0x41B34E: jz      short loc_41B379
0x41B350: mov     eax, [edi]
0x41B352: mov     edx, [eax+0D4h]
0x41B358: mov     ecx, edi
0x41B35A: call    edx
0x41B35C: cmp     byte ptr [eax], 0
0x41B35F: jz      short loc_41B379
0x41B361: mov     eax, [edi]
0x41B363: mov     edx, [eax+0D4h]
0x41B369: mov     ecx, edi
0x41B36B: call    edx
0x41B36D: push    eax
0x41B36E: push    ebx
0x41B36F: lea     ecx, [edi+24h]
0x41B372: call    EffectItemList_LoadItem
0x41B377: jmp     short MagicItemForm_LoadForm___LoadBaseData_
0x41B379: mov     eax, [esi+4]
0x41B37C: test    eax, eax
0x41B37E: jnz     short loc_41B385
0x41B380: mov     eax, offset EmptyString
0x41B385: push    eax
0x41B386: push    ebx
0x41B387: lea     ecx, [edi+24h]
0x41B38A: call    EffectItemList_LoadItem
0x41B38F: jmp     short MagicItemForm_LoadForm___LoadBaseData_
