0x46F520: mov     eax, [esp+arg_0]
0x46F524: push    ebx
0x46F525: push    ebp
0x46F526: push    esi
0x46F527: xor     ebp, ebp
0x46F529: push    ebp; int
0x46F52A: push    offset ??_R0?AVTESSpellList@@@8; struct TypeDescriptor *
0x46F52F: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x46F534: push    ebp; int
0x46F535: push    eax; void *
0x46F536: mov     esi, ecx
0x46F538: call    OblivionDynamicCast
0x46F53D: mov     ebx, eax
0x46F53F: add     esp, 14h
0x46F542: cmp     ebx, ebp
0x46F544: mov     [esp+0Ch+arg_0], ebx
0x46F548: jz      loc_46F5DC
0x46F54E: push    edi
0x46F54F: mov     ecx, esi
0x46F551: call    TESSpellList_ClearLists
0x46F556: lea     edi, [ebx+4]
0x46F559: cmp     edi, ebp
0x46F55B: jz      short loc_46F59C
0x46F55D: lea     ecx, [ecx+0]
0x46F560: mov     ebx, [edi]
0x46F562: cmp     ebx, ebp
0x46F564: jz      short loc_46F591
0x46F566: cmp     [esi+4], ebp
0x46F569: jz      short loc_46F58E
0x46F56B: push    8; Size
0x46F56D: call    FormHeapAlloc
0x46F572: add     esp, 4
0x46F575: cmp     eax, ebp
0x46F577: jz      short loc_46F583
0x46F579: mov     ecx, [esi+4]
0x46F57C: mov     [eax], ecx
0x46F57E: mov     [eax+4], ebp
0x46F581: jmp     short loc_46F585
0x46F583: xor     eax, eax
0x46F585: mov     edx, [esi+8]
0x46F588: mov     [eax+4], edx
0x46F58B: mov     [esi+8], eax
0x46F58E: mov     [esi+4], ebx
0x46F591: mov     edi, [edi+4]
0x46F594: cmp     edi, ebp
0x46F596: jnz     short loc_46F560
0x46F598: mov     ebx, [esp+10h+arg_0]
0x46F59C: add     ebx, 0Ch
0x46F59F: cmp     ebx, ebp
0x46F5A1: jz      short loc_46F5DB
0x46F5A3: mov     edi, [ebx]
0x46F5A5: cmp     edi, ebp
0x46F5A7: jz      short loc_46F5D4
0x46F5A9: cmp     [esi+0Ch], ebp
0x46F5AC: jz      short loc_46F5D1
0x46F5AE: push    8; Size
0x46F5B0: call    FormHeapAlloc
0x46F5B5: add     esp, 4
0x46F5B8: cmp     eax, ebp
0x46F5BA: jz      short loc_46F5C6
0x46F5BC: mov     ecx, [esi+0Ch]
0x46F5BF: mov     [eax], ecx
0x46F5C1: mov     [eax+4], ebp
0x46F5C4: jmp     short loc_46F5C8
0x46F5C6: xor     eax, eax
0x46F5C8: mov     edx, [esi+10h]
0x46F5CB: mov     [eax+4], edx
0x46F5CE: mov     [esi+10h], eax
0x46F5D1: mov     [esi+0Ch], edi
0x46F5D4: mov     ebx, [ebx+4]
0x46F5D7: cmp     ebx, ebp
0x46F5D9: jnz     short loc_46F5A3
0x46F5DB: pop     edi
0x46F5DC: pop     esi
0x46F5DD: pop     ebp
0x46F5DE: pop     ebx
0x46F5DF: retn    4
