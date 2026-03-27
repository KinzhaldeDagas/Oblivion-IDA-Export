0x7C0D10: mov     eax, [esp+arg_14]
0x7C0D14: mov     dword ptr [eax], 0
0x7C0D1A: mov     eax, [esp+arg_4]
0x7C0D1E: cmp     eax, 18h; switch 25 cases
0x7C0D21: ja      GetRenderedSurfacEParameters___def_7C0D28
0x7C0D27: push    esi
0x7C0D28: jmp     ds:jpt_7C0D28[eax*4]; switch jump
0x7C0D2F: mov     ecx, [esp+4+arg_18]; jumptable 007C0D28 case 0
0x7C0D33: mov     edx, [esp+4+arg_C]
0x7C0D37: mov     eax, [esp+4+arg_8]
0x7C0D3B: mov     dword ptr [ecx], 26h ; '&'
0x7C0D41: mov     ecx, [esp+4+arg_10]
0x7C0D45: mov     dword ptr [edx], 100h
0x7C0D4B: mov     dword ptr [eax], 100h
0x7C0D51: mov     dword ptr [ecx], 71h ; 'q'
0x7C0D57: pop     esi
0x7C0D58: retn    1Ch
0x7C0D5B: mov     edx, [esp+4+arg_18]; jumptable 007C0D28 case 1
0x7C0D5F: mov     eax, [esp+4+arg_8]
0x7C0D63: mov     esi, [esp+4+arg_0]
0x7C0D67: mov     dword ptr [edx], 26h ; '&'
0x7C0D6D: mov     dword ptr [eax], 100h
0x7C0D73: mov     edx, [esi]
0x7C0D75: mov     eax, [edx+7Ch]
0x7C0D78: mov     ecx, esi
0x7C0D7A: call    eax
0x7C0D7C: mov     edx, [eax]
0x7C0D7E: mov     ecx, eax
0x7C0D80: mov     eax, [edx+50h]
0x7C0D83: push    0
0x7C0D85: call    eax
0x7C0D87: test    eax, eax
0x7C0D89: mov     [esp+4+arg_8], eax
0x7C0D8D: fild    [esp+4+arg_8]
0x7C0D91: jge     short loc_7C0D99
0x7C0D93: fadd    dword ptr ds:0A2FC78h
0x7C0D99: fmul    qword ptr ds:0A2FAA0h
0x7C0D9F: call    Double_To_SInt32
0x7C0DA4: cmp     eax, 100h
0x7C0DA9: jge     short loc_7C0DC4
0x7C0DAB: mov     ecx, [esp+4+arg_C]
0x7C0DAF: mov     edx, [esp+4+arg_10]
0x7C0DB3: mov     eax, 100h
0x7C0DB8: mov     [ecx], eax
0x7C0DBA: mov     dword ptr [edx], 71h ; 'q'
0x7C0DC0: pop     esi
0x7C0DC1: retn    1Ch
0x7C0DC4: mov     edx, [esi]
0x7C0DC6: mov     eax, [edx+7Ch]
0x7C0DC9: mov     ecx, esi
0x7C0DCB: call    eax
0x7C0DCD: mov     edx, [eax]
0x7C0DCF: mov     ecx, eax
0x7C0DD1: mov     eax, [edx+50h]
0x7C0DD4: push    0
0x7C0DD6: call    eax
0x7C0DD8: test    eax, eax
0x7C0DDA: mov     [esp+4+arg_8], eax
0x7C0DDE: fild    [esp+4+arg_8]
0x7C0DE2: jge     short loc_7C0DEA
0x7C0DE4: fadd    dword ptr ds:0A2FC78h
0x7C0DEA: fmul    qword ptr ds:0A2FAA0h
0x7C0DF0: call    Double_To_SInt32
0x7C0DF5: mov     ecx, [esp+4+arg_C]
0x7C0DF9: mov     edx, [esp+4+arg_10]
0x7C0DFD: mov     [ecx], eax
0x7C0DFF: mov     dword ptr [edx], 71h ; 'q'
0x7C0E05: pop     esi
0x7C0E06: retn    1Ch
0x7C0E09: mov     eax, [esp+4+arg_18]; jumptable 007C0D28 case 2
0x7C0E0D: mov     ecx, [esp+4+arg_C]
0x7C0E11: mov     edx, [esp+4+arg_8]
0x7C0E15: mov     dword ptr [eax], 26h ; '&'
0x7C0E1B: mov     eax, [esp+4+arg_10]
0x7C0E1F: mov     dword ptr [ecx], 100h
0x7C0E25: mov     dword ptr [edx], 100h
0x7C0E2B: mov     dword ptr [eax], 71h ; 'q'
0x7C0E31: pop     esi
0x7C0E32: retn    1Ch
0x7C0E35: mov     esi, [esp+4+arg_0]; jumptable 007C0D28 case 3
0x7C0E39: mov     edx, [esi]
0x7C0E3B: mov     eax, [edx+7Ch]
0x7C0E3E: mov     ecx, esi
0x7C0E40: call    eax
0x7C0E42: mov     edx, [eax]
0x7C0E44: mov     ecx, eax
0x7C0E46: mov     eax, [edx+4Ch]
0x7C0E49: push    0
0x7C0E4B: call    eax
0x7C0E4D: mov     ecx, [esp+4+arg_8]
0x7C0E51: mov     [ecx], eax
0x7C0E53: mov     edx, [esi]
0x7C0E55: mov     eax, [edx+7Ch]
0x7C0E58: mov     ecx, esi
0x7C0E5A: call    eax
0x7C0E5C: mov     edx, [eax]
0x7C0E5E: mov     ecx, eax
0x7C0E60: mov     eax, [edx+50h]
0x7C0E63: push    0
0x7C0E65: call    eax
0x7C0E67: mov     ecx, [esp+4+arg_C]
0x7C0E6B: mov     edx, [esp+4+arg_18]
0x7C0E6F: mov     [ecx], eax
0x7C0E71: mov     eax, [esp+4+arg_10]
0x7C0E75: mov     dword ptr [edx], 26h ; '&'
0x7C0E7B: mov     dword ptr [eax], 0
0x7C0E81: pop     esi
0x7C0E82: retn    1Ch
0x7C0E85: mov     esi, [esp+4+arg_0]; jumptable 007C0D28 case 4
0x7C0E89: mov     edx, [esi]
0x7C0E8B: mov     eax, [edx+7Ch]
0x7C0E8E: mov     ecx, esi
0x7C0E90: call    eax
0x7C0E92: mov     edx, [eax]
0x7C0E94: mov     ecx, eax
0x7C0E96: mov     eax, [edx+4Ch]
0x7C0E99: push    0
0x7C0E9B: call    eax
0x7C0E9D: mov     ecx, [esp+4+arg_8]
0x7C0EA1: mov     [ecx], eax
0x7C0EA3: mov     edx, [esi]
0x7C0EA5: mov     eax, [edx+7Ch]
0x7C0EA8: mov     ecx, esi
0x7C0EAA: call    eax
0x7C0EAC: mov     edx, [eax]
0x7C0EAE: mov     ecx, eax
0x7C0EB0: mov     eax, [edx+50h]
0x7C0EB3: push    0
0x7C0EB5: call    eax
0x7C0EB7: mov     ecx, [esp+4+arg_C]
0x7C0EBB: mov     [ecx], eax
0x7C0EBD: mov     eax, [esp+4+arg_18]
0x7C0EC1: xor     edx, edx
0x7C0EC3: cmp     dword ptr ds:0B34FC0h, 2
0x7C0ECA: pop     esi
0x7C0ECB: setl    dl
0x7C0ECE: sub     edx, 1
0x7C0ED1: and     edx, 80h
0x7C0ED7: add     edx, 22h ; '"'
0x7C0EDA: mov     [eax], edx
0x7C0EDC: mov     cl, ds:0B43070h
0x7C0EE2: mov     edx, [esp+arg_10]
0x7C0EE6: neg     cl
0x7C0EE8: sbb     ecx, ecx
0x7C0EEA: and     ecx, 71h
0x7C0EED: mov     [edx], ecx
0x7C0EEF: retn    1Ch
0x7C0EF2: mov     esi, [esp+4+arg_0]; jumptable 007C0D28 case 5
0x7C0EF6: mov     eax, [esi]
0x7C0EF8: mov     edx, [eax+7Ch]
0x7C0EFB: mov     ecx, esi
0x7C0EFD: call    edx
0x7C0EFF: mov     edx, [eax]
0x7C0F01: mov     ecx, eax
0x7C0F03: mov     eax, [edx+4Ch]
0x7C0F06: push    0
0x7C0F08: call    eax
0x7C0F0A: test    eax, eax
0x7C0F0C: mov     [esp+arg_4], eax
0x7C0F10: fild    [esp+arg_4]
0x7C0F14: jge     short loc_7C0F1C
0x7C0F16: fadd    dword ptr ds:0A2FC78h
0x7C0F1C: call    Double_To_SInt32
0x7C0F21: mov     ecx, [esp+arg_C]
0x7C0F25: mov     [ecx], eax
0x7C0F27: mov     edx, [esi]
0x7C0F29: mov     eax, [edx+7Ch]
0x7C0F2C: mov     ecx, esi
0x7C0F2E: call    eax
0x7C0F30: mov     edx, [eax]
0x7C0F32: mov     ecx, eax
0x7C0F34: mov     eax, [edx+50h]
0x7C0F37: push    0
0x7C0F39: call    eax
0x7C0F3B: test    eax, eax
0x7C0F3D: mov     [esp+4+arg_8], eax
0x7C0F41: fild    [esp+4+arg_8]
0x7C0F45: jge     short loc_7C0F4D
0x7C0F47: fadd    dword ptr ds:0A2FC78h
0x7C0F4D: call    Double_To_SInt32
0x7C0F52: mov     ecx, [esp+4+arg_C]
0x7C0F56: mov     [ecx], eax
0x7C0F58: mov     eax, [esp+4+arg_18]
0x7C0F5C: mov     ecx, [esp+4+arg_10]
0x7C0F60: xor     edx, edx
0x7C0F62: cmp     ds:0B42F3Eh, dl
0x7C0F68: pop     esi
0x7C0F69: setnz   dl
0x7C0F6C: lea     edx, ds:22h[edx*4]
0x7C0F73: mov     [eax], edx
0x7C0F75: mov     dword ptr [ecx], 0
0x7C0F7B: retn    1Ch
0x7C0F7E: mov     edx, ds:0B45FC8h; jumptable 007C0D28 case 6
0x7C0F84: mov     eax, [esp+4+arg_C]
0x7C0F88: mov     ecx, [esp+4+arg_8]
0x7C0F8C: mov     [eax], edx
0x7C0F8E: mov     edx, ds:0B45FC8h
0x7C0F94: mov     eax, [esp+4+arg_18]
0x7C0F98: mov     [ecx], edx
0x7C0F9A: mov     ecx, [esp+4+arg_10]
0x7C0F9E: mov     dword ptr [eax], 6
0x7C0FA4: mov     dword ptr [ecx], 74h ; 't'
0x7C0FAA: pop     esi
0x7C0FAB: retn    1Ch
0x7C0FAE: mov     eax, ds:0B45FC8h; jumptable 007C0D28 case 9
0x7C0FB3: mov     edx, [esp+4+arg_8]
0x7C0FB7: mov     ecx, [esp+4+arg_C]
0x7C0FBB: mov     [edx], eax
0x7C0FBD: mov     edx, [esp+4+arg_18]
0x7C0FC1: mov     eax, [esp+4+arg_10]
0x7C0FC5: mov     dword ptr [ecx], 1
0x7C0FCB: mov     dword ptr [edx], 0Ch
0x7C0FD1: mov     dword ptr [eax], 51h ; 'Q'
0x7C0FD7: pop     esi
0x7C0FD8: retn    1Ch
0x7C0FDB: mov     edx, ds:0B45FC8h; jumptable 007C0D28 case 10
0x7C0FE1: mov     ecx, [esp+4+arg_8]
0x7C0FE5: mov     eax, [esp+4+arg_C]
0x7C0FE9: mov     [ecx], edx
0x7C0FEB: mov     ecx, [esp+4+arg_18]
0x7C0FEF: mov     edx, [esp+4+arg_10]
0x7C0FF3: mov     dword ptr [eax], 10h
0x7C0FF9: mov     dword ptr [ecx], 0Ch
0x7C0FFF: mov     dword ptr [edx], 74h ; 't'
0x7C1005: pop     esi
0x7C1006: retn    1Ch
0x7C1009: mov     eax, ds:0B45FC8h; jumptable 007C0D28 case 11
0x7C100E: mov     ecx, [esp+4+arg_C]
0x7C1012: mov     edx, [esp+4+arg_8]
0x7C1016: mov     [ecx], eax
0x7C1018: mov     eax, ds:0B45FC8h
0x7C101D: mov     ecx, [esp+4+arg_18]
0x7C1021: mov     [edx], eax
0x7C1023: mov     edx, [esp+4+arg_10]
0x7C1027: mov     dword ptr [ecx], 0Ch
0x7C102D: mov     dword ptr [edx], 72h ; 'r'
0x7C1033: pop     esi
0x7C1034: retn    1Ch
0x7C1037: mov     eax, [esp+4+arg_C]; jumptable 007C0D28 case 13
0x7C103B: mov     ecx, [esp+4+arg_8]
0x7C103F: mov     edx, [esp+4+arg_18]
0x7C1043: mov     dword ptr [eax], 100h
0x7C1049: mov     eax, [esp+4+arg_10]
0x7C104D: mov     dword ptr [ecx], 100h
0x7C1053: mov     dword ptr [edx], 2
0x7C1059: mov     dword ptr [eax], 15h
0x7C105F: pop     esi
0x7C1060: retn    1Ch
0x7C1063: mov     ecx, ds:0B45FC8h; jumptable 007C0D28 case 12
0x7C1069: mov     edx, [esp+4+arg_C]
0x7C106D: mov     eax, [esp+4+arg_8]
0x7C1071: mov     [edx], ecx
0x7C1073: mov     ecx, ds:0B45FC8h
0x7C1079: mov     edx, [esp+4+arg_18]
0x7C107D: mov     [eax], ecx
0x7C107F: mov     eax, [esp+4+arg_10]
0x7C1083: mov     dword ptr [edx], 0Ch
0x7C1089: mov     dword ptr [eax], 74h ; 't'
0x7C108F: pop     esi
0x7C1090: retn    1Ch
0x7C1093: mov     ecx, [esp+4+arg_C]; jumptable 007C0D28 case 7
0x7C1097: mov     edx, [esp+4+arg_8]
0x7C109B: mov     eax, [esp+4+arg_18]
0x7C109F: mov     dword ptr [ecx], 100h
0x7C10A5: mov     ecx, [esp+4+arg_10]
0x7C10A9: mov     dword ptr [edx], 100h
0x7C10AF: mov     dword ptr [eax], 6
0x7C10B5: mov     dword ptr [ecx], 24h ; '$'
0x7C10BB: pop     esi
0x7C10BC: retn    1Ch
0x7C10BF: mov     edx, [esp+4+arg_C]; jumptable 007C0D28 case 8
0x7C10C3: mov     eax, [esp+4+arg_8]
0x7C10C7: mov     ecx, [esp+4+arg_18]
0x7C10CB: mov     dword ptr [edx], 80h ; '€'
0x7C10D1: mov     edx, [esp+4+arg_10]
0x7C10D5: mov     dword ptr [eax], 80h ; '€'
0x7C10DB: mov     dword ptr [ecx], 6
0x7C10E1: mov     dword ptr [edx], 24h ; '$'
0x7C10E7: pop     esi
0x7C10E8: retn    1Ch
0x7C10EB: mov     eax, [esp+4+arg_C]; jumptable 007C0D28 case 14
0x7C10EF: mov     ecx, [esp+4+arg_8]
0x7C10F3: mov     edx, [esp+4+arg_18]
0x7C10F7: mov     dword ptr [eax], 100h
0x7C10FD: mov     eax, [esp+4+arg_10]
0x7C1101: mov     dword ptr [ecx], 100h
0x7C1107: mov     dword ptr [edx], 6
0x7C110D: mov     dword ptr [eax], 0
0x7C1113: pop     esi
0x7C1114: retn    1Ch
0x7C1117: mov     ecx, ds:0B2C2B8h; jumptable 007C0D28 cases 15,16
0x7C111D: mov     edx, [esp+4+arg_C]
0x7C1121: mov     eax, [esp+4+arg_8]
0x7C1125: mov     [edx], ecx
0x7C1127: mov     ecx, ds:0B2C2B8h
0x7C112D: mov     edx, [esp+4+arg_18]
0x7C1131: mov     [eax], ecx
0x7C1133: mov     eax, [esp+4+arg_10]
0x7C1137: mov     dword ptr [edx], 6
0x7C113D: mov     dword ptr [eax], 0
0x7C1143: pop     esi
0x7C1144: retn    1Ch
0x7C1147: mov     ecx, [esp+4+arg_C]; jumptable 007C0D28 cases 17,18
0x7C114B: mov     edx, [esp+4+arg_8]
0x7C114F: mov     dword ptr [ecx], 80h ; '€'
0x7C1155: mov     dword ptr [edx], 80h ; '€'
0x7C115B: mov     eax, [esp+4+arg_18]
0x7C115F: mov     ecx, [esp+4+arg_10]
0x7C1163: mov     dword ptr [eax], 6
0x7C1169: mov     dword ptr [ecx], 0
0x7C116F: pop     esi
0x7C1170: retn    1Ch
0x7C1173: mov     edx, ds:0B2C2B8h; jumptable 007C0D28 case 19
0x7C1179: mov     eax, [esp+4+arg_C]
0x7C117D: mov     ecx, [esp+4+arg_8]
0x7C1181: mov     [eax], edx
0x7C1183: mov     edx, ds:0B2C2B8h
0x7C1189: mov     [ecx], edx
0x7C118B: jmp     short loc_7C115B
0x7C118D: mov     esi, [esp+4+arg_0]; jumptable 007C0D28 case 20
0x7C1191: mov     edx, [esi]
0x7C1193: mov     eax, [edx+7Ch]
0x7C1196: mov     ecx, esi
0x7C1198: call    eax
0x7C119A: mov     edx, [eax]
0x7C119C: mov     ecx, eax
0x7C119E: mov     eax, [edx+4Ch]
0x7C11A1: push    0
0x7C11A3: call    eax
0x7C11A5: mov     ecx, [esp+4+arg_8]
0x7C11A9: mov     [ecx], eax
0x7C11AB: mov     edx, [esi]
0x7C11AD: mov     eax, [edx+7Ch]
0x7C11B0: mov     ecx, esi
0x7C11B2: call    eax
0x7C11B4: mov     edx, [eax]
0x7C11B6: mov     ecx, eax
0x7C11B8: mov     eax, [edx+50h]
0x7C11BB: push    0
0x7C11BD: call    eax
0x7C11BF: mov     ecx, [esp+4+arg_C]
0x7C11C3: mov     edx, [esp+4+arg_18]
0x7C11C7: mov     [ecx], eax
0x7C11C9: mov     eax, [esp+4+arg_10]
0x7C11CD: mov     dword ptr [edx], 46h ; 'F'
0x7C11D3: mov     dword ptr [eax], 0
0x7C11D9: pop     esi
0x7C11DA: retn    1Ch
0x7C11DD: mov     ecx, [esp+4+arg_C]; jumptable 007C0D28 case 21
0x7C11E1: mov     edx, [esp+4+arg_8]
0x7C11E5: mov     eax, [esp+4+arg_18]
0x7C11E9: mov     dword ptr [ecx], 100h
0x7C11EF: mov     ecx, [esp+4+arg_10]
0x7C11F3: mov     dword ptr [edx], 100h
0x7C11F9: mov     dword ptr [eax], 2
0x7C11FF: mov     dword ptr [ecx], 0
0x7C1205: pop     esi
0x7C1206: retn    1Ch
0x7C1209: mov     edx, [esp+4+arg_C]; jumptable 007C0D28 case 22
0x7C120D: mov     eax, [esp+4+arg_8]
0x7C1211: mov     ecx, [esp+4+arg_18]
0x7C1215: mov     dword ptr [edx], 200h
0x7C121B: mov     edx, [esp+4+arg_10]
0x7C121F: mov     dword ptr [eax], 200h
0x7C1225: mov     dword ptr [ecx], 6
0x7C122B: mov     dword ptr [edx], 72h ; 'r'
0x7C1231: pop     esi
0x7C1232: retn    1Ch
0x7C1235: movzx   eax, word ptr ds:0B2C67Ch; jumptable 007C0D28 case 23
0x7C123C: mov     ecx, [esp+4+arg_C]
0x7C1240: mov     edx, [esp+4+arg_8]
0x7C1244: mov     [ecx], eax
0x7C1246: mov     ecx, [esp+4+arg_10]
0x7C124A: mov     [edx], eax
0x7C124C: mov     eax, [esp+4+arg_18]
0x7C1250: mov     dword ptr [eax], 6
0x7C1256: mov     edx, ds:0B2C994h
0x7C125C: mov     [ecx], edx
0x7C125E: pop     esi
0x7C125F: retn    1Ch
0x7C1262: mov     eax, [esp+4+arg_C]; jumptable 007C0D28 case 24
0x7C1266: mov     ecx, [esp+4+arg_8]
0x7C126A: mov     edx, [esp+4+arg_18]
0x7C126E: mov     dword ptr [eax], 100h
0x7C1274: mov     eax, [esp+4+arg_10]
0x7C1278: mov     dword ptr [ecx], 100h
0x7C127E: mov     dword ptr [edx], 10h
0x7C1284: mov     dword ptr [eax], 0
0x7C128A: pop     esi
