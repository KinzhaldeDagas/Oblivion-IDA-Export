0x46E900: push    ebx
0x46E901: mov     ebx, [esp+4+arg_0]
0x46E905: test    ebx, ebx
0x46E907: jz      short loc_46E946
0x46E909: push    esi
0x46E90A: push    edi
0x46E90B: lea     edi, [ecx+4]
0x46E90E: mov     eax, edi
0x46E910: test    eax, eax
0x46E912: jz      short loc_46E925
0x46E914: mov     esi, [eax]
0x46E916: test    esi, esi
0x46E918: jz      short loc_46E925
0x46E91A: cmp     [esi], ebx
0x46E91C: jz      short loc_46E94A
0x46E91E: mov     eax, [eax+4]
0x46E921: test    eax, eax
0x46E923: jnz     short loc_46E914
0x46E925: mov     esi, [esp+0Ch+arg_4]
0x46E929: test    esi, esi
0x46E92B: jz      short loc_46E944
0x46E92D: push    8; Size
0x46E92F: call    FormHeapAlloc
0x46E934: add     esp, 4
0x46E937: push    eax
0x46E938: mov     ecx, edi
0x46E93A: mov     [eax], ebx
0x46E93C: mov     [eax+4], esi
0x46E93F: call    BSSimpleList_PushBack
0x46E944: pop     edi
0x46E945: pop     esi
0x46E946: pop     ebx
0x46E947: retn    8
0x46E94A: mov     eax, [esp+0Ch+arg_4]
0x46E94E: test    eax, eax
0x46E950: jnz     short loc_46E969
0x46E952: push    esi
0x46E953: mov     ecx, edi
0x46E955: call    BSSimpleList_Remove
0x46E95A: push    esi
0x46E95B: call    FormHeapFree
0x46E960: add     esp, 4
0x46E963: pop     edi
0x46E964: pop     esi
0x46E965: pop     ebx
0x46E966: retn    8
0x46E969: pop     edi
0x46E96A: mov     [esi+4], eax
0x46E96D: pop     esi
0x46E96E: pop     ebx
0x46E96F: retn    8
