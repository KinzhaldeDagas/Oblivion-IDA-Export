0x805F20: push    0FFFFFFFFh
0x805F22: push    offset SEH_805F20
0x805F27: mov     eax, large fs:0
0x805F2D: push    eax
0x805F2E: sub     esp, 14h
0x805F31: push    ebx
0x805F32: push    ebp
0x805F33: push    esi
0x805F34: push    edi
0x805F35: mov     eax, ds:0B30AACh
0x805F3A: xor     eax, esp
0x805F3C: push    eax
0x805F3D: lea     eax, [esp+34h+var_C]
0x805F41: mov     large fs:0, eax
0x805F47: mov     esi, ecx
0x805F49: mov     eax, [esp+34h+arg_C]
0x805F4D: mov     edi, [eax+18h]
0x805F50: test    edi, edi
0x805F52: jnz     short loc_805F58
0x805F54: xor     eax, eax
0x805F56: jmp     short loc_805F6B
0x805F58: mov     edx, [edi]
0x805F5A: mov     eax, [edx+54h]
0x805F5D: mov     ecx, edi
0x805F5F: call    eax
0x805F61: xor     ecx, ecx
0x805F63: cmp     eax, 3
0x805F66: setz    cl
0x805F69: mov     eax, ecx
0x805F6B: mov     edx, [esi]
0x805F6D: neg     eax
0x805F6F: sbb     eax, eax
0x805F71: and     eax, edi
0x805F73: mov     ebx, eax
0x805F75: mov     eax, [edx+80h]
0x805F7B: mov     ecx, esi
0x805F7D: call    eax
0x805F7F: xor     ecx, ecx
0x805F81: cmp     [esp+34h+arg_4], ecx
0x805F85: setnz   cl
0x805F88: mov     edi, ecx
0x805F8A: mov     ebp, [esi+edi*4+7Ch]
0x805F8E: mov     ecx, ebx
0x805F90: call    sub_7EE1D0
0x805F95: sub     edi, 1
0x805F98: mov     [esp+34h+arg_C], eax
0x805F9C: mov     eax, [esi+94h]
0x805FA2: jz      short loc_805FBE
0x805FA4: mov     byte ptr [eax+8], 1
0x805FA8: mov     eax, [esi+98h]
0x805FAE: mov     byte ptr [eax+8], 0
0x805FB2: mov     eax, [esi+9Ch]
0x805FB8: mov     byte ptr [eax+8], 0
0x805FBC: jmp     short loc_805FD6
0x805FBE: mov     byte ptr [eax+8], 0
0x805FC2: mov     eax, [esi+98h]
0x805FC8: mov     byte ptr [eax+8], 1
0x805FCC: mov     eax, [esi+9Ch]
0x805FD2: mov     byte ptr [eax+8], 1
0x805FD6: mov     ecx, [esi+30h]
0x805FD9: mov     edx, [ecx]
0x805FDB: mov     eax, [edx+48h]
0x805FDE: call    eax
0x805FE0: mov     edi, [esp+34h+arg_C]
0x805FE4: movzx   eax, byte ptr [edi+44h]
0x805FE8: cmp     eax, 3; switch 4 cases
0x805FEB: ja      def_805FF1
0x805FF1: jmp     ds:jpt_805FF1[eax*4]; switch jump
0x805FF8: fldz; jumptable 00805FF1 case 0
0x805FFA: fst     [esp+34h+var_1C]
0x805FFE: fld     dword ptr ds:0A3D65Ch
0x806004: fst     [esp+34h+var_18]
0x806008: fstp    [esp+34h+var_10]
0x80600C: fstp    [esp+34h+var_14]
0x806010: mov     ecx, [esp+34h+var_1C]
0x806014: mov     edx, [esp+34h+var_18]
0x806018: mov     eax, [esp+34h+var_14]
0x80601C: mov     ds:0B46198h, ecx
0x806022: mov     ecx, [esp+34h+var_10]
0x806026: mov     ds:0B4619Ch, edx
0x80602C: mov     ds:0B461A0h, eax
0x806031: mov     ds:0B461A4h, ecx
0x806037: jmp     loc_8060ED
0x80603C: fld     dword ptr ds:0A3D65Ch; jumptable 00805FF1 case 1
0x806042: fst     [esp+34h+var_1C]
0x806046: mov     edx, [esp+34h+var_1C]
0x80604A: fst     [esp+34h+var_18]
0x80604E: mov     eax, [esp+34h+var_18]
0x806052: fldz
0x806054: mov     ds:0B46198h, edx
0x80605A: fstp    [esp+34h+var_14]
0x80605E: mov     ds:0B4619Ch, eax
0x806063: mov     ecx, [esp+34h+var_14]
0x806067: mov     ds:0B461A0h, ecx
0x80606D: fstp    [esp+34h+var_10]
0x806071: mov     edx, [esp+34h+var_10]
0x806075: mov     ds:0B461A4h, edx
0x80607B: jmp     short loc_8060ED
0x80607D: fldz; jumptable 00805FF1 case 2
0x80607F: fstp    [esp+34h+var_1C]
0x806083: fld     dword ptr ds:0A3D65Ch
0x806089: mov     eax, [esp+34h+var_1C]
0x80608D: fst     [esp+34h+var_18]
0x806091: mov     ds:0B46198h, eax
0x806096: mov     ecx, [esp+34h+var_18]
0x80609A: fst     [esp+34h+var_14]
0x80609E: mov     edx, [esp+34h+var_14]
0x8060A2: fstp    [esp+34h+var_10]
0x8060A6: mov     eax, [esp+34h+var_10]
0x8060AA: mov     ds:0B4619Ch, ecx
0x8060B0: mov     ds:0B461A0h, edx
0x8060B6: mov     ds:0B461A4h, eax
0x8060BB: jmp     short loc_8060ED
0x8060BD: fld     dword ptr ds:0A3D65Ch; jumptable 00805FF1 case 3
0x8060C3: fst     [esp+34h+var_1C]
0x8060C7: fst     [esp+34h+var_18]
0x8060CB: fst     [esp+34h+var_14]
0x8060CF: fstp    [esp+34h+var_10]
0x8060D3: jmp     loc_806010
