0x5AFA40: push    esi; a3
0x5AFA41: mov     esi, ecx
0x5AFA43: mov     ecx, [esi+178h]; this
0x5AFA49: test    ecx, ecx
0x5AFA4B: jz      short loc_5AFA7A
0x5AFA4D: cmp     dword ptr [ecx+44h], 0
0x5AFA51: jnz     short loc_5AFA7A
0x5AFA53: fld1
0x5AFA55: push    ecx
0x5AFA56: fstp    [esp+8+a2]; a3
0x5AFA59: mov     dword ptr [esi+150h], 0
0x5AFA63: push    0FAEh; a2
0x5AFA68: call    Tile_SetFloat
0x5AFA6D: mov     ecx, [esi+178h]
0x5AFA73: push    0; float
0x5AFA75: call    sub_58FBA0
0x5AFA7A: pop     esi
0x5AFA7B: retn
