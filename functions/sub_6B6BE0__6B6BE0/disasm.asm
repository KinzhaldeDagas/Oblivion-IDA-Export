0x6B6BE0: mov     eax, [ecx]
0x6B6BE2: test    al, 1
0x6B6BE4: jz      short loc_6B6BEE
0x6B6BE6: mov     eax, 1
0x6B6BEB: retn    0Ch
0x6B6BEE: test    al, 2
0x6B6BF0: jz      short loc_6B6C55
0x6B6BF2: fld     [esp+arg_0]
0x6B6BF6: fst     dword ptr [ecx+20h]
0x6B6BF9: fld     [esp+arg_4]
0x6B6BFD: fst     dword ptr [ecx+24h]
0x6B6C00: fld     [esp+arg_8]
0x6B6C04: fst     dword ptr [ecx+28h]
0x6B6C07: mov     ecx, [ecx+54h]
0x6B6C0A: test    ecx, ecx
0x6B6C0C: jz      short loc_6B6C4F
0x6B6C0E: fld     qword ptr ds:0A77238h
0x6B6C14: push    1
0x6B6C16: fdiv    st(2), st
0x6B6C18: sub     esp, 0Ch
0x6B6C1B: mov     eax, [ecx]
0x6B6C1D: fxch    st(2)
0x6B6C1F: fstp    [esp+10h+arg_0]
0x6B6C23: fld     [esp+10h+arg_0]
0x6B6C27: fstp    [esp+10h+var_8]
0x6B6C2B: fdiv    st, st(1)
0x6B6C2D: fstp    [esp+10h+arg_0]
0x6B6C31: fld     [esp+10h+arg_0]
0x6B6C35: fstp    [esp+10h+var_C]
0x6B6C39: fdivp   st(1), st
0x6B6C3B: fstp    [esp+10h+arg_0]
0x6B6C3F: fld     [esp+10h+arg_0]
0x6B6C43: fstp    [esp+10h+var_10]
0x6B6C46: push    ecx
0x6B6C47: mov     ecx, [eax+4Ch]
0x6B6C4A: call    ecx
0x6B6C4C: retn    0Ch
0x6B6C4F: fstp    st(1)
0x6B6C51: fstp    st(1)
0x6B6C53: fstp    st
0x6B6C55: mov     eax, 80004005h
0x6B6C5A: retn    0Ch
