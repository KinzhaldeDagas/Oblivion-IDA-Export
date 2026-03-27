0x645500: push    ebx
0x645501: push    esi
0x645502: push    edi
0x645503: mov     edi, ecx
0x645505: mov     eax, [edi+44h]
0x645508: test    eax, eax
0x64550A: jz      short loc_645524
0x64550C: mov     ecx, [eax]
0x64550E: cmp     ecx, [esp+0Ch+arg_0]
0x645512: jnz     short loc_645524
0x645514: push    eax
0x645515: call    FormHeapFree
0x64551A: add     esp, 4
0x64551D: mov     dword ptr [edi+44h], 0
0x645524: mov     eax, [edi+48h]
0x645527: test    eax, eax
0x645529: jz      short loc_645543
0x64552B: mov     edx, [esp+0Ch+arg_0]
0x64552F: cmp     [eax], edx
0x645531: jnz     short loc_645543
0x645533: push    eax
0x645534: call    FormHeapFree
0x645539: add     esp, 4
0x64553C: mov     dword ptr [edi+48h], 0
0x645543: lea     ebx, [edi+3Ch]
0x645546: mov     eax, ebx
0x645548: test    eax, eax
0x64554A: jz      short loc_64557A
0x64554C: lea     esp, [esp+0]
0x645550: mov     esi, [eax]
0x645552: test    esi, esi
0x645554: jz      short loc_64557A
0x645556: mov     ecx, [esp+0Ch+arg_0]
0x64555A: cmp     [esi], ecx
0x64555C: jnz     short loc_645573
0x64555E: push    esi
0x64555F: mov     ecx, ebx
0x645561: call    BSSimpleList_Remove
0x645566: push    esi
0x645567: call    FormHeapFree
0x64556C: add     esp, 4
0x64556F: mov     eax, ebx
0x645571: jmp     short loc_645576
0x645573: mov     eax, [eax+4]
0x645576: test    eax, eax
0x645578: jnz     short loc_645550
0x64557A: mov     edx, [esp+0Ch+arg_0]
0x64557E: cmp     [edi+30h], edx
0x645581: jnz     short loc_64558A
0x645583: mov     dword ptr [edi+30h], 0
0x64558A: lea     esi, [edi+4Ch]
0x64558D: xor     edi, edi
0x64558F: test    esi, esi
0x645591: jz      short loc_6455DD
0x645593: mov     eax, [esi]
0x645595: test    eax, eax
0x645597: jz      short loc_6455DD
0x645599: cmp     eax, [esp+0Ch+arg_0]
0x64559D: jnz     short loc_6455D4
0x64559F: test    edi, edi
0x6455A1: jz      short loc_6455B0
0x6455A3: push    eax
0x6455A4: mov     ecx, edi
0x6455A6: call    BSSimpleList_Remove
0x6455AB: mov     esi, [edi+4]
0x6455AE: jmp     short loc_6455D9
0x6455B0: mov     eax, [esi+4]
0x6455B3: test    eax, eax
0x6455B5: jz      short loc_6455CC
0x6455B7: mov     ecx, [eax+4]
0x6455BA: mov     [esi+4], ecx
0x6455BD: mov     edx, [eax]
0x6455BF: push    eax
0x6455C0: mov     [esi], edx
0x6455C2: call    FormHeapFree
0x6455C7: add     esp, 4
0x6455CA: jmp     short loc_6455D9
0x6455CC: mov     dword ptr [esi], 0
0x6455D2: jmp     short loc_6455D9
0x6455D4: mov     edi, esi
0x6455D6: mov     esi, [esi+4]
0x6455D9: test    esi, esi
0x6455DB: jnz     short loc_645593
0x6455DD: pop     edi
0x6455DE: pop     esi
0x6455DF: pop     ebx
0x6455E0: retn    4
