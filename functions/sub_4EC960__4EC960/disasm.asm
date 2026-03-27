0x4EC960: push    ecx
0x4EC961: mov     eax, [ecx+3Ch]
0x4EC964: test    eax, eax
0x4EC966: push    esi
0x4EC967: mov     esi, [esp+8+arg_0]
0x4EC96B: mov     [esp+8+var_4], 0
0x4EC973: mov     [esi], eax
0x4EC975: jz      short loc_4EC981
0x4EC977: add     eax, 4
0x4EC97A: push    eax; lpAddend
0x4EC97B: call    dword ptr ds:0A28078h
0x4EC981: mov     eax, esi
0x4EC983: pop     esi
0x4EC984: pop     ecx
0x4EC985: retn    4
