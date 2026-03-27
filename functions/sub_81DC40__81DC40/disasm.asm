0x81DC40: push    0FFFFFFFFh
0x81DC42: push    offset SEH_81DC40
0x81DC47: mov     eax, large fs:0
0x81DC4D: push    eax
0x81DC4E: sub     esp, 0Ch
0x81DC51: push    ebx
0x81DC52: push    ebp
0x81DC53: push    esi
0x81DC54: push    edi
0x81DC55: mov     eax, ds:0B30AACh
0x81DC5A: xor     eax, esp
0x81DC5C: push    eax
0x81DC5D: lea     eax, [esp+2Ch+var_C]
0x81DC61: mov     large fs:0, eax
0x81DC67: xor     esi, esi
0x81DC69: xor     edi, edi
0x81DC6B: mov     [esp+2Ch+var_14], esi
0x81DC6F: mov     [esp+2Ch+var_4], edi
0x81DC73: mov     [esp+2Ch+var_18], edi
0x81DC77: mov     eax, ds:0B45BA0h
0x81DC7C: cmp     eax, edi
0x81DC7E: mov     ebp, 1
0x81DC83: mov     byte ptr [esp+2Ch+var_4], 1
0x81DC88: jz      short loc_81DC97
0x81DC8A: mov     esi, eax
0x81DC8C: cmp     esi, edi
0x81DC8E: mov     [esp+2Ch+var_14], esi
0x81DC92: jz      short loc_81DC97
0x81DC94: add     [esi+60h], ebp
0x81DC97: mov     eax, [esi+18h]
0x81DC9A: or      ebx, 0FFFFFFFFh
0x81DC9D: cmp     eax, 4
0x81DCA0: jnb     loc_81DE52
0x81DCA6: lea     eax, [esp+2Ch+var_10]
0x81DCAA: push    eax
0x81DCAB: call    sub_772630
0x81DCB0: add     esp, 4
0x81DCB3: mov     eax, [eax]
0x81DCB5: test    eax, eax
0x81DCB7: jz      short loc_81DCC2
0x81DCB9: mov     edi, eax
0x81DCBB: add     [edi+5Ch], ebp
0x81DCBE: mov     [esp+2Ch+var_18], edi
0x81DCC2: mov     eax, [esp+2Ch+var_10]
0x81DCC6: test    eax, eax
0x81DCC8: mov     byte ptr [esp+2Ch+var_4], 1
0x81DCCD: jz      short loc_81DCE1
0x81DCCF: add     [eax+5Ch], ebx
0x81DCD2: mov     ecx, eax
0x81DCD4: add     eax, 5Ch ; '\'
0x81DCD7: cmp     dword ptr [eax], 0
0x81DCDA: jnz     short loc_81DCE1
0x81DCDC: call    sub_772560
0x81DCE1: push    2
0x81DCE3: push    1
0x81DCE5: push    0
0x81DCE7: push    edi
0x81DCE8: call    sub_801110
0x81DCED: mov     ecx, [esi+14h]
0x81DCF0: add     esp, 10h
0x81DCF3: push    edi; a3
0x81DCF4: push    ecx; a2
0x81DCF5: mov     ecx, esi; this
0x81DCF7: call    sub_760010
0x81DCFC: lea     edx, [esp+2Ch+var_10]
0x81DD00: push    edx
0x81DD01: call    sub_772630
0x81DD06: add     esp, 4
0x81DD09: mov     ebp, eax
0x81DD0B: cmp     edi, [ebp+0]
0x81DD0E: mov     byte ptr [esp+2Ch+var_4], 3
0x81DD13: jz      short loc_81DD34
0x81DD15: test    edi, edi
0x81DD17: jz      short loc_81DD25
0x81DD19: add     [edi+5Ch], ebx
0x81DD1C: jnz     short loc_81DD25
0x81DD1E: mov     ecx, edi
0x81DD20: call    sub_772560
0x81DD25: mov     edi, [ebp+0]
0x81DD28: test    edi, edi
0x81DD2A: mov     [esp+2Ch+var_18], edi
0x81DD2E: jz      short loc_81DD34
0x81DD30: add     dword ptr [edi+5Ch], 1
0x81DD34: mov     eax, [esp+2Ch+var_10]
0x81DD38: test    eax, eax
0x81DD3A: mov     byte ptr [esp+2Ch+var_4], 1
0x81DD3F: jz      short loc_81DD53
0x81DD41: add     [eax+5Ch], ebx
0x81DD44: mov     ecx, eax
0x81DD46: add     eax, 5Ch ; '\'
0x81DD49: cmp     dword ptr [eax], 0
0x81DD4C: jnz     short loc_81DD53
0x81DD4E: call    sub_772560
0x81DD53: push    2
0x81DD55: push    1
0x81DD57: push    1
0x81DD59: push    edi
0x81DD5A: call    sub_801110
0x81DD5F: mov     eax, [esi+14h]
0x81DD62: add     esp, 10h
0x81DD65: push    edi; a3
0x81DD66: push    eax; a2
0x81DD67: mov     ecx, esi; this
0x81DD69: call    sub_760010
0x81DD6E: lea     ecx, [esp+2Ch+var_10]
0x81DD72: push    ecx
0x81DD73: call    sub_772630
0x81DD78: add     esp, 4
0x81DD7B: mov     ebp, eax
0x81DD7D: cmp     edi, [ebp+0]
0x81DD80: mov     byte ptr [esp+2Ch+var_4], 4
0x81DD85: jz      short loc_81DDA6
0x81DD87: test    edi, edi
0x81DD89: jz      short loc_81DD97
0x81DD8B: add     [edi+5Ch], ebx
0x81DD8E: jnz     short loc_81DD97
0x81DD90: mov     ecx, edi
0x81DD92: call    sub_772560
0x81DD97: mov     edi, [ebp+0]
0x81DD9A: test    edi, edi
0x81DD9C: mov     [esp+2Ch+var_18], edi
0x81DDA0: jz      short loc_81DDA6
0x81DDA2: add     dword ptr [edi+5Ch], 1
0x81DDA6: mov     eax, [esp+2Ch+var_10]
0x81DDAA: test    eax, eax
0x81DDAC: mov     byte ptr [esp+2Ch+var_4], 1
0x81DDB1: jz      short loc_81DDC5
0x81DDB3: add     [eax+5Ch], ebx
0x81DDB6: mov     ecx, eax
0x81DDB8: add     eax, 5Ch ; '\'
0x81DDBB: cmp     dword ptr [eax], 0
0x81DDBE: jnz     short loc_81DDC5
0x81DDC0: call    sub_772560
0x81DDC5: push    2
0x81DDC7: push    1
0x81DDC9: push    2
0x81DDCB: push    edi
0x81DDCC: call    sub_801110
0x81DDD1: mov     edx, [esi+14h]
0x81DDD4: add     esp, 10h
0x81DDD7: push    edi; a3
0x81DDD8: push    edx; a2
0x81DDD9: mov     ecx, esi; this
0x81DDDB: call    sub_760010
0x81DDE0: lea     eax, [esp+2Ch+var_10]
0x81DDE4: push    eax
0x81DDE5: call    sub_772630
0x81DDEA: add     esp, 4
0x81DDED: mov     ebp, eax
0x81DDEF: cmp     edi, [ebp+0]
0x81DDF2: mov     byte ptr [esp+2Ch+var_4], 5
0x81DDF7: jz      short loc_81DE18
0x81DDF9: test    edi, edi
0x81DDFB: jz      short loc_81DE09
0x81DDFD: add     [edi+5Ch], ebx
0x81DE00: jnz     short loc_81DE09
0x81DE02: mov     ecx, edi
0x81DE04: call    sub_772560
0x81DE09: mov     edi, [ebp+0]
0x81DE0C: test    edi, edi
0x81DE0E: mov     [esp+2Ch+var_18], edi
0x81DE12: jz      short loc_81DE18
0x81DE14: add     dword ptr [edi+5Ch], 1
0x81DE18: mov     eax, [esp+2Ch+var_10]
0x81DE1C: test    eax, eax
0x81DE1E: mov     byte ptr [esp+2Ch+var_4], 1
0x81DE23: jz      short loc_81DE37
0x81DE25: add     [eax+5Ch], ebx
0x81DE28: mov     ecx, eax
0x81DE2A: add     eax, 5Ch ; '\'
0x81DE2D: cmp     dword ptr [eax], 0
0x81DE30: jnz     short loc_81DE37
0x81DE32: call    sub_772560
0x81DE37: push    2
0x81DE39: push    1
0x81DE3B: push    3
0x81DE3D: push    edi
0x81DE3E: call    sub_801110
0x81DE43: mov     ecx, [esi+14h]
0x81DE46: add     esp, 10h
0x81DE49: push    edi; a3
0x81DE4A: push    ecx; a2
0x81DE4B: mov     ecx, esi; this
0x81DE4D: call    sub_760010
0x81DE52: mov     eax, ds:0B452DCh
0x81DE57: mov     ebp, [esi+58h]
0x81DE5A: cmp     ebp, eax
0x81DE5C: mov     ebx, eax
0x81DE5E: jz      short loc_81DE92
0x81DE60: test    ebp, ebp
0x81DE62: jz      short loc_81DE81
0x81DE64: lea     edx, [ebp+4]
0x81DE67: push    edx; lpAddend
0x81DE68: call    dword ptr ds:0A2807Ch
0x81DE6E: test    eax, eax
0x81DE70: jnz     short loc_81DE81
0x81DE72: test    ebp, ebp
0x81DE74: jz      short loc_81DE81
0x81DE76: mov     eax, [ebp+0]
0x81DE79: mov     edx, [eax]
0x81DE7B: push    1
0x81DE7D: mov     ecx, ebp
0x81DE7F: call    edx
0x81DE81: test    ebx, ebx
0x81DE83: mov     [esi+58h], ebx
0x81DE86: jz      short loc_81DE92
0x81DE88: add     ebx, 4
0x81DE8B: push    ebx; lpAddend
0x81DE8C: call    dword ptr ds:0A28078h
0x81DE92: mov     eax, ds:0B45108h
0x81DE97: mov     ebp, [esi+44h]
0x81DE9A: cmp     ebp, eax
0x81DE9C: mov     ebx, eax
0x81DE9E: jz      short loc_81DED2
0x81DEA0: test    ebp, ebp
0x81DEA2: jz      short loc_81DEC1
0x81DEA4: lea     eax, [ebp+4]
0x81DEA7: push    eax; lpAddend
0x81DEA8: call    dword ptr ds:0A2807Ch
0x81DEAE: test    eax, eax
0x81DEB0: jnz     short loc_81DEC1
0x81DEB2: test    ebp, ebp
0x81DEB4: jz      short loc_81DEC1
0x81DEB6: mov     edx, [ebp+0]
0x81DEB9: mov     eax, [edx]
0x81DEBB: push    1
0x81DEBD: mov     ecx, ebp
0x81DEBF: call    eax
0x81DEC1: test    ebx, ebx
0x81DEC3: mov     [esi+44h], ebx
0x81DEC6: jz      short loc_81DED2
0x81DEC8: add     ebx, 4
0x81DECB: push    ebx; lpAddend
0x81DECC: call    dword ptr ds:0A28078h
0x81DED2: cmp     dword ptr [esi+30h], 0
0x81DED6: jnz     short loc_81DEE0
0x81DED8: call    sub_772DF0
0x81DEDD: mov     [esi+30h], eax
0x81DEE0: mov     ecx, [esi+30h]
0x81DEE3: push    0
0x81DEE5: push    1
0x81DEE7: push    1Bh
0x81DEE9: call    sub_772CD0
0x81DEEE: cmp     dword ptr [esi+30h], 0
0x81DEF2: jnz     short loc_81DEFC
0x81DEF4: call    sub_772DF0
0x81DEF9: mov     [esi+30h], eax
0x81DEFC: mov     ecx, [esi+30h]
0x81DEFF: push    0
0x81DF01: push    2
0x81DF03: push    13h
0x81DF05: call    sub_772CD0
0x81DF0A: cmp     dword ptr [esi+30h], 0
0x81DF0E: jnz     short loc_81DF18
0x81DF10: call    sub_772DF0
0x81DF15: mov     [esi+30h], eax
0x81DF18: mov     ecx, [esi+30h]
0x81DF1B: push    0
0x81DF1D: push    2
0x81DF1F: push    14h
0x81DF21: call    sub_772CD0
0x81DF26: cmp     dword ptr [esi+30h], 0
0x81DF2A: jnz     short loc_81DF34
0x81DF2C: call    sub_772DF0
0x81DF31: mov     [esi+30h], eax
0x81DF34: mov     ecx, [esi+30h]
0x81DF37: push    0
0x81DF39: push    0
0x81DF3B: push    0Fh
0x81DF3D: call    sub_772CD0
0x81DF42: cmp     dword ptr [esi+30h], 0
0x81DF46: jnz     short loc_81DF50
0x81DF48: call    sub_772DF0
0x81DF4D: mov     [esi+30h], eax
0x81DF50: mov     ecx, [esi+30h]
0x81DF53: push    0
0x81DF55: push    1
0x81DF57: push    7
0x81DF59: call    sub_772CD0
0x81DF5E: cmp     dword ptr [esi+30h], 0
0x81DF62: jnz     short loc_81DF6C
0x81DF64: call    sub_772DF0
0x81DF69: mov     [esi+30h], eax
0x81DF6C: mov     ecx, [esi+30h]
0x81DF6F: push    0
0x81DF71: push    3
0x81DF73: push    17h
0x81DF75: call    sub_772CD0
0x81DF7A: cmp     dword ptr [esi+30h], 0
0x81DF7E: jnz     short loc_81DF88
0x81DF80: call    sub_772DF0
0x81DF85: mov     [esi+30h], eax
0x81DF88: mov     ecx, [esi+30h]
0x81DF8B: push    0
0x81DF8D: push    0
0x81DF8F: push    0Eh
0x81DF91: call    sub_772CD0
0x81DF96: cmp     dword ptr [esi+30h], 0
0x81DF9A: jnz     short loc_81DFA4
0x81DF9C: call    sub_772DF0
0x81DFA1: mov     [esi+30h], eax
0x81DFA4: mov     ecx, [esi+30h]
0x81DFA7: push    0
0x81DFA9: push    0
0x81DFAB: push    34h ; '4'
0x81DFAD: call    sub_772CD0
0x81DFB2: mov     ebp, 4
0x81DFB7: or      ebx, 0FFFFFFFFh
0x81DFBA: cmp     esi, ds:0B45BA4h
0x81DFC0: mov     dword ptr ds:0B44120h, 20006h
0x81DFCA: mov     ds:0B447B0h, ebp
0x81DFD0: mov     ds:0B44E40h, ebp
0x81DFD6: jz      short loc_81DFF6
0x81DFD8: add     [esi+60h], ebx
0x81DFDB: jnz     short loc_81DFE4
0x81DFDD: mov     ecx, esi
0x81DFDF: call    sub_7604D0
0x81DFE4: mov     esi, ds:0B45BA4h
0x81DFEA: test    esi, esi
0x81DFEC: mov     [esp+2Ch+var_14], esi
0x81DFF0: jz      short loc_81DFF6
0x81DFF2: add     dword ptr [esi+60h], 1
0x81DFF6: cmp     [esi+18h], ebp
0x81DFF9: jnb     loc_81E1C7
0x81DFFF: lea     ecx, [esp+2Ch+var_10]
0x81E003: push    ecx
0x81E004: call    sub_772630
0x81E009: add     esp, 4
0x81E00C: mov     ebp, eax
0x81E00E: cmp     edi, [ebp+0]
0x81E011: mov     byte ptr [esp+2Ch+var_4], 6
0x81E016: jz      short loc_81E037
0x81E018: test    edi, edi
0x81E01A: jz      short loc_81E028
0x81E01C: add     [edi+5Ch], ebx
0x81E01F: jnz     short loc_81E028
0x81E021: mov     ecx, edi
0x81E023: call    sub_772560
0x81E028: mov     edi, [ebp+0]
0x81E02B: test    edi, edi
0x81E02D: mov     [esp+2Ch+var_18], edi
0x81E031: jz      short loc_81E037
0x81E033: add     dword ptr [edi+5Ch], 1
0x81E037: mov     eax, [esp+2Ch+var_10]
0x81E03B: test    eax, eax
0x81E03D: mov     byte ptr [esp+2Ch+var_4], 1
0x81E042: jz      short loc_81E056
0x81E044: add     [eax+5Ch], ebx
0x81E047: mov     ecx, eax
0x81E049: add     eax, 5Ch ; '\'
0x81E04C: cmp     dword ptr [eax], 0
0x81E04F: jnz     short loc_81E056
0x81E051: call    sub_772560
0x81E056: push    2
0x81E058: push    1
0x81E05A: push    0
0x81E05C: push    edi
0x81E05D: call    sub_801110
0x81E062: mov     edx, [esi+14h]
0x81E065: add     esp, 10h
0x81E068: push    edi; a3
0x81E069: push    edx; a2
0x81E06A: mov     ecx, esi; this
0x81E06C: call    sub_760010
0x81E071: lea     eax, [esp+2Ch+var_10]
0x81E075: push    eax
0x81E076: call    sub_772630
0x81E07B: add     esp, 4
0x81E07E: mov     ebp, eax
0x81E080: cmp     edi, [ebp+0]
0x81E083: mov     byte ptr [esp+2Ch+var_4], 7
0x81E088: jz      short loc_81E0A9
0x81E08A: test    edi, edi
0x81E08C: jz      short loc_81E09A
0x81E08E: add     [edi+5Ch], ebx
0x81E091: jnz     short loc_81E09A
0x81E093: mov     ecx, edi
0x81E095: call    sub_772560
0x81E09A: mov     edi, [ebp+0]
0x81E09D: test    edi, edi
0x81E09F: mov     [esp+2Ch+var_18], edi
0x81E0A3: jz      short loc_81E0A9
0x81E0A5: add     dword ptr [edi+5Ch], 1
0x81E0A9: mov     eax, [esp+2Ch+var_10]
0x81E0AD: test    eax, eax
0x81E0AF: mov     byte ptr [esp+2Ch+var_4], 1
0x81E0B4: jz      short loc_81E0C8
0x81E0B6: add     [eax+5Ch], ebx
0x81E0B9: mov     ecx, eax
0x81E0BB: add     eax, 5Ch ; '\'
0x81E0BE: cmp     dword ptr [eax], 0
0x81E0C1: jnz     short loc_81E0C8
0x81E0C3: call    sub_772560
0x81E0C8: push    2
0x81E0CA: push    1
0x81E0CC: push    1
0x81E0CE: push    edi
0x81E0CF: call    sub_801110
0x81E0D4: mov     ecx, [esi+14h]
0x81E0D7: add     esp, 10h
0x81E0DA: push    edi; a3
0x81E0DB: push    ecx; a2
0x81E0DC: mov     ecx, esi; this
0x81E0DE: call    sub_760010
0x81E0E3: lea     edx, [esp+2Ch+var_10]
0x81E0E7: push    edx
0x81E0E8: call    sub_772630
0x81E0ED: add     esp, 4
0x81E0F0: mov     ebp, eax
0x81E0F2: cmp     edi, [ebp+0]
0x81E0F5: mov     byte ptr [esp+2Ch+var_4], 8
0x81E0FA: jz      short loc_81E11B
0x81E0FC: test    edi, edi
0x81E0FE: jz      short loc_81E10C
0x81E100: add     [edi+5Ch], ebx
0x81E103: jnz     short loc_81E10C
0x81E105: mov     ecx, edi
0x81E107: call    sub_772560
0x81E10C: mov     edi, [ebp+0]
0x81E10F: test    edi, edi
0x81E111: mov     [esp+2Ch+var_18], edi
0x81E115: jz      short loc_81E11B
0x81E117: add     dword ptr [edi+5Ch], 1
0x81E11B: mov     eax, [esp+2Ch+var_10]
0x81E11F: test    eax, eax
0x81E121: mov     byte ptr [esp+2Ch+var_4], 1
0x81E126: jz      short loc_81E13A
0x81E128: add     [eax+5Ch], ebx
0x81E12B: mov     ecx, eax
0x81E12D: add     eax, 5Ch ; '\'
0x81E130: cmp     dword ptr [eax], 0
0x81E133: jnz     short loc_81E13A
0x81E135: call    sub_772560
0x81E13A: push    2
0x81E13C: push    1
0x81E13E: push    2
0x81E140: push    edi
0x81E141: call    sub_801110
0x81E146: mov     eax, [esi+14h]
0x81E149: add     esp, 10h
0x81E14C: push    edi; a3
0x81E14D: push    eax; a2
0x81E14E: mov     ecx, esi; this
0x81E150: call    sub_760010
0x81E155: lea     ecx, [esp+2Ch+var_10]
0x81E159: push    ecx
0x81E15A: call    sub_772630
0x81E15F: add     esp, 4
0x81E162: mov     ebp, eax
0x81E164: cmp     edi, [ebp+0]
0x81E167: mov     byte ptr [esp+2Ch+var_4], 9
0x81E16C: jz      short loc_81E18D
0x81E16E: test    edi, edi
0x81E170: jz      short loc_81E17E
0x81E172: add     [edi+5Ch], ebx
0x81E175: jnz     short loc_81E17E
0x81E177: mov     ecx, edi
0x81E179: call    sub_772560
0x81E17E: mov     edi, [ebp+0]
0x81E181: test    edi, edi
0x81E183: mov     [esp+2Ch+var_18], edi
0x81E187: jz      short loc_81E18D
0x81E189: add     dword ptr [edi+5Ch], 1
0x81E18D: mov     eax, [esp+2Ch+var_10]
0x81E191: test    eax, eax
0x81E193: mov     byte ptr [esp+2Ch+var_4], 1
0x81E198: jz      short loc_81E1AC
0x81E19A: add     [eax+5Ch], ebx
0x81E19D: mov     ecx, eax
0x81E19F: add     eax, 5Ch ; '\'
0x81E1A2: cmp     dword ptr [eax], 0
0x81E1A5: jnz     short loc_81E1AC
0x81E1A7: call    sub_772560
0x81E1AC: push    2
0x81E1AE: push    1
0x81E1B0: push    3
0x81E1B2: push    edi
0x81E1B3: call    sub_801110
0x81E1B8: mov     edx, [esi+14h]
0x81E1BB: add     esp, 10h
0x81E1BE: push    edi; a3
0x81E1BF: push    edx; a2
0x81E1C0: mov     ecx, esi; this
0x81E1C2: call    sub_760010
0x81E1C7: mov     eax, ds:0B452DCh
0x81E1CC: mov     ebp, [esi+58h]
0x81E1CF: cmp     ebp, eax
0x81E1D1: mov     ebx, eax
0x81E1D3: jz      short loc_81E207
0x81E1D5: test    ebp, ebp
0x81E1D7: jz      short loc_81E1F6
0x81E1D9: lea     eax, [ebp+4]
0x81E1DC: push    eax; lpAddend
0x81E1DD: call    dword ptr ds:0A2807Ch
0x81E1E3: test    eax, eax
0x81E1E5: jnz     short loc_81E1F6
0x81E1E7: test    ebp, ebp
0x81E1E9: jz      short loc_81E1F6
0x81E1EB: mov     edx, [ebp+0]
0x81E1EE: mov     eax, [edx]
0x81E1F0: push    1
0x81E1F2: mov     ecx, ebp
0x81E1F4: call    eax
0x81E1F6: test    ebx, ebx
0x81E1F8: mov     [esi+58h], ebx
0x81E1FB: jz      short loc_81E207
0x81E1FD: add     ebx, 4
0x81E200: push    ebx; lpAddend
0x81E201: call    dword ptr ds:0A28078h
0x81E207: mov     eax, ds:0B4510Ch
0x81E20C: mov     ebp, [esi+44h]
0x81E20F: cmp     ebp, eax
0x81E211: mov     ebx, eax
0x81E213: jz      short loc_81E247
0x81E215: test    ebp, ebp
0x81E217: jz      short loc_81E236
0x81E219: lea     ecx, [ebp+4]
0x81E21C: push    ecx; lpAddend
0x81E21D: call    dword ptr ds:0A2807Ch
0x81E223: test    eax, eax
0x81E225: jnz     short loc_81E236
0x81E227: test    ebp, ebp
0x81E229: jz      short loc_81E236
0x81E22B: mov     edx, [ebp+0]
0x81E22E: mov     eax, [edx]
0x81E230: push    1
0x81E232: mov     ecx, ebp
0x81E234: call    eax
0x81E236: test    ebx, ebx
0x81E238: mov     [esi+44h], ebx
0x81E23B: jz      short loc_81E247
0x81E23D: add     ebx, 4
0x81E240: push    ebx; lpAddend
0x81E241: call    dword ptr ds:0A28078h
0x81E247: cmp     dword ptr [esi+30h], 0
0x81E24B: jnz     short loc_81E255
0x81E24D: call    sub_772DF0
0x81E252: mov     [esi+30h], eax
0x81E255: mov     ecx, [esi+30h]
0x81E258: push    0
0x81E25A: push    1
0x81E25C: push    1Bh
0x81E25E: call    sub_772CD0
0x81E263: cmp     dword ptr [esi+30h], 0
0x81E267: jnz     short loc_81E271
0x81E269: call    sub_772DF0
0x81E26E: mov     [esi+30h], eax
0x81E271: mov     ecx, [esi+30h]
0x81E274: push    0
0x81E276: push    2
0x81E278: push    13h
0x81E27A: call    sub_772CD0
0x81E27F: cmp     dword ptr [esi+30h], 0
0x81E283: jnz     short loc_81E28D
0x81E285: call    sub_772DF0
0x81E28A: mov     [esi+30h], eax
0x81E28D: mov     ecx, [esi+30h]
0x81E290: push    0
0x81E292: push    2
0x81E294: push    14h
0x81E296: call    sub_772CD0
0x81E29B: cmp     dword ptr [esi+30h], 0
0x81E29F: jnz     short loc_81E2A9
0x81E2A1: call    sub_772DF0
0x81E2A6: mov     [esi+30h], eax
0x81E2A9: mov     ecx, [esi+30h]
0x81E2AC: push    0
0x81E2AE: push    0
0x81E2B0: push    0Fh
0x81E2B2: call    sub_772CD0
0x81E2B7: cmp     dword ptr [esi+30h], 0
0x81E2BB: jnz     short loc_81E2C5
0x81E2BD: call    sub_772DF0
0x81E2C2: mov     [esi+30h], eax
0x81E2C5: mov     ecx, [esi+30h]
0x81E2C8: push    0
0x81E2CA: push    1
0x81E2CC: push    7
0x81E2CE: call    sub_772CD0
0x81E2D3: cmp     dword ptr [esi+30h], 0
0x81E2D7: jnz     short loc_81E2E1
0x81E2D9: call    sub_772DF0
0x81E2DE: mov     [esi+30h], eax
0x81E2E1: mov     ecx, [esi+30h]
0x81E2E4: push    0
0x81E2E6: push    3
0x81E2E8: push    17h
0x81E2EA: call    sub_772CD0
0x81E2EF: cmp     dword ptr [esi+30h], 0
0x81E2F3: jnz     short loc_81E2FD
0x81E2F5: call    sub_772DF0
0x81E2FA: mov     [esi+30h], eax
0x81E2FD: mov     ecx, [esi+30h]
0x81E300: push    0
0x81E302: push    0
0x81E304: push    0Eh
0x81E306: call    sub_772CD0
0x81E30B: cmp     dword ptr [esi+30h], 0
0x81E30F: jnz     short loc_81E319
0x81E311: call    sub_772DF0
0x81E316: mov     [esi+30h], eax
0x81E319: mov     ecx, [esi+30h]
0x81E31C: push    0
0x81E31E: push    0
0x81E320: push    34h ; '4'
0x81E322: call    sub_772CD0
0x81E327: mov     ebp, 4
0x81E32C: or      ebx, 0FFFFFFFFh
0x81E32F: cmp     esi, ds:0B45BA8h
0x81E335: mov     dword ptr ds:0B44124h, 20006h
0x81E33F: mov     ds:0B447B4h, ebp
0x81E345: mov     ds:0B44E44h, ebp
0x81E34B: jz      short loc_81E36B
0x81E34D: add     [esi+60h], ebx
0x81E350: jnz     short loc_81E359
0x81E352: mov     ecx, esi
0x81E354: call    sub_7604D0
0x81E359: mov     esi, ds:0B45BA8h
0x81E35F: test    esi, esi
0x81E361: mov     [esp+2Ch+var_14], esi
0x81E365: jz      short loc_81E36B
0x81E367: add     dword ptr [esi+60h], 1
0x81E36B: cmp     [esi+18h], ebp
0x81E36E: jnb     loc_81E53C
0x81E374: lea     ecx, [esp+2Ch+var_10]
0x81E378: push    ecx
0x81E379: call    sub_772630
0x81E37E: add     esp, 4
0x81E381: mov     ebp, eax
0x81E383: cmp     edi, [ebp+0]
0x81E386: mov     byte ptr [esp+2Ch+var_4], 0Ah
0x81E38B: jz      short loc_81E3AC
0x81E38D: test    edi, edi
0x81E38F: jz      short loc_81E39D
0x81E391: add     [edi+5Ch], ebx
0x81E394: jnz     short loc_81E39D
0x81E396: mov     ecx, edi
0x81E398: call    sub_772560
0x81E39D: mov     edi, [ebp+0]
0x81E3A0: test    edi, edi
0x81E3A2: mov     [esp+2Ch+var_18], edi
0x81E3A6: jz      short loc_81E3AC
0x81E3A8: add     dword ptr [edi+5Ch], 1
0x81E3AC: mov     eax, [esp+2Ch+var_10]
0x81E3B0: test    eax, eax
0x81E3B2: mov     byte ptr [esp+2Ch+var_4], 1
0x81E3B7: jz      short loc_81E3CB
0x81E3B9: add     [eax+5Ch], ebx
0x81E3BC: mov     ecx, eax
0x81E3BE: add     eax, 5Ch ; '\'
0x81E3C1: cmp     dword ptr [eax], 0
0x81E3C4: jnz     short loc_81E3CB
0x81E3C6: call    sub_772560
0x81E3CB: push    2
0x81E3CD: push    1
0x81E3CF: push    0
0x81E3D1: push    edi
0x81E3D2: call    sub_801110
0x81E3D7: mov     edx, [esi+14h]
0x81E3DA: add     esp, 10h
0x81E3DD: push    edi; a3
0x81E3DE: push    edx; a2
0x81E3DF: mov     ecx, esi; this
0x81E3E1: call    sub_760010
0x81E3E6: lea     eax, [esp+2Ch+var_10]
0x81E3EA: push    eax
0x81E3EB: call    sub_772630
0x81E3F0: add     esp, 4
0x81E3F3: mov     ebp, eax
0x81E3F5: cmp     edi, [ebp+0]
0x81E3F8: mov     byte ptr [esp+2Ch+var_4], 0Bh
0x81E3FD: jz      short loc_81E41E
0x81E3FF: test    edi, edi
0x81E401: jz      short loc_81E40F
0x81E403: add     [edi+5Ch], ebx
0x81E406: jnz     short loc_81E40F
0x81E408: mov     ecx, edi
0x81E40A: call    sub_772560
0x81E40F: mov     edi, [ebp+0]
0x81E412: test    edi, edi
0x81E414: mov     [esp+2Ch+var_18], edi
0x81E418: jz      short loc_81E41E
0x81E41A: add     dword ptr [edi+5Ch], 1
0x81E41E: mov     eax, [esp+2Ch+var_10]
0x81E422: test    eax, eax
0x81E424: mov     byte ptr [esp+2Ch+var_4], 1
0x81E429: jz      short loc_81E43D
0x81E42B: add     [eax+5Ch], ebx
0x81E42E: mov     ecx, eax
0x81E430: add     eax, 5Ch ; '\'
0x81E433: cmp     dword ptr [eax], 0
0x81E436: jnz     short loc_81E43D
0x81E438: call    sub_772560
0x81E43D: push    2
0x81E43F: push    1
0x81E441: push    1
0x81E443: push    edi
0x81E444: call    sub_801110
0x81E449: mov     ecx, [esi+14h]
0x81E44C: add     esp, 10h
0x81E44F: push    edi; a3
0x81E450: push    ecx; a2
0x81E451: mov     ecx, esi; this
0x81E453: call    sub_760010
0x81E458: lea     edx, [esp+2Ch+var_10]
0x81E45C: push    edx
0x81E45D: call    sub_772630
0x81E462: add     esp, 4
0x81E465: mov     ebp, eax
0x81E467: cmp     edi, [ebp+0]
0x81E46A: mov     byte ptr [esp+2Ch+var_4], 0Ch
0x81E46F: jz      short loc_81E490
0x81E471: test    edi, edi
0x81E473: jz      short loc_81E481
0x81E475: add     [edi+5Ch], ebx
0x81E478: jnz     short loc_81E481
0x81E47A: mov     ecx, edi
0x81E47C: call    sub_772560
0x81E481: mov     edi, [ebp+0]
0x81E484: test    edi, edi
0x81E486: mov     [esp+2Ch+var_18], edi
0x81E48A: jz      short loc_81E490
0x81E48C: add     dword ptr [edi+5Ch], 1
0x81E490: mov     eax, [esp+2Ch+var_10]
0x81E494: test    eax, eax
0x81E496: mov     byte ptr [esp+2Ch+var_4], 1
0x81E49B: jz      short loc_81E4AF
0x81E49D: add     [eax+5Ch], ebx
0x81E4A0: mov     ecx, eax
0x81E4A2: add     eax, 5Ch ; '\'
0x81E4A5: cmp     dword ptr [eax], 0
0x81E4A8: jnz     short loc_81E4AF
0x81E4AA: call    sub_772560
0x81E4AF: push    2
0x81E4B1: push    1
0x81E4B3: push    2
0x81E4B5: push    edi
0x81E4B6: call    sub_801110
0x81E4BB: mov     eax, [esi+14h]
0x81E4BE: add     esp, 10h
0x81E4C1: push    edi; a3
0x81E4C2: push    eax; a2
0x81E4C3: mov     ecx, esi; this
0x81E4C5: call    sub_760010
0x81E4CA: lea     ecx, [esp+2Ch+var_10]
0x81E4CE: push    ecx
0x81E4CF: call    sub_772630
0x81E4D4: add     esp, 4
0x81E4D7: mov     ebp, eax
0x81E4D9: cmp     edi, [ebp+0]
0x81E4DC: mov     byte ptr [esp+2Ch+var_4], 0Dh
0x81E4E1: jz      short loc_81E502
0x81E4E3: test    edi, edi
0x81E4E5: jz      short loc_81E4F3
0x81E4E7: add     [edi+5Ch], ebx
0x81E4EA: jnz     short loc_81E4F3
0x81E4EC: mov     ecx, edi
0x81E4EE: call    sub_772560
0x81E4F3: mov     edi, [ebp+0]
0x81E4F6: test    edi, edi
0x81E4F8: mov     [esp+2Ch+var_18], edi
0x81E4FC: jz      short loc_81E502
0x81E4FE: add     dword ptr [edi+5Ch], 1
0x81E502: mov     eax, [esp+2Ch+var_10]
0x81E506: test    eax, eax
0x81E508: mov     byte ptr [esp+2Ch+var_4], 1
0x81E50D: jz      short loc_81E521
0x81E50F: add     [eax+5Ch], ebx
0x81E512: mov     ecx, eax
0x81E514: add     eax, 5Ch ; '\'
0x81E517: cmp     dword ptr [eax], 0
0x81E51A: jnz     short loc_81E521
0x81E51C: call    sub_772560
0x81E521: push    2
0x81E523: push    1
0x81E525: push    3
0x81E527: push    edi
0x81E528: call    sub_801110
0x81E52D: mov     edx, [esi+14h]
0x81E530: add     esp, 10h
0x81E533: push    edi; a3
0x81E534: push    edx; a2
0x81E535: mov     ecx, esi; this
0x81E537: call    sub_760010
0x81E53C: mov     eax, ds:0B45350h
0x81E541: mov     ebp, [esi+58h]
0x81E544: cmp     ebp, eax
0x81E546: mov     ebx, eax
0x81E548: jz      short loc_81E57C
0x81E54A: test    ebp, ebp
0x81E54C: jz      short loc_81E56B
0x81E54E: lea     eax, [ebp+4]
0x81E551: push    eax; lpAddend
0x81E552: call    dword ptr ds:0A2807Ch
0x81E558: test    eax, eax
0x81E55A: jnz     short loc_81E56B
0x81E55C: test    ebp, ebp
0x81E55E: jz      short loc_81E56B
0x81E560: mov     edx, [ebp+0]
0x81E563: mov     eax, [edx]
0x81E565: push    1
0x81E567: mov     ecx, ebp
0x81E569: call    eax
0x81E56B: test    ebx, ebx
0x81E56D: mov     [esi+58h], ebx
0x81E570: jz      short loc_81E57C
0x81E572: add     ebx, 4
0x81E575: push    ebx; lpAddend
0x81E576: call    dword ptr ds:0A28078h
0x81E57C: mov     eax, ds:0B45108h
0x81E581: mov     ebp, [esi+44h]
0x81E584: cmp     ebp, eax
0x81E586: mov     ebx, eax
0x81E588: jz      short loc_81E5BC
0x81E58A: test    ebp, ebp
0x81E58C: jz      short loc_81E5AB
0x81E58E: lea     ecx, [ebp+4]
0x81E591: push    ecx; lpAddend
0x81E592: call    dword ptr ds:0A2807Ch
0x81E598: test    eax, eax
0x81E59A: jnz     short loc_81E5AB
0x81E59C: test    ebp, ebp
0x81E59E: jz      short loc_81E5AB
0x81E5A0: mov     edx, [ebp+0]
0x81E5A3: mov     eax, [edx]
0x81E5A5: push    1
0x81E5A7: mov     ecx, ebp
0x81E5A9: call    eax
0x81E5AB: test    ebx, ebx
0x81E5AD: mov     [esi+44h], ebx
0x81E5B0: jz      short loc_81E5BC
0x81E5B2: add     ebx, 4
0x81E5B5: push    ebx; lpAddend
0x81E5B6: call    dword ptr ds:0A28078h
0x81E5BC: cmp     dword ptr [esi+30h], 0
0x81E5C0: jnz     short loc_81E5CA
0x81E5C2: call    sub_772DF0
0x81E5C7: mov     [esi+30h], eax
0x81E5CA: mov     ecx, [esi+30h]
0x81E5CD: push    0
0x81E5CF: push    1
0x81E5D1: push    1Bh
0x81E5D3: call    sub_772CD0
0x81E5D8: cmp     dword ptr [esi+30h], 0
0x81E5DC: jnz     short loc_81E5E6
0x81E5DE: call    sub_772DF0
0x81E5E3: mov     [esi+30h], eax
0x81E5E6: mov     ecx, [esi+30h]
0x81E5E9: push    0
0x81E5EB: push    2
0x81E5ED: push    13h
0x81E5EF: call    sub_772CD0
0x81E5F4: cmp     dword ptr [esi+30h], 0
0x81E5F8: jnz     short loc_81E602
0x81E5FA: call    sub_772DF0
0x81E5FF: mov     [esi+30h], eax
0x81E602: mov     ecx, [esi+30h]
0x81E605: push    0
0x81E607: push    2
0x81E609: push    14h
0x81E60B: call    sub_772CD0
0x81E610: cmp     dword ptr [esi+30h], 0
0x81E614: jnz     short loc_81E61E
0x81E616: call    sub_772DF0
0x81E61B: mov     [esi+30h], eax
0x81E61E: mov     ecx, [esi+30h]
0x81E621: push    0
0x81E623: push    0
0x81E625: push    0Fh
0x81E627: call    sub_772CD0
0x81E62C: cmp     dword ptr [esi+30h], 0
0x81E630: jnz     short loc_81E63A
0x81E632: call    sub_772DF0
0x81E637: mov     [esi+30h], eax
0x81E63A: mov     ecx, [esi+30h]
0x81E63D: push    0
0x81E63F: push    1
0x81E641: push    7
0x81E643: call    sub_772CD0
0x81E648: cmp     dword ptr [esi+30h], 0
0x81E64C: jnz     short loc_81E656
0x81E64E: call    sub_772DF0
0x81E653: mov     [esi+30h], eax
0x81E656: mov     ecx, [esi+30h]
0x81E659: push    0
0x81E65B: push    3
0x81E65D: push    17h
0x81E65F: call    sub_772CD0
0x81E664: cmp     dword ptr [esi+30h], 0
0x81E668: jnz     short loc_81E672
0x81E66A: call    sub_772DF0
0x81E66F: mov     [esi+30h], eax
0x81E672: mov     ecx, [esi+30h]
0x81E675: push    0
0x81E677: push    0
0x81E679: push    0Eh
0x81E67B: call    sub_772CD0
0x81E680: cmp     dword ptr [esi+30h], 0
0x81E684: jnz     short loc_81E68E
0x81E686: call    sub_772DF0
0x81E68B: mov     [esi+30h], eax
0x81E68E: mov     ecx, [esi+30h]
0x81E691: push    0
0x81E693: push    0
0x81E695: push    34h ; '4'
0x81E697: call    sub_772CD0
0x81E69C: mov     ebp, 4
0x81E6A1: or      ebx, 0FFFFFFFFh
0x81E6A4: cmp     esi, ds:0B45BACh
0x81E6AA: mov     dword ptr ds:0B44128h, 6000Ch
0x81E6B4: mov     ds:0B447B8h, ebp
0x81E6BA: mov     ds:0B44E48h, ebp
0x81E6C0: jz      short loc_81E6E0
0x81E6C2: add     [esi+60h], ebx
0x81E6C5: jnz     short loc_81E6CE
0x81E6C7: mov     ecx, esi
0x81E6C9: call    sub_7604D0
0x81E6CE: mov     esi, ds:0B45BACh
0x81E6D4: test    esi, esi
0x81E6D6: mov     [esp+2Ch+var_14], esi
0x81E6DA: jz      short loc_81E6E0
0x81E6DC: add     dword ptr [esi+60h], 1
0x81E6E0: cmp     [esi+18h], ebp
0x81E6E3: jnb     loc_81E8B1
0x81E6E9: lea     ecx, [esp+2Ch+var_10]
0x81E6ED: push    ecx
0x81E6EE: call    sub_772630
0x81E6F3: add     esp, 4
0x81E6F6: mov     ebp, eax
0x81E6F8: cmp     edi, [ebp+0]
0x81E6FB: mov     byte ptr [esp+2Ch+var_4], 0Eh
0x81E700: jz      short loc_81E721
0x81E702: test    edi, edi
0x81E704: jz      short loc_81E712
0x81E706: add     [edi+5Ch], ebx
0x81E709: jnz     short loc_81E712
0x81E70B: mov     ecx, edi
0x81E70D: call    sub_772560
0x81E712: mov     edi, [ebp+0]
0x81E715: test    edi, edi
0x81E717: mov     [esp+2Ch+var_18], edi
0x81E71B: jz      short loc_81E721
0x81E71D: add     dword ptr [edi+5Ch], 1
0x81E721: mov     eax, [esp+2Ch+var_10]
0x81E725: test    eax, eax
0x81E727: mov     byte ptr [esp+2Ch+var_4], 1
0x81E72C: jz      short loc_81E740
0x81E72E: add     [eax+5Ch], ebx
0x81E731: mov     ecx, eax
0x81E733: add     eax, 5Ch ; '\'
0x81E736: cmp     dword ptr [eax], 0
0x81E739: jnz     short loc_81E740
0x81E73B: call    sub_772560
0x81E740: push    2
0x81E742: push    1
0x81E744: push    0
0x81E746: push    edi
0x81E747: call    sub_801110
0x81E74C: mov     edx, [esi+14h]
0x81E74F: add     esp, 10h
0x81E752: push    edi; a3
0x81E753: push    edx; a2
0x81E754: mov     ecx, esi; this
0x81E756: call    sub_760010
0x81E75B: lea     eax, [esp+2Ch+var_10]
0x81E75F: push    eax
0x81E760: call    sub_772630
0x81E765: add     esp, 4
0x81E768: mov     ebp, eax
0x81E76A: cmp     edi, [ebp+0]
0x81E76D: mov     byte ptr [esp+2Ch+var_4], 0Fh
0x81E772: jz      short loc_81E793
0x81E774: test    edi, edi
0x81E776: jz      short loc_81E784
0x81E778: add     [edi+5Ch], ebx
0x81E77B: jnz     short loc_81E784
0x81E77D: mov     ecx, edi
0x81E77F: call    sub_772560
0x81E784: mov     edi, [ebp+0]
0x81E787: test    edi, edi
0x81E789: mov     [esp+2Ch+var_18], edi
0x81E78D: jz      short loc_81E793
0x81E78F: add     dword ptr [edi+5Ch], 1
0x81E793: mov     eax, [esp+2Ch+var_10]
0x81E797: test    eax, eax
0x81E799: mov     byte ptr [esp+2Ch+var_4], 1
0x81E79E: jz      short loc_81E7B2
0x81E7A0: add     [eax+5Ch], ebx
0x81E7A3: mov     ecx, eax
0x81E7A5: add     eax, 5Ch ; '\'
0x81E7A8: cmp     dword ptr [eax], 0
0x81E7AB: jnz     short loc_81E7B2
0x81E7AD: call    sub_772560
0x81E7B2: push    2
0x81E7B4: push    1
0x81E7B6: push    1
0x81E7B8: push    edi
0x81E7B9: call    sub_801110
0x81E7BE: mov     ecx, [esi+14h]
0x81E7C1: add     esp, 10h
0x81E7C4: push    edi; a3
0x81E7C5: push    ecx; a2
0x81E7C6: mov     ecx, esi; this
0x81E7C8: call    sub_760010
0x81E7CD: lea     edx, [esp+2Ch+var_10]
0x81E7D1: push    edx
0x81E7D2: call    sub_772630
0x81E7D7: add     esp, 4
0x81E7DA: mov     ebp, eax
0x81E7DC: cmp     edi, [ebp+0]
0x81E7DF: mov     byte ptr [esp+2Ch+var_4], 10h
0x81E7E4: jz      short loc_81E805
0x81E7E6: test    edi, edi
0x81E7E8: jz      short loc_81E7F6
0x81E7EA: add     [edi+5Ch], ebx
0x81E7ED: jnz     short loc_81E7F6
0x81E7EF: mov     ecx, edi
0x81E7F1: call    sub_772560
0x81E7F6: mov     edi, [ebp+0]
0x81E7F9: test    edi, edi
0x81E7FB: mov     [esp+2Ch+var_18], edi
0x81E7FF: jz      short loc_81E805
0x81E801: add     dword ptr [edi+5Ch], 1
0x81E805: mov     eax, [esp+2Ch+var_10]
0x81E809: test    eax, eax
0x81E80B: mov     byte ptr [esp+2Ch+var_4], 1
0x81E810: jz      short loc_81E824
0x81E812: add     [eax+5Ch], ebx
0x81E815: mov     ecx, eax
0x81E817: add     eax, 5Ch ; '\'
0x81E81A: cmp     dword ptr [eax], 0
0x81E81D: jnz     short loc_81E824
0x81E81F: call    sub_772560
0x81E824: push    2
0x81E826: push    1
0x81E828: push    2
0x81E82A: push    edi
0x81E82B: call    sub_801110
0x81E830: mov     eax, [esi+14h]
0x81E833: add     esp, 10h
0x81E836: push    edi; a3
0x81E837: push    eax; a2
0x81E838: mov     ecx, esi; this
0x81E83A: call    sub_760010
0x81E83F: lea     ecx, [esp+2Ch+var_10]
0x81E843: push    ecx
0x81E844: call    sub_772630
0x81E849: add     esp, 4
0x81E84C: mov     ebp, eax
0x81E84E: cmp     edi, [ebp+0]
0x81E851: mov     byte ptr [esp+2Ch+var_4], 11h
0x81E856: jz      short loc_81E877
0x81E858: test    edi, edi
0x81E85A: jz      short loc_81E868
0x81E85C: add     [edi+5Ch], ebx
0x81E85F: jnz     short loc_81E868
0x81E861: mov     ecx, edi
0x81E863: call    sub_772560
0x81E868: mov     edi, [ebp+0]
0x81E86B: test    edi, edi
0x81E86D: mov     [esp+2Ch+var_18], edi
0x81E871: jz      short loc_81E877
0x81E873: add     dword ptr [edi+5Ch], 1
0x81E877: mov     eax, [esp+2Ch+var_10]
0x81E87B: test    eax, eax
0x81E87D: mov     byte ptr [esp+2Ch+var_4], 1
0x81E882: jz      short loc_81E896
0x81E884: add     [eax+5Ch], ebx
0x81E887: mov     ecx, eax
0x81E889: add     eax, 5Ch ; '\'
0x81E88C: cmp     dword ptr [eax], 0
0x81E88F: jnz     short loc_81E896
0x81E891: call    sub_772560
0x81E896: push    2
0x81E898: push    1
0x81E89A: push    3
0x81E89C: push    edi
0x81E89D: call    sub_801110
0x81E8A2: mov     edx, [esi+14h]
0x81E8A5: add     esp, 10h
0x81E8A8: push    edi; a3
0x81E8A9: push    edx; a2
0x81E8AA: mov     ecx, esi; this
0x81E8AC: call    sub_760010
0x81E8B1: mov     eax, ds:0B45350h
0x81E8B6: mov     ebp, [esi+58h]
0x81E8B9: cmp     ebp, eax
0x81E8BB: mov     ebx, eax
0x81E8BD: jz      short loc_81E8F1
0x81E8BF: test    ebp, ebp
0x81E8C1: jz      short loc_81E8E0
0x81E8C3: lea     eax, [ebp+4]
0x81E8C6: push    eax; lpAddend
0x81E8C7: call    dword ptr ds:0A2807Ch
0x81E8CD: test    eax, eax
0x81E8CF: jnz     short loc_81E8E0
0x81E8D1: test    ebp, ebp
0x81E8D3: jz      short loc_81E8E0
0x81E8D5: mov     edx, [ebp+0]
0x81E8D8: mov     eax, [edx]
0x81E8DA: push    1
0x81E8DC: mov     ecx, ebp
0x81E8DE: call    eax
0x81E8E0: test    ebx, ebx
0x81E8E2: mov     [esi+58h], ebx
0x81E8E5: jz      short loc_81E8F1
0x81E8E7: add     ebx, 4
0x81E8EA: push    ebx; lpAddend
0x81E8EB: call    dword ptr ds:0A28078h
0x81E8F1: mov     eax, ds:0B4510Ch
0x81E8F6: mov     ebp, [esi+44h]
0x81E8F9: cmp     ebp, eax
0x81E8FB: mov     ebx, eax
0x81E8FD: jz      short loc_81E931
0x81E8FF: test    ebp, ebp
0x81E901: jz      short loc_81E920
0x81E903: lea     ecx, [ebp+4]
0x81E906: push    ecx; lpAddend
0x81E907: call    dword ptr ds:0A2807Ch
0x81E90D: test    eax, eax
0x81E90F: jnz     short loc_81E920
0x81E911: test    ebp, ebp
0x81E913: jz      short loc_81E920
0x81E915: mov     edx, [ebp+0]
0x81E918: mov     eax, [edx]
0x81E91A: push    1
0x81E91C: mov     ecx, ebp
0x81E91E: call    eax
0x81E920: test    ebx, ebx
0x81E922: mov     [esi+44h], ebx
0x81E925: jz      short loc_81E931
0x81E927: add     ebx, 4
0x81E92A: push    ebx; lpAddend
0x81E92B: call    dword ptr ds:0A28078h
0x81E931: cmp     dword ptr [esi+30h], 0
0x81E935: jnz     short loc_81E93F
0x81E937: call    sub_772DF0
0x81E93C: mov     [esi+30h], eax
0x81E93F: mov     ecx, [esi+30h]
0x81E942: push    0
0x81E944: push    1
0x81E946: push    1Bh
0x81E948: call    sub_772CD0
0x81E94D: cmp     dword ptr [esi+30h], 0
0x81E951: jnz     short loc_81E95B
0x81E953: call    sub_772DF0
0x81E958: mov     [esi+30h], eax
0x81E95B: mov     ecx, [esi+30h]
0x81E95E: push    0
0x81E960: push    2
0x81E962: push    13h
0x81E964: call    sub_772CD0
0x81E969: cmp     dword ptr [esi+30h], 0
0x81E96D: jnz     short loc_81E977
0x81E96F: call    sub_772DF0
0x81E974: mov     [esi+30h], eax
0x81E977: mov     ecx, [esi+30h]
0x81E97A: push    0
0x81E97C: push    2
0x81E97E: push    14h
0x81E980: call    sub_772CD0
0x81E985: cmp     dword ptr [esi+30h], 0
0x81E989: jnz     short loc_81E993
0x81E98B: call    sub_772DF0
0x81E990: mov     [esi+30h], eax
0x81E993: mov     ecx, [esi+30h]
0x81E996: push    0
0x81E998: push    0
0x81E99A: push    0Fh
0x81E99C: call    sub_772CD0
0x81E9A1: cmp     dword ptr [esi+30h], 0
0x81E9A5: jnz     short loc_81E9AF
0x81E9A7: call    sub_772DF0
0x81E9AC: mov     [esi+30h], eax
0x81E9AF: mov     ecx, [esi+30h]
0x81E9B2: push    0
0x81E9B4: push    1
0x81E9B6: push    7
0x81E9B8: call    sub_772CD0
0x81E9BD: cmp     dword ptr [esi+30h], 0
0x81E9C1: jnz     short loc_81E9CB
0x81E9C3: call    sub_772DF0
0x81E9C8: mov     [esi+30h], eax
0x81E9CB: mov     ecx, [esi+30h]
0x81E9CE: push    0
0x81E9D0: push    3
0x81E9D2: push    17h
0x81E9D4: call    sub_772CD0
0x81E9D9: cmp     dword ptr [esi+30h], 0
0x81E9DD: jnz     short loc_81E9E7
0x81E9DF: call    sub_772DF0
0x81E9E4: mov     [esi+30h], eax
0x81E9E7: mov     ecx, [esi+30h]
0x81E9EA: push    0
0x81E9EC: push    0
0x81E9EE: push    0Eh
0x81E9F0: call    sub_772CD0
0x81E9F5: cmp     dword ptr [esi+30h], 0
0x81E9F9: jnz     short loc_81EA03
0x81E9FB: call    sub_772DF0
0x81EA00: mov     [esi+30h], eax
0x81EA03: mov     ecx, [esi+30h]
0x81EA06: push    0
0x81EA08: push    0
0x81EA0A: push    34h ; '4'
0x81EA0C: call    sub_772CD0
0x81EA11: mov     eax, 4
0x81EA16: or      ebx, 0FFFFFFFFh
0x81EA19: test    edi, edi
0x81EA1B: mov     dword ptr ds:0B4412Ch, 6000Ch
0x81EA25: mov     ds:0B447BCh, eax
0x81EA2A: mov     ds:0B44E4Ch, eax
0x81EA2F: mov     byte ptr [esp+2Ch+var_4], 0
0x81EA34: jz      short loc_81EA42
0x81EA36: add     [edi+5Ch], ebx
0x81EA39: jnz     short loc_81EA42
0x81EA3B: mov     ecx, edi
0x81EA3D: call    sub_772560
0x81EA42: add     [esi+60h], ebx
0x81EA45: mov     [esp+2Ch+var_4], ebx
0x81EA49: jnz     short loc_81EA52
0x81EA4B: mov     ecx, esi
0x81EA4D: call    sub_7604D0
0x81EA52: mov     ecx, dword ptr [esp+2Ch+var_C]
0x81EA56: mov     large fs:0, ecx
0x81EA5D: pop     ecx
0x81EA5E: pop     edi
0x81EA5F: pop     esi
0x81EA60: pop     ebp
0x81EA61: pop     ebx
0x81EA62: add     esp, 18h
0x81EA65: retn
