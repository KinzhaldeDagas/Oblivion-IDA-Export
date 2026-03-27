0x5A4510: cmp     dword ptr ds:0B3B338h, 0
0x5A4517: jnz     short loc_5A4526
0x5A4519: cmp     dword ptr ds:0B3B334h, 0
0x5A4520: jz      loc_5A4656
0x5A4526: push    0
0x5A4528: push    3F1h
0x5A452D: call    sub_5790E0
0x5A4532: add     esp, 8
0x5A4535: test    al, al
0x5A4537: jz      short loc_5A4557
0x5A4539: push    3F1h
0x5A453E: call    Menu_GetOpenMenuTile
0x5A4543: add     esp, 4
0x5A4546: mov     ecx, eax
0x5A4548: call    Tile_GetParentMenu
0x5A454D: cmp     dword ptr [eax+24h], 1
0x5A4551: jz      loc_5A4656
0x5A4557: mov     eax, ds:0B3B338h
0x5A455C: test    eax, eax
0x5A455E: push    esi
0x5A455F: mov     esi, ds:0B3B334h
0x5A4565: jz      short loc_5A4583
0x5A4567: mov     ecx, [eax+4]
0x5A456A: mov     ds:0B3B338h, ecx
0x5A4570: mov     edx, [eax]
0x5A4572: push    eax
0x5A4573: mov     ds:0B3B334h, edx
0x5A4579: call    FormHeapFree
0x5A457E: add     esp, 4
0x5A4581: jmp     short loc_5A458D
0x5A4583: mov     dword ptr ds:0B3B334h, 0
0x5A458D: push    0
0x5A458F: lea     eax, [esi+290h]
0x5A4595: push    eax
0x5A4596: lea     ecx, [esi+274h]
0x5A459C: push    ecx
0x5A459D: lea     edx, [esi+258h]
0x5A45A3: push    edx
0x5A45A4: lea     eax, [esi+23Ch]
0x5A45AA: push    eax
0x5A45AB: lea     ecx, [esi+220h]
0x5A45B1: push    ecx
0x5A45B2: lea     edx, [esi+204h]
0x5A45B8: push    edx
0x5A45B9: lea     eax, [esi+1E8h]
0x5A45BF: push    eax
0x5A45C0: lea     ecx, [esi+1CCh]
0x5A45C6: push    ecx
0x5A45C7: lea     edx, [esi+1B0h]
0x5A45CD: push    edx
0x5A45CE: lea     eax, [esi+194h]
0x5A45D4: push    eax
0x5A45D5: lea     ecx, [esi+178h]
0x5A45DB: push    ecx
0x5A45DC: lea     edx, [esi+15Ch]
0x5A45E2: push    edx
0x5A45E3: lea     eax, [esi+140h]
0x5A45E9: push    eax
0x5A45EA: lea     ecx, [esi+124h]
0x5A45F0: push    ecx
0x5A45F1: lea     edx, [esi+108h]
0x5A45F7: push    edx
0x5A45F8: lea     eax, [esi+0ECh]
0x5A45FE: push    eax
0x5A45FF: lea     ecx, [esi+0D0h]
0x5A4605: push    ecx
0x5A4606: lea     edx, [esi+0B4h]
0x5A460C: push    edx
0x5A460D: lea     eax, [esi+98h]
0x5A4613: push    eax
0x5A4614: mov     eax, [esi+2ACh]
0x5A461A: lea     ecx, [esi+7Ch]
0x5A461D: push    ecx
0x5A461E: mov     ecx, [esi+8]
0x5A4621: lea     edx, [esi+60h]
0x5A4624: push    edx
0x5A4625: mov     edx, [esi]
0x5A4627: push    4
0x5A4629: push    eax
0x5A462A: push    0
0x5A462C: push    ecx
0x5A462D: push    edx
0x5A462E: call    sub_5A44E0
0x5A4633: add     esp, 6Ch
0x5A4636: push    0
0x5A4638: push    0FDDh
0x5A463D: push    0
0x5A463F: push    1; arg1
0x5A4641: push    0; canCreate
0x5A4643: call    InterfaceManager_GetSingleton
0x5A4648: add     esp, 8
0x5A464B: mov     ecx, eax
0x5A464D: call    sub_57F9F0
0x5A4652: mov     al, 1
0x5A4654: pop     esi
0x5A4655: retn
0x5A4656: xor     al, al
0x5A4658: retn
