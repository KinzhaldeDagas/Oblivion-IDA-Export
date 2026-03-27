0x897510: mov     eax, ds:0BA7A8Ch
0x897515: cmp     eax, 3
0x897518: push    esi
0x897519: mov     esi, ecx
0x89751B: jz      short loc_897545
0x89751D: mov     cl, [esi+0Ch]
0x897520: shr     cl, 6
0x897523: test    cl, 1
0x897526: jz      short loc_897547
0x897528: cmp     eax, 2
0x89752B: jz      short loc_897545
0x89752D: mov     edx, [esi]
0x89752F: mov     eax, [edx+6Ch]
0x897532: mov     ecx, esi
0x897534: call    eax
0x897536: mov     edx, [esi]
0x897538: mov     eax, [edx+68h]
0x89753B: mov     ecx, esi
0x89753D: call    eax
0x89753F: and     word ptr [esi+0Ch], 0FFBFh
0x897545: pop     esi
0x897546: retn
0x897547: test    byte ptr [esi+0Ch], 1
0x89754B: jz      short loc_897545
0x89754D: mov     edx, [esi]
0x89754F: mov     eax, [edx+74h]
0x897552: mov     ecx, esi
0x897554: call    eax
0x897556: test    al, al
0x897558: jz      short loc_89756D
0x89755A: cmp     dword ptr ds:0BA7A8Ch, 2
0x897561: jz      short loc_897545
0x897563: mov     edx, [esi]
0x897565: mov     eax, [edx+68h]
0x897568: mov     ecx, esi
0x89756A: pop     esi
0x89756B: jmp     eax
0x89756D: cmp     dword ptr ds:0BA7A8Ch, 1
0x897574: jz      short loc_897545
0x897576: mov     edx, [esi]
0x897578: mov     eax, [edx+64h]
0x89757B: mov     ecx, esi
0x89757D: pop     esi
0x89757E: jmp     eax
