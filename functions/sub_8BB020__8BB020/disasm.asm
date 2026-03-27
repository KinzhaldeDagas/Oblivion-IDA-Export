0x8BB020: call    sub_8BAA10
0x8BB025: mov     ecx, large fs:2Ch
0x8BB02C: mov     eax, ds:0BA9DE4h
0x8BB031: mov     edx, [ecx+eax*4]
0x8BB034: mov     ecx, [edx+19Ch]
0x8BB03A: test    ecx, ecx
0x8BB03C: jnz     short loc_8BB044
0x8BB03E: mov     ecx, ds:0BA7D9Ch
0x8BB044: mov     eax, [ecx]
0x8BB046: call    dword ptr [eax+4]
0x8BB049: push    0
0x8BB04B: call    sub_8A7260
0x8BB050: add     esp, 4
0x8BB053: xor     eax, eax
0x8BB055: retn
