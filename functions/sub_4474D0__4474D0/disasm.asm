0x4474D0: cmp     dword ptr [ecx+78h], 0
0x4474D4: push    ebx
0x4474D5: push    esi
0x4474D6: lea     esi, [ecx+74h]
0x4474D9: push    edi
0x4474DA: jnz     short loc_4474E1
0x4474DC: cmp     dword ptr [esi], 0
0x4474DF: jz      short loc_447517
0x4474E1: test    esi, esi
0x4474E3: jz      short loc_447517
0x4474E5: mov     ebx, [esp+0Ch+Str2]
0x4474E9: lea     esp, [esp+0]
0x4474F0: mov     edi, [esi]
0x4474F2: test    edi, edi
0x4474F4: jz      short loc_447510
0x4474F6: mov     eax, [edi]
0x4474F8: mov     edx, [eax+0D4h]
0x4474FE: push    ebx; Str2
0x4474FF: mov     ecx, edi
0x447501: call    edx
0x447503: push    eax; Str1
0x447504: call    __strcmp
0x447509: add     esp, 8
0x44750C: test    eax, eax
0x44750E: jz      short loc_44751F
0x447510: mov     esi, [esi+4]
0x447513: test    esi, esi
0x447515: jnz     short loc_4474F0
0x447517: pop     edi
0x447518: pop     esi
0x447519: xor     eax, eax
0x44751B: pop     ebx
0x44751C: retn    4
0x44751F: mov     eax, edi
0x447521: pop     edi
0x447522: pop     esi
0x447523: pop     ebx
0x447524: retn    4
