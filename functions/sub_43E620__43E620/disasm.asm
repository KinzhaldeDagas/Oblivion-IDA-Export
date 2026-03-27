0x43E620: push    ebx
0x43E621: push    esi
0x43E622: push    edi
0x43E623: mov     edi, [esp+0Ch+arg_0]
0x43E627: mov     eax, edi
0x43E629: lea     edx, [eax+1]
0x43E62C: lea     esp, [esp+0]
0x43E630: mov     cl, [eax]
0x43E632: add     eax, 1
0x43E635: test    cl, cl
0x43E637: jnz     short loc_43E630
0x43E639: sub     eax, edx
0x43E63B: add     eax, 1
0x43E63E: push    eax; Size
0x43E63F: call    FormHeapAlloc
0x43E644: mov     ebx, eax
0x43E646: mov     al, [edi]
0x43E648: add     esp, 4
0x43E64B: test    al, al
0x43E64D: mov     esi, ebx
0x43E64F: jz      short loc_43E66B
0x43E651: movsx   eax, al
0x43E654: push    eax; C
0x43E655: call    _tolower
0x43E65A: add     edi, 1
0x43E65D: mov     [esi], al
0x43E65F: mov     al, [edi]
0x43E661: add     esp, 4
0x43E664: add     esi, 1
0x43E667: test    al, al
0x43E669: jnz     short loc_43E651
0x43E66B: pop     edi
0x43E66C: mov     byte ptr [esi], 0
0x43E66F: pop     esi
0x43E670: mov     eax, ebx
0x43E672: pop     ebx
0x43E673: retn    4
