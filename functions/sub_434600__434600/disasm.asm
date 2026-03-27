0x434600: push    esi
0x434601: mov     esi, [esp+4+arg_0]
0x434605: test    esi, esi
0x434607: push    edi
0x434608: mov     edi, ecx
0x43460A: jz      short loc_43463E
0x43460C: mov     eax, esi
0x43460E: lea     edx, [eax+1]
0x434611: mov     cl, [eax]
0x434613: add     eax, 1
0x434616: test    cl, cl
0x434618: jnz     short loc_434611
0x43461A: sub     eax, edx
0x43461C: add     eax, 1
0x43461F: push    eax; Size
0x434620: call    FormHeapAlloc
0x434625: add     esp, 4
0x434628: mov     [edi+20h], eax
0x43462B: mov     ecx, esi
0x43462D: mov     edx, eax
0x43462F: nop
0x434630: mov     al, [ecx]
0x434632: mov     [edx], al
0x434634: add     ecx, 1
0x434637: add     edx, 1
0x43463A: test    al, al
0x43463C: jnz     short loc_434630
0x43463E: pop     edi
0x43463F: pop     esi
0x434640: retn    4
