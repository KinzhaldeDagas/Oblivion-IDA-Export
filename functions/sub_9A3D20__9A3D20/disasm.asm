0x9A3D20: cmp     byte_B4295B, 0
0x9A3D27: push    ebx
0x9A3D28: push    esi
0x9A3D29: push    edi
0x9A3D2A: mov     edi, [esp+0Ch+arg_4]
0x9A3D2E: mov     esi, [edi+30h]
0x9A3D31: mov     ebx, [edi+14h]
0x9A3D34: jnz     short loc_9A3D3B
0x9A3D36: call    sub_783C70
0x9A3D3B: and     ebx, 0FFh
0x9A3D41: mov     eax, 3
0x9A3D46: cmp     dword_B428D8[ebx*4], eax
0x9A3D4D: jnz     short loc_9A3D64
0x9A3D4F: mov     ecx, [esp+0Ch+arg_0]
0x9A3D53: fld     dword ptr [esi]
0x9A3D55: pop     edi
0x9A3D56: shl     ecx, 4
0x9A3D59: pop     esi
0x9A3D5A: fstp    dword ptr [ecx+0BAAA70h]
0x9A3D60: pop     ebx
0x9A3D61: retn    0Ch
0x9A3D64: cmp     byte_B4295B, 0
0x9A3D6B: mov     ebx, [edi+14h]
0x9A3D6E: jnz     short loc_9A3D75
0x9A3D70: call    sub_783C70
0x9A3D75: and     ebx, 0FFh
0x9A3D7B: mov     eax, 4
0x9A3D80: cmp     dword_B428D8[ebx*4], eax
0x9A3D87: jnz     short loc_9A3D9E
0x9A3D89: mov     edx, [esp+0Ch+arg_0]
0x9A3D8D: fld     dword ptr [esi]
0x9A3D8F: pop     edi
0x9A3D90: shl     edx, 4
0x9A3D93: pop     esi
0x9A3D94: fstp    dword ptr [edx+0BAAA70h]
0x9A3D9A: pop     ebx
0x9A3D9B: retn    0Ch
0x9A3D9E: cmp     byte_B4295B, 0
0x9A3DA5: mov     ebx, [edi+14h]
0x9A3DA8: jnz     short loc_9A3DAF
0x9A3DAA: call    sub_783C70
0x9A3DAF: and     ebx, 0FFh
0x9A3DB5: cmp     dword_B428D8[ebx*4], 5
0x9A3DBD: jnz     short loc_9A3DE2
0x9A3DBF: mov     eax, [esp+0Ch+arg_0]
0x9A3DC3: fld     dword ptr [esi]
0x9A3DC5: shl     eax, 4
0x9A3DC8: fstp    dword ptr [eax+0BAAA70h]
0x9A3DCE: pop     edi
0x9A3DCF: fld     dword ptr [esi+4]
0x9A3DD2: pop     esi
0x9A3DD3: fstp    dword ptr [eax+0BAAA74h]
0x9A3DD9: mov     eax, 5
0x9A3DDE: pop     ebx
0x9A3DDF: retn    0Ch
0x9A3DE2: cmp     byte_B4295B, 0
0x9A3DE9: mov     ebx, [edi+14h]
0x9A3DEC: jnz     short loc_9A3DF3
0x9A3DEE: call    sub_783C70
0x9A3DF3: and     ebx, 0FFh
0x9A3DF9: cmp     dword_B428D8[ebx*4], 6
0x9A3E01: jnz     short loc_9A3E2F
0x9A3E03: fld     dword ptr [esi]
0x9A3E05: mov     eax, [esp+0Ch+arg_0]
0x9A3E09: shl     eax, 4
0x9A3E0C: fstp    dword ptr [eax+0BAAA70h]
0x9A3E12: pop     edi
0x9A3E13: fld     dword ptr [esi+4]
0x9A3E16: fstp    dword ptr [eax+0BAAA74h]
0x9A3E1C: fld     dword ptr [esi+8]
0x9A3E1F: pop     esi
0x9A3E20: fstp    dword ptr [eax+0BAAA78h]
0x9A3E26: mov     eax, 6
0x9A3E2B: pop     ebx
0x9A3E2C: retn    0Ch
0x9A3E2F: mov     ecx, edi
0x9A3E31: call    sub_7833A0
0x9A3E36: test    al, al
0x9A3E38: jz      short loc_9A3E6F
0x9A3E3A: fld     dword ptr [esi]
0x9A3E3C: mov     eax, [esp+0Ch+arg_0]
0x9A3E40: shl     eax, 4
0x9A3E43: fstp    dword ptr [eax+0BAAA70h]
0x9A3E49: pop     edi
0x9A3E4A: fld     dword ptr [esi+4]
0x9A3E4D: fstp    dword ptr [eax+0BAAA74h]
0x9A3E53: fld     dword ptr [esi+8]
0x9A3E56: fstp    dword ptr [eax+0BAAA78h]
0x9A3E5C: fld     dword ptr [esi+0Ch]
0x9A3E5F: pop     esi
0x9A3E60: fstp    dword ptr [eax+0BAAA7Ch]
0x9A3E66: mov     eax, 7
0x9A3E6B: pop     ebx
0x9A3E6C: retn    0Ch
0x9A3E6F: mov     ecx, edi
0x9A3E71: call    sub_782DE0
0x9A3E76: test    al, al
0x9A3E78: jz      loc_9A3F0E
0x9A3E7E: fld     dword ptr [esi]
0x9A3E80: mov     eax, [esp+0Ch+arg_0]
0x9A3E84: shl     eax, 6
0x9A3E87: fstp    dword ptr [eax+0BAA9E0h]
0x9A3E8D: pop     edi
0x9A3E8E: fld     dword ptr [esi+4]
0x9A3E91: fstp    dword ptr [eax+0BAA9E4h]
0x9A3E97: fld     dword ptr [esi+8]
0x9A3E9A: fstp    dword ptr [eax+0BAA9E8h]
0x9A3EA0: fldz
0x9A3EA2: fst     dword ptr [eax+0BAA9ECh]
0x9A3EA8: fld     dword ptr [esi+0Ch]
0x9A3EAB: fstp    dword ptr [eax+0BAA9F0h]
0x9A3EB1: fld     dword ptr [esi+10h]
0x9A3EB4: fstp    dword ptr [eax+0BAA9F4h]
0x9A3EBA: fld     dword ptr [esi+14h]
0x9A3EBD: fstp    dword ptr [eax+0BAA9F8h]
0x9A3EC3: fst     dword ptr [eax+0BAA9FCh]
0x9A3EC9: fld     dword ptr [esi+18h]
0x9A3ECC: fstp    dword ptr [eax+0BAAA00h]
0x9A3ED2: fld     dword ptr [esi+1Ch]
0x9A3ED5: fstp    dword ptr [eax+0BAAA04h]
0x9A3EDB: fld     dword ptr [esi+20h]
0x9A3EDE: pop     esi
0x9A3EDF: fstp    dword ptr [eax+0BAAA08h]
0x9A3EE5: pop     ebx
0x9A3EE6: fst     dword ptr [eax+0BAAA0Ch]
0x9A3EEC: fst     dword ptr [eax+0BAAA10h]
0x9A3EF2: fst     dword ptr [eax+0BAAA14h]
0x9A3EF8: fstp    dword ptr [eax+0BAAA18h]
0x9A3EFE: fld1
0x9A3F00: fstp    dword ptr [eax+0BAAA1Ch]
0x9A3F06: mov     eax, 8
0x9A3F0B: retn    0Ch
0x9A3F0E: mov     ecx, edi
0x9A3F10: call    sub_782E10
0x9A3F15: test    al, al
0x9A3F17: jz      loc_9A3FBE
0x9A3F1D: fld     dword ptr [esi]
0x9A3F1F: mov     eax, [esp+0Ch+arg_0]
0x9A3F23: shl     eax, 6
0x9A3F26: fstp    dword ptr [eax+0BAA9E0h]
0x9A3F2C: pop     edi
0x9A3F2D: fld     dword ptr [esi+4]
0x9A3F30: fstp    dword ptr [eax+0BAA9E4h]
0x9A3F36: fld     dword ptr [esi+8]
0x9A3F39: fstp    dword ptr [eax+0BAA9E8h]
0x9A3F3F: fld     dword ptr [esi+0Ch]
0x9A3F42: fstp    dword ptr [eax+0BAA9ECh]
0x9A3F48: fld     dword ptr [esi+10h]
0x9A3F4B: fstp    dword ptr [eax+0BAA9F0h]
0x9A3F51: fld     dword ptr [esi+14h]
0x9A3F54: fstp    dword ptr [eax+0BAA9F4h]
0x9A3F5A: fld     dword ptr [esi+18h]
0x9A3F5D: fstp    dword ptr [eax+0BAA9F8h]
0x9A3F63: fld     dword ptr [esi+1Ch]
0x9A3F66: fstp    dword ptr [eax+0BAA9FCh]
0x9A3F6C: fld     dword ptr [esi+20h]
0x9A3F6F: fstp    dword ptr [eax+0BAAA00h]
0x9A3F75: fld     dword ptr [esi+24h]
0x9A3F78: fstp    dword ptr [eax+0BAAA04h]
0x9A3F7E: fld     dword ptr [esi+28h]
0x9A3F81: fstp    dword ptr [eax+0BAAA08h]
0x9A3F87: fld     dword ptr [esi+2Ch]
0x9A3F8A: fstp    dword ptr [eax+0BAAA0Ch]
0x9A3F90: fld     dword ptr [esi+30h]
0x9A3F93: fstp    dword ptr [eax+0BAAA10h]
0x9A3F99: fld     dword ptr [esi+34h]
0x9A3F9C: fstp    dword ptr [eax+0BAAA14h]
0x9A3FA2: fld     dword ptr [esi+38h]
0x9A3FA5: fstp    dword ptr [eax+0BAAA18h]
0x9A3FAB: fld     dword ptr [esi+3Ch]
0x9A3FAE: pop     esi
0x9A3FAF: fstp    dword ptr [eax+0BAAA1Ch]
0x9A3FB5: mov     eax, 9
0x9A3FBA: pop     ebx
0x9A3FBB: retn    0Ch
0x9A3FBE: mov     ecx, edi
0x9A3FC0: call    sub_7833D0
0x9A3FC5: test    al, al
0x9A3FC7: jz      short loc_9A3FFE
0x9A3FC9: fld     dword ptr [esi]
0x9A3FCB: mov     eax, [esp+0Ch+arg_0]
0x9A3FCF: shl     eax, 4
0x9A3FD2: fstp    dword ptr [eax+0BAAA70h]
0x9A3FD8: pop     edi
0x9A3FD9: fld     dword ptr [esi+4]
0x9A3FDC: fstp    dword ptr [eax+0BAAA74h]
0x9A3FE2: fld     dword ptr [esi+8]
0x9A3FE5: fstp    dword ptr [eax+0BAAA78h]
0x9A3FEB: fld     dword ptr [esi+0Ch]
0x9A3FEE: pop     esi
0x9A3FEF: fstp    dword ptr [eax+0BAAA7Ch]
0x9A3FF5: mov     eax, 0Ah
0x9A3FFA: pop     ebx
0x9A3FFB: retn    0Ch
0x9A3FFE: pop     edi
0x9A3FFF: pop     esi
0x9A4000: xor     eax, eax
0x9A4002: pop     ebx
0x9A4003: retn    0Ch
