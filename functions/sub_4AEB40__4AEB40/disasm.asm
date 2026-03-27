0x4AEB40: mov     eax, [esp+arg_0]
0x4AEB44: mov     ecx, ds:0B3F9A8h
0x4AEB4A: mov     edx, ds:0B3F9ACh
0x4AEB50: mov     [eax], ecx
0x4AEB52: mov     ecx, ds:0B3F9B0h
0x4AEB58: mov     [eax+4], edx
0x4AEB5B: mov     [eax+8], ecx
0x4AEB5E: mov     ecx, [esp+arg_4]
0x4AEB62: lea     edx, [ecx-1]
0x4AEB65: cmp     edx, 13h
0x4AEB68: ja      short locret_4AEBDA
0x4AEB6A: fldz
0x4AEB6C: shl     ecx, 4
0x4AEB6F: mov     edx, [ecx+0B07F38h]
0x4AEB75: test    edx, edx
0x4AEB77: jnz     short loc_4AEB84
0x4AEB79: fst     dword ptr ds:0B35464h
0x4AEB7F: mov     edx, offset dword_B35464
0x4AEB84: fld     dword ptr [edx]
0x4AEB86: mov     edx, [ecx+0B07F3Ch]
0x4AEB8C: test    edx, edx
0x4AEB8E: fstp    dword ptr [eax]
0x4AEB90: jnz     short loc_4AEB9D
0x4AEB92: fst     dword ptr ds:0B35464h
0x4AEB98: mov     edx, offset dword_B35464
0x4AEB9D: mov     ecx, [ecx+0B07F40h]
0x4AEBA3: fld     dword ptr [edx]
0x4AEBA5: test    ecx, ecx
0x4AEBA7: fstp    dword ptr [eax+4]
0x4AEBAA: jz      short loc_4AEBC0
0x4AEBAC: fstp    st
0x4AEBAE: fld     [esp+arg_8]
0x4AEBB2: fsub    qword ptr ds:0A2F928h
0x4AEBB8: fmul    dword ptr [ecx]
0x4AEBBA: fstp    dword ptr [eax+8]
0x4AEBBD: retn    0Ch
0x4AEBC0: fstp    dword ptr ds:0B35464h
0x4AEBC6: mov     ecx, offset dword_B35464
0x4AEBCB: fld     [esp+arg_8]
0x4AEBCF: fsub    qword ptr ds:0A2F928h
0x4AEBD5: fmul    dword ptr [ecx]
0x4AEBD7: fstp    dword ptr [eax+8]
0x4AEBDA: retn    0Ch
