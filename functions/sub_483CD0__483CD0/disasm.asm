0x483CD0: push    ecx
0x483CD1: mov     eax, ds:0B06A2Ch
0x483CD6: push    ebx
0x483CD7: mov     ebx, ds:0B06A90h
0x483CDD: push    ebp
0x483CDE: push    esi
0x483CDF: mov     esi, ebx
0x483CE1: mov     ebp, ecx
0x483CE3: lea     ecx, [eax+ebx]
0x483CE6: cmp     esi, ecx
0x483CE8: push    edi
0x483CE9: mov     [esp+14h+var_4], esi
0x483CED: mov     edi, esi
0x483CEF: jnb     short loc_483D4E
0x483CF1: jmp     short loc_483CF7
0x483CF3: mov     esi, [esp+14h+var_4]
0x483CF7: mov     eax, [ebp+0Ch]
0x483CFA: imul    eax, edi
0x483CFD: add     eax, esi
0x483CFF: shl     eax, 4
0x483D02: add     eax, [ebp+10h]
0x483D05: jz      short loc_483D40
0x483D07: mov     eax, [eax+4]
0x483D0A: test    eax, eax
0x483D0C: jz      short loc_483D40
0x483D0E: cmp     edi, ebx
0x483D10: jb      short loc_483D40
0x483D12: mov     edx, ds:0B06A2Ch
0x483D18: add     edx, ebx
0x483D1A: cmp     edi, edx
0x483D1C: jnb     short loc_483D40
0x483D1E: cmp     esi, ebx
0x483D20: jb      short loc_483D40
0x483D22: cmp     esi, edx
0x483D24: jnb     short loc_483D40
0x483D26: cmp     [esp+14h+arg_0], 0
0x483D2B: jz      short loc_483D34
0x483D2D: or      word ptr [eax+18h], 1
0x483D32: jmp     short loc_483D3A
0x483D34: and     word ptr [eax+18h], 0FFFEh
0x483D3A: mov     ebx, ds:0B06A90h
0x483D40: add     esi, 1
0x483D43: cmp     esi, ecx
0x483D45: jb      short loc_483CF7
0x483D47: add     edi, 1
0x483D4A: cmp     edi, ecx
0x483D4C: jb      short loc_483CF3
0x483D4E: pop     edi
0x483D4F: pop     esi
0x483D50: pop     ebp
0x483D51: pop     ebx
0x483D52: pop     ecx
0x483D53: retn    4
