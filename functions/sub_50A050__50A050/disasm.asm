0x50A050: mov     ecx, ds:0B333C4h
0x50A056: cmp     byte ptr [ecx+588h], 0
0x50A05D: jz      loc_50A0FB
0x50A063: push    0
0x50A065: call    PlayerCharacter_GetPlayerNode
0x50A06A: test    byte ptr [eax+18h], 1
0x50A06E: jz      short loc_50A099
0x50A070: mov     eax, ds:0B333C4h
0x50A075: mov     byte ptr [eax+588h], 0
0x50A07C: cmp     byte ptr ds:0B361ACh, 0
0x50A083: jz      loc_50A118
0x50A089: push    offset aNormal1stPerso; "Normal 1st person mode."
0x50A08E: call    Interface_ConsolePrint
0x50A093: add     esp, 4
0x50A096: mov     al, 1
0x50A098: retn
0x50A099: mov     ecx, ds:0B333C4h
0x50A09F: push    1
0x50A0A1: call    PlayerCharacter_GetPlayerNode
0x50A0A6: test    byte ptr [eax+18h], 1
0x50A0AA: mov     ecx, ds:0B333C4h
0x50A0B0: push    1
0x50A0B2: jnz     short loc_50A0D7
0x50A0B4: call    PlayerCharacter_GetPlayerNode
0x50A0B9: or      word ptr [eax+18h], 1
0x50A0BE: cmp     byte ptr ds:0B361ACh, 0
0x50A0C5: jz      short loc_50A118
0x50A0C7: push    offset aNormal3rdPerso; "Normal 3rd person mode."
0x50A0CC: call    Interface_ConsolePrint
0x50A0D1: add     esp, 4
0x50A0D4: mov     al, 1
0x50A0D6: retn
0x50A0D7: call    PlayerCharacter_GetPlayerNode
0x50A0DC: and     word ptr [eax+18h], 0FFFEh
0x50A0E2: cmp     byte ptr ds:0B361ACh, 0
0x50A0E9: jz      short loc_50A118
0x50A0EB: push    offset aShowing1stAnd3; "Showing 1st and 3rd person models."
0x50A0F0: call    Interface_ConsolePrint
0x50A0F5: add     esp, 4
0x50A0F8: mov     al, 1
0x50A0FA: retn
0x50A0FB: mov     byte ptr [ecx+588h], 1
0x50A102: cmp     byte ptr ds:0B361ACh, 0
0x50A109: jz      short loc_50A118
0x50A10B: push    offset aShowing1stPers; "Showing 1st person model in 3rd person "...
0x50A110: call    Interface_ConsolePrint
0x50A115: add     esp, 4
0x50A118: mov     al, 1
0x50A11A: retn
