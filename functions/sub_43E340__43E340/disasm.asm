0x43E340: push    esi
0x43E341: push    edi
0x43E342: mov     edi, [esp+8+arg_0]
0x43E346: mov     eax, edi
0x43E348: lea     edx, [eax+1]
0x43E34B: jmp     short loc_43E350
0x43E34D: align 10h
0x43E350: mov     cl, [eax]
0x43E352: add     eax, 1
0x43E355: test    cl, cl
0x43E357: jnz     short loc_43E350
0x43E359: sub     eax, edx
0x43E35B: add     eax, 1
0x43E35E: push    eax; Size
0x43E35F: call    FormHeapAlloc
0x43E364: mov     esi, eax
0x43E366: add     esp, 4
0x43E369: mov     ecx, edi
0x43E36B: sub     esi, edi
0x43E36D: lea     ecx, [ecx+0]
0x43E370: mov     dl, [ecx]
0x43E372: mov     [esi+ecx], dl
0x43E375: add     ecx, 1
0x43E378: test    dl, dl
0x43E37A: jnz     short loc_43E370
0x43E37C: pop     edi
0x43E37D: pop     esi
0x43E37E: retn    4
