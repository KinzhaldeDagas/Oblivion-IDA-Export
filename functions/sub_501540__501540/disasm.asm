0x501540: push    ecx
0x501541: push    ebx
0x501542: push    esi
0x501543: push    edi
0x501544: push    offset aConsoleCommand; "----CONSOLE COMMANDS-------------------"...
0x501549: call    Interface_ConsolePrint
0x50154E: add     esp, 4
0x501551: xor     esi, esi
0x501553: mov     edi, ds:Script_ConsoleCommandList.helpText[esi]
0x501559: test    edi, edi
0x50155B: jz      short loc_5015BA
0x50155D: mov     eax, edi
0x50155F: lea     edx, [eax+1]
0x501562: mov     cl, [eax]
0x501564: add     eax, 1
0x501567: test    cl, cl
0x501569: jnz     short loc_501562
0x50156B: sub     eax, edx
0x50156D: jz      short loc_5015BA
0x50156F: mov     edx, ds:Script_ConsoleCommandList.shortName[esi]
0x501575: test    edx, edx
0x501577: jz      short loc_5015A5
0x501579: mov     eax, edx
0x50157B: lea     ebx, [eax+1]
0x50157E: mov     edi, edi
0x501580: mov     cl, [eax]
0x501582: add     eax, 1
0x501585: test    cl, cl
0x501587: jnz     short loc_501580
0x501589: sub     eax, ebx
0x50158B: jz      short loc_5015A5
0x50158D: mov     eax, dword ptr ds:Script_ConsoleCommandList.longName[esi]
0x501593: push    edi
0x501594: push    edx
0x501595: push    eax
0x501596: push    offset aSSS_5; "%s (%s) -> %s"
0x50159B: call    Interface_ConsolePrint
0x5015A0: add     esp, 10h
0x5015A3: jmp     short loc_5015BA
0x5015A5: mov     ecx, dword ptr ds:Script_ConsoleCommandList.longName[esi]
0x5015AB: push    edi
0x5015AC: push    ecx
0x5015AD: push    offset aSS_9; "%s -> %s"
0x5015B2: call    Interface_ConsolePrint
0x5015B7: add     esp, 0Ch
0x5015BA: add     esi, 28h ; '('
0x5015BD: cmp     esi, 1478h
0x5015C3: jb      short loc_501553
0x5015C5: push    offset aScriptFunction; "----SCRIPT FUNCTIONS-------------------"...
0x5015CA: call    Interface_ConsolePrint
0x5015CF: add     esp, 4
0x5015D2: xor     esi, esi
0x5015D4: mov     edi, ds:Script_CommandList?.helpText[esi]
0x5015DA: test    edi, edi
0x5015DC: jz      short loc_50163A
0x5015DE: mov     eax, edi
0x5015E0: lea     edx, [eax+1]
0x5015E3: mov     cl, [eax]
0x5015E5: add     eax, 1
0x5015E8: test    cl, cl
0x5015EA: jnz     short loc_5015E3
0x5015EC: sub     eax, edx
0x5015EE: jz      short loc_50163A
0x5015F0: mov     edx, ds:Script_CommandList?.shortName[esi]
0x5015F6: test    edx, edx
0x5015F8: jz      short loc_501625
0x5015FA: mov     eax, edx
0x5015FC: lea     ebx, [eax+1]
0x5015FF: nop
0x501600: mov     cl, [eax]
0x501602: add     eax, 1
0x501605: test    cl, cl
0x501607: jnz     short loc_501600
0x501609: sub     eax, ebx
0x50160B: jz      short loc_501625
0x50160D: push    edi
0x50160E: push    edx
0x50160F: mov     edx, dword ptr ds:Script_CommandList?.longName[esi]
0x501615: push    edx
0x501616: push    offset aSSS_5; "%s (%s) -> %s"
0x50161B: call    Interface_ConsolePrint
0x501620: add     esp, 10h
0x501623: jmp     short loc_50163A
0x501625: mov     eax, dword ptr ds:Script_CommandList?.longName[esi]
0x50162B: push    edi
0x50162C: push    eax
0x50162D: push    offset aSS_9; "%s -> %s"
0x501632: call    Interface_ConsolePrint
0x501637: add     esp, 0Ch
0x50163A: add     esi, 28h ; '('
0x50163D: cmp     esi, 39A8h
0x501643: jb      short loc_5015D4
0x501645: pop     edi
0x501646: pop     esi
0x501647: mov     al, 1
0x501649: pop     ebx
0x50164A: pop     ecx
0x50164B: retn
