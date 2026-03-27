0x76D510: mov     eax, ecx
0x76D512: mov     ecx, [eax+10h]
0x76D515: test    ecx, ecx
0x76D517: jz      short loc_76D52C
0x76D519: cmp     dword ptr [eax+0Ch], 0
0x76D51D: jz      short loc_76D52C
0x76D51F: push    12h
0x76D521: call    sub_71B4A0
0x76D526: test    al, al
0x76D528: setnbe  al
0x76D52B: retn
0x76D52C: xor     al, al
0x76D52E: retn
