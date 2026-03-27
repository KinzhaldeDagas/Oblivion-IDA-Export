0x550430: push    ebx
0x550431: push    esi
0x550432: mov     ebx, ecx
0x550434: mov     esi, [ebx+0D4h]
0x55043A: push    edi
0x55043B: mov     edi, [esp+0Ch+arg_0]
0x55043F: cmp     esi, edi
0x550441: jz      short loc_550477
0x550443: test    esi, esi
0x550445: jz      short loc_550463
0x550447: lea     eax, [esi+4]
0x55044A: push    eax; lpAddend
0x55044B: call    dword ptr ds:0A2807Ch
0x550451: test    eax, eax
0x550453: jnz     short loc_550463
0x550455: test    esi, esi
0x550457: jz      short loc_550463
0x550459: mov     edx, [esi]
0x55045B: mov     eax, [edx]
0x55045D: push    1
0x55045F: mov     ecx, esi
0x550461: call    eax
0x550463: test    edi, edi
0x550465: mov     [ebx+0D4h], edi
0x55046B: jz      short loc_550477
0x55046D: add     edi, 4
0x550470: push    edi; lpAddend
0x550471: call    dword ptr ds:0A28078h
0x550477: pop     edi
0x550478: pop     esi
0x550479: pop     ebx
0x55047A: retn    4
