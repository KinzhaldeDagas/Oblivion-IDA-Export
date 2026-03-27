0x4A5960: mov     eax, [esp+arg_0]
0x4A5964: push    ebx
0x4A5965: mov     bl, ds:0B06B18h
0x4A596B: push    esi
0x4A596C: mov     esi, ds:0B34D88h
0x4A5972: push    edi
0x4A5973: mov     edi, [esp+0Ch+arg_4]
0x4A5977: push    edi
0x4A5978: push    eax
0x4A5979: add     ecx, 8
0x4A597C: push    ecx
0x4A597D: mov     byte ptr ds:0B06B18h, 1
0x4A5984: call    sub_4EEDD0
0x4A5989: add     esp, 0Ch
0x4A598C: cmp     ds:0B34D88h, esi
0x4A5992: mov     ds:0B06B18h, bl
0x4A5998: jle     short loc_4A59B8
0x4A599A: test    edi, edi
0x4A599C: jz      short loc_4A59B8
0x4A599E: mov     edx, [edi]
0x4A59A0: mov     eax, [edx+0D4h]
0x4A59A6: mov     ecx, edi
0x4A59A8: call    eax
0x4A59AA: push    eax; ArgList
0x4A59AB: push    offset aWarningsWere_2; "Warnings were encountered while loading"...
0x4A59B0: call    PrintError
0x4A59B5: add     esp, 8
0x4A59B8: pop     edi
0x4A59B9: pop     esi
0x4A59BA: pop     ebx
0x4A59BB: retn    8
