0x7B8400: mov     eax, ds:0B42EE4h
0x7B8405: test    eax, eax
0x7B8407: jnz     short loc_7B8417
0x7B8409: call    DebugShader
0x7B840E: test    eax, eax
0x7B8410: mov     ds:0B42EE4h, eax
0x7B8415: jz      short locret_7B843C
0x7B8417: push    esi
0x7B8418: mov     esi, [eax+4]
0x7B841B: test    esi, esi
0x7B841D: jnz     short loc_7B8432
0x7B841F: push    0CA4h
0x7B8424: push    offset a_Bsshadermanag; ".\\BSShaderManager.cpp"
0x7B8429: push    esi
0x7B842A: call    nullsub_return0_0arg
0x7B842F: add     esp, 0Ch
0x7B8432: push    0
0x7B8434: mov     ecx, esi
0x7B8436: call    sub_7F9D10
0x7B843B: pop     esi
0x7B843C: retn
