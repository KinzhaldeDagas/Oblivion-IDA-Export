0x7D7110: cmp     dword ptr ds:0B45D74h, 0
0x7D7117: jz      short locret_7D714D
0x7D7119: mov     ecx, ds:0B3F928h; this
0x7D711F: call    sub_7D6B00
0x7D7124: call    sub_7D7030
0x7D7129: call    sub_7D6B70
0x7D712E: test    eax, eax
0x7D7130: jnz     short loc_7D713F
0x7D7132: mov     ecx, ds:0B3F928h
0x7D7138: mov     eax, [ecx]
0x7D713A: mov     edx, [eax+7Ch]
0x7D713D: call    edx
0x7D713F: mov     ecx, ds:0B3F928h; this
0x7D7145: push    0; clearFlags
0x7D7147: push    eax; a2
0x7D7148: call    sub_7D6A80
0x7D714D: retn
