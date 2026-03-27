0x4477F0: cmp     dword ptr ds:0B33ABCh, 0
0x4477F7: push    ebx
0x4477F8: mov     ebx, [esp+4+arg_0]
0x4477FC: push    esi
0x4477FD: mov     esi, ecx
0x4477FF: jz      short loc_44784E
0x447801: mov     ecx, ebx; this
0x447803: call    TESForm_GetQuestItem
0x447808: test    al, al
0x44780A: jz      short loc_447825
0x44780C: mov     ecx, ds:0B33ABCh
0x447812: call    sub_4EF1E0
0x447817: cmp     eax, ebx
0x447819: jnz     short loc_44784E
0x44781B: mov     eax, ds:0B33ABCh
0x447820: pop     esi
0x447821: pop     ebx
0x447822: retn    4
0x447825: mov     ecx, ebx; this
0x447827: call    TESObjectCELL_GetYCoordinate
0x44782C: push    eax; signed int
0x44782D: mov     ecx, ebx; this
0x44782F: call    TESObjectCELL_GetXCoordinate
0x447834: mov     ecx, ds:0B33ABCh; this
0x44783A: push    eax; signed int
0x44783B: call    TESWorldSpace__GetCellAtCellCoord
0x447840: cmp     eax, ebx
0x447842: jnz     short loc_44784E
0x447844: mov     eax, ds:0B33ABCh
0x447849: pop     esi
0x44784A: pop     ebx
0x44784B: retn    4
0x44784E: push    edi
0x44784F: lea     edi, [esi+0Ch]
0x447852: test    edi, edi
0x447854: jz      short loc_447898
0x447856: mov     esi, [edi]
0x447858: test    esi, esi
0x44785A: mov     edi, [edi+4]
0x44785D: jz      short loc_447894
0x44785F: mov     ecx, ebx; this
0x447861: call    TESForm_GetQuestItem
0x447866: test    al, al
0x447868: mov     ds:0B33ABCh, esi
0x44786E: jz      short loc_447879
0x447870: mov     ecx, esi
0x447872: call    sub_4EF1E0
0x447877: jmp     short loc_447890
0x447879: mov     ecx, ebx; this
0x44787B: call    TESObjectCELL_GetYCoordinate
0x447880: push    eax; signed int
0x447881: mov     ecx, ebx; this
0x447883: call    TESObjectCELL_GetXCoordinate
0x447888: push    eax; signed int
0x447889: mov     ecx, esi; this
0x44788B: call    TESWorldSpace__GetCellAtCellCoord
0x447890: cmp     eax, ebx
0x447892: jz      short loc_4478A0
0x447894: test    edi, edi
0x447896: jnz     short loc_447856
0x447898: pop     edi
0x447899: pop     esi
0x44789A: xor     eax, eax
0x44789C: pop     ebx
0x44789D: retn    4
0x4478A0: pop     edi
0x4478A1: mov     eax, esi
0x4478A3: pop     esi
0x4478A4: pop     ebx
0x4478A5: retn    4
