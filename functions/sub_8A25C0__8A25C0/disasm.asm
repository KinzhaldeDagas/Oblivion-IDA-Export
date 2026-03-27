0x8A25C0: mov     eax, [esp+arg_0]
0x8A25C4: push    esi
0x8A25C5: push    eax
0x8A25C6: mov     esi, ecx
0x8A25C8: call    sub_89D650
0x8A25CD: mov     edx, [esi]
0x8A25CF: mov     edx, [edx+74h]
0x8A25D2: lea     eax, [esp+4+arg_0]
0x8A25D6: push    eax
0x8A25D7: mov     ecx, esi
0x8A25D9: call    edx
0x8A25DB: test    eax, eax
0x8A25DD: jz      short loc_8A25F5
0x8A25DF: cmp     dword ptr [eax], 1Fh
0x8A25E2: jl      short loc_8A25EA
0x8A25E4: mov     dword ptr [eax], 0
0x8A25EA: mov     ecx, [eax]
0x8A25EC: mov     [esi+10h], ecx
0x8A25EF: mov     dword ptr [eax], 0
0x8A25F5: pop     esi
0x8A25F6: retn    4
