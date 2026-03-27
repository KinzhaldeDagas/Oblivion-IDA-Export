0x5BE400: push    ebx
0x5BE401: mov     ebx, ecx
0x5BE403: mov     ecx, [esp+4+arg_0]
0x5BE407: xor     eax, eax
0x5BE409: cmp     ecx, 6; switch 7 cases
0x5BE40C: push    edi
0x5BE40D: ja      def_5BE413; jumptable 005BE413 default case, case 4
0x5BE413: jmp     ds:jpt_5BE413[ecx*4]; switch jump
0x5BE41A: mov     ecx, [esp+8+arg_4]; jumptable 005BE413 case 0
0x5BE41E: cmp     ecx, 1
0x5BE421: jnz     short loc_5BE42A
0x5BE423: push    14h
0x5BE425: jmp     loc_5BE4CD
0x5BE42A: cmp     ecx, 2
0x5BE42D: jnz     short loc_5BE436
0x5BE42F: push    15h
0x5BE431: jmp     loc_5BE4CD
0x5BE436: cmp     ecx, 3
0x5BE439: jnz     short loc_5BE442
0x5BE43B: push    17h
0x5BE43D: jmp     loc_5BE4CD
0x5BE442: cmp     ecx, 4
0x5BE445: jnz     def_5BE413; jumptable 005BE413 default case, case 4
0x5BE44B: push    16h
0x5BE44D: jmp     short loc_5BE4CD
0x5BE44F: mov     ecx, [esp+8+arg_4]; jumptable 005BE413 case 1
0x5BE453: cmp     ecx, 1
0x5BE456: jnz     short loc_5BE45C
0x5BE458: push    20h ; ' '
0x5BE45A: jmp     short loc_5BE4CD
0x5BE45C: cmp     ecx, 2
0x5BE45F: jnz     short loc_5BE465
0x5BE461: push    21h ; '!'
0x5BE463: jmp     short loc_5BE4CD
0x5BE465: cmp     ecx, 3
0x5BE468: jnz     short loc_5BE46E
0x5BE46A: push    23h ; '#'
0x5BE46C: jmp     short loc_5BE4CD
0x5BE46E: cmp     ecx, 4
0x5BE471: jnz     short def_5BE413; jumptable 005BE413 default case, case 4
0x5BE473: push    22h ; '"'
0x5BE475: jmp     short loc_5BE4CD
0x5BE477: mov     ecx, [esp+8+arg_4]; jumptable 005BE413 case 2
0x5BE47B: cmp     ecx, 1
0x5BE47E: jnz     short loc_5BE484
0x5BE480: push    18h
0x5BE482: jmp     short loc_5BE4CD
0x5BE484: cmp     ecx, 2
0x5BE487: jnz     short loc_5BE48D
0x5BE489: push    19h
0x5BE48B: jmp     short loc_5BE4CD
0x5BE48D: cmp     ecx, 3
0x5BE490: jnz     short loc_5BE496
0x5BE492: push    1Bh
0x5BE494: jmp     short loc_5BE4CD
0x5BE496: cmp     ecx, 4
0x5BE499: jnz     short def_5BE413; jumptable 005BE413 default case, case 4
0x5BE49B: push    1Ah
0x5BE49D: jmp     short loc_5BE4CD
0x5BE49F: mov     ecx, [esp+8+arg_4]; jumptable 005BE413 case 3
0x5BE4A3: cmp     ecx, 1
0x5BE4A6: jnz     short loc_5BE4AC
0x5BE4A8: push    1Ch
0x5BE4AA: jmp     short loc_5BE4CD
0x5BE4AC: cmp     ecx, 2
0x5BE4AF: jnz     short loc_5BE4B5
0x5BE4B1: push    1Dh
0x5BE4B3: jmp     short loc_5BE4CD
0x5BE4B5: cmp     ecx, 3
0x5BE4B8: jnz     short loc_5BE4BE
0x5BE4BA: push    1Fh
0x5BE4BC: jmp     short loc_5BE4CD
0x5BE4BE: cmp     ecx, 4
0x5BE4C1: jnz     short def_5BE413; jumptable 005BE413 default case, case 4
0x5BE4C3: push    1Eh
0x5BE4C5: jmp     short loc_5BE4CD
0x5BE4C7: push    24h ; '$'; jumptable 005BE413 case 5
0x5BE4C9: jmp     short loc_5BE4CD
0x5BE4CB: push    25h ; '%'; jumptable 005BE413 case 6
0x5BE4CD: push    3
0x5BE4CF: call    TESTopic__GEtTopic
0x5BE4D4: add     esp, 8
0x5BE4D7: mov     ecx, ds:0B333C4h; jumptable 005BE413 default case, case 4
0x5BE4DD: mov     edx, [ebx+0D8h]
0x5BE4E3: push    0
0x5BE4E5: push    0
0x5BE4E7: push    ecx
0x5BE4E8: push    edx
0x5BE4E9: mov     ecx, eax
0x5BE4EB: call    TESTopic__CreateDialogueInfo
0x5BE4F0: mov     edi, eax
0x5BE4F2: test    edi, edi
0x5BE4F4: jz      loc_5BE590
0x5BE4FA: push    esi
0x5BE4FB: mov     ecx, edi
0x5BE4FD: call    sub_6B7BA0
0x5BE502: mov     ecx, edi
0x5BE504: call    sub_6B7C20
0x5BE509: mov     esi, eax
0x5BE50B: test    esi, esi
0x5BE50D: jz      short loc_5BE57F
0x5BE50F: mov     ecx, [ebx+0D8h]
0x5BE515: call    sub_5E12B0
0x5BE51A: mov     byte ptr [eax+1DBh], 0
0x5BE521: mov     eax, [ebx+0D8h]
0x5BE527: mov     dword ptr [eax+70h], 7
0x5BE52E: fld     dword ptr ds:0B33E9Ch
0x5BE534: mov     ecx, [ebx+0D8h]
0x5BE53A: mov     edx, [ecx]
0x5BE53C: mov     eax, [edx+304h]
0x5BE542: push    esi
0x5BE543: push    ecx
0x5BE544: fstp    [esp+14h+var_14]
0x5BE547: call    eax
0x5BE549: cmp     byte ptr ds:0B13200h, 0
0x5BE550: jz      short loc_5BE57F
0x5BE552: mov     ecx, [ebx+0D8h]
0x5BE558: fld     dword ptr ds:0A30634h
0x5BE55E: mov     ecx, [ecx+58h]
0x5BE561: mov     edx, [ecx]
0x5BE563: mov     eax, [edx+33Ch]
0x5BE569: mov     esi, [esi]
0x5BE56B: push    ecx
0x5BE56C: fstp    [esp+10h+duration]; duration
0x5BE56F: push    0; unk2
0x5BE571: push    0
0x5BE573: call    eax
0x5BE575: push    eax; unk1
0x5BE576: push    esi; string
0x5BE577: call    GameUI_QueueMessage
0x5BE57C: add     esp, 10h
0x5BE57F: mov     ecx, edi
0x5BE581: call    sub_6B81D0
0x5BE586: push    edi
0x5BE587: call    FormHeapFree
0x5BE58C: add     esp, 4
0x5BE58F: pop     esi
0x5BE590: pop     edi
0x5BE591: pop     ebx
0x5BE592: retn    8
