0x459950: push    esi
0x459951: mov     esi, [esp+4+arg_0]
0x459955: push    edi
0x459956: mov     edi, ecx
0x459958: mov     ecx, ds:0B33A98h
0x45995E: push    esi; _DWORD
0x45995F: call    TESDataHandler_IsFormIDCreated?
0x459964: test    al, al
0x459966: jz      short loc_45996F
0x459968: pop     edi
0x459969: mov     eax, esi
0x45996B: pop     esi
0x45996C: retn    4
0x45996F: mov     eax, [edi+74h]
0x459972: cmp     esi, [eax+0Ch]
0x459975: jbe     short loc_45997E
0x459977: pop     edi
0x459978: xor     eax, eax
0x45997A: pop     esi
0x45997B: retn    4
0x45997E: mov     eax, [eax+4]
0x459981: mov     eax, [eax+esi*4]
0x459984: pop     edi
0x459985: pop     esi
0x459986: retn    4
