0x8AF4F0: push    esi
0x8AF4F1: mov     esi, ecx
0x8AF4F3: cmp     dword ptr [esi+0Ch], 0
0x8AF4F7: jnz     short loc_8AF539
0x8AF4F9: push    8; Size
0x8AF4FB: call    FormHeapAlloc
0x8AF500: add     esp, 4
0x8AF503: test    eax, eax
0x8AF505: jz      short loc_8AF518
0x8AF507: mov     dword ptr [eax], 0
0x8AF50D: fld     dword ptr ds:0B2EFC4h
0x8AF513: fstp    dword ptr [eax+4]
0x8AF516: jmp     short loc_8AF51A
0x8AF518: xor     eax, eax
0x8AF51A: cmp     dword ptr [esi+8], 0
0x8AF51E: mov     [esi+0Ch], eax
0x8AF521: jz      short loc_8AF52B
0x8AF523: push    eax
0x8AF524: mov     ecx, esi
0x8AF526: call    sub_8AEA60
0x8AF52B: mov     eax, [esp+4+arg_0]
0x8AF52F: mov     byte ptr [eax], 1
0x8AF532: mov     eax, [esi+0Ch]
0x8AF535: pop     esi
0x8AF536: retn    4
0x8AF539: mov     ecx, [esp+4+arg_0]
0x8AF53D: mov     byte ptr [ecx], 0
0x8AF540: mov     eax, [esi+0Ch]
0x8AF543: pop     esi
0x8AF544: retn    4
