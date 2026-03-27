0x5DE960: mov     ecx, ds:0B147F8h
0x5DE966: test    ecx, ecx
0x5DE968: jl      short loc_5DE9AB
0x5DE96A: mov     eax, 1
0x5DE96F: shl     eax, cl
0x5DE971: movzx   ecx, word ptr ds:0B3B744h
0x5DE978: test    ecx, eax
0x5DE97A: jnz     short loc_5DE9AB
0x5DE97C: mov     edx, ds:0B38CF0h
0x5DE982: mov     eax, ds:0B38CE8h
0x5DE987: push    0
0x5DE989: push    edx
0x5DE98A: push    0
0x5DE98C: push    0
0x5DE98E: push    eax
0x5DE98F: call    ShowUIMessageBox
0x5DE994: mov     ecx, ds:0B147F8h
0x5DE99A: mov     edx, 1
0x5DE99F: shl     edx, cl
0x5DE9A1: add     esp, 14h
0x5DE9A4: or      ds:0B3B744h, dx
0x5DE9AB: mov     dword ptr ds:0B147F8h, 0FFFFFFFFh
0x5DE9B5: retn
