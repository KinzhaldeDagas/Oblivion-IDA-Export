0x803570: push    esi
0x803571: mov     esi, [esp+4+a2]
0x803575: test    esi, esi
0x803577: push    edi
0x803578: mov     edi, ecx
0x80357A: jz      short loc_8035EE
0x80357C: cmp     dword ptr [edi+10h], 0
0x803580: jnz     short loc_803587
0x803582: call    ImageSpaceShaderList__AssignScreenElements
0x803587: mov     ecx, [edi+10h]; this
0x80358A: push    esi; a2
0x80358B: call    sub_4EC910
0x803590: mov     ecx, [edi+10h]
0x803593: mov     eax, [esi]
0x803595: mov     edx, [eax+18h]
0x803598: push    ecx
0x803599: mov     ecx, esi
0x80359B: call    edx
0x80359D: mov     eax, [esi]
0x80359F: push    1
0x8035A1: lea     ecx, [esp+0Ch+arg_C]
0x8035A5: push    ecx
0x8035A6: mov     ecx, [edi+10h]
0x8035A9: lea     edx, [esp+10h+arg_8]
0x8035AD: push    edx
0x8035AE: mov     edx, [eax+0A8h]
0x8035B4: push    ecx
0x8035B5: mov     ecx, esi
0x8035B7: call    edx
0x8035B9: mov     edi, [edi+10h]
0x8035BC: mov     esi, [edi+0BCh]
0x8035C2: add     edi, 0BCh ; '¼'
0x8035C8: test    esi, esi
0x8035CA: jz      short loc_8035EE
0x8035CC: lea     eax, [esi+4]
0x8035CF: push    eax; lpAddend
0x8035D0: call    dword ptr ds:0A2807Ch
0x8035D6: test    eax, eax
0x8035D8: jnz     short loc_8035E8
0x8035DA: test    esi, esi
0x8035DC: jz      short loc_8035E8
0x8035DE: mov     edx, [esi]
0x8035E0: mov     eax, [edx]
0x8035E2: push    1
0x8035E4: mov     ecx, esi
0x8035E6: call    eax
0x8035E8: mov     dword ptr [edi], 0
0x8035EE: pop     edi
0x8035EF: pop     esi
0x8035F0: retn    10h
