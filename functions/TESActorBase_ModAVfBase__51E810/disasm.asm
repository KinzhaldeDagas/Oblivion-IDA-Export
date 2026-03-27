0x51E810: push    ebx
0x51E811: mov     ebx, [esp+4+arg_0]
0x51E815: push    esi
0x51E816: push    edi
0x51E817: mov     esi, ecx
0x51E819: mov     edi, [esi]
0x51E81B: mov     eax, [edi+12Ch]
0x51E821: push    ebx
0x51E822: call    eax
0x51E824: fadd    [esp+0Ch+arg_4]
0x51E828: mov     edx, [edi+130h]
0x51E82E: push    ecx
0x51E82F: fstp    [esp+10h+arg_0]
0x51E833: mov     ecx, esi
0x51E835: fld     [esp+10h+arg_0]
0x51E839: fstp    [esp+10h+var_10]
0x51E83C: push    ebx
0x51E83D: call    edx
0x51E83F: pop     edi
0x51E840: pop     esi
0x51E841: pop     ebx
0x51E842: retn    8
