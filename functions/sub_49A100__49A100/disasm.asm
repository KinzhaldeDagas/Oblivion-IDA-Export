0x49A100: push    ecx
0x49A101: cmp     byte ptr ds:0B07050h, 0
0x49A108: jz      short loc_49A113
0x49A10A: cmp     byte ptr ds:0B42F3Eh, 0
0x49A111: jnz     short loc_49A13B
0x49A113: mov     ecx, [ecx+1Ch]
0x49A116: test    ecx, ecx
0x49A118: jz      short loc_49A13B
0x49A11A: mov     edx, ds:0B33EA0h
0x49A120: fild    dword ptr ds:0B33EA0h
0x49A126: test    edx, edx
0x49A128: mov     eax, [ecx]
0x49A12A: jge     short loc_49A132
0x49A12C: fadd    dword ptr ds:0A2FC78h
0x49A132: mov     eax, [eax+54h]
0x49A135: push    ecx
0x49A136: fstp    [esp+8+var_8]
0x49A139: call    eax
0x49A13B: pop     ecx
0x49A13C: retn    0Ch
