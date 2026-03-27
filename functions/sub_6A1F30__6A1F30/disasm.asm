0x6A1F30: mov     eax, [ecx]
0x6A1F32: mov     edx, [eax+8]
0x6A1F35: push    esi
0x6A1F36: call    edx
0x6A1F38: test    eax, eax
0x6A1F3A: jz      short loc_6A1F5E
0x6A1F3C: mov     edx, [esp+4+arg_0]
0x6A1F40: mov     ecx, [eax+4]
0x6A1F43: test    ecx, ecx
0x6A1F45: jnz     short loc_6A1F4B
0x6A1F47: cmp     [eax], ecx
0x6A1F49: jz      short loc_6A1F5E
0x6A1F4B: mov     eax, [eax]
0x6A1F4D: test    eax, eax
0x6A1F4F: jz      short loc_6A1F58
0x6A1F51: mov     esi, [eax+0Ch]
0x6A1F54: cmp     [esi], edx
0x6A1F56: jz      short loc_6A1F64
0x6A1F58: mov     eax, ecx
0x6A1F5A: test    eax, eax
0x6A1F5C: jnz     short loc_6A1F40
0x6A1F5E: fldz
0x6A1F60: pop     esi
0x6A1F61: retn    4
0x6A1F64: fld     dword ptr [eax+18h]
0x6A1F67: pop     esi
0x6A1F68: retn    4
