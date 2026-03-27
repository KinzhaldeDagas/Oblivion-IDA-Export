0x77F7E0: mov     eax, [esp+arg_0]
0x77F7E4: test    eax, eax
0x77F7E6: mov     ds:0B428C4h, eax
0x77F7EB: jz      short loc_77F819
0x77F7ED: push    esi
0x77F7EE: mov     esi, [eax+280h]
0x77F7F4: mov     eax, ds:0B428C0h
0x77F7F9: test    eax, eax
0x77F7FB: jz      short loc_77F805
0x77F7FD: mov     ecx, [eax]
0x77F7FF: mov     edx, [ecx+8]
0x77F802: push    eax
0x77F803: call    edx
0x77F805: test    esi, esi
0x77F807: mov     ds:0B428C0h, esi
0x77F80D: jz      short loc_77F817
0x77F80F: mov     eax, [esi]
0x77F811: mov     ecx, [eax+4]
0x77F814: push    esi
0x77F815: call    ecx
0x77F817: pop     esi
0x77F818: retn
0x77F819: mov     eax, ds:0B428C0h
0x77F81E: test    eax, eax
0x77F820: jz      short loc_77F82A
0x77F822: mov     edx, [eax]
0x77F824: push    eax
0x77F825: mov     eax, [edx+8]
0x77F828: call    eax
0x77F82A: mov     dword ptr ds:0B428C0h, 0
0x77F834: retn
