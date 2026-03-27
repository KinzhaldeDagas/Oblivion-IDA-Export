0x7687D0: push    ebx
0x7687D1: push    esi
0x7687D2: mov     esi, [esp+8+arg_0]
0x7687D6: test    esi, esi
0x7687D8: push    edi
0x7687D9: mov     ebx, ecx
0x7687DB: jz      short loc_768800
0x7687DD: mov     edi, [esp+0Ch+arg_4]
0x7687E1: test    edi, edi
0x7687E3: jz      short loc_768800
0x7687E5: mov     eax, [esi]
0x7687E7: mov     edx, [eax+4]
0x7687EA: mov     ecx, esi
0x7687EC: call    edx
0x7687EE: test    eax, eax
0x7687F0: jz      short loc_768800
0x7687F2: cmp     eax, offset unk_B3FAC0
0x7687F7: jz      short loc_768808
0x7687F9: mov     eax, [eax+4]
0x7687FC: test    eax, eax
0x7687FE: jnz     short loc_7687F2
0x768800: pop     edi
0x768801: pop     esi
0x768802: xor     al, al
0x768804: pop     ebx
0x768805: retn    8
0x768808: mov     ecx, [ebx+280h]
0x76880E: push    edi
0x76880F: lea     eax, [esp+10h+arg_0]
0x768813: push    eax
0x768814: push    ecx
0x768815: mov     [esp+18h+arg_0], esi
0x768819: call    sub_76DE00
0x76881E: add     esp, 0Ch
0x768821: pop     edi
0x768822: test    eax, eax
0x768824: pop     esi
0x768825: setnz   al
0x768828: pop     ebx
0x768829: retn    8
