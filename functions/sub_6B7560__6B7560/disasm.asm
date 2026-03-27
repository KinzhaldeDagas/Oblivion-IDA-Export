0x6B7560: mov     eax, ecx
0x6B7562: xor     edx, edx
0x6B7564: test    eax, eax
0x6B7566: push    esi; ArgList
0x6B7567: jz      short loc_6B7589
0x6B7569: mov     si, [esp+4+arg_0]
0x6B756E: mov     edi, edi
0x6B7570: mov     ecx, [eax+4]
0x6B7573: test    ecx, ecx
0x6B7575: jnz     short loc_6B757B
0x6B7577: cmp     [eax], ecx
0x6B7579: jz      short loc_6B7589
0x6B757B: cmp     dx, si
0x6B757E: jz      short loc_6B759C
0x6B7580: mov     eax, ecx
0x6B7582: add     edx, 1
0x6B7585: test    eax, eax
0x6B7587: jnz     short loc_6B7570
0x6B7589: push    offset aWhenTryingToGe; "When trying to get a dialogue item by i"...
0x6B758E: call    PrintError
0x6B7593: add     esp, 4
0x6B7596: xor     eax, eax
0x6B7598: pop     esi
0x6B7599: retn    4
0x6B759C: mov     eax, [eax]
0x6B759E: pop     esi
0x6B759F: retn    4
