0x497B50: push    ebx; ArgList
0x497B51: mov     ebx, [esp+4+arg_0]
0x497B55: push    ebx
0x497B56: call    sub_7B8530
0x497B5B: mov     eax, ds:0B350D8h
0x497B60: add     esp, 4
0x497B63: test    bl, bl
0x497B65: jz      short loc_497BB1
0x497B67: test    eax, eax
0x497B69: jz      short loc_497BDF
0x497B6B: cmp     dword ptr [eax+4], 1
0x497B6F: jz      short loc_497BB1
0x497B71: mov     bl, ds:0B34D84h
0x497B77: mov     byte ptr ds:0B34D84h, 0
0x497B7E: mov     eax, [eax+4]
0x497B81: cmp     eax, 2
0x497B84: jnz     short loc_497B95
0x497B86: push    offset aThereIs1Object; "There is 1 object with a smart pointer "...
0x497B8B: call    PrintError
0x497B90: add     esp, 4
0x497B93: jmp     short loc_497BA6
0x497B95: add     eax, 0FFFFFFFFh
0x497B98: push    eax; ArgList
0x497B99: push    offset aThereAreDObjec; "There are %d objects with smart pointer"...
0x497B9E: call    PrintError
0x497BA3: add     esp, 8
0x497BA6: mov     eax, ds:0B350D8h
0x497BAB: mov     ds:0B34D84h, bl
0x497BB1: test    eax, eax
0x497BB3: jz      short loc_497BDF
0x497BB5: push    esi
0x497BB6: mov     esi, eax
0x497BB8: add     eax, 4
0x497BBB: push    eax; lpAddend
0x497BBC: call    dword ptr ds:0A2807Ch
0x497BC2: test    eax, eax
0x497BC4: jnz     short loc_497BD4
0x497BC6: test    esi, esi
0x497BC8: jz      short loc_497BD4
0x497BCA: mov     eax, [esi]
0x497BCC: mov     edx, [eax]
0x497BCE: push    1
0x497BD0: mov     ecx, esi
0x497BD2: call    edx
0x497BD4: mov     dword ptr ds:0B350D8h, 0
0x497BDE: pop     esi
0x497BDF: pop     ebx
0x497BE0: retn
