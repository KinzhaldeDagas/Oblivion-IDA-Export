0x88A440: push    ecx
0x88A441: push    esi
0x88A442: mov     esi, ecx
0x88A444: mov     eax, [esi+44h]
0x88A447: test    eax, eax
0x88A449: jz      loc_88A4E8
0x88A44F: cmp     eax, 0C8h ; 'È'
0x88A454: jb      short loc_88A45D
0x88A456: mov     dword ptr [esi+44h], 0C8h ; 'È'
0x88A45D: mov     eax, [esi]
0x88A45F: mov     edx, [eax+58h]
0x88A462: push    ebx
0x88A463: call    edx
0x88A465: mov     ebx, eax
0x88A467: test    ebx, ebx
0x88A469: jz      short loc_88A4E7
0x88A46B: push    edi
0x88A46C: xor     edi, edi
0x88A46E: cmp     [esi+44h], edi
0x88A471: jbe     short loc_88A4C9
0x88A473: mov     eax, [esi+40h]
0x88A476: cmp     dword ptr [eax+edi*4], 0
0x88A47A: lea     eax, [eax+edi*4]
0x88A47D: jz      short loc_88A496
0x88A47F: mov     ecx, [eax]
0x88A481: cmp     dword ptr [ecx+8], 0
0x88A485: jz      short loc_88A496
0x88A487: mov     edx, ecx
0x88A489: push    edx
0x88A48A: lea     eax, [esp+14h+var_1]
0x88A48E: push    eax
0x88A48F: mov     ecx, ebx
0x88A491: call    sub_8988F0
0x88A496: mov     ecx, [esi+40h]
0x88A499: cmp     dword ptr [ecx+edi*4], 0
0x88A49D: lea     eax, [ecx+edi*4]
0x88A4A0: jz      short loc_88A4C1
0x88A4A2: mov     ecx, [eax]
0x88A4A4: cmp     word ptr [ecx+4], 0
0x88A4A9: jz      short loc_88A4C1
0x88A4AB: add     word ptr [ecx+6], 0FFFFh
0x88A4B0: movzx   eax, word ptr [ecx+6]
0x88A4B4: test    ax, ax
0x88A4B7: jnz     short loc_88A4C1
0x88A4B9: mov     edx, [ecx]
0x88A4BB: mov     eax, [edx]
0x88A4BD: push    1
0x88A4BF: call    eax
0x88A4C1: add     edi, 1
0x88A4C4: cmp     edi, [esi+44h]
0x88A4C7: jb      short loc_88A473
0x88A4C9: mov     ecx, [esi+44h]
0x88A4CC: mov     edx, [esi+40h]
0x88A4CF: add     ecx, ecx
0x88A4D1: add     ecx, ecx
0x88A4D3: push    ecx
0x88A4D4: push    0
0x88A4D6: push    edx
0x88A4D7: call    __memset
0x88A4DC: add     esp, 0Ch
0x88A4DF: mov     dword ptr [esi+44h], 0
0x88A4E6: pop     edi
0x88A4E7: pop     ebx
0x88A4E8: pop     esi
0x88A4E9: pop     ecx
0x88A4EA: retn
