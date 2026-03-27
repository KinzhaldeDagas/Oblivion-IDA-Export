0x7D71C0: mov     ecx, ds:0B3F928h
0x7D71C6: cmp     dword ptr [ecx+200h], 0
0x7D71CD: push    esi
0x7D71CE: lea     esi, [ecx+200h]
0x7D71D4: jnz     short loc_7D71F3
0x7D71D6: cmp     dword ptr [ecx+204h], 0
0x7D71DD: jnz     short loc_7D71F3
0x7D71DF: mov     eax, [ecx]
0x7D71E1: mov     edx, [eax+130h]
0x7D71E7: call    edx
0x7D71E9: test    al, al
0x7D71EB: jz      short loc_7D71F3
0x7D71ED: mov     dword ptr [esi], 1
0x7D71F3: mov     eax, [esp+4+clearFlags]
0x7D71F7: mov     ecx, [esp+4+a1]
0x7D71FB: push    eax; clearFlags
0x7D71FC: push    ecx; a1
0x7D71FD: call    StartUsingRenderTarget
0x7D7202: add     esp, 8
0x7D7205: pop     esi
0x7D7206: retn
