0x910240: push    esi
0x910241: mov     esi, ecx
0x910243: call    sub_8E7C70
0x910248: test    [esp+4+arg_0], 1
0x91024D: jz      short loc_910262
0x91024F: movzx   edx, word ptr [esi+4]
0x910253: mov     ecx, ds:0BA7D98h
0x910259: mov     eax, [ecx]
0x91025B: push    26h ; '&'
0x91025D: push    edx
0x91025E: push    esi
0x91025F: call    dword ptr [eax+14h]
0x910262: mov     eax, esi
0x910264: pop     esi
0x910265: retn    4
