0x784FF0: push    ebx
0x784FF1: push    ebp
0x784FF2: push    esi
0x784FF3: mov     esi, [esp+0Ch+arg_0]
0x784FF7: xor     ebx, ebx
0x784FF9: cmp     [esi+2Dh], bl
0x784FFC: push    edi
0x784FFD: mov     ebp, ecx
0x784FFF: mov     edi, esi
0x785001: jnz     short loc_78503F
0x785003: mov     eax, [edi+8]
0x785006: push    eax
0x785007: mov     ecx, ebp
0x785009: call    sub_784FF0
0x78500E: cmp     dword ptr [esi+24h], 10h
0x785012: mov     edi, [edi]
0x785014: jb      short loc_785022
0x785016: mov     ecx, [esi+10h]
0x785019: push    ecx
0x78501A: call    FormHeapFree
0x78501F: add     esp, 4
0x785022: mov     dword ptr [esi+24h], 0Fh
0x785029: mov     [esi+20h], ebx
0x78502C: push    esi
0x78502D: mov     [esi+10h], bl
0x785030: call    FormHeapFree
0x785035: add     esp, 4
0x785038: cmp     [edi+2Dh], bl
0x78503B: mov     esi, edi
0x78503D: jz      short loc_785003
0x78503F: pop     edi
0x785040: pop     esi
0x785041: pop     ebp
0x785042: pop     ebx
0x785043: retn    4
