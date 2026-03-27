0x60E3D0: push    ecx
0x60E3D1: push    ebx
0x60E3D2: push    ebp
0x60E3D3: push    esi
0x60E3D4: xor     ebx, ebx
0x60E3D6: push    edi
0x60E3D7: mov     ebp, ecx
0x60E3D9: mov     [esp+14h+var_4], ebx
0x60E3DD: mov     esi, 0Ch
0x60E3E2: push    0; a2
0x60E3E4: mov     ecx, ebp; this
0x60E3E6: call    Actor_GetActorBaseForm
0x60E3EB: mov     edx, [eax]
0x60E3ED: mov     ecx, eax
0x60E3EF: mov     eax, [edx+128h]
0x60E3F5: push    esi
0x60E3F6: call    eax
0x60E3F8: mov     edi, eax
0x60E3FA: cmp     edi, ebx
0x60E3FC: jle     short loc_60E41B
0x60E3FE: push    esi
0x60E3FF: push    2
0x60E401: call    ActorValue_GetGroupOffsetFromAV
0x60E406: mov     ecx, ds:0B33A98h
0x60E40C: add     esp, 8
0x60E40F: push    eax
0x60E410: call    TESDataHandler_GetTESSkillByCode
0x60E415: mov     [esp+14h+var_4], eax
0x60E419: mov     ebx, edi
0x60E41B: add     esi, 1
0x60E41E: cmp     esi, 21h ; '!'
0x60E421: jle     short loc_60E3E2
0x60E423: mov     eax, [esp+14h+var_4]
0x60E427: pop     edi
0x60E428: pop     esi
0x60E429: pop     ebp
0x60E42A: pop     ebx
0x60E42B: pop     ecx
0x60E42C: retn
