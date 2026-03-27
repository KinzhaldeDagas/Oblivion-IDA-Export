0x46DD70: push    ebx
0x46DD71: push    edi
0x46DD72: mov     edi, [esp+8+arg_0]
0x46DD76: push    edi
0x46DD77: mov     ebx, ecx
0x46DD79: call    sub_46DD20
0x46DD7E: test    al, al
0x46DD80: jnz     short loc_46DDBB
0x46DD82: mov     eax, edi
0x46DD84: lea     edx, [eax+1]
0x46DD87: mov     cl, [eax]
0x46DD89: add     eax, 1
0x46DD8C: test    cl, cl
0x46DD8E: jnz     short loc_46DD87
0x46DD90: sub     eax, edx
0x46DD92: add     eax, 1
0x46DD95: push    esi
0x46DD96: push    eax; Size
0x46DD97: call    FormHeapAlloc
0x46DD9C: mov     esi, eax
0x46DD9E: add     esp, 4
0x46DDA1: mov     ecx, edi
0x46DDA3: sub     esi, edi
0x46DDA5: mov     dl, [ecx]
0x46DDA7: mov     [esi+ecx], dl
0x46DDAA: add     ecx, 1
0x46DDAD: test    dl, dl
0x46DDAF: jnz     short loc_46DDA5
0x46DDB1: push    eax
0x46DDB2: lea     ecx, [ebx+4]
0x46DDB5: call    BSSimpleList_PushBack
0x46DDBA: pop     esi
0x46DDBB: pop     edi
0x46DDBC: pop     ebx
0x46DDBD: retn    4
