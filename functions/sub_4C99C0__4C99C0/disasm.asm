0x4C99C0: push    ecx; Fog interior decode: reads TESObjectCELL::LightingData fog packed RGB at lighting+0x08 and normalizes to float RGB.
0x4C99C1: test    byte ptr [ecx+24h], 1
0x4C99C5: jz      short loc_4C99D3
0x4C99C7: mov     eax, [ecx+3Ch]
0x4C99CA: test    eax, eax
0x4C99CC: jz      short loc_4C99D3
0x4C99CE: mov     eax, [eax+8]; Fog interior decode: load LightingData fog packed RGB (+0x08), source for active Sky fog color in mode 1.
0x4C99D1: jmp     short loc_4C99D5
0x4C99D3: xor     eax, eax
0x4C99D5: movzx   ecx, al
0x4C99D8: mov     [esp+4+var_4], ecx
0x4C99DB: mov     ecx, [esp+4+arg_0]
0x4C99DF: movzx   edx, ah
0x4C99E2: fild    [esp+4+var_4]
0x4C99E5: fld     qword ptr ds:0A3DDD8h
0x4C99EB: mov     [esp+4+arg_0], edx
0x4C99EF: fdiv    st(1), st
0x4C99F1: shr     eax, 10h
0x4C99F4: movzx   eax, al
0x4C99F7: fxch    st(1)
0x4C99F9: fstp    dword ptr [ecx]
0x4C99FB: fild    [esp+4+arg_0]
0x4C99FF: mov     [esp+4+arg_0], eax
0x4C9A03: fdiv    st, st(1)
0x4C9A05: fstp    dword ptr [ecx+4]
0x4C9A08: fild    [esp+4+arg_0]
0x4C9A0C: fdivrp  st(1), st
0x4C9A0E: fstp    dword ptr [ecx+8]
0x4C9A11: pop     ecx
0x4C9A12: retn    4
