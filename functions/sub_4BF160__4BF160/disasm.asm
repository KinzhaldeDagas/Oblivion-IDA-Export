0x4BF160: push    ecx
0x4BF161: fldz
0x4BF163: mov     dl, byte ptr [esp+4+arg_0]
0x4BF167: cmp     dl, 4
0x4BF16A: fstp    [esp+4+var_4]
0x4BF16D: jnb     loc_4BF1F7
0x4BF173: push    esi
0x4BF174: mov     si, [esp+8+arg_4]
0x4BF179: cmp     si, 121h
0x4BF17E: jnb     short loc_4BF1F6
0x4BF180: mov     eax, [ecx+24h]
0x4BF183: test    eax, eax
0x4BF185: jz      short loc_4BF1F6
0x4BF187: movzx   ecx, dl
0x4BF18A: cmp     dword ptr [eax+ecx*4+40h], 0
0x4BF18F: lea     eax, [eax+ecx*4+40h]
0x4BF193: jz      short loc_4BF1F6
0x4BF195: mov     eax, [eax]
0x4BF197: movzx   edx, si
0x4BF19A: mov     eax, [eax+edx*4]
0x4BF19D: fld     dword ptr [eax]
0x4BF19F: fadd    qword ptr ds:0A2FC68h
0x4BF1A5: fstp    [esp+8+arg_0]
0x4BF1A9: fld     [esp+8+arg_0]
0x4BF1AD: fadd    dword ptr [eax+4]
0x4BF1B0: fstp    [esp+8+arg_0]
0x4BF1B4: fld     [esp+8+arg_0]
0x4BF1B8: fadd    dword ptr [eax+8]
0x4BF1BB: fstp    [esp+8+arg_0]
0x4BF1BF: fld     [esp+8+arg_0]
0x4BF1C3: fadd    dword ptr [eax+0Ch]
0x4BF1C6: fstp    [esp+8+arg_0]
0x4BF1CA: fld     [esp+8+arg_0]
0x4BF1CE: fadd    dword ptr [eax+10h]
0x4BF1D1: fstp    [esp+8+arg_0]
0x4BF1D5: fld     [esp+8+arg_0]
0x4BF1D9: fadd    dword ptr [eax+14h]
0x4BF1DC: fstp    [esp+8+arg_0]
0x4BF1E0: fld     [esp+8+arg_0]
0x4BF1E4: fadd    dword ptr [eax+18h]
0x4BF1E7: fstp    [esp+8+arg_0]
0x4BF1EB: fld     [esp+8+arg_0]
0x4BF1EF: fadd    dword ptr [eax+1Ch]
0x4BF1F2: fstp    [esp+8+var_4]
0x4BF1F6: pop     esi
0x4BF1F7: fld     [esp+4+var_4]
0x4BF1FA: fld1
0x4BF1FC: fsubrp  st(1), st
0x4BF1FE: fstp    [esp+4+arg_0]
0x4BF202: fld     [esp+4+arg_0]
0x4BF206: pop     ecx
0x4BF207: retn    8
