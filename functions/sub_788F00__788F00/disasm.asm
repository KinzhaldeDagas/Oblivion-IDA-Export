0x788F00: sub     esp, 8
0x788F03: push    ebx
0x788F04: push    ebp
0x788F05: push    esi
0x788F06: push    edi; MaxCount
0x788F07: mov     edi, ecx
0x788F09: mov     ebx, [edi+100h]
0x788F0F: cmp     [edi+0FCh], ebx
0x788F15: lea     esi, [edi+0F8h]
0x788F1B: jbe     short loc_788F22
0x788F1D: call    __invalid_parameter_noinfo
0x788F22: mov     ebp, [esi+4]
0x788F25: cmp     ebp, [esi+8]
0x788F28: jbe     short loc_788F2F
0x788F2A: call    __invalid_parameter_noinfo
0x788F2F: push    ebx; Src
0x788F30: push    esi; int
0x788F31: push    ebp; Dst
0x788F32: push    esi; int
0x788F33: lea     eax, [esp+28h+var_8]
0x788F37: push    eax; int
0x788F38: mov     ecx, esi
0x788F3A: call    sub_439050
0x788F3F: mov     esi, [edi+110h]
0x788F45: cmp     [edi+10Ch], esi
0x788F4B: jbe     short loc_788F52
0x788F4D: call    __invalid_parameter_noinfo
0x788F52: mov     ebx, [edi+10Ch]
0x788F58: cmp     ebx, [edi+110h]
0x788F5E: jbe     short loc_788F65
0x788F60: call    __invalid_parameter_noinfo
0x788F65: cmp     ebx, esi
0x788F67: jz      short loc_788F8A
0x788F69: mov     eax, [edi+110h]
0x788F6F: sub     eax, esi
0x788F71: test    eax, eax
0x788F73: lea     ebp, [eax+ebx]
0x788F76: jle     short loc_788F84
0x788F78: push    eax; Src
0x788F79: push    esi; Src
0x788F7A: push    eax; DstSize
0x788F7B: push    ebx; Dst
0x788F7C: call    _memmove_s
0x788F81: add     esp, 10h
0x788F84: mov     [edi+110h], ebp
0x788F8A: pop     edi
0x788F8B: pop     esi
0x788F8C: pop     ebp
0x788F8D: pop     ebx
0x788F8E: add     esp, 8
0x788F91: retn
