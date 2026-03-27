0x788630: mov     edx, [esp+arg_0]
0x788634: mov     eax, [esp+arg_8]
0x788638: push    ebx
0x788639: mov     ebx, [esp+4+arg_4]
0x78863D: cmp     edx, ebx
0x78863F: jz      short loc_78865E
0x788641: push    esi
0x788642: push    edi
0x788643: test    eax, eax
0x788645: jz      short loc_788652
0x788647: mov     ecx, 7
0x78864C: mov     esi, edx
0x78864E: mov     edi, eax
0x788650: rep movsd
0x788652: add     edx, 1Ch
0x788655: add     eax, 1Ch
0x788658: cmp     edx, ebx
0x78865A: jnz     short loc_788643
0x78865C: pop     edi
0x78865D: pop     esi
0x78865E: pop     ebx
0x78865F: retn
