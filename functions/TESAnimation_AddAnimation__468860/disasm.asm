0x468860: push    ebx
0x468861: push    edi
0x468862: mov     edi, [esp+8+arg_0]
0x468866: push    edi
0x468867: mov     ebx, ecx
0x468869: call    TESAnimation_HasAnimation
0x46886E: test    al, al
0x468870: jnz     short loc_4688AB
0x468872: mov     eax, edi
0x468874: lea     edx, [eax+1]
0x468877: mov     cl, [eax]
0x468879: add     eax, 1
0x46887C: test    cl, cl
0x46887E: jnz     short loc_468877
0x468880: sub     eax, edx
0x468882: add     eax, 1
0x468885: push    esi
0x468886: push    eax; Size
0x468887: call    FormHeapAlloc
0x46888C: mov     esi, eax
0x46888E: add     esp, 4
0x468891: mov     ecx, edi
0x468893: sub     esi, edi
0x468895: mov     dl, [ecx]
0x468897: mov     [esi+ecx], dl
0x46889A: add     ecx, 1
0x46889D: test    dl, dl
0x46889F: jnz     short loc_468895
0x4688A1: push    eax
0x4688A2: lea     ecx, [ebx+4]
0x4688A5: call    BSSimpleList_PushBack
0x4688AA: pop     esi
0x4688AB: pop     edi
0x4688AC: pop     ebx
0x4688AD: retn    4
