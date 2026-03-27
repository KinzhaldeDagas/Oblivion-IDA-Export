0x550550: push    ecx
0x550551: xor     ecx, ecx
0x550553: mov     [esp+4+var_4], ecx
0x550556: mov     eax, ds:0B39B80h
0x55055B: test    eax, eax
0x55055D: push    esi
0x55055E: push    edi
0x55055F: jz      short loc_55056C
0x550561: mov     esi, [esp+0Ch+var_4]
0x550565: add     eax, 0DB0h
0x55056A: jmp     short loc_55057B
0x55056C: xor     esi, esi
0x55056E: mov     [esp+0Ch+var_4], esi
0x550572: lea     eax, [esp+0Ch+var_4]
0x550576: mov     ecx, 1
0x55057B: test    cl, 1
0x55057E: mov     edi, [eax]
0x550580: jz      short loc_55059E
0x550582: test    esi, esi
0x550584: jz      short loc_55059E
0x550586: lea     eax, [esi+4]
0x550589: push    eax; lpAddend
0x55058A: call    dword ptr ds:0A2807Ch
0x550590: test    eax, eax
0x550592: jnz     short loc_55059E
0x550594: mov     edx, [esi]
0x550596: mov     eax, [edx]
0x550598: push    1
0x55059A: mov     ecx, esi
0x55059C: call    eax
0x55059E: mov     eax, edi
0x5505A0: pop     edi
0x5505A1: pop     esi
0x5505A2: pop     ecx
0x5505A3: retn
