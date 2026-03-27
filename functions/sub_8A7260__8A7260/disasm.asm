0x8A7260: push    esi
0x8A7261: push    edi
0x8A7262: mov     edi, [esp+8+arg_0]
0x8A7266: test    edi, edi
0x8A7268: jz      short loc_8A726D
0x8A726A: inc     dword ptr [edi+14h]
0x8A726D: mov     ecx, large fs:2Ch
0x8A7274: mov     eax, ds:0BA9DE4h
0x8A7279: mov     esi, [ecx+eax*4]
0x8A727C: mov     ecx, [esi+19Ch]
0x8A7282: test    ecx, ecx
0x8A7284: jz      short loc_8A7292
0x8A7286: dec     dword ptr [ecx+14h]
0x8A7289: jnz     short loc_8A7292
0x8A728B: mov     edx, [ecx]
0x8A728D: push    1
0x8A728F: call    dword ptr [edx+8]
0x8A7292: mov     [esi+19Ch], edi
0x8A7298: pop     edi
0x8A7299: pop     esi
0x8A729A: retn
