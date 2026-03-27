0x71ACE0: mov     edx, ecx
0x71ACE2: mov     ecx, [esp+arg_0]
0x71ACE6: mov     eax, [ecx+0ACh]
0x71ACEC: mov     eax, [eax+8]
0x71ACEF: test    byte ptr [eax+18h], 1
0x71ACF3: push    esi
0x71ACF4: mov     esi, ds:0B3F928h
0x71ACFA: jz      short loc_71AD2D
0x71ACFC: cmp     byte ptr [edx+34h], 0
0x71AD00: jz      short loc_71AD0E
0x71AD02: mov     ax, [eax+18h]
0x71AD06: shr     ax, 0Dh
0x71AD0A: test    al, 1
0x71AD0C: jnz     short loc_71AD2D
0x71AD0E: mov     al, [ecx+18h]
0x71AD11: shr     al, 6
0x71AD14: not     al
0x71AD16: test    al, 1
0x71AD18: jz      short loc_71AD2D
0x71AD1A: lea     ecx, [esp+4+arg_0]
0x71AD1E: push    ecx
0x71AD1F: lea     ecx, [edx+0Ch]
0x71AD22: call    sub_5B1E20
0x71AD27: mov     al, 1
0x71AD29: pop     esi
0x71AD2A: retn    4
0x71AD2D: mov     edx, [ecx]
0x71AD2F: mov     eax, [edx+84h]
0x71AD35: push    esi
0x71AD36: call    eax
0x71AD38: xor     al, al
0x71AD3A: pop     esi
0x71AD3B: retn    4
