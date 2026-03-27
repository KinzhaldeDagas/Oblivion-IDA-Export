0x441920: push    ebx
0x441921: push    esi
0x441922: mov     ebx, ecx
0x441924: mov     esi, [ebx+14h]
0x441927: push    edi
0x441928: mov     edi, [esp+0Ch+arg_0]
0x44192C: cmp     esi, edi
0x44192E: jz      short loc_441961
0x441930: test    esi, esi
0x441932: jz      short loc_441950
0x441934: lea     eax, [esi+4]
0x441937: push    eax; lpAddend
0x441938: call    dword ptr ds:0A2807Ch
0x44193E: test    eax, eax
0x441940: jnz     short loc_441950
0x441942: test    esi, esi
0x441944: jz      short loc_441950
0x441946: mov     edx, [esi]
0x441948: mov     eax, [edx]
0x44194A: push    1
0x44194C: mov     ecx, esi
0x44194E: call    eax
0x441950: test    edi, edi
0x441952: mov     [ebx+14h], edi
0x441955: jz      short loc_441961
0x441957: add     edi, 4
0x44195A: push    edi; lpAddend
0x44195B: call    dword ptr ds:0A28078h
0x441961: pop     edi
0x441962: pop     esi
0x441963: pop     ebx
0x441964: retn    4
