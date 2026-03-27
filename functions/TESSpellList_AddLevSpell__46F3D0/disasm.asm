0x46F3D0: push    esi
0x46F3D1: push    edi
0x46F3D2: mov     edi, [esp+8+arg_0]
0x46F3D6: test    edi, edi
0x46F3D8: mov     esi, ecx
0x46F3DA: jnz     short loc_46F3E3
0x46F3DC: pop     edi
0x46F3DD: xor     al, al
0x46F3DF: pop     esi
0x46F3E0: retn    4
0x46F3E3: mov     ecx, ds:0B333C4h; this
0x46F3E9: push    0; a2
0x46F3EB: call    Actor_GetActorBaseForm
0x46F3F0: test    eax, eax
0x46F3F2: jz      short loc_46F3F9
0x46F3F4: add     eax, 54h ; 'T'
0x46F3F7: jmp     short loc_46F3FB
0x46F3F9: xor     eax, eax
0x46F3FB: cmp     esi, eax
0x46F3FD: jz      short loc_46F3DC
0x46F3FF: lea     ecx, [esi+0Ch]
0x46F402: mov     eax, ecx
0x46F404: test    eax, eax
0x46F406: jz      short loc_46F413
0x46F408: cmp     [eax], edi
0x46F40A: jz      short loc_46F3DC
0x46F40C: mov     eax, [eax+4]
0x46F40F: test    eax, eax
0x46F411: jnz     short loc_46F408
0x46F413: push    edi
0x46F414: call    BSSimpleList_PushFront
0x46F419: pop     edi
0x46F41A: mov     al, 1
0x46F41C: pop     esi
0x46F41D: retn    4
