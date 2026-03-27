0x6F7490: mov     eax, [ecx+20h]
0x6F7493: mov     eax, [eax]
0x6F7495: test    eax, eax
0x6F7497: push    ebx
0x6F7498: mov     ebx, [esp+4+arg_0]
0x6F749C: jz      short loc_6F74CD
0x6F749E: mov     edx, [ecx+10h]
0x6F74A1: cmp     [edx], eax
0x6F74A3: jnb     short loc_6F74CD
0x6F74A5: cmp     ebx, 0FFFFFFFFh
0x6F74A8: jz      short loc_6F74B2
0x6F74AA: movzx   eax, byte ptr [eax-1]
0x6F74AE: cmp     eax, ebx
0x6F74B0: jnz     short loc_6F74CD
0x6F74B2: mov     eax, [ecx+30h]
0x6F74B5: add     dword ptr [eax], 1
0x6F74B8: mov     ecx, [ecx+20h]
0x6F74BB: add     dword ptr [ecx], 0FFFFFFFFh
0x6F74BE: mov     eax, ebx
0x6F74C0: sub     eax, 0FFFFFFFFh
0x6F74C3: neg     eax
0x6F74C5: sbb     eax, eax
0x6F74C7: and     eax, ebx
0x6F74C9: pop     ebx
0x6F74CA: retn    4
0x6F74CD: mov     eax, [ecx+4Ch]
0x6F74D0: test    eax, eax
0x6F74D2: jz      short loc_6F74F7
0x6F74D4: cmp     ebx, 0FFFFFFFFh
0x6F74D7: jz      short loc_6F74F7
0x6F74D9: cmp     dword ptr [ecx+3Ch], 0
0x6F74DD: jnz     short loc_6F74F7
0x6F74DF: movzx   ecx, bl
0x6F74E2: push    eax; File
0x6F74E3: push    ecx; Ch
0x6F74E4: call    _ungetc
0x6F74E9: add     esp, 8
0x6F74EC: cmp     eax, 0FFFFFFFFh
0x6F74EF: jz      short loc_6F74F7
0x6F74F1: mov     eax, ebx
0x6F74F3: pop     ebx
0x6F74F4: retn    4
0x6F74F7: or      eax, 0FFFFFFFFh
0x6F74FA: pop     ebx
0x6F74FB: retn    4
