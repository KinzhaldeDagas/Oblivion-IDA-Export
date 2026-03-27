0x61C9A0: push    ecx
0x61C9A1: push    esi
0x61C9A2: mov     esi, ecx
0x61C9A4: mov     ecx, [esi+3Ch]
0x61C9A7: call    sub_5E02B0
0x61C9AC: fld     dword ptr ds:0A30634h
0x61C9B2: mov     eax, [esi+6Ch]
0x61C9B5: cmp     eax, 0Ch
0x61C9B8: jz      short loc_61CA25
0x61C9BA: cmp     eax, 4
0x61C9BD: jnz     short loc_61C9C5
0x61C9BF: fst     dword ptr [esi+0CCh]
0x61C9C5: cmp     eax, 6
0x61C9C8: jnz     short loc_61C9D4
0x61C9CA: mov     dword ptr [esi+12Ch], 0
0x61C9D4: cmp     eax, 4
0x61C9D7: jnz     short loc_61C9FE
0x61C9D9: fld     dword ptr ds:0B36F70h
0x61C9DF: fstp    [esp+8+var_4]
0x61C9E3: fld     dword ptr [esi+44h]
0x61C9E6: fstp    dword ptr [esi+0ECh]
0x61C9EC: fld     [esp+8+var_4]
0x61C9F0: fstp    dword ptr [esi+0F0h]
0x61C9F6: fstp    dword ptr [esi+0F4h]
0x61C9FC: jmp     short loc_61CA00
0x61C9FE: fstp    st
0x61CA00: mov     eax, [esi+6Ch]
0x61CA03: cmp     eax, 4
0x61CA06: jz      short loc_61CA27
0x61CA08: cmp     eax, 7
0x61CA0B: jz      short loc_61CA27
0x61CA0D: cmp     eax, 9
0x61CA10: jz      short loc_61CA27
0x61CA12: cmp     eax, 8
0x61CA15: jz      short loc_61CA27
0x61CA17: cmp     eax, 0Ch
0x61CA1A: jz      short loc_61CA27
0x61CA1C: mov     byte ptr [esi+191h], 1
0x61CA23: jmp     short loc_61CA27
0x61CA25: fstp    st
0x61CA27: mov     eax, [esi+3Ch]
0x61CA2A: mov     dword ptr [esi+6Ch], 0Ch
0x61CA31: mov     ecx, [eax+58h]
0x61CA34: mov     edx, [ecx]
0x61CA36: mov     eax, [edx+2C4h]
0x61CA3C: push    1
0x61CA3E: push    101h
0x61CA43: call    eax
0x61CA45: mov     ecx, [esi+3Ch]
0x61CA48: push    3
0x61CA4A: call    sub_5E5850
0x61CA4F: fld     dword ptr ds:0A3D65Ch
0x61CA55: fcom    st(1)
0x61CA57: fnstsw  ax
0x61CA59: fstp    st(1)
0x61CA5B: test    ah, 5
0x61CA5E: jp      short loc_61CA6C
0x61CA60: mov     ecx, [esi+3Ch]
0x61CA63: fstp    st
0x61CA65: push    3
0x61CA67: call    sub_5E5850
0x61CA6C: mov     ecx, [esp+8+arg_0]
0x61CA70: fstp    [esp+8+var_4]
0x61CA74: fld     dword ptr [esi+44h]
0x61CA77: fstp    dword ptr [esi+0ECh]
0x61CA7D: fld     [esp+8+var_4]
0x61CA81: fstp    dword ptr [esi+0F0h]
0x61CA87: fld     dword ptr ds:0A30634h
0x61CA8D: fstp    dword ptr [esi+0F4h]
0x61CA93: mov     [esi+11Ch], ecx
0x61CA99: pop     esi
0x61CA9A: pop     ecx
0x61CA9B: retn    4
