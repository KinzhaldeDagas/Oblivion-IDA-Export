0x4CC540: sub     esp, 8
0x4CC543: test    byte ptr [ecx+24h], 1
0x4CC547: jz      short loc_4CC551
0x4CC549: xor     al, al
0x4CC54B: add     esp, 8
0x4CC54E: retn    4
0x4CC551: mov     eax, [esp+8+arg_0]
0x4CC555: fld     dword ptr [eax]
0x4CC557: fstp    [esp+8+var_8]
0x4CC55A: fld     [esp+8+var_8]
0x4CC55D: fistp   [esp+8+arg_0]
0x4CC561: fld     dword ptr [eax+4]
0x4CC564: fstp    [esp+8+var_4]
0x4CC568: fld     [esp+8+var_4]
0x4CC56C: fistp   [esp+8+var_8]
0x4CC56F: mov     dl, [ecx+24h]
0x4CC572: and     dl, 1
0x4CC575: jnz     short loc_4CC582
0x4CC577: mov     eax, [ecx+3Ch]
0x4CC57A: test    eax, eax
0x4CC57C: jz      short loc_4CC582
0x4CC57E: mov     eax, [eax]
0x4CC580: jmp     short loc_4CC584
0x4CC582: xor     eax, eax
0x4CC584: push    esi
0x4CC585: mov     esi, [esp+0Ch+arg_0]
0x4CC589: sar     esi, 0Ch
0x4CC58C: cmp     esi, eax
0x4CC58E: pop     esi
0x4CC58F: jnz     short loc_4CC549
0x4CC591: test    dl, dl
0x4CC593: jnz     short loc_4CC5B0
0x4CC595: mov     ecx, [ecx+3Ch]
0x4CC598: test    ecx, ecx
0x4CC59A: jz      short loc_4CC5B0
0x4CC59C: mov     eax, [esp+8+var_8]
0x4CC59F: mov     ecx, [ecx+4]
0x4CC5A2: sar     eax, 0Ch
0x4CC5A5: cmp     eax, ecx
0x4CC5A7: setz    al
0x4CC5AA: add     esp, 8
0x4CC5AD: retn    4
0x4CC5B0: mov     eax, [esp+8+var_8]
0x4CC5B3: sar     eax, 0Ch
0x4CC5B6: xor     ecx, ecx
0x4CC5B8: cmp     eax, ecx
0x4CC5BA: setz    al
0x4CC5BD: add     esp, 8
0x4CC5C0: retn    4
