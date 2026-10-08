0x787400: push    0FFFFFFFFh; 2026-05-24 SpeedTreeOBSE stock post-load pass: stock shadow projection parser for top-level 18000. Allocates 0x40-byte object at CSpeedTreeRT+0x50 and delegates parse to 0x7A5530. Preserve stock-safe family bytes; no later-family sidecar storage is implied.
0x787402: push    offset SEH_8C62B0
0x787407: mov     eax, large fs:0
0x78740D: push    eax
0x78740E: push    ecx
0x78740F: push    esi
0x787410: mov     eax, ds:0B30AACh
0x787415: xor     eax, esp
0x787417: push    eax
0x787418: lea     eax, [esp+18h+var_C]
0x78741C: mov     large fs:0, eax
0x787422: mov     esi, ecx
0x787424: push    40h ; '@'; Size
0x787426: call    FormHeapAlloc
0x78742B: add     esp, 4
0x78742E: mov     [esp+18h+var_10], eax
0x787432: test    eax, eax
0x787434: mov     [esp+18h+var_4], 0
0x78743C: jz      short loc_787447
0x78743E: mov     ecx, eax; this
0x787440: call    OB_CProjectedShadow_ctor_010201A0; CProjectedShadow constructor: zeros right/up/out vectors and initializes the embedded 28-byte SpeedTree string for the shadow-map filename.
0x787445: jmp     short loc_787449
0x787447: xor     eax, eax
0x787449: mov     ecx, [esp+18h+file]
0x78744D: push    ecx; file
0x78744E: mov     ecx, eax; this
0x787450: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x787458: mov     [esi+50h], eax
0x78745B: call    OB_CProjectedShadow_Parse_010201A0; Parses Oblivion shadow tokens: 18002 right, 18003 up, 18004 out, 18005 basename-only map filename, terminated by 18001.
0x787460: mov     ecx, [esp+18h+var_C]
0x787464: mov     large fs:0, ecx
0x78746B: pop     ecx
0x78746C: pop     esi
0x78746D: add     esp, 10h
0x787470: retn    4
0x9D62E0: mov     eax, [ebp-10h]
0x9D62E3: push    eax
0x9D62E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D62E9: pop     ecx
0x9D62EA: retn
0x9D62EB: mov     edx, [esp+arg_4]
0x9D62EF: lea     eax, [edx-8]
0x9D62F2: mov     ecx, [edx-0Ch]
0x9D62F5: xor     ecx, eax
0x9D62F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D62FC: mov     eax, offset stru_AFE21C
0x9D6301: jmp     ___CxxFrameHandler3
