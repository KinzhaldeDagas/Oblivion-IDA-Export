0x6A0300: push    esi
0x6A0301: mov     esi, ecx
0x6A0303: cmp     dword ptr [esi+18h], 0
0x6A0307: jnz     short loc_6A0329
0x6A0309: cmp     dword ptr [esi+1Ch], 0
0x6A030D: jz      short loc_6A0329
0x6A030F: cmp     dword ptr [esi+34h], 0
0x6A0313: jz      short loc_6A0329
0x6A0315: cmp     byte ptr [esi+28h], 0
0x6A0319: jnz     short loc_6A0329
0x6A031B: call    Magic_GetLifeDetectedShader
0x6A0320: cmp     [esi+34h], eax
0x6A0323: jz      short loc_6A0329
0x6A0325: mov     al, 1
0x6A0327: pop     esi
0x6A0328: retn
0x6A0329: xor     al, al
0x6A032B: pop     esi
0x6A032C: retn
