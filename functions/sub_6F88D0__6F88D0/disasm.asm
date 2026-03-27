0x6F88D0: push    esi
0x6F88D1: mov     esi, ecx
0x6F88D3: mov     eax, [esi+14h]
0x6F88D6: test    eax, eax
0x6F88D8: mov     dword ptr [esi], offset ??_7?$ctype@D@std@@6B@; const std::ctype<char>::`vftable'
0x6F88DE: jle     short loc_6F88EB
0x6F88E0: mov     eax, [esi+10h]
0x6F88E3: push    eax; Memory
0x6F88E4: call    _free
0x6F88E9: jmp     short loc_6F88F6
0x6F88EB: jge     short loc_6F88F9
0x6F88ED: mov     ecx, [esi+10h]
0x6F88F0: push    ecx
0x6F88F1: call    FormHeapFree
0x6F88F6: add     esp, 4
0x6F88F9: test    [esp+4+arg_0], 1
0x6F88FE: mov     dword ptr [esi], offset ??_7facet@locale@std@@6B@; const std::locale::facet::`vftable'
0x6F8904: jz      short loc_6F890F
0x6F8906: push    esi
0x6F8907: call    FormHeapFree
0x6F890C: add     esp, 4
0x6F890F: mov     eax, esi
0x6F8911: pop     esi
0x6F8912: retn    4
