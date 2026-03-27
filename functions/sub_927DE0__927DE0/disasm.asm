0x927DE0: mov     eax, [ecx+0Ch]
0x927DE3: test    eax, eax
0x927DE5: jz      short loc_927E1C
0x927DE7: mov     edx, [esp+arg_14]
0x927DEB: push    edx
0x927DEC: mov     edx, [esp+4+arg_10]
0x927DF0: push    edx
0x927DF1: mov     edx, [esp+8+arg_C]
0x927DF5: push    edx
0x927DF6: mov     edx, [esp+0Ch+arg_8]
0x927DFA: push    edx
0x927DFB: mov     edx, [esp+10h+arg_4]
0x927DFF: push    edx
0x927E00: lea     ecx, [eax+0Ch]
0x927E03: mov     eax, [ecx]
0x927E05: lea     edx, [esp+14h+arg_14]
0x927E09: push    edx
0x927E0A: call    dword ptr [eax]
0x927E0C: cmp     byte ptr [eax], 0
0x927E0F: jnz     short loc_927E1C
0x927E11: mov     eax, [esp+arg_0]
0x927E15: xor     cl, cl
0x927E17: mov     [eax], cl
0x927E19: retn    18h
0x927E1C: mov     eax, [esp+arg_0]
0x927E20: mov     cl, 1
0x927E22: mov     [eax], cl
0x927E24: retn    18h
