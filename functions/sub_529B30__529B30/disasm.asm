0x529B30: lea     eax, [ecx+40h]
0x529B33: test    eax, eax
0x529B35: push    esi
0x529B36: jz      short loc_529B57
0x529B38: mov     dl, [esp+4+arg_0]
0x529B3C: lea     esp, [esp+0]
0x529B40: mov     ecx, [eax+4]
0x529B43: test    ecx, ecx
0x529B45: jnz     short loc_529B4B
0x529B47: cmp     [eax], ecx
0x529B49: jz      short loc_529B57
0x529B4B: mov     esi, [eax]
0x529B4D: cmp     [esi], dl
0x529B4F: jz      short loc_529B5D
0x529B51: mov     eax, ecx
0x529B53: test    eax, eax
0x529B55: jnz     short loc_529B40
0x529B57: xor     al, al
0x529B59: pop     esi
0x529B5A: retn    4
0x529B5D: mov     eax, esi
0x529B5F: mov     al, [eax+1]
0x529B62: pop     esi
0x529B63: retn    4
