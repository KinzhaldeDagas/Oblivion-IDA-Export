0x862B40: mov     eax, [esp+arg_0]
0x862B44: push    ebp
0x862B45: push    esi
0x862B46: xor     esi, esi
0x862B48: cmp     eax, 12Ah
0x862B4D: push    edi
0x862B4E: mov     edi, ecx
0x862B50: jg      short loc_862B8C
0x862B52: jz      short loc_862B7E
0x862B54: sub     eax, 4
0x862B57: jz      short loc_862B70
0x862B59: sub     eax, 1
0x862B5C: jnz     def_862B9C
0x862B62: mov     esi, ds:0B473D8h
0x862B68: pop     edi
0x862B69: mov     eax, esi
0x862B6B: pop     esi
0x862B6C: pop     ebp
0x862B6D: retn    0Ch
0x862B70: mov     esi, ds:0B473D4h
0x862B76: pop     edi
0x862B77: mov     eax, esi
0x862B79: pop     esi
0x862B7A: pop     ebp
0x862B7B: retn    0Ch
0x862B7E: mov     esi, ds:0B473D0h
0x862B84: pop     edi
0x862B85: mov     eax, esi
0x862B87: pop     esi
0x862B88: pop     ebp
0x862B89: retn    0Ch
0x862B8C: lea     ecx, [eax-12Dh]; switch 51 cases
0x862B92: cmp     ecx, 32h
0x862B95: ja      def_862B9C
0x862B9B: push    ebx
0x862B9C: jmp     ds:jpt_862B9C[ecx*4]; switch jump
0x862BA3: cmp     [esp+10h+arg_8], 0; jumptable 00862B9C case 301
0x862BA8: mov     esi, ds:0B473DCh
0x862BAE: mov     ecx, edi
0x862BB0: jz      loc_862D4D
0x862BB6: push    1
0x862BB8: push    eax
0x862BB9: push    esi
0x862BBA: call    sub_862AD0
0x862BBF: pop     ebx
0x862BC0: pop     edi
0x862BC1: mov     eax, esi
0x862BC3: pop     esi
0x862BC4: pop     ebp
0x862BC5: retn    0Ch
0x862BC8: cmp     [esp+10h+arg_8], 0; jumptable 00862B9C case 302
0x862BCD: mov     esi, ds:0B473E0h
0x862BD3: mov     ecx, edi
0x862BD5: jz      loc_862D4D
0x862BDB: push    1
0x862BDD: push    eax
0x862BDE: push    esi
0x862BDF: call    sub_862AD0
0x862BE4: pop     ebx
0x862BE5: pop     edi
0x862BE6: mov     eax, esi
0x862BE8: pop     esi
0x862BE9: pop     ebp
0x862BEA: retn    0Ch
0x862BED: cmp     [esp+10h+arg_8], 0; jumptable 00862B9C case 303
0x862BF2: mov     ebx, [esp+10h+arg_4]
0x862BF6: mov     ecx, [ebx+0F0h]
0x862BFC: mov     esi, ds:0B473E4h
0x862C02: mov     ds:0B46F98h, ecx
0x862C08: mov     edx, [ebx+0F4h]
0x862C0E: mov     ds:0B46F9Ch, edx
0x862C14: mov     ecx, [ebx+0F8h]
0x862C1A: mov     ds:0B46FA0h, ecx
0x862C20: mov     edx, [ebx+0FCh]
0x862C26: mov     ds:0B46FA4h, edx
0x862C2C: mov     ecx, edi
0x862C2E: jz      short loc_862C37
0x862C30: push    3
0x862C32: jmp     loc_862E85
0x862C37: push    2
0x862C39: jmp     loc_862E85
0x862C3E: cmp     [esp+10h+arg_8], 0; jumptable 00862B9C case 304
0x862C43: mov     esi, ds:0B473E8h
0x862C49: mov     ecx, edi
0x862C4B: jz      loc_862D80
0x862C51: push    5
0x862C53: push    eax
0x862C54: push    esi
0x862C55: call    sub_862AD0
0x862C5A: pop     ebx
0x862C5B: pop     edi
0x862C5C: mov     eax, esi
0x862C5E: pop     esi
0x862C5F: pop     ebp
0x862C60: retn    0Ch
0x862C63: cmp     [esp+10h+arg_8], 0; jumptable 00862B9C case 305
0x862C68: mov     esi, ds:0B473ECh
0x862C6E: mov     ecx, edi
0x862C70: jz      short loc_862C89
0x862C72: push    7
0x862C74: jmp     short loc_862C8B
0x862C76: cmp     [esp+10h+arg_8], 0; jumptable 00862B9C case 306
0x862C7B: mov     esi, ds:0B473F0h
0x862C81: mov     ecx, edi
0x862C83: jz      short loc_862C89
0x862C85: push    7
0x862C87: jmp     short loc_862C8B
0x862C89: push    6
0x862C8B: push    eax
0x862C8C: push    esi
0x862C8D: call    sub_862AD0
0x862C92: mov     ecx, [esi+24h]
0x862C95: mov     edi, [esp+10h+arg_4]
0x862C99: mov     edx, [edi]
0x862C9B: mov     ebx, [ecx+10h]
0x862C9E: mov     eax, [edx+88h]
0x862CA4: push    1
0x862CA6: mov     ecx, edi
0x862CA8: call    eax
0x862CAA: push    eax; a2
0x862CAB: mov     ecx, ebx; this
0x862CAD: call    sub_76C910
0x862CB2: mov     ecx, [esi+24h]
0x862CB5: mov     edx, [edi]
0x862CB7: mov     ebx, [ecx+14h]
0x862CBA: mov     eax, [edx+8Ch]
0x862CC0: push    1
0x862CC2: mov     ecx, edi
0x862CC4: call    eax
0x862CC6: push    eax; a2
0x862CC7: mov     ecx, ebx; this
0x862CC9: call    sub_76C910
0x862CCE: pop     ebx
0x862CCF: pop     edi
0x862CD0: mov     eax, esi
0x862CD2: pop     esi
0x862CD3: pop     ebp
0x862CD4: retn    0Ch
0x862CD7: cmp     [esp+10h+arg_8], 0; jumptable 00862B9C case 307
0x862CDC: mov     esi, ds:0B473F4h
0x862CE2: mov     ecx, edi
0x862CE4: jz      loc_862DB8
0x862CEA: push    9
0x862CEC: jmp     loc_862DBA
0x862CF1: cmp     [esp+10h+arg_8], 0; jumptable 00862B9C case 308
0x862CF6: mov     esi, ds:0B473F8h
0x862CFC: mov     ecx, edi
0x862CFE: jz      loc_862DB8
0x862D04: push    9
0x862D06: jmp     loc_862DBA
0x862D0B: cmp     [esp+10h+arg_8], 0; jumptable 00862B9C case 309
0x862D10: mov     esi, ds:0B473FCh
0x862D16: mov     ecx, edi
0x862D18: jz      short loc_862D4D
0x862D1A: push    1
0x862D1C: push    eax
0x862D1D: push    esi
0x862D1E: call    sub_862AD0
0x862D23: pop     ebx
0x862D24: pop     edi
0x862D25: mov     eax, esi
0x862D27: pop     esi
0x862D28: pop     ebp
0x862D29: retn    0Ch
0x862D2C: cmp     [esp+10h+arg_8], 0; jumptable 00862B9C case 310
0x862D31: mov     esi, ds:0B47400h
0x862D37: mov     ecx, edi
0x862D39: jz      short loc_862D4D
0x862D3B: push    1
0x862D3D: push    eax
0x862D3E: push    esi
0x862D3F: call    sub_862AD0
0x862D44: pop     ebx
0x862D45: pop     edi
0x862D46: mov     eax, esi
0x862D48: pop     esi
0x862D49: pop     ebp
0x862D4A: retn    0Ch
0x862D4D: push    0
0x862D4F: push    eax
0x862D50: push    esi
0x862D51: call    sub_862AD0
0x862D56: pop     ebx
0x862D57: pop     edi
0x862D58: mov     eax, esi
0x862D5A: pop     esi
0x862D5B: pop     ebp
0x862D5C: retn    0Ch
0x862D5F: cmp     [esp+10h+arg_8], 0; jumptable 00862B9C case 311
0x862D64: mov     esi, ds:0B47404h
0x862D6A: mov     ecx, edi
0x862D6C: jz      short loc_862D80
0x862D6E: push    5
0x862D70: push    eax
0x862D71: push    esi
0x862D72: call    sub_862AD0
0x862D77: pop     ebx
0x862D78: pop     edi
0x862D79: mov     eax, esi
0x862D7B: pop     esi
0x862D7C: pop     ebp
0x862D7D: retn    0Ch
0x862D80: push    4
0x862D82: push    eax
0x862D83: push    esi
0x862D84: call    sub_862AD0
0x862D89: pop     ebx
0x862D8A: pop     edi
0x862D8B: mov     eax, esi
0x862D8D: pop     esi
0x862D8E: pop     ebp
0x862D8F: retn    0Ch
0x862D92: cmp     [esp+10h+arg_8], 0; jumptable 00862B9C case 312
0x862D97: mov     esi, ds:0B47408h
0x862D9D: mov     ecx, edi
0x862D9F: jz      short loc_862DB8
0x862DA1: push    9
0x862DA3: jmp     short loc_862DBA
0x862DA5: cmp     [esp+10h+arg_8], 0; jumptable 00862B9C case 313
0x862DAA: mov     esi, ds:0B4740Ch
0x862DB0: mov     ecx, edi
0x862DB2: jz      short loc_862DB8
0x862DB4: push    9
0x862DB6: jmp     short loc_862DBA
0x862DB8: push    8
0x862DBA: push    eax
0x862DBB: push    esi
0x862DBC: call    sub_862AD0
0x862DC1: mov     ecx, [esi+24h]
0x862DC4: mov     edi, [ecx+18h]
0x862DC7: mov     ecx, [esp+10h+arg_4]
0x862DCB: mov     edx, [ecx]
0x862DCD: mov     eax, [edx+90h]
0x862DD3: push    0
0x862DD5: call    eax
0x862DD7: push    eax; a2
0x862DD8: mov     ecx, edi; this
0x862DDA: call    sub_76C910
0x862DDF: pop     ebx
0x862DE0: pop     edi
0x862DE1: mov     eax, esi
0x862DE3: pop     esi
0x862DE4: pop     ebp
0x862DE5: retn    0Ch
0x862DE8: cmp     [esp+10h+arg_8], 0; jumptable 00862B9C case 314
0x862DED: mov     esi, ds:0B47410h
0x862DF3: mov     ecx, edi
0x862DF5: jz      short loc_862E2A
0x862DF7: push    0Bh
0x862DF9: push    eax
0x862DFA: push    esi
0x862DFB: call    sub_862AD0
0x862E00: pop     ebx
0x862E01: pop     edi
0x862E02: mov     eax, esi
0x862E04: pop     esi
0x862E05: pop     ebp
0x862E06: retn    0Ch
0x862E09: cmp     [esp+10h+arg_8], 0; jumptable 00862B9C case 315
0x862E0E: mov     esi, ds:0B47414h
0x862E14: mov     ecx, edi
0x862E16: jz      short loc_862E2A
0x862E18: push    0Bh
0x862E1A: push    eax
0x862E1B: push    esi
0x862E1C: call    sub_862AD0
0x862E21: pop     ebx
0x862E22: pop     edi
0x862E23: mov     eax, esi
0x862E25: pop     esi
0x862E26: pop     ebp
0x862E27: retn    0Ch
0x862E2A: push    0Ah
0x862E2C: push    eax
0x862E2D: push    esi
0x862E2E: call    sub_862AD0
0x862E33: pop     ebx
0x862E34: pop     edi
0x862E35: mov     eax, esi
0x862E37: pop     esi
0x862E38: pop     ebp
0x862E39: retn    0Ch
0x862E3C: cmp     [esp+10h+arg_8], 0; jumptable 00862B9C case 316
0x862E41: mov     ebx, [esp+10h+arg_4]
0x862E45: mov     ecx, [ebx+0F0h]
0x862E4B: mov     esi, ds:0B47418h
0x862E51: mov     ds:0B46F98h, ecx
0x862E57: mov     edx, [ebx+0F4h]
0x862E5D: mov     ds:0B46F9Ch, edx
0x862E63: mov     ecx, [ebx+0F8h]
0x862E69: mov     ds:0B46FA0h, ecx
0x862E6F: mov     edx, [ebx+0FCh]
0x862E75: mov     ds:0B46FA4h, edx
0x862E7B: mov     ecx, edi
0x862E7D: jz      short loc_862E83
0x862E7F: push    0Dh
0x862E81: jmp     short loc_862E85
0x862E83: push    0Ch
0x862E85: push    eax
0x862E86: push    esi
0x862E87: call    sub_862AD0
0x862E8C: mov     eax, ds:0B430F8h
0x862E91: mov     ecx, [esi+24h]
0x862E94: mov     ecx, [ecx+10h]; this
0x862E97: push    eax; a2
0x862E98: call    sub_76C910
0x862E9D: mov     edx, [ebx+104h]
0x862EA3: mov     eax, [esi+24h]
0x862EA6: mov     ecx, [eax+14h]; this
0x862EA9: push    edx; a2
0x862EAA: call    sub_76C910
0x862EAF: pop     ebx
0x862EB0: pop     edi
0x862EB1: mov     eax, esi
0x862EB3: pop     esi
0x862EB4: pop     ebp
0x862EB5: retn    0Ch
0x862EB8: mov     esi, ds:0B4741Ch; jumptable 00862B9C case 317
0x862EBE: jmp     loc_862FAC
0x862EC3: cmp     [esp+10h+arg_8], 0; jumptable 00862B9C case 318
0x862EC8: mov     esi, ds:0B47420h
0x862ECE: mov     ecx, edi
0x862ED0: jz      short loc_862EE9
0x862ED2: push    11h
0x862ED4: jmp     short loc_862EEB
0x862ED6: cmp     [esp+10h+arg_8], 0; jumptable 00862B9C case 319
0x862EDB: mov     esi, ds:0B47424h
0x862EE1: mov     ecx, edi
0x862EE3: jz      short loc_862EE9
0x862EE5: push    11h
0x862EE7: jmp     short loc_862EEB
0x862EE9: push    10h
0x862EEB: push    eax
0x862EEC: push    esi
0x862EED: call    sub_862AD0
0x862EF2: mov     ecx, [esi+24h]
0x862EF5: mov     edi, [esp+10h+arg_4]
0x862EF9: mov     edx, [edi]
0x862EFB: mov     ebx, [ecx+10h]
0x862EFE: mov     eax, [edx+88h]
0x862F04: push    1
0x862F06: mov     ecx, edi
0x862F08: call    eax
0x862F0A: push    eax; a2
0x862F0B: mov     ecx, ebx; this
0x862F0D: call    sub_76C910
0x862F12: mov     ecx, [esi+24h]
0x862F15: mov     edx, [edi]
0x862F17: mov     ebx, [ecx+14h]
0x862F1A: mov     eax, [edx+8Ch]
0x862F20: push    1
0x862F22: mov     ecx, edi
0x862F24: call    eax
0x862F26: push    eax; a2
0x862F27: mov     ecx, ebx; this
0x862F29: call    sub_76C910
0x862F2E: pop     ebx
0x862F2F: pop     edi
0x862F30: mov     eax, esi
0x862F32: pop     esi
0x862F33: pop     ebp
0x862F34: retn    0Ch
0x862F37: cmp     [esp+10h+arg_8], 0; jumptable 00862B9C case 320
0x862F3C: mov     esi, ds:0B47428h
0x862F42: mov     ecx, edi
0x862F44: jz      loc_862FFF
0x862F4A: push    13h
0x862F4C: jmp     loc_863001
0x862F51: cmp     [esp+10h+arg_8], 0; jumptable 00862B9C case 321
0x862F56: mov     esi, ds:0B4742Ch
0x862F5C: mov     ecx, edi
0x862F5E: jz      loc_862FFF
0x862F64: push    13h
0x862F66: jmp     loc_863001
0x862F6B: mov     esi, ds:0B47430h; jumptable 00862B9C case 322
0x862F71: jmp     short loc_862F79
0x862F73: mov     esi, ds:0B47434h; jumptable 00862B9C case 323
0x862F79: cmp     [esp+10h+arg_8], 0
0x862F7E: mov     ecx, edi
0x862F80: jz      short loc_862F94
0x862F82: push    0Bh
0x862F84: push    eax
0x862F85: push    esi
0x862F86: call    sub_862AD0
0x862F8B: pop     ebx
0x862F8C: pop     edi
0x862F8D: mov     eax, esi
0x862F8F: pop     esi
0x862F90: pop     ebp
0x862F91: retn    0Ch
0x862F94: push    0Ah
0x862F96: push    eax
0x862F97: push    esi
0x862F98: call    sub_862AD0
0x862F9D: pop     ebx
0x862F9E: pop     edi
0x862F9F: mov     eax, esi
0x862FA1: pop     esi
0x862FA2: pop     ebp
0x862FA3: retn    0Ch
0x862FA6: mov     esi, ds:0B47438h; jumptable 00862B9C case 324
0x862FAC: cmp     [esp+10h+arg_8], 0
0x862FB1: mov     ecx, edi
0x862FB3: jz      short loc_862FC7
0x862FB5: push    0Fh
0x862FB7: push    eax
0x862FB8: push    esi
0x862FB9: call    sub_862AD0
0x862FBE: pop     ebx
0x862FBF: pop     edi
0x862FC0: mov     eax, esi
0x862FC2: pop     esi
0x862FC3: pop     ebp
0x862FC4: retn    0Ch
0x862FC7: push    0Eh
0x862FC9: push    eax
0x862FCA: push    esi
0x862FCB: call    sub_862AD0
0x862FD0: pop     ebx
0x862FD1: pop     edi
0x862FD2: mov     eax, esi
0x862FD4: pop     esi
0x862FD5: pop     ebp
0x862FD6: retn    0Ch
0x862FD9: cmp     [esp+10h+arg_8], 0; jumptable 00862B9C case 325
0x862FDE: mov     esi, ds:0B4743Ch
0x862FE4: mov     ecx, edi
0x862FE6: jz      short loc_862FFF
0x862FE8: push    13h
0x862FEA: jmp     short loc_863001
0x862FEC: cmp     [esp+10h+arg_8], 0; jumptable 00862B9C case 326
0x862FF1: mov     esi, ds:0B47440h
0x862FF7: mov     ecx, edi
0x862FF9: jz      short loc_862FFF
0x862FFB: push    13h
0x862FFD: jmp     short loc_863001
0x862FFF: push    12h
0x863001: push    eax
0x863002: push    esi
0x863003: call    sub_862AD0
0x863008: mov     ecx, [esi+24h]
0x86300B: mov     edi, [ecx+18h]
0x86300E: mov     ecx, [esp+10h+arg_4]
0x863012: mov     edx, [ecx]
0x863014: mov     eax, [edx+90h]
0x86301A: push    0
0x86301C: call    eax
0x86301E: push    eax; a2
0x86301F: mov     ecx, edi; this
0x863021: call    sub_76C910
0x863026: pop     ebx
0x863027: pop     edi
0x863028: mov     eax, esi
0x86302A: pop     esi
0x86302B: pop     ebp
0x86302C: retn    0Ch
0x86302F: mov     esi, ds:0B47444h; jumptable 00862B9C case 327
0x863035: jmp     short loc_863065
0x863037: mov     esi, ds:0B47448h; jumptable 00862B9C case 328
0x86303D: jmp     short loc_863065
0x86303F: mov     esi, ds:0B4744Ch; jumptable 00862B9C case 329
0x863045: jmp     short loc_863065
0x863047: mov     esi, ds:0B47450h; jumptable 00862B9C case 330
0x86304D: jmp     short loc_863065
0x86304F: mov     esi, ds:0B47454h; jumptable 00862B9C case 331
0x863055: jmp     short loc_863065
0x863057: mov     esi, ds:0B47458h; jumptable 00862B9C case 332
0x86305D: jmp     short loc_863065
0x86305F: mov     esi, ds:0B4745Ch; jumptable 00862B9C case 333
0x863065: mov     ebx, [esp+10h+arg_4]
0x863069: push    eax
0x86306A: push    ebx
0x86306B: push    esi
0x86306C: mov     ecx, edi
0x86306E: call    sub_862660
0x863073: push    0
0x863075: push    ebx
0x863076: push    esi
0x863077: mov     ecx, edi
0x863079: call    sub_862730
0x86307E: pop     ebx
0x86307F: pop     edi
0x863080: mov     eax, esi
0x863082: pop     esi
0x863083: pop     ebp
0x863084: retn    0Ch
0x863087: mov     esi, ds:0B47460h; jumptable 00862B9C case 334
0x86308D: pop     ebx
0x86308E: pop     edi
0x86308F: mov     eax, esi
0x863091: pop     esi
0x863092: pop     ebp
0x863093: retn    0Ch
0x863096: mov     esi, ds:0B47464h; jumptable 00862B9C case 335
0x86309C: pop     ebx
0x86309D: pop     edi
0x86309E: mov     eax, esi
0x8630A0: pop     esi
0x8630A1: pop     ebp
0x8630A2: retn    0Ch
0x8630A5: mov     esi, ds:0B47468h; jumptable 00862B9C case 336
0x8630AB: pop     ebx
0x8630AC: pop     edi
0x8630AD: mov     eax, esi
0x8630AF: pop     esi
0x8630B0: pop     ebp
0x8630B1: retn    0Ch
0x8630B4: mov     esi, ds:0B4746Ch; jumptable 00862B9C case 337
0x8630BA: pop     ebx
0x8630BB: pop     edi
0x8630BC: mov     eax, esi
0x8630BE: pop     esi
0x8630BF: pop     ebp
0x8630C0: retn    0Ch
0x8630C3: mov     esi, ds:0B47470h; jumptable 00862B9C case 338
0x8630C9: mov     ecx, [esi+24h]
0x8630CC: mov     ebx, [esp+10h+arg_4]
0x8630D0: mov     edx, [ebx]
0x8630D2: mov     ebp, [ecx]
0x8630D4: mov     eax, [edx+88h]
0x8630DA: push    0
0x8630DC: mov     ecx, ebx
0x8630DE: call    eax
0x8630E0: push    eax; a2
0x8630E1: mov     ecx, ebp; this
0x8630E3: call    sub_76C910
0x8630E8: mov     ecx, ds:0B43128h
0x8630EE: mov     edx, [esi+24h]
0x8630F1: push    ecx; a2
0x8630F2: mov     ecx, [edx+4]; this
0x8630F5: call    sub_76C910
0x8630FA: push    2
0x8630FC: push    esi
0x8630FD: mov     ecx, edi
0x8630FF: call    sub_862600
0x863104: push    ebx
0x863105: mov     ecx, edi
0x863107: call    sub_8627C0
0x86310C: fstp    dword ptr ds:0B46DE8h
0x863112: fld     dword ptr ds:0B46DE8h
0x863118: pop     ebx
0x863119: pop     edi
0x86311A: fstp    dword ptr ds:0B46FD8h
0x863120: mov     eax, esi
0x863122: pop     esi
0x863123: pop     ebp
0x863124: retn    0Ch
0x863127: mov     esi, ds:0B47474h; jumptable 00862B9C case 339
0x86312D: mov     eax, [esi+24h]
0x863130: mov     ebx, [esp+10h+arg_4]
0x863134: mov     edx, [ebx]
0x863136: mov     ebp, [eax]
0x863138: mov     eax, [edx+88h]
0x86313E: push    0
0x863140: mov     ecx, ebx
0x863142: call    eax
0x863144: push    eax; a2
0x863145: mov     ecx, ebp; this
0x863147: call    sub_76C910
0x86314C: mov     ecx, ds:0B43128h
0x863152: mov     edx, [esi+24h]
0x863155: push    ecx; a2
0x863156: mov     ecx, [edx+4]; this
0x863159: call    sub_76C910
0x86315E: push    2
0x863160: push    esi
0x863161: mov     ecx, edi
0x863163: call    sub_862600
0x863168: push    ebx
0x863169: mov     ecx, edi
0x86316B: call    sub_8627C0
0x863170: fstp    dword ptr ds:0B46DE8h
0x863176: fld     dword ptr ds:0B46DE8h
0x86317C: pop     ebx
0x86317D: pop     edi
0x86317E: fstp    dword ptr ds:0B46FD8h
0x863184: mov     eax, esi
0x863186: pop     esi
0x863187: pop     ebp
0x863188: retn    0Ch
0x86318B: mov     esi, ds:0B474A0h; jumptable 00862B9C case 350
0x863191: mov     eax, [esp+10h+arg_4]
0x863195: push    esi
0x863196: push    eax
0x863197: mov     ecx, edi
0x863199: call    sub_7FED20
0x86319E: pop     ebx
0x86319F: pop     edi
0x8631A0: mov     eax, esi
0x8631A2: pop     esi
0x8631A3: pop     ebp
0x8631A4: retn    0Ch
0x8631A7: mov     esi, ds:0B474A4h; jumptable 00862B9C case 351
0x8631AD: mov     ecx, [esp+10h+arg_4]
0x8631B1: push    esi
0x8631B2: push    ecx
0x8631B3: mov     ecx, edi
0x8631B5: call    sub_7FED20
0x8631BA: pop     ebx
0x8631BB: pop     edi
0x8631BC: mov     eax, esi
0x8631BE: pop     esi
0x8631BF: pop     ebp
0x8631C0: retn    0Ch
0x8631C3: mov     esi, ds:0B47478h; jumptable 00862B9C case 340
0x8631C9: mov     edx, [esi+24h]
0x8631CC: mov     ecx, [esp+10h+arg_4]
0x8631D0: mov     eax, [ecx]
0x8631D2: mov     ebx, [edx]
0x8631D4: mov     edx, [eax+88h]
0x8631DA: push    0
0x8631DC: call    edx
0x8631DE: push    eax; a2
0x8631DF: mov     ecx, ebx; this
0x8631E1: call    sub_76C910
0x8631E6: push    1
0x8631E8: push    esi
0x8631E9: mov     ecx, edi
0x8631EB: call    sub_862600
0x8631F0: pop     ebx
0x8631F1: pop     edi
0x8631F2: mov     eax, esi
0x8631F4: pop     esi
0x8631F5: pop     ebp
0x8631F6: retn    0Ch
0x8631F9: mov     esi, ds:0B4747Ch; jumptable 00862B9C case 341
0x8631FF: mov     eax, [esi+24h]
0x863202: mov     ecx, [esp+10h+arg_4]
0x863206: mov     edx, [ecx]
0x863208: mov     ebx, [eax]
0x86320A: mov     eax, [edx+88h]
0x863210: push    0
0x863212: call    eax
0x863214: push    eax; a2
0x863215: mov     ecx, ebx; this
0x863217: call    sub_76C910
0x86321C: push    1
0x86321E: push    esi
0x86321F: mov     ecx, edi
0x863221: call    sub_862600
0x863226: pop     ebx
0x863227: pop     edi
0x863228: mov     eax, esi
0x86322A: pop     esi
0x86322B: pop     ebp
0x86322C: retn    0Ch
0x86322F: mov     esi, ds:0B47480h; jumptable 00862B9C case 342
0x863235: mov     ebx, [esp+10h+arg_4]
0x863239: mov     edx, [ebx]
0x86323B: mov     eax, [edx+8Ch]
0x863241: push    0
0x863243: mov     ecx, ebx
0x863245: call    eax
0x863247: test    eax, eax
0x863249: jz      short loc_863277
0x86324B: mov     edx, [ebx]
0x86324D: mov     eax, [edx+8Ch]
0x863253: push    0
0x863255: mov     ecx, ebx
0x863257: call    eax
0x863259: mov     ecx, [esi+24h]
0x86325C: mov     ecx, [ecx]; this
0x86325E: push    eax; a2
0x86325F: call    sub_76C910
0x863264: push    1
0x863266: push    esi
0x863267: mov     ecx, edi
0x863269: call    sub_862600
0x86326E: pop     ebx
0x86326F: pop     edi
0x863270: mov     eax, esi
0x863272: pop     esi
0x863273: pop     ebp
0x863274: retn    0Ch
0x863277: mov     eax, ds:0B430DCh
0x86327C: mov     ecx, [esi+24h]
0x86327F: mov     ecx, [ecx]; this
0x863281: push    eax; a2
0x863282: call    sub_76C910
0x863287: push    1
0x863289: push    esi
0x86328A: mov     ecx, edi
0x86328C: call    sub_862600
0x863291: pop     ebx
0x863292: pop     edi
0x863293: mov     eax, esi
0x863295: pop     esi
0x863296: pop     ebp
0x863297: retn    0Ch
0x86329A: mov     esi, ds:0B47484h; jumptable 00862B9C case 343
0x8632A0: jmp     short loc_863235
0x8632A2: mov     esi, ds:0B47488h; jumptable 00862B9C case 344
0x8632A8: jmp     short loc_863235
0x8632AA: mov     esi, ds:0B4748Ch; jumptable 00862B9C case 345
0x8632B0: push    0
0x8632B2: push    esi
0x8632B3: mov     ecx, edi
0x8632B5: call    sub_862600
0x8632BA: pop     ebx
0x8632BB: pop     edi
0x8632BC: mov     eax, esi
0x8632BE: pop     esi
0x8632BF: pop     ebp
0x8632C0: retn    0Ch
0x8632C3: mov     esi, ds:0B47490h; jumptable 00862B9C case 346
0x8632C9: push    0
0x8632CB: push    esi
0x8632CC: mov     ecx, edi
0x8632CE: call    sub_862600
0x8632D3: pop     ebx
0x8632D4: pop     edi
0x8632D5: mov     eax, esi
0x8632D7: pop     esi
0x8632D8: pop     ebp
0x8632D9: retn    0Ch
0x8632DC: mov     esi, ds:0B47494h; jumptable 00862B9C case 347
0x8632E2: push    0
0x8632E4: push    esi
0x8632E5: mov     ecx, edi
0x8632E7: call    sub_862600
0x8632EC: pop     ebx
0x8632ED: pop     edi
0x8632EE: mov     eax, esi
0x8632F0: pop     esi
0x8632F1: pop     ebp
0x8632F2: retn    0Ch
0x8632F5: mov     esi, ds:0B47498h; jumptable 00862B9C case 348
0x8632FB: push    0
0x8632FD: push    esi
0x8632FE: mov     ecx, edi
0x863300: call    sub_862600
0x863305: pop     ebx
0x863306: pop     edi
0x863307: mov     eax, esi
0x863309: pop     esi
0x86330A: pop     ebp
0x86330B: retn    0Ch
0x86330E: mov     esi, ds:0B4749Ch; jumptable 00862B9C case 349
0x863314: push    0
0x863316: push    esi
0x863317: mov     ecx, edi
0x863319: call    sub_862600
0x86331E: pop     ebx
