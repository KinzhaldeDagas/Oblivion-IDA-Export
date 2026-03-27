0x43FD40: mov     edx, [esp+arg_0]
0x43FD44: push    esi
0x43FD45: mov     esi, ds:0B051D4h
0x43FD4B: push    edi
0x43FD4C: xor     eax, eax
0x43FD4E: mov     edi, edi
0x43FD50: cmp     eax, esi
0x43FD52: jnb     short loc_43FD68
0x43FD54: mov     edi, [ecx+38h]
0x43FD57: cmp     [edi+eax*4], edx
0x43FD5A: jz      short loc_43FD61
0x43FD5C: add     eax, 1
0x43FD5F: jmp     short loc_43FD50
0x43FD61: pop     edi
0x43FD62: mov     al, 1
0x43FD64: pop     esi
0x43FD65: retn    4
0x43FD68: pop     edi
0x43FD69: xor     al, al
0x43FD6B: pop     esi
0x43FD6C: retn    4
