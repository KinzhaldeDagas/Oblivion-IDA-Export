0x4C1DD0: mov     eax, [ecx+24h]
0x4C1DD3: sub     esp, 0Ch
0x4C1DD6: test    eax, eax
0x4C1DD8: jz      short loc_4C1E4F
0x4C1DDA: mov     ecx, [eax+4]
0x4C1DDD: test    ecx, ecx
0x4C1DDF: jz      short loc_4C1E4F
0x4C1DE1: mov     edx, [esp+0Ch+arg_0]
0x4C1DE5: cmp     dword ptr [ecx+edx*4], 0
0x4C1DE9: jz      short loc_4C1DFA
0x4C1DEB: mov     eax, [esp+0Ch+arg_4]
0x4C1DEF: mov     ecx, [ecx+edx*4]
0x4C1DF2: lea     eax, [eax+eax*2]
0x4C1DF5: lea     eax, [ecx+eax*4]
0x4C1DF8: jmp     short loc_4C1E35
0x4C1DFA: cmp     dword ptr [eax], 0
0x4C1DFD: jz      short loc_4C1E4F
0x4C1DFF: mov     ecx, [eax]
0x4C1E01: cmp     dword ptr [ecx+edx*4], 0
0x4C1E05: lea     eax, [ecx+edx*4]
0x4C1E08: jz      short loc_4C1E4F
0x4C1E0A: mov     eax, [eax]
0x4C1E0C: cmp     word ptr [eax+0B6h], 0
0x4C1E14: ja      short loc_4C1E1A
0x4C1E16: xor     eax, eax
0x4C1E18: jmp     short loc_4C1E22
0x4C1E1A: mov     edx, [eax+0B0h]
0x4C1E20: mov     eax, [edx]
0x4C1E22: mov     eax, [eax+0B4h]
0x4C1E28: mov     ecx, [eax+1Ch]
0x4C1E2B: mov     eax, [esp+0Ch+arg_4]
0x4C1E2F: lea     edx, [eax+eax*2]
0x4C1E32: lea     eax, [ecx+edx*4]
0x4C1E35: mov     edx, [eax]
0x4C1E37: mov     ecx, [esp+0Ch+arg_8]
0x4C1E3B: mov     [ecx], edx
0x4C1E3D: mov     edx, [eax+4]
0x4C1E40: mov     [ecx+4], edx
0x4C1E43: mov     eax, [eax+8]
0x4C1E46: mov     [ecx+8], eax
0x4C1E49: add     esp, 0Ch
0x4C1E4C: retn    0Ch
0x4C1E4F: fldz
0x4C1E51: mov     eax, [esp+0Ch+arg_8]
0x4C1E55: fst     [esp+0Ch+var_C]
0x4C1E58: mov     ecx, [esp+0Ch+var_C]
0x4C1E5B: fstp    [esp+0Ch+var_8]
0x4C1E5F: fld     dword ptr ds:0A37448h
0x4C1E65: mov     edx, [esp+0Ch+var_8]
0x4C1E69: mov     [eax], ecx
0x4C1E6B: fstp    [esp+0Ch+var_4]
0x4C1E6F: mov     ecx, [esp+0Ch+var_4]
0x4C1E73: mov     [eax+4], edx
0x4C1E76: mov     [eax+8], ecx
0x4C1E79: add     esp, 0Ch
0x4C1E7C: retn    0Ch
