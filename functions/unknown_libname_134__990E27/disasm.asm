0x990E27: sub     esp, 2Ch
0x990E2A: and     eax, 3Fh; switch 64 cases
0x990E2D: jmp     jpt_990E2D[eax*4]; switch jump
0x990E34: fdiv    st, st; jumptable 00990E2D case 0
0x990E36: add     esp, 2Ch
0x990E39: retn
0x990E3A: add     esp, 2Ch; jumptable 00990E2D case 1
0x990E3D: int     6;  - internal hardware - UNDEFINED OPCODE (80286+)
0x990E3F: fdivr   st, st; jumptable 00990E2D case 2
0x990E41: add     esp, 2Ch
0x990E44: retn
0x990E45: add     esp, 2Ch; jumptable 00990E2D case 3
0x990E48: int     6;  - internal hardware - UNDEFINED OPCODE (80286+)
0x990E4A: fdiv    st, st; jumptable 00990E2D case 4
0x990E4C: add     esp, 2Ch
0x990E4F: retn
0x990E50: fdivp   st, st; jumptable 00990E2D case 5
0x990E52: add     esp, 2Ch
0x990E55: retn
0x990E56: fdivr   st, st; jumptable 00990E2D case 6
0x990E58: add     esp, 2Ch
0x990E5B: retn
0x990E5C: fdivrp  st, st; jumptable 00990E2D case 7
0x990E5E: add     esp, 2Ch
0x990E61: retn
0x990E62: fstp    [esp+2Ch+var_20]; jumptable 00990E2D case 8
0x990E66: fld     st
0x990E68: fstp    [esp+2Ch+var_2C]; _TBYTE
0x990E6B: fstp    [esp+2Ch+var_C]
0x990E6F: call    unknown_libname_133
0x990E74: fld     [esp+2Ch+var_C]
0x990E78: fxch    st(1)
0x990E7A: add     esp, 2Ch
0x990E7D: retn
0x990E7E: add     esp, 2Ch; jumptable 00990E2D case 9
0x990E81: int     6;  - internal hardware - UNDEFINED OPCODE (80286+)
0x990E83: fstp    tbyte ptr [esp+0]; jumptable 00990E2D case 10
0x990E86: fstp    [esp+arg_8]; _TBYTE
0x990E8A: call    unknown_libname_133
0x990E8F: fld     [esp+arg_8]
0x990E93: fxch    st(1)
0x990E95: add     esp, 2Ch
0x990E98: retn
0x990E99: add     esp, 2Ch; jumptable 00990E2D case 11
0x990E9C: int     6;  - internal hardware - UNDEFINED OPCODE (80286+)
0x990E9E: fxch    st(1); jumptable 00990E2D case 12
0x990EA0: fstp    [esp+arg_8]; _TBYTE
0x990EA4: fld     st
0x990EA6: fstp    tbyte ptr [esp+0]; _TBYTE
0x990EA9: fstp    [esp+arg_1C]
0x990EAD: call    unknown_libname_133
0x990EB2: fld     [esp+arg_1C]
0x990EB6: add     esp, 2Ch
0x990EB9: retn
0x990EBA: fstp    [esp+2Ch+var_2C]; jumptable 00990E2D case 13
0x990EBD: fstp    [esp+2Ch+var_20]; _TBYTE
0x990EC1: call    unknown_libname_133
0x990EC6: add     esp, 2Ch
0x990EC9: retn
0x990ECA: fstp    [esp+2Ch+var_20]; jumptable 00990E2D case 14
0x990ECE: fstp    [esp+2Ch+var_2C]; _TBYTE
0x990ED1: call    unknown_libname_133
0x990ED6: fld     [esp+2Ch+var_20]
0x990EDA: add     esp, 2Ch
0x990EDD: retn
0x990EDE: fstp    [esp+2Ch+var_20]; jumptable 00990E2D case 15
0x990EE2: fstp    [esp+2Ch+var_2C]; _TBYTE
0x990EE5: call    unknown_libname_133
0x990EEA: add     esp, 2Ch
0x990EED: retn
0x990EEE: fstp    [esp+2Ch+var_20]; jumptable 00990E2D case 16
0x990EF2: fxch    st(1)
0x990EF4: fld     st
0x990EF6: fstp    [esp+2Ch+var_2C]; _TBYTE
0x990EF9: fstp    [esp+2Ch+var_C]
0x990EFD: call    unknown_libname_133
0x990F02: fxch    st(1)
0x990F04: fld     [esp+2Ch+var_C]
0x990F08: fxch    st(2)
0x990F0A: add     esp, 2Ch
0x990F0D: retn
0x990F0E: add     esp, 2Ch; jumptable 00990E2D case 17
0x990F11: int     6;  - internal hardware - UNDEFINED OPCODE (80286+)
0x990F13: fstp    tbyte ptr [esp+0]; jumptable 00990E2D case 18
0x990F16: fxch    st(1)
0x990F18: fstp    [esp+arg_8]; _TBYTE
0x990F1C: call    unknown_libname_133
0x990F21: fxch    st(1)
0x990F23: fld     [esp+arg_8]
0x990F27: fxch    st(2)
0x990F29: add     esp, 2Ch
0x990F2C: retn
0x990F2D: add     esp, 2Ch; jumptable 00990E2D case 19
0x990F30: int     6;  - internal hardware - UNDEFINED OPCODE (80286+)
0x990F32: fxch    st(2); jumptable 00990E2D case 20
0x990F34: fstp    [esp+arg_8]; _TBYTE
0x990F38: fxch    st(1)
0x990F3A: fld     st
0x990F3C: fstp    tbyte ptr [esp+0]; _TBYTE
0x990F3F: fstp    [esp+arg_1C]
0x990F43: call    unknown_libname_133
0x990F48: fxch    st(1)
0x990F4A: fld     [esp+arg_1C]
0x990F4E: add     esp, 2Ch
0x990F51: retn
0x990F52: fstp    [esp+2Ch+var_2C]; jumptable 00990E2D case 21
0x990F55: fxch    st(1)
0x990F57: fstp    [esp+2Ch+var_20]; _TBYTE
0x990F5B: call    unknown_libname_133
0x990F60: fxch    st(1)
0x990F62: add     esp, 2Ch
0x990F65: retn
0x990F66: fstp    [esp+2Ch+var_20]; jumptable 00990E2D case 22
0x990F6A: fxch    st(1)
0x990F6C: fstp    [esp+2Ch+var_2C]; _TBYTE
0x990F6F: call    unknown_libname_133
0x990F74: fxch    st(1)
0x990F76: fld     [esp+2Ch+var_20]
0x990F7A: add     esp, 2Ch
0x990F7D: retn
0x990F7E: fstp    [esp+2Ch+var_20]; jumptable 00990E2D case 23
0x990F82: fxch    st(1)
0x990F84: fstp    [esp+2Ch+var_2C]; _TBYTE
0x990F87: call    unknown_libname_133
0x990F8C: fxch    st(1)
0x990F8E: add     esp, 2Ch
0x990F91: retn
0x990F92: fstp    [esp+2Ch+var_20]; jumptable 00990E2D case 24
0x990F96: fxch    st(2)
0x990F98: fld     st
0x990F9A: fstp    [esp+2Ch+var_2C]; _TBYTE
0x990F9D: fstp    [esp+2Ch+var_C]
0x990FA1: call    unknown_libname_133
0x990FA6: fxch    st(2)
0x990FA8: fld     [esp+2Ch+var_C]
0x990FAC: fxch    st(3)
0x990FAE: add     esp, 2Ch
0x990FB1: retn
0x990FB2: add     esp, 2Ch; jumptable 00990E2D case 25
0x990FB5: int     6;  - internal hardware - UNDEFINED OPCODE (80286+)
0x990FB7: fstp    tbyte ptr [esp+0]; jumptable 00990E2D case 26
0x990FBA: fxch    st(2)
0x990FBC: fstp    [esp+arg_8]; _TBYTE
0x990FC0: call    unknown_libname_133
0x990FC5: fxch    st(2)
0x990FC7: fld     [esp+arg_8]
0x990FCB: fxch    st(3)
0x990FCD: add     esp, 2Ch
0x990FD0: retn
0x990FD1: add     esp, 2Ch; jumptable 00990E2D case 27
0x990FD4: int     6;  - internal hardware - UNDEFINED OPCODE (80286+)
0x990FD6: fxch    st(3); jumptable 00990E2D case 28
0x990FD8: fstp    [esp+arg_8]; _TBYTE
0x990FDC: fxch    st(2)
0x990FDE: fld     st
0x990FE0: fstp    tbyte ptr [esp+0]; _TBYTE
0x990FE3: fstp    [esp+arg_1C]
0x990FE7: call    unknown_libname_133
0x990FEC: fxch    st(2)
0x990FEE: fld     [esp+arg_1C]
0x990FF2: add     esp, 2Ch
0x990FF5: retn
0x990FF6: fstp    [esp+2Ch+var_2C]; jumptable 00990E2D case 29
0x990FF9: fxch    st(2)
0x990FFB: fstp    [esp+2Ch+var_20]; _TBYTE
0x990FFF: call    unknown_libname_133
0x991004: fxch    st(2)
0x991006: add     esp, 2Ch
0x991009: retn
0x99100A: fstp    [esp+2Ch+var_20]; jumptable 00990E2D case 30
0x99100E: fxch    st(2)
0x991010: fstp    [esp+2Ch+var_2C]; _TBYTE
0x991013: call    unknown_libname_133
0x991018: fxch    st(2)
0x99101A: fld     [esp+2Ch+var_20]
0x99101E: add     esp, 2Ch
0x991021: retn
0x991022: fstp    [esp+2Ch+var_20]; jumptable 00990E2D case 31
0x991026: fxch    st(2)
0x991028: fstp    [esp+2Ch+var_2C]; _TBYTE
0x99102B: call    unknown_libname_133
0x991030: fxch    st(2)
0x991032: add     esp, 2Ch
0x991035: retn
0x991036: fstp    [esp+2Ch+var_20]; jumptable 00990E2D case 32
0x99103A: fxch    st(3)
0x99103C: fld     st
0x99103E: fstp    [esp+2Ch+var_2C]; _TBYTE
0x991041: fstp    [esp+2Ch+var_C]
0x991045: call    unknown_libname_133
0x99104A: fxch    st(3)
0x99104C: fld     [esp+2Ch+var_C]
0x991050: fxch    st(4)
0x991052: add     esp, 2Ch
0x991055: retn
0x991056: add     esp, 2Ch; jumptable 00990E2D case 33
0x991059: int     6;  - internal hardware - UNDEFINED OPCODE (80286+)
0x99105B: fstp    tbyte ptr [esp+0]; jumptable 00990E2D case 34
0x99105E: fxch    st(3)
0x991060: fstp    [esp+arg_8]; _TBYTE
0x991064: call    unknown_libname_133
0x991069: fxch    st(3)
0x99106B: fld     [esp+arg_8]
0x99106F: fxch    st(4)
0x991071: add     esp, 2Ch
0x991074: retn
0x991075: add     esp, 2Ch; jumptable 00990E2D case 35
0x991078: int     6;  - internal hardware - UNDEFINED OPCODE (80286+)
0x99107A: fxch    st(4); jumptable 00990E2D case 36
0x99107C: fstp    [esp+arg_8]; _TBYTE
0x991080: fxch    st(3)
0x991082: fld     st
0x991084: fstp    tbyte ptr [esp+0]; _TBYTE
0x991087: fstp    [esp+arg_1C]
0x99108B: call    unknown_libname_133
0x991090: fxch    st(3)
0x991092: fld     [esp+arg_1C]
0x991096: add     esp, 2Ch
0x991099: retn
0x99109A: fstp    [esp+2Ch+var_2C]; jumptable 00990E2D case 37
0x99109D: fxch    st(3)
0x99109F: fstp    [esp+2Ch+var_20]; _TBYTE
0x9910A3: call    unknown_libname_133
0x9910A8: fxch    st(3)
0x9910AA: add     esp, 2Ch
0x9910AD: retn
0x9910AE: fstp    [esp+2Ch+var_20]; jumptable 00990E2D case 38
0x9910B2: fxch    st(3)
0x9910B4: fstp    [esp+2Ch+var_2C]; _TBYTE
0x9910B7: call    unknown_libname_133
0x9910BC: fxch    st(3)
0x9910BE: fld     [esp+2Ch+var_20]
0x9910C2: add     esp, 2Ch
0x9910C5: retn
0x9910C6: fstp    [esp+2Ch+var_20]; jumptable 00990E2D case 39
0x9910CA: fxch    st(3)
0x9910CC: fstp    [esp+2Ch+var_2C]; _TBYTE
0x9910CF: call    unknown_libname_133
0x9910D4: fxch    st(3)
0x9910D6: add     esp, 2Ch
0x9910D9: retn
0x9910DA: fstp    [esp+2Ch+var_20]; jumptable 00990E2D case 40
0x9910DE: fxch    st(4)
0x9910E0: fld     st
0x9910E2: fstp    [esp+2Ch+var_2C]; _TBYTE
0x9910E5: fstp    [esp+2Ch+var_C]
0x9910E9: call    unknown_libname_133
0x9910EE: fxch    st(4)
0x9910F0: fld     [esp+2Ch+var_C]
0x9910F4: fxch    st(5)
0x9910F6: add     esp, 2Ch
0x9910F9: retn
0x9910FA: add     esp, 2Ch; jumptable 00990E2D case 41
0x9910FD: int     6;  - internal hardware - UNDEFINED OPCODE (80286+)
0x9910FF: fstp    tbyte ptr [esp+0]; jumptable 00990E2D case 42
0x991102: fxch    st(4)
0x991104: fstp    [esp+arg_8]; _TBYTE
0x991108: call    unknown_libname_133
0x99110D: fxch    st(4)
0x99110F: fld     [esp+arg_8]
0x991113: fxch    st(5)
0x991115: add     esp, 2Ch
0x991118: retn
0x991119: add     esp, 2Ch; jumptable 00990E2D case 43
0x99111C: int     6;  - internal hardware - UNDEFINED OPCODE (80286+)
0x99111E: fxch    st(5); jumptable 00990E2D case 44
0x991120: fstp    [esp+arg_8]; _TBYTE
0x991124: fxch    st(4)
0x991126: fld     st
0x991128: fstp    tbyte ptr [esp+0]; _TBYTE
0x99112B: fstp    [esp+arg_1C]
0x99112F: call    unknown_libname_133
0x991134: fxch    st(4)
0x991136: fld     [esp+arg_1C]
0x99113A: add     esp, 2Ch
0x99113D: retn
0x99113E: fstp    [esp+2Ch+var_2C]; jumptable 00990E2D case 45
0x991141: fxch    st(4)
0x991143: fstp    [esp+2Ch+var_20]; _TBYTE
0x991147: call    unknown_libname_133
0x99114C: fxch    st(4)
0x99114E: add     esp, 2Ch
0x991151: retn
0x991152: fstp    [esp+2Ch+var_20]; jumptable 00990E2D case 46
0x991156: fxch    st(4)
0x991158: fstp    [esp+2Ch+var_2C]; _TBYTE
0x99115B: call    unknown_libname_133
0x991160: fxch    st(4)
0x991162: fld     [esp+2Ch+var_20]
0x991166: add     esp, 2Ch
0x991169: retn
0x99116A: fstp    [esp+2Ch+var_20]; jumptable 00990E2D case 47
0x99116E: fxch    st(4)
0x991170: fstp    [esp+2Ch+var_2C]; _TBYTE
0x991173: call    unknown_libname_133
0x991178: fxch    st(4)
0x99117A: add     esp, 2Ch
0x99117D: retn
0x99117E: fstp    [esp+2Ch+var_20]; jumptable 00990E2D case 48
0x991182: fxch    st(5)
0x991184: fld     st
0x991186: fstp    [esp+2Ch+var_2C]; _TBYTE
0x991189: fstp    [esp+2Ch+var_C]
0x99118D: call    unknown_libname_133
0x991192: fxch    st(5)
0x991194: fld     [esp+2Ch+var_C]
0x991198: fxch    st(6)
0x99119A: add     esp, 2Ch
0x99119D: retn
0x99119E: add     esp, 2Ch; jumptable 00990E2D case 49
0x9911A1: int     6;  - internal hardware - UNDEFINED OPCODE (80286+)
0x9911A3: fstp    tbyte ptr [esp+0]; jumptable 00990E2D case 50
0x9911A6: fxch    st(5)
0x9911A8: fstp    [esp+arg_8]; _TBYTE
0x9911AC: call    unknown_libname_133
0x9911B1: fxch    st(5)
0x9911B3: fld     [esp+arg_8]
0x9911B7: fxch    st(6)
0x9911B9: add     esp, 2Ch
0x9911BC: retn
0x9911BD: add     esp, 2Ch; jumptable 00990E2D case 51
0x9911C0: int     6;  - internal hardware - UNDEFINED OPCODE (80286+)
0x9911C2: fxch    st(6); jumptable 00990E2D case 52
0x9911C4: fstp    [esp+arg_8]; _TBYTE
0x9911C8: fxch    st(5)
0x9911CA: fld     st
0x9911CC: fstp    tbyte ptr [esp+0]; _TBYTE
0x9911CF: fstp    [esp+arg_1C]
0x9911D3: call    unknown_libname_133
0x9911D8: fxch    st(5)
0x9911DA: fld     [esp+arg_1C]
0x9911DE: add     esp, 2Ch
0x9911E1: retn
0x9911E2: fstp    [esp+2Ch+var_2C]; jumptable 00990E2D case 53
0x9911E5: fxch    st(5)
0x9911E7: fstp    [esp+2Ch+var_20]; _TBYTE
0x9911EB: call    unknown_libname_133
0x9911F0: fxch    st(5)
0x9911F2: add     esp, 2Ch
0x9911F5: retn
0x9911F6: fstp    [esp+2Ch+var_20]; jumptable 00990E2D case 54
0x9911FA: fxch    st(5)
0x9911FC: fstp    [esp+2Ch+var_2C]; _TBYTE
0x9911FF: call    unknown_libname_133
0x991204: fxch    st(5)
0x991206: fld     [esp+2Ch+var_20]
0x99120A: add     esp, 2Ch
0x99120D: retn
0x99120E: fstp    [esp+2Ch+var_20]; jumptable 00990E2D case 55
0x991212: fxch    st(5)
0x991214: fstp    [esp+2Ch+var_2C]; _TBYTE
0x991217: call    unknown_libname_133
0x99121C: fxch    st(5)
0x99121E: add     esp, 2Ch
0x991221: retn
0x991222: fstp    [esp+2Ch+var_20]; jumptable 00990E2D case 56
0x991226: fxch    st(6)
0x991228: fld     st
0x99122A: fstp    [esp+2Ch+var_2C]; _TBYTE
0x99122D: fstp    [esp+2Ch+var_C]
0x991231: call    unknown_libname_133
0x991236: fxch    st(6)
0x991238: fld     [esp+2Ch+var_C]
0x99123C: fxch    st(7)
0x99123E: add     esp, 2Ch
0x991241: retn
0x991242: add     esp, 2Ch; jumptable 00990E2D case 57
0x991245: int     6;  - internal hardware - UNDEFINED OPCODE (80286+)
0x991247: fstp    tbyte ptr [esp+0]; jumptable 00990E2D case 58
0x99124A: fxch    st(6)
0x99124C: fstp    [esp+arg_8]; _TBYTE
0x991250: call    unknown_libname_133
0x991255: fxch    st(6)
0x991257: fld     [esp+arg_8]
0x99125B: fxch    st(7)
0x99125D: add     esp, 2Ch
0x991260: retn
0x991261: add     esp, 2Ch; jumptable 00990E2D case 59
0x991264: int     6;  - internal hardware - UNDEFINED OPCODE (80286+)
0x991266: fxch    st(7); jumptable 00990E2D case 60
0x991268: fstp    [esp+arg_8]; _TBYTE
0x99126C: fxch    st(6)
0x99126E: fld     st
0x991270: fstp    tbyte ptr [esp+0]; _TBYTE
0x991273: fstp    [esp+arg_1C]
0x991277: call    unknown_libname_133
0x99127C: fxch    st(6)
0x99127E: fld     [esp+arg_1C]
0x991282: add     esp, 2Ch
0x991285: retn
0x991286: fstp    [esp+2Ch+var_2C]; jumptable 00990E2D case 61
0x991289: fxch    st(6)
0x99128B: fstp    [esp+2Ch+var_20]; _TBYTE
0x99128F: call    unknown_libname_133
0x991294: fxch    st(6)
0x991296: add     esp, 2Ch
0x991299: retn
0x99129A: fstp    [esp+2Ch+var_20]; jumptable 00990E2D case 62
0x99129E: fxch    st(6)
0x9912A0: fstp    [esp+2Ch+var_2C]; _TBYTE
0x9912A3: call    unknown_libname_133
0x9912A8: fxch    st(6)
0x9912AA: fld     [esp+2Ch+var_20]
0x9912AE: add     esp, 2Ch
0x9912B1: retn
0x9912B2: fstp    [esp+2Ch+var_20]; jumptable 00990E2D case 63
0x9912B6: fxch    st(6)
0x9912B8: fstp    [esp+2Ch+var_2C]; _TBYTE
0x9912BB: call    unknown_libname_133
0x9912C0: fxch    st(6)
0x9912C2: add     esp, 2Ch
0x9912C5: retn
