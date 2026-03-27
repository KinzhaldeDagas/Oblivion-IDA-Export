0x478350: push    ebx
0x478351: push    esi
0x478352: mov     ebx, ecx
0x478354: mov     esi, [ebx+0B8h]
0x47835A: push    edi
0x47835B: mov     edi, [esp+0Ch+arg_0]
0x47835F: cmp     esi, edi
0x478361: jz      short loc_478397
0x478363: test    esi, esi
0x478365: jz      short loc_478383
0x478367: lea     eax, [esi+4]
0x47836A: push    eax; lpAddend
0x47836B: call    dword ptr ds:0A2807Ch
0x478371: test    eax, eax
0x478373: jnz     short loc_478383
0x478375: test    esi, esi
0x478377: jz      short loc_478383
0x478379: mov     edx, [esi]
0x47837B: mov     eax, [edx]
0x47837D: push    1
0x47837F: mov     ecx, esi
0x478381: call    eax
0x478383: test    edi, edi
0x478385: mov     [ebx+0B8h], edi
0x47838B: jz      short loc_478397
0x47838D: add     edi, 4
0x478390: push    edi; lpAddend
0x478391: call    dword ptr ds:0A28078h
0x478397: pop     edi
0x478398: pop     esi
0x478399: pop     ebx
0x47839A: retn    4
