0x747800: push    esi
0x747801: mov     esi, ecx
0x747803: mov     eax, [esi+24h]
0x747806: test    eax, eax
0x747808: jnz     short loc_74780F
0x74780A: or      eax, 0FFFFFFFFh
0x74780D: pop     esi
0x74780E: retn
0x74780F: push    eax; hThread
0x747810: call    dword ptr ds:0A280F4h
0x747816: cmp     eax, 0FFFFFFFFh
0x747819: jz      short loc_747822
0x74781B: mov     dword ptr [esi+1Ch], 1
0x747822: pop     esi
0x747823: retn
