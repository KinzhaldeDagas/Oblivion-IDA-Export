0x79FD10: push    ebp
0x79FD11: mov     ebp, esp
0x79FD13: and     esp, 0FFFFFFF8h
0x79FD16: push    0FFFFFFFFh
0x79FD18: push    offset SEH_79FD10
0x79FD1D: mov     eax, large fs:0
0x79FD23: push    eax
0x79FD24: sub     esp, 118h
0x79FD2A: push    ebx
0x79FD2B: push    esi
0x79FD2C: push    edi
0x79FD2D: mov     eax, ds:0B30AACh
0x79FD32: xor     eax, esp
0x79FD34: push    eax
0x79FD35: lea     eax, [esp+134h+var_C]
0x79FD3C: mov     large fs:0, eax
0x79FD42: mov     edi, ecx
0x79FD44: mov     [esp+134h+var_E8], edi
0x79FD48: xor     esi, esi
0x79FD4A: cmp     [edi], esi
0x79FD4C: jz      loc_7A0A2A
0x79FD52: cmp     [edi+4], esi
0x79FD55: jz      loc_7A0A2A
0x79FD5B: mov     [esp+134h+var_A8], esi
0x79FD62: mov     [esp+134h+var_A4], esi
0x79FD69: mov     [esp+134h+var_A0], esi
0x79FD70: mov     [esp+134h+var_4], esi
0x79FD77: mov     [esp+134h+var_98], esi
0x79FD7E: mov     [esp+134h+var_94], esi
0x79FD85: mov     [esp+134h+var_90], esi
0x79FD8C: mov     ebx, [ebp+arg_0]
0x79FD8F: lea     eax, [esp+134h+var_9C]
0x79FD96: push    eax
0x79FD97: lea     ecx, [esp+138h+var_AC]
0x79FD9E: push    ecx
0x79FD9F: push    ebx
0x79FDA0: mov     ecx, edi
0x79FDA2: mov     byte ptr [esp+140h+var_4], 1
0x79FDAA: call    sub_79DA10
0x79FDAF: mov     eax, [esp+134h+var_A8]
0x79FDB6: cmp     eax, esi
0x79FDB8: jnz     short loc_79FDBE
0x79FDBA: xor     eax, eax
0x79FDBC: jmp     short loc_79FDD7
0x79FDBE: mov     ecx, [esp+134h+var_A4]
0x79FDC5: sub     ecx, eax
0x79FDC7: mov     eax, 2AAAAAABh
0x79FDCC: imul    ecx
0x79FDCE: sar     edx, 1
0x79FDD0: mov     eax, edx
0x79FDD2: shr     eax, 1Fh
0x79FDD5: add     eax, edx
0x79FDD7: mov     [ebx+2Ch], eax
0x79FDDA: mov     edx, [edi]
0x79FDDC: movzx   eax, word ptr [edx+22h]
0x79FDE0: movzx   eax, ax
0x79FDE3: mov     ecx, ebx
0x79FDE5: mov     [ebx+28h], eax
0x79FDE8: mov     [esp+134h+var_120], esi
0x79FDEC: call    sub_799EE0
0x79FDF1: test    eax, eax
0x79FDF3: jbe     loc_7A060B
0x79FDF9: lea     esp, [esp+0]
0x79FE00: mov     ecx, [esp+134h+var_120]
0x79FE04: fild    [esp+134h+var_120]
0x79FE08: test    ecx, ecx
0x79FE0A: jge     short loc_79FE12
0x79FE0C: fadd    dword ptr ds:0A2FC78h
0x79FE12: mov     ecx, ebx
0x79FE14: fstp    [esp+134h+var_10C]
0x79FE18: call    sub_799EE0
0x79FE1D: test    eax, eax
0x79FE1F: mov     [esp+134h+var_100], eax
0x79FE23: fild    [esp+134h+var_100]
0x79FE27: jge     short loc_79FE2F
0x79FE29: fadd    dword ptr ds:0A2FC78h
0x79FE2F: cmp     dword ptr [ebx+2Ch], 0
0x79FE33: fsub    qword ptr ds:0A2F928h
0x79FE39: mov     [esp+134h+var_118], 0
0x79FE41: fdivr   [esp+134h+var_10C]
0x79FE45: fstp    [esp+134h+var_100]
0x79FE49: jbe     loc_7A05F1
0x79FE4F: mov     ecx, [esp+134h+var_120]
0x79FE53: lea     eax, ds:0[ecx*8]
0x79FE5A: sub     eax, ecx
0x79FE5C: add     eax, eax
0x79FE5E: add     eax, eax
0x79FE60: add     eax, eax
0x79FE62: mov     [esp+134h+var_FC], eax
0x79FE66: mov     [esp+134h+var_10C], 0
0x79FE6E: mov     edx, [esp+134h+var_118]
0x79FE72: fild    [esp+134h+var_118]
0x79FE76: test    edx, edx
0x79FE78: jge     short loc_79FE80
0x79FE7A: fadd    dword ptr ds:0A2FC78h
0x79FE80: mov     eax, [ebx+2Ch]
0x79FE83: fild    dword ptr [ebx+2Ch]
0x79FE86: test    eax, eax
0x79FE88: jge     short loc_79FE90
0x79FE8A: fadd    dword ptr ds:0A2FC78h
0x79FE90: fsub    qword ptr ds:0A2F928h
0x79FE96: mov     eax, [ebx+4]
0x79FE99: test    eax, eax
0x79FE9B: fdivp   st(1), st
0x79FE9D: fstp    [esp+134h+var_124]
0x79FEA1: jz      short loc_79FEC1
0x79FEA3: mov     ecx, [ebx+8]
0x79FEA6: sub     ecx, eax
0x79FEA8: mov     eax, 92492493h
0x79FEAD: imul    ecx
0x79FEAF: add     edx, ecx
0x79FEB1: sar     edx, 5
0x79FEB4: mov     eax, edx
0x79FEB6: shr     eax, 1Fh
0x79FEB9: add     eax, edx
0x79FEBB: cmp     [esp+134h+var_120], eax
0x79FEBF: jb      short loc_79FEC6
0x79FEC1: call    __invalid_parameter_noinfo
0x79FEC6: mov     ecx, [esp+134h+var_FC]
0x79FECA: mov     eax, [ebx+4]
0x79FECD: lea     esi, [ecx+eax+0Ch]
0x79FED1: mov     ecx, 9
0x79FED6: lea     edi, [esp+134h+var_80]
0x79FEDD: rep movsd
0x79FEDF: mov     ecx, [esp+134h+var_120]
0x79FEE3: test    ecx, ecx
0x79FEE5: jz      short loc_79FF21
0x79FEE7: test    eax, eax
0x79FEE9: lea     esi, [ecx-1]
0x79FEEC: jz      short loc_79FF0A
0x79FEEE: mov     ecx, [ebx+8]
0x79FEF1: sub     ecx, eax
0x79FEF3: mov     eax, 92492493h
0x79FEF8: imul    ecx
0x79FEFA: add     edx, ecx
0x79FEFC: sar     edx, 5
0x79FEFF: mov     eax, edx
0x79FF01: shr     eax, 1Fh
0x79FF04: add     eax, edx
0x79FF06: cmp     esi, eax
0x79FF08: jb      short loc_79FF0F
0x79FF0A: call    __invalid_parameter_noinfo
0x79FF0F: mov     eax, [ebx+4]
0x79FF12: lea     edx, ds:0[esi*8]
0x79FF19: sub     edx, esi
0x79FF1B: lea     esi, [eax+edx*8+0Ch]
0x79FF1F: jmp     short loc_79FF28
0x79FF21: lea     esi, [esp+134h+var_80]
0x79FF28: fld     dword ptr [ebx+1Ch]
0x79FF2B: mov     ecx, 9
0x79FF30: lea     edi, [esp+134h+var_50]
0x79FF37: rep movsd
0x79FF39: push    ecx
0x79FF3A: lea     ecx, [esp+138h+var_80]
0x79FF41: fstp    [esp+138h+var_138]; float
0x79FF44: call    sub_793A00
0x79FF49: fld     dword ptr [ebx+1Ch]
0x79FF4C: push    ecx
0x79FF4D: lea     ecx, [esp+138h+var_50]
0x79FF54: fstp    [esp+138h+var_138]; float
0x79FF57: call    sub_793A00
0x79FF5C: cmp     [esp+134h+var_A8], 0
0x79FF64: jz      short loc_79FF8E
0x79FF66: mov     edi, [esp+134h+var_A4]
0x79FF6D: mov     ecx, [esp+134h+var_A8]
0x79FF74: mov     edx, edi
0x79FF76: sub     edx, ecx
0x79FF78: mov     eax, 2AAAAAABh
0x79FF7D: imul    edx
0x79FF7F: sar     edx, 1
0x79FF81: mov     eax, edx
0x79FF83: shr     eax, 1Fh
0x79FF86: add     eax, edx
0x79FF88: cmp     [esp+134h+var_118], eax
0x79FF8C: jb      short loc_79FFA1
0x79FF8E: call    __invalid_parameter_noinfo
0x79FF93: mov     edi, [esp+134h+var_A4]
0x79FF9A: mov     ecx, [esp+134h+var_A8]
0x79FFA1: test    ecx, ecx
0x79FFA3: fld     [esp+134h+var_74]
0x79FFAA: mov     esi, [esp+134h+var_10C]
0x79FFAE: fmul    dword ptr [ecx+esi+4]
0x79FFB2: fld     [esp+134h+var_80]
0x79FFB9: fmul    dword ptr [ecx+esi]
0x79FFBC: faddp   st(1), st
0x79FFBE: fld     [esp+134h+var_68]
0x79FFC5: fmul    dword ptr [ecx+esi+8]
0x79FFC9: faddp   st(1), st
0x79FFCB: fstp    [esp+134h+var_F4]
0x79FFCF: fld     [esp+134h+var_70]
0x79FFD6: fmul    dword ptr [ecx+esi+4]
0x79FFDA: fld     [esp+134h+var_7C]
0x79FFE1: fmul    dword ptr [ecx+esi]
0x79FFE4: faddp   st(1), st
0x79FFE6: fld     [esp+134h+var_64]
0x79FFED: fmul    dword ptr [ecx+esi+8]
0x79FFF1: faddp   st(1), st
0x79FFF3: fstp    [esp+134h+var_F8]
0x79FFF7: fld     [esp+134h+var_6C]
0x79FFFE: fmul    dword ptr [ecx+esi+4]
0x7A0002: fld     [esp+134h+var_78]
0x7A0009: fmul    dword ptr [ecx+esi]
0x7A000C: faddp   st(1), st
0x7A000E: fld     [esp+134h+var_60]
0x7A0015: fmul    dword ptr [ecx+esi+8]
0x7A0019: faddp   st(1), st
0x7A001B: fstp    [esp+134h+var_114]
0x7A001F: jz      short loc_7A0039
0x7A0021: sub     edi, ecx
0x7A0023: mov     eax, 2AAAAAABh
0x7A0028: imul    edi
0x7A002A: sar     edx, 1
0x7A002C: mov     eax, edx
0x7A002E: shr     eax, 1Fh
0x7A0031: add     eax, edx
0x7A0033: cmp     [esp+134h+var_118], eax
0x7A0037: jb      short loc_7A0045
0x7A0039: call    __invalid_parameter_noinfo
0x7A003E: mov     ecx, [esp+134h+var_A8]
0x7A0045: fld     [esp+134h+var_44]
0x7A004C: lea     eax, [ecx+esi+4]
0x7A0050: fmul    dword ptr [eax]
0x7A0052: lea     edx, [ecx+esi+8]
0x7A0056: fld     [esp+134h+var_50]
0x7A005D: fmul    dword ptr [ecx+esi]
0x7A0060: faddp   st(1), st
0x7A0062: fld     [esp+134h+var_38]
0x7A0069: fmul    dword ptr [edx]
0x7A006B: faddp   st(1), st
0x7A006D: fstp    [esp+134h+var_10C]
0x7A0071: fld     [esp+134h+var_4C]
0x7A0078: fmul    dword ptr [ecx+esi]
0x7A007B: fld     [esp+134h+var_40]
0x7A0082: fmul    dword ptr [eax]
0x7A0084: faddp   st(1), st
0x7A0086: fld     [esp+134h+var_34]
0x7A008D: fmul    dword ptr [edx]
0x7A008F: faddp   st(1), st
0x7A0091: fstp    [esp+134h+var_EC]
0x7A0095: fld     [esp+134h+var_48]
0x7A009C: fmul    dword ptr [ecx+esi]
0x7A009F: fld     [esp+134h+var_3C]
0x7A00A6: fmul    dword ptr [eax]
0x7A00A8: mov     eax, [ebx+4]
0x7A00AB: test    eax, eax
0x7A00AD: faddp   st(1), st
0x7A00AF: fld     [esp+134h+var_30]
0x7A00B6: fmul    dword ptr [edx]
0x7A00B8: faddp   st(1), st
0x7A00BA: fstp    [esp+134h+var_104]
0x7A00BE: fld     [esp+134h+var_10C]
0x7A00C2: fadd    [esp+134h+var_F4]
0x7A00C6: fstp    [esp+134h+var_110]
0x7A00CA: fld     [esp+134h+var_110]
0x7A00CE: fstp    [esp+134h+var_11C]
0x7A00D2: fld     [esp+134h+var_EC]
0x7A00D6: fadd    [esp+134h+var_F8]
0x7A00DA: fstp    [esp+134h+var_F4]
0x7A00DE: fld     [esp+134h+var_F4]
0x7A00E2: fstp    [esp+134h+var_F8]
0x7A00E6: fld     [esp+134h+var_104]
0x7A00EA: fadd    [esp+134h+var_114]
0x7A00EE: fstp    [esp+134h+var_10C]
0x7A00F2: fld     [esp+134h+var_10C]
0x7A00F6: fstp    [esp+134h+var_114]
0x7A00FA: fld     [esp+134h+var_11C]
0x7A00FE: fld     qword ptr ds:0A2FAA0h
0x7A0104: fmul    st(1), st
0x7A0106: fxch    st(1)
0x7A0108: fstp    [esp+134h+var_11C]
0x7A010C: fld     [esp+134h+var_F8]
0x7A0110: fmul    st, st(1)
0x7A0112: fstp    [esp+134h+var_104]
0x7A0116: fmul    [esp+134h+var_114]
0x7A011A: fstp    [esp+134h+var_114]
0x7A011E: jz      short loc_7A013E
0x7A0120: mov     ecx, [ebx+8]
0x7A0123: sub     ecx, eax
0x7A0125: mov     eax, 92492493h
0x7A012A: imul    ecx
0x7A012C: add     edx, ecx
0x7A012E: sar     edx, 5
0x7A0131: mov     eax, edx
0x7A0133: shr     eax, 1Fh
0x7A0136: add     eax, edx
0x7A0138: cmp     [esp+134h+var_120], eax
0x7A013C: jb      short loc_7A0143
0x7A013E: call    __invalid_parameter_noinfo
0x7A0143: mov     eax, [ebx+4]
0x7A0146: add     eax, [esp+134h+var_FC]
0x7A014A: fld     dword ptr [eax]
0x7A014C: fadd    [esp+134h+var_11C]
0x7A0150: fstp    [esp+134h+var_11C]
0x7A0154: fld     dword ptr [eax+4]
0x7A0157: fadd    [esp+134h+var_104]
0x7A015B: fstp    [esp+134h+var_104]
0x7A015F: fld     dword ptr [eax+8]
0x7A0162: fadd    [esp+134h+var_114]
0x7A0166: fstp    [esp+134h+var_114]
0x7A016A: fld     [esp+134h+var_11C]
0x7A016E: fstp    [esp+134h+var_2C]
0x7A0175: fld     [esp+134h+var_104]
0x7A0179: fstp    [esp+134h+var_28]
0x7A0180: fld     [esp+134h+var_114]
0x7A0184: fstp    [esp+134h+var_24]
0x7A018B: fld     [esp+134h+var_110]
0x7A018F: fstp    [esp+134h+var_110]
0x7A0193: fld     [esp+134h+var_F4]
0x7A0197: fstp    [esp+134h+var_F4]
0x7A019B: fld     [esp+134h+var_10C]
0x7A019F: fstp    [esp+134h+var_10C]
0x7A01A3: fld     [esp+134h+var_F4]
0x7A01A7: fld     [esp+134h+var_110]
0x7A01AB: fld     [esp+134h+var_10C]
0x7A01AF: fld     st(1)
0x7A01B1: fmulp   st(2), st
0x7A01B3: fld     st(2)
0x7A01B5: fmulp   st(3), st
0x7A01B7: fxch    st(1)
0x7A01B9: faddp   st(2), st
0x7A01BB: fmul    st, st
0x7A01BD: faddp   st(1), st
0x7A01BF: fstp    [esp+134h+var_11C]
0x7A01C3: fld     [esp+134h+var_11C]
0x7A01C7: call    __CIsqrt
0x7A01CC: fstp    [esp+134h+var_11C]
0x7A01D0: fld     [esp+134h+var_11C]
0x7A01D4: mov     edi, [esp+134h+var_E8]
0x7A01D8: fld1
0x7A01DA: lea     ecx, [esp+134h+var_2C]
0x7A01E1: fdivrp  st(1), st
0x7A01E3: push    ecx
0x7A01E4: mov     ecx, [edi]
0x7A01E6: fstp    [esp+138h+var_11C]
0x7A01EA: fld     [esp+138h+var_110]
0x7A01EE: fld     [esp+138h+var_11C]
0x7A01F2: fld     st
0x7A01F4: fmulp   st(2), st
0x7A01F6: fxch    st(1)
0x7A01F8: fstp    [esp+138h+var_5C]
0x7A01FF: fld     [esp+138h+var_F4]
0x7A0203: fmul    st, st(1)
0x7A0205: fstp    [esp+138h+var_58]
0x7A020C: fmul    [esp+138h+var_10C]
0x7A0210: fstp    [esp+138h+var_54]
0x7A0217: call    sub_796260
0x7A021C: movzx   dx, byte ptr [ebx+18h]
0x7A0221: fld     [esp+134h+var_124]
0x7A0225: mov     ecx, [edi]
0x7A0227: fstp    [esp+134h+var_C4]
0x7A022B: fld     [esp+134h+var_100]
0x7A022F: lea     eax, [esp+134h+var_C4]
0x7A0233: fstp    [esp+134h+var_C0]
0x7A0237: push    edx; float
0x7A0238: push    eax; int
0x7A0239: call    sub_796320
0x7A023E: mov     ecx, [esp+134h+var_98]
0x7A0245: test    ecx, ecx
0x7A0247: jz      short loc_7A0268
0x7A0249: mov     edx, [esp+134h+var_94]
0x7A0250: sub     edx, ecx
0x7A0252: mov     eax, 2AAAAAABh
0x7A0257: imul    edx
0x7A0259: sar     edx, 1
0x7A025B: mov     eax, edx
0x7A025D: shr     eax, 1Fh
0x7A0260: add     eax, edx
0x7A0262: cmp     [esp+134h+var_118], eax
0x7A0266: jb      short loc_7A0274
0x7A0268: call    __invalid_parameter_noinfo
0x7A026D: mov     ecx, [esp+134h+var_98]
0x7A0274: test    ecx, ecx
0x7A0276: fld     dword ptr [ecx+esi]
0x7A0279: fmul    [esp+134h+var_80]
0x7A0280: fld     [esp+134h+var_74]
0x7A0287: fmul    dword ptr [ecx+esi+4]
0x7A028B: faddp   st(1), st
0x7A028D: fld     [esp+134h+var_68]
0x7A0294: fmul    dword ptr [ecx+esi+8]
0x7A0298: faddp   st(1), st
0x7A029A: fstp    [esp+134h+var_11C]
0x7A029E: fld     [esp+134h+var_7C]
0x7A02A5: fmul    dword ptr [ecx+esi]
0x7A02A8: fld     [esp+134h+var_70]
0x7A02AF: fmul    dword ptr [ecx+esi+4]
0x7A02B3: faddp   st(1), st
0x7A02B5: fld     [esp+134h+var_64]
0x7A02BC: fmul    dword ptr [ecx+esi+8]
0x7A02C0: faddp   st(1), st
0x7A02C2: fstp    [esp+134h+var_104]
0x7A02C6: fld     [esp+134h+var_78]
0x7A02CD: fmul    dword ptr [ecx+esi]
0x7A02D0: fld     [esp+134h+var_6C]
0x7A02D7: fmul    dword ptr [ecx+esi+4]
0x7A02DB: faddp   st(1), st
0x7A02DD: fld     [esp+134h+var_60]
0x7A02E4: fmul    dword ptr [ecx+esi+8]
0x7A02E8: faddp   st(1), st
0x7A02EA: fstp    [esp+134h+var_EC]
0x7A02EE: jz      short loc_7A0311
0x7A02F0: mov     eax, [esp+134h+var_94]
0x7A02F7: sub     eax, ecx
0x7A02F9: mov     edx, eax
0x7A02FB: mov     eax, 2AAAAAABh
0x7A0300: imul    edx
0x7A0302: sar     edx, 1
0x7A0304: mov     eax, edx
0x7A0306: shr     eax, 1Fh
0x7A0309: add     eax, edx
0x7A030B: cmp     [esp+134h+var_118], eax
0x7A030F: jb      short loc_7A031D
0x7A0311: call    __invalid_parameter_noinfo
0x7A0316: mov     ecx, [esp+134h+var_98]
0x7A031D: fld     [esp+134h+var_44]
0x7A0324: lea     eax, [ecx+esi+8]
0x7A0328: fmul    dword ptr [ecx+esi+4]
0x7A032C: fld     [esp+134h+var_50]
0x7A0333: fmul    dword ptr [ecx+esi]
0x7A0336: faddp   st(1), st
0x7A0338: fld     [esp+134h+var_38]
0x7A033F: fmul    dword ptr [eax]
0x7A0341: faddp   st(1), st
0x7A0343: fstp    [esp+134h+var_124]
0x7A0347: fld     [esp+134h+var_40]
0x7A034E: fmul    dword ptr [ecx+esi+4]
0x7A0352: fld     [esp+134h+var_4C]
0x7A0359: fmul    dword ptr [ecx+esi]
0x7A035C: faddp   st(1), st
0x7A035E: fld     [esp+134h+var_34]
0x7A0365: fmul    dword ptr [eax]
0x7A0367: faddp   st(1), st
0x7A0369: fstp    [esp+134h+var_114]
0x7A036D: fld     [esp+134h+var_3C]
0x7A0374: fmul    dword ptr [ecx+esi+4]
0x7A0378: fld     [esp+134h+var_48]
0x7A037F: fmul    dword ptr [ecx+esi]
0x7A0382: faddp   st(1), st
0x7A0384: fld     [esp+134h+var_30]
0x7A038B: fmul    dword ptr [eax]
0x7A038D: faddp   st(1), st
0x7A038F: fstp    [esp+134h+var_F8]
0x7A0393: fld     [esp+134h+var_124]
0x7A0397: fadd    [esp+134h+var_11C]
0x7A039B: fstp    [esp+134h+var_124]
0x7A039F: fld     [esp+134h+var_114]
0x7A03A3: fadd    [esp+134h+var_104]
0x7A03A7: fstp    [esp+134h+var_11C]
0x7A03AB: fld     [esp+134h+var_F8]
0x7A03AF: fadd    [esp+134h+var_EC]
0x7A03B3: fstp    [esp+134h+var_114]
0x7A03B7: fld     [esp+134h+var_124]
0x7A03BB: fld     qword ptr ds:0A2FAA0h
0x7A03C1: fmul    st(1), st
0x7A03C3: fxch    st(1)
0x7A03C5: fstp    [esp+134h+var_10C]
0x7A03C9: fld     [esp+134h+var_11C]
0x7A03CD: fmul    st, st(1)
0x7A03CF: fstp    [esp+134h+var_F4]
0x7A03D3: fmul    [esp+134h+var_114]
0x7A03D7: fstp    [esp+134h+var_110]
0x7A03DB: fld     [esp+134h+var_F4]
0x7A03DF: fld     [esp+134h+var_10C]
0x7A03E3: fld     [esp+134h+var_110]
0x7A03E7: fld     st(1)
0x7A03E9: fmulp   st(2), st
0x7A03EB: fld     st(2)
0x7A03ED: fmulp   st(3), st
0x7A03EF: fxch    st(1)
0x7A03F1: faddp   st(2), st
0x7A03F3: fmul    st, st
0x7A03F5: faddp   st(1), st
0x7A03F7: fstp    [esp+134h+var_124]
0x7A03FB: fld     [esp+134h+var_124]
0x7A03FF: call    __CIsqrt
0x7A0404: fstp    [esp+134h+var_124]
0x7A0408: fld     [esp+134h+var_124]
0x7A040C: fld1
0x7A040E: fdivrp  st(1), st
0x7A0410: fstp    [esp+134h+var_124]
0x7A0414: fld     [esp+134h+var_10C]
0x7A0418: fld     [esp+134h+var_124]
0x7A041C: fld     st
0x7A041E: fmulp   st(2), st
0x7A0420: fxch    st(1)
0x7A0422: fstp    [esp+134h+var_8C]
0x7A0429: fld     [esp+134h+var_F4]
0x7A042D: fmul    st, st(1)
0x7A042F: fstp    [esp+134h+var_88]
0x7A0436: fmul    [esp+134h+var_110]
0x7A043A: fstp    [esp+134h+var_84]
0x7A0441: fld1
0x7A0443: fst     [esp+134h+var_14]
0x7A044A: fst     [esp+134h+var_18]
0x7A0451: fst     [esp+134h+var_1C]
0x7A0458: lea     ecx, [esp+134h+var_20]
0x7A045F: fstp    [esp+134h+var_20]
0x7A0466: push    ecx
0x7A0467: mov     ecx, [edi]
0x7A0469: call    sub_796230
0x7A046E: mov     ecx, [edi]
0x7A0470: lea     edx, [esp+134h+var_8C]
0x7A0477: push    edx
0x7A0478: call    sub_7962F0
0x7A047D: mov     ecx, [edi]
0x7A047F: lea     eax, [esp+134h+var_5C]
0x7A0486: push    eax
0x7A0487: call    sub_796590
0x7A048C: fld     [esp+134h+var_88]
0x7A0493: fld     st
0x7A0495: fld     [esp+134h+var_54]
0x7A049C: fld     st
0x7A049E: fmulp   st(2), st
0x7A04A0: fld     [esp+134h+var_84]
0x7A04A7: fld     st
0x7A04A9: fld     [esp+134h+var_58]
0x7A04B0: fld     st
0x7A04B2: fmulp   st(2), st
0x7A04B4: fxch    st(4)
0x7A04B6: fsubrp  st(1), st
0x7A04B8: fstp    [esp+134h+var_10C]
0x7A04BC: fld     [esp+134h+var_5C]
0x7A04C3: fld     st
0x7A04C5: fmulp   st(2), st
0x7A04C7: fld     [esp+134h+var_8C]
0x7A04CE: fld     st
0x7A04D0: fmulp   st(4), st
0x7A04D2: fxch    st(2)
0x7A04D4: fsubrp  st(3), st
0x7A04D6: fxch    st(2)
0x7A04D8: fstp    [esp+134h+var_F4]
0x7A04DC: fmulp   st(2), st
0x7A04DE: fmulp   st(2), st
0x7A04E0: fsubrp  st(1), st
0x7A04E2: fstp    [esp+134h+var_110]
0x7A04E6: fld     [esp+134h+var_10C]
0x7A04EA: fld     [esp+134h+var_F4]
0x7A04EE: fld     [esp+134h+var_110]
0x7A04F2: fld     st(1)
0x7A04F4: fmulp   st(2), st
0x7A04F6: fld     st(2)
0x7A04F8: fmulp   st(3), st
0x7A04FA: fxch    st(1)
0x7A04FC: faddp   st(2), st
0x7A04FE: fmul    st, st
0x7A0500: faddp   st(1), st
0x7A0502: fstp    [esp+134h+var_124]
0x7A0506: fld     [esp+134h+var_124]
0x7A050A: call    __CIsqrt
0x7A050F: fstp    [esp+134h+var_124]
0x7A0513: fld     [esp+134h+var_124]
0x7A0517: lea     ecx, [esp+134h+var_E4]
0x7A051B: fld1
0x7A051D: push    ecx
0x7A051E: fdivrp  st(1), st
0x7A0520: mov     ecx, [edi]
0x7A0522: fstp    [esp+138h+var_124]
0x7A0526: fld     [esp+138h+var_10C]
0x7A052A: fld     [esp+138h+var_124]
0x7A052E: fld     st
0x7A0530: fmulp   st(2), st
0x7A0532: fxch    st(1)
0x7A0534: fstp    [esp+138h+var_E4]
0x7A0538: fld     [esp+138h+var_F4]
0x7A053C: fmul    st, st(1)
0x7A053E: fstp    [esp+138h+var_E0]
0x7A0542: fmul    [esp+138h+var_110]
0x7A0546: fstp    [esp+138h+Src]
0x7A054A: call    sub_7965E0
0x7A054F: mov     edx, [edi]
0x7A0551: cmp     byte ptr [edx+8], 0
0x7A0555: jz      short loc_7A05CF
0x7A0557: mov     eax, [ebx+4]
0x7A055A: test    eax, eax
0x7A055C: jz      short loc_7A057C
0x7A055E: mov     ecx, [ebx+8]
0x7A0561: sub     ecx, eax
0x7A0563: mov     eax, 92492493h
0x7A0568: imul    ecx
0x7A056A: add     edx, ecx
0x7A056C: sar     edx, 5
0x7A056F: mov     eax, edx
0x7A0571: shr     eax, 1Fh
0x7A0574: add     eax, edx
0x7A0576: cmp     [esp+134h+var_120], eax
0x7A057A: jb      short loc_7A0581
0x7A057C: call    __invalid_parameter_noinfo
0x7A0581: mov     eax, [ebx+4]
0x7A0584: test    eax, eax
0x7A0586: mov     [esp+134h+var_10C], eax
0x7A058A: jz      short loc_7A05AA
0x7A058C: mov     ecx, [ebx+8]
0x7A058F: sub     ecx, eax
0x7A0591: mov     eax, 92492493h
0x7A0596: imul    ecx
0x7A0598: add     edx, ecx
0x7A059A: sar     edx, 5
0x7A059D: mov     eax, edx
0x7A059F: shr     eax, 1Fh
0x7A05A2: add     eax, edx
0x7A05A4: cmp     [esp+134h+var_120], eax
0x7A05A8: jb      short loc_7A05AF
0x7A05AA: call    __invalid_parameter_noinfo
0x7A05AF: mov     eax, [esp+134h+var_FC]
0x7A05B3: mov     ecx, [esp+134h+var_10C]
0x7A05B7: movzx   edx, byte ptr [eax+ecx+34h]
0x7A05BC: mov     ecx, [ebx+4]
0x7A05BF: push    edx
0x7A05C0: push    ecx
0x7A05C1: fld     dword ptr [ecx+eax+30h]
0x7A05C5: mov     ecx, [edi]
0x7A05C7: fstp    [esp+13Ch+var_13C]
0x7A05CA: call    sub_796540
0x7A05CF: mov     eax, [esp+134h+var_118]
0x7A05D3: mov     edi, [edi]
0x7A05D5: add     word ptr [edi+22h], 1
0x7A05DA: add     eax, 1
0x7A05DD: add     esi, 0Ch
0x7A05E0: cmp     eax, [ebx+2Ch]
0x7A05E3: mov     [esp+134h+var_118], eax
0x7A05E7: mov     [esp+134h+var_10C], esi
0x7A05EB: jb      loc_79FE6E
0x7A05F1: mov     esi, [esp+134h+var_120]
0x7A05F5: add     esi, 1
0x7A05F8: mov     ecx, ebx
0x7A05FA: mov     [esp+134h+var_120], esi
0x7A05FE: call    sub_799EE0
0x7A0603: cmp     esi, eax
0x7A0605: jb      loc_79FE00
0x7A060B: xor     eax, eax
0x7A060D: mov     [esp+134h+var_D0], eax
0x7A0611: mov     [esp+134h+var_CC], eax
0x7A0615: mov     [esp+134h+var_C8], eax
0x7A0619: mov     [esp+134h+var_B8], eax
0x7A061D: mov     [esp+134h+var_B4], eax
0x7A0624: mov     [esp+134h+var_B0], eax
0x7A062B: cmp     [ebx+2Ch], eax
0x7A062E: mov     byte ptr [esp+134h+var_4], 3
0x7A0636: mov     [esp+134h+var_120], eax
0x7A063A: jbe     loc_7A0844
0x7A0640: fldz
0x7A0642: xor     edi, edi
0x7A0644: fstp    [esp+134h+var_100]
0x7A0648: fldz
0x7A064A: mov     [esp+134h+var_E0], edi
0x7A064E: fstp    [esp+134h+var_118]
0x7A0652: mov     [esp+134h+Src], edi
0x7A0656: mov     [esp+134h+var_D8], edi
0x7A065A: lea     edx, [esp+134h+var_100]
0x7A065E: push    edx; int
0x7A065F: xor     eax, eax
0x7A0661: push    eax; Src
0x7A0662: lea     eax, [esp+13Ch+var_E4]
0x7A0666: push    eax; int
0x7A0667: lea     eax, [esp+140h+var_C4]
0x7A066B: push    eax; int
0x7A066C: lea     ecx, [esp+144h+var_E4]
0x7A0670: mov     byte ptr [esp+144h+var_4], 4
0x7A0678: call    sub_7996F0
0x7A067D: mov     ecx, ebx
0x7A067F: mov     [esp+134h+var_FC], 1
0x7A0687: call    sub_799EE0
0x7A068C: cmp     eax, 1
0x7A068F: jbe     loc_7A07AC
0x7A0695: mov     ecx, [ebx+2Ch]
0x7A0698: mov     esi, [esp+134h+var_FC]
0x7A069C: mov     edx, [ebx+28h]
0x7A069F: mov     edi, [esp+134h+var_120]
0x7A06A3: mov     eax, esi
0x7A06A5: imul    eax, ecx
0x7A06A8: add     esi, 0FFFFFFFFh
0x7A06AB: imul    esi, ecx
0x7A06AE: mov     ecx, [esp+134h+var_E8]
0x7A06B2: mov     ecx, [ecx]
0x7A06B4: add     eax, edx
0x7A06B6: add     eax, edi
0x7A06B8: add     esi, edx
0x7A06BA: push    eax
0x7A06BB: add     esi, edi
0x7A06BD: call    sub_794730
0x7A06C2: mov     edx, [esp+134h+var_E8]
0x7A06C6: mov     ecx, [edx]
0x7A06C8: push    esi
0x7A06C9: mov     edi, eax
0x7A06CB: call    sub_794730
0x7A06D0: fld     dword ptr [edi]
0x7A06D2: mov     esi, [esp+134h+Src]
0x7A06D6: fstp    [esp+134h+var_104]
0x7A06DA: fld     dword ptr [edi+4]
0x7A06DD: fstp    [esp+134h+var_11C]
0x7A06E1: fld     dword ptr [edi+8]
0x7A06E4: fstp    [esp+134h+var_EC]
0x7A06E8: fld     dword ptr [eax]
0x7A06EA: fstp    [esp+134h+var_114]
0x7A06EE: fld     dword ptr [eax+4]
0x7A06F1: fstp    [esp+134h+var_124]
0x7A06F5: fld     dword ptr [eax+8]
0x7A06F8: fstp    [esp+134h+var_F8]
0x7A06FC: fld     [esp+134h+var_124]
0x7A0700: fsub    [esp+134h+var_11C]
0x7A0704: fld     [esp+134h+var_114]
0x7A0708: fsub    [esp+134h+var_104]
0x7A070C: fld     [esp+134h+var_F8]
0x7A0710: fsub    [esp+134h+var_EC]
0x7A0714: fld     st(1)
0x7A0716: fmulp   st(2), st
0x7A0718: fld     st(2)
0x7A071A: fmulp   st(3), st
0x7A071C: fxch    st(1)
0x7A071E: faddp   st(2), st
0x7A0720: fmul    st, st
0x7A0722: faddp   st(1), st
0x7A0724: fstp    [esp+134h+var_124]
0x7A0728: mov     eax, [esp+134h+var_124]
0x7A072C: sar     eax, 1
0x7A072E: add     eax, 1FC00000h
0x7A0733: mov     [esp+134h+var_124], eax
0x7A0737: fld     [esp+134h+var_124]
0x7A073B: mov     eax, [esp+134h+var_E0]
0x7A073F: test    eax, eax
0x7A0741: fadd    [esp+134h+var_118]
0x7A0745: fstp    [esp+134h+var_118]
0x7A0749: jz      short loc_7A0770
0x7A074B: mov     edx, [esp+134h+var_D8]
0x7A074F: mov     ecx, esi
0x7A0751: sub     ecx, eax
0x7A0753: sub     edx, eax
0x7A0755: sar     ecx, 2
0x7A0758: sar     edx, 2
0x7A075B: cmp     ecx, edx
0x7A075D: jnb     short loc_7A0770
0x7A075F: fld     [esp+134h+var_118]
0x7A0763: mov     eax, esi
0x7A0765: add     eax, 4
0x7A0768: fstp    dword ptr [esi]
0x7A076A: mov     [esp+134h+Src], eax
0x7A076E: jmp     short loc_7A0790
0x7A0770: cmp     eax, esi
0x7A0772: jbe     short loc_7A0779
0x7A0774: call    __invalid_parameter_noinfo
0x7A0779: lea     ecx, [esp+134h+var_118]
0x7A077D: push    ecx; int
0x7A077E: lea     eax, [esp+138h+var_E4]
0x7A0782: push    esi; Src
0x7A0783: push    eax; int
0x7A0784: lea     edx, [esp+140h+var_10C]
0x7A0788: push    edx; int
0x7A0789: mov     ecx, eax
0x7A078B: call    sub_7996F0
0x7A0790: mov     esi, [esp+134h+var_FC]
0x7A0794: add     esi, 1
0x7A0797: mov     ecx, ebx
0x7A0799: mov     [esp+134h+var_FC], esi
0x7A079D: call    sub_799EE0
0x7A07A2: cmp     esi, eax
0x7A07A4: jb      loc_7A0695
0x7A07AA: xor     edi, edi
0x7A07AC: lea     eax, [esp+134h+var_E4]
0x7A07B0: push    eax
0x7A07B1: lea     ecx, [esp+138h+var_BC]
0x7A07B5: call    sub_79F670
0x7A07BA: mov     edx, [esp+134h+var_D0]
0x7A07BE: cmp     edx, edi
0x7A07C0: mov     esi, [esp+134h+var_CC]
0x7A07C4: jz      short loc_7A07EB
0x7A07C6: mov     ecx, [esp+134h+var_C8]
0x7A07CA: mov     eax, esi
0x7A07CC: sub     eax, edx
0x7A07CE: sub     ecx, edx
0x7A07D0: sar     eax, 2
0x7A07D3: sar     ecx, 2
0x7A07D6: cmp     eax, ecx
0x7A07D8: jnb     short loc_7A07EB
0x7A07DA: fld     [esp+134h+var_118]
0x7A07DE: mov     eax, esi
0x7A07E0: add     eax, 4
0x7A07E3: fstp    dword ptr [esi]
0x7A07E5: mov     [esp+134h+var_CC], eax
0x7A07E9: jmp     short loc_7A080B
0x7A07EB: cmp     edx, esi
0x7A07ED: jbe     short loc_7A07F4
0x7A07EF: call    __invalid_parameter_noinfo
0x7A07F4: lea     ecx, [esp+134h+var_118]
0x7A07F8: push    ecx; int
0x7A07F9: lea     eax, [esp+138h+var_D4]
0x7A07FD: push    esi; Src
0x7A07FE: push    eax; int
0x7A07FF: lea     edx, [esp+140h+var_F4]
0x7A0803: push    edx; int
0x7A0804: mov     ecx, eax
0x7A0806: call    sub_7996F0
0x7A080B: mov     eax, [esp+134h+var_E0]
0x7A080F: cmp     eax, edi
0x7A0811: mov     byte ptr [esp+134h+var_4], 3
0x7A0819: jz      short loc_7A0824
0x7A081B: push    eax
0x7A081C: call    FormHeapFree
0x7A0821: add     esp, 4
0x7A0824: mov     eax, [esp+134h+var_120]
0x7A0828: add     eax, 1
0x7A082B: cmp     eax, [ebx+2Ch]
0x7A082E: mov     [esp+134h+var_E0], edi
0x7A0832: mov     [esp+134h+Src], edi
0x7A0836: mov     [esp+134h+var_D8], edi
0x7A083A: mov     [esp+134h+var_120], eax
0x7A083E: jb      loc_7A0648
0x7A0844: xor     edi, edi
0x7A0846: cmp     [ebx+2Ch], edi
0x7A0849: mov     [esp+134h+var_120], edi
0x7A084D: jbe     loc_7A0977
0x7A0853: mov     edi, [esp+134h+var_E8]
0x7A0857: jmp     short loc_7A0860
0x7A0859: align 10h
0x7A0860: mov     ecx, ebx
0x7A0862: mov     esi, 1
0x7A0867: call    sub_799EE0
0x7A086C: cmp     eax, esi
0x7A086E: jbe     loc_7A0961
0x7A0874: mov     eax, [esp+134h+var_120]
0x7A0878: shl     eax, 4
0x7A087B: mov     [esp+134h+var_100], eax
0x7A087F: nop
0x7A0880: mov     ax, [ebx+2Ch]
0x7A0884: mov     ecx, [edi]
0x7A0886: imul    ax, si
0x7A088A: add     ax, word ptr [esp+134h+var_120]
0x7A088F: add     ax, [ebx+28h]
0x7A0893: movzx   eax, ax
0x7A0896: movzx   edx, ax
0x7A0899: mov     [ecx+22h], ax
0x7A089D: mov     ecx, [edi]
0x7A089F: push    edx
0x7A08A0: call    sub_794760
0x7A08A5: fld     dword ptr [eax]
0x7A08A7: mov     eax, [esp+134h+var_B8]
0x7A08AB: test    eax, eax
0x7A08AD: fstp    [esp+134h+var_C4]
0x7A08B1: jz      short loc_7A08C5
0x7A08B3: mov     ecx, [esp+134h+var_B4]
0x7A08BA: sub     ecx, eax
0x7A08BC: sar     ecx, 4
0x7A08BF: cmp     [esp+134h+var_120], ecx
0x7A08C3: jb      short loc_7A08CE
0x7A08C5: call    __invalid_parameter_noinfo
0x7A08CA: mov     eax, [esp+134h+var_B8]
0x7A08CE: mov     edx, [esp+134h+var_100]
0x7A08D2: lea     ecx, [eax+edx+4]
0x7A08D6: mov     [esp+134h+var_124], ecx
0x7A08DA: mov     ecx, [ecx]
0x7A08DC: test    ecx, ecx
0x7A08DE: jz      short loc_7A08ED
0x7A08E0: mov     eax, [eax+edx+8]
0x7A08E4: sub     eax, ecx
0x7A08E6: sar     eax, 2
0x7A08E9: cmp     esi, eax
0x7A08EB: jb      short loc_7A08F2
0x7A08ED: call    __invalid_parameter_noinfo
0x7A08F2: mov     eax, [esp+134h+var_124]
0x7A08F6: mov     ecx, [eax]
0x7A08F8: mov     eax, [esp+134h+var_D0]
0x7A08FC: test    eax, eax
0x7A08FE: lea     edx, [ecx+esi*4]
0x7A0901: mov     [esp+134h+var_124], edx
0x7A0905: jz      short loc_7A0916
0x7A0907: mov     ecx, [esp+134h+var_CC]
0x7A090B: sub     ecx, eax
0x7A090D: sar     ecx, 2
0x7A0910: cmp     [esp+134h+var_120], ecx
0x7A0914: jb      short loc_7A091F
0x7A0916: call    __invalid_parameter_noinfo
0x7A091B: mov     eax, [esp+134h+var_D0]
0x7A091F: mov     ecx, [esp+134h+var_124]
0x7A0923: fld     dword ptr [ecx]
0x7A0925: mov     edx, [esp+134h+var_120]
0x7A0929: fdiv    dword ptr [eax+edx*4]
0x7A092C: movzx   ax, byte ptr [ebx+18h]
0x7A0931: lea     ecx, [esp+134h+var_C4]
0x7A0935: push    eax; float
0x7A0936: push    ecx; int
0x7A0937: mov     ecx, [edi]
0x7A0939: fmul    qword ptr ds:0A3F460h
0x7A093F: fstp    [esp+13Ch+var_C0]
0x7A0943: call    sub_796320
0x7A0948: mov     eax, [edi]
0x7A094A: add     word ptr [eax+22h], 1
0x7A094F: mov     ecx, ebx
0x7A0951: add     esi, 1
0x7A0954: call    sub_799EE0
0x7A0959: cmp     esi, eax
0x7A095B: jb      loc_7A0880
0x7A0961: mov     eax, [esp+134h+var_120]
0x7A0965: add     eax, 1
0x7A0968: cmp     eax, [ebx+2Ch]
0x7A096B: mov     [esp+134h+var_120], eax
0x7A096F: jb      loc_7A0860
0x7A0975: xor     edi, edi
0x7A0977: mov     esi, [esp+134h+var_B8]
0x7A097B: cmp     esi, edi
0x7A097D: jz      short loc_7A09BE
0x7A097F: mov     ebx, [esp+134h+var_B4]
0x7A0986: cmp     esi, ebx
0x7A0988: jz      short loc_7A09B1
0x7A098A: add     esi, 4
0x7A098D: lea     ecx, [ecx+0]
0x7A0990: mov     eax, [esi]
0x7A0992: cmp     eax, edi
0x7A0994: jz      short loc_7A099F
0x7A0996: push    eax
0x7A0997: call    FormHeapFree
0x7A099C: add     esp, 4
0x7A099F: mov     [esi], edi
0x7A09A1: mov     [esi+4], edi
0x7A09A4: mov     [esi+8], edi
0x7A09A7: add     esi, 10h
0x7A09AA: lea     edx, [esi-4]
0x7A09AD: cmp     edx, ebx
0x7A09AF: jnz     short loc_7A0990
0x7A09B1: mov     eax, [esp+134h+var_B8]
0x7A09B5: push    eax
0x7A09B6: call    FormHeapFree
0x7A09BB: add     esp, 4
0x7A09BE: mov     eax, [esp+134h+var_D0]
0x7A09C2: cmp     eax, edi
0x7A09C4: mov     [esp+134h+var_B8], edi
0x7A09C8: mov     [esp+134h+var_B4], edi
0x7A09CF: mov     [esp+134h+var_B0], edi
0x7A09D6: jz      short loc_7A09E1
0x7A09D8: push    eax
0x7A09D9: call    FormHeapFree
0x7A09DE: add     esp, 4
0x7A09E1: mov     eax, [esp+134h+var_98]
0x7A09E8: cmp     eax, edi
0x7A09EA: mov     [esp+134h+var_D0], edi
0x7A09EE: mov     [esp+134h+var_CC], edi
0x7A09F2: mov     [esp+134h+var_C8], edi
0x7A09F6: jz      short loc_7A0A01
0x7A09F8: push    eax
0x7A09F9: call    FormHeapFree
0x7A09FE: add     esp, 4
0x7A0A01: mov     eax, [esp+134h+var_A8]
0x7A0A08: cmp     eax, edi
0x7A0A0A: mov     [esp+134h+var_98], edi
0x7A0A11: mov     [esp+134h+var_94], edi
0x7A0A18: mov     [esp+134h+var_90], edi
0x7A0A1F: jz      short loc_7A0A2A
0x7A0A21: push    eax
0x7A0A22: call    FormHeapFree
0x7A0A27: add     esp, 4
0x7A0A2A: mov     ecx, [esp+134h+var_C]
0x7A0A31: mov     large fs:0, ecx
0x7A0A38: pop     ecx
0x7A0A39: pop     edi
0x7A0A3A: pop     esi
0x7A0A3B: pop     ebx
0x7A0A3C: mov     esp, ebp
0x7A0A3E: pop     ebp
0x7A0A3F: retn    4
