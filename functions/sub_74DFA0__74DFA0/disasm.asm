0x74DFA0: sub     esp, 8
0x74DFA3: push    ebx
0x74DFA4: mov     ebx, [esp+0Ch+arg_0]
0x74DFA8: push    ebp
0x74DFA9: mov     bp, word ptr [esp+10h+arg_4]
0x74DFAE: push    esi
0x74DFAF: mov     esi, ecx
0x74DFB1: mov     ecx, [ebx+58h]
0x74DFB4: test    ecx, ecx
0x74DFB6: push    edi
0x74DFB7: jz      loc_74E09B
0x74DFBD: cmp     byte ptr [esi+34h], 0
0x74DFC1: movzx   eax, bp
0x74DFC4: lea     eax, [eax+eax*2]
0x74DFC7: lea     edi, [ecx+eax*4]
0x74DFCA: jz      loc_74E08A
0x74DFD0: call    _rand
0x74DFD5: mov     [esp+18h+arg_4], eax
0x74DFD9: fild    [esp+18h+arg_4]
0x74DFDD: fdiv    qword ptr ds:0A3D5A8h
0x74DFE3: fstp    [esp+18h+arg_4]
0x74DFE7: fld     dword ptr ds:0B3F9A4h
0x74DFED: fmul    [esp+18h+arg_4]
0x74DFF1: fstp    [esp+18h+arg_4]
0x74DFF5: fld     [esp+18h+arg_4]
0x74DFF9: call    __CIcos
0x74DFFE: fstp    [esp+18h+arg_4]
0x74E002: fld     [esp+18h+arg_4]
0x74E006: fstp    [esp+18h+var_8]
0x74E00A: fld     [esp+18h+var_8]
0x74E00E: fmul    st, st
0x74E010: fld1
0x74E012: fsubrp  st(1), st
0x74E014: fstp    [esp+18h+arg_4]
0x74E018: fld     [esp+18h+arg_4]
0x74E01C: call    __CIsqrt
0x74E021: fstp    [esp+18h+arg_4]
0x74E025: fld     [esp+18h+arg_4]
0x74E029: fstp    [esp+18h+arg_0]
0x74E02D: call    _rand
0x74E032: mov     [esp+18h+arg_4], eax
0x74E036: fild    [esp+18h+arg_4]
0x74E03A: fdiv    qword ptr ds:0A3D5A8h
0x74E040: fstp    [esp+18h+arg_4]
0x74E044: fld     dword ptr ds:0B3F9A0h
0x74E04A: fmul    [esp+18h+arg_4]
0x74E04E: fstp    [esp+18h+arg_4]
0x74E052: fld     [esp+18h+arg_4]
0x74E056: call    __CIcos
0x74E05B: fstp    [esp+18h+var_4]
0x74E05F: fld     [esp+18h+var_4]
0x74E063: fmul    [esp+18h+arg_0]
0x74E067: fstp    dword ptr [edi]
0x74E069: fld     [esp+18h+arg_4]
0x74E06D: call    __CIsin
0x74E072: fstp    [esp+18h+arg_4]
0x74E076: fld     [esp+18h+arg_4]
0x74E07A: fmul    [esp+18h+arg_0]
0x74E07E: fstp    dword ptr [edi+4]
0x74E081: fld     [esp+18h+var_8]
0x74E085: fstp    dword ptr [edi+8]
0x74E088: jmp     short loc_74E09B
0x74E08A: mov     ecx, [esi+28h]
0x74E08D: mov     [edi], ecx
0x74E08F: mov     edx, [esi+2Ch]
0x74E092: mov     [edi+4], edx
0x74E095: mov     eax, [esi+30h]
0x74E098: mov     [edi+8], eax
0x74E09B: cmp     dword ptr [ebx+54h], 0
0x74E09F: jz      loc_74E152
0x74E0A5: call    _rand
0x74E0AA: mov     [esp+18h+arg_4], eax
0x74E0AE: fild    [esp+18h+arg_4]
0x74E0B2: mov     ecx, [ebx+54h]
0x74E0B5: movzx   edi, bp
0x74E0B8: add     edi, edi
0x74E0BA: fadd    st, st
0x74E0BC: add     edi, edi
0x74E0BE: fdiv    qword ptr ds:0A3D5A8h
0x74E0C4: fsub    qword ptr ds:0A2F928h
0x74E0CA: fstp    [esp+18h+arg_4]
0x74E0CE: fld     dword ptr [esi+24h]
0x74E0D1: fmul    [esp+18h+arg_4]
0x74E0D5: fadd    dword ptr [esi+20h]
0x74E0D8: fstp    [esp+18h+arg_4]
0x74E0DC: fld     [esp+18h+arg_4]
0x74E0E0: fstp    dword ptr [edi+ecx]
0x74E0E3: call    _rand
0x74E0E8: cmp     byte ptr [esi+35h], 0
0x74E0EC: mov     [esp+18h+arg_4], eax
0x74E0F0: fild    [esp+18h+arg_4]
0x74E0F4: fadd    st, st
0x74E0F6: fdiv    qword ptr ds:0A3D5A8h
0x74E0FC: fsub    qword ptr ds:0A2F928h
0x74E102: fstp    [esp+18h+arg_4]
0x74E106: fld     dword ptr [esi+1Ch]
0x74E109: fmul    [esp+18h+arg_4]
0x74E10D: fadd    dword ptr [esi+18h]
0x74E110: fstp    [esp+18h+arg_4]
0x74E114: jz      short loc_74E148
0x74E116: call    _rand
0x74E11B: mov     [esp+18h+arg_0], eax
0x74E11F: fild    [esp+18h+arg_0]
0x74E123: fdiv    qword ptr ds:0A3D5A8h
0x74E129: fstp    [esp+18h+arg_0]
0x74E12D: fld     [esp+18h+arg_0]
0x74E131: fcomp   dword ptr ds:0A3D65Ch
0x74E137: fnstsw  ax
0x74E139: test    ah, 41h
0x74E13C: jz      short loc_74E148
0x74E13E: fld     [esp+18h+arg_4]
0x74E142: fchs
0x74E144: fstp    [esp+18h+arg_4]
0x74E148: mov     edx, [ebx+60h]
0x74E14B: fld     [esp+18h+arg_4]
0x74E14F: fstp    dword ptr [edi+edx]
0x74E152: pop     edi
0x74E153: pop     esi
0x74E154: pop     ebp
0x74E155: pop     ebx
0x74E156: add     esp, 8
0x74E159: retn    8
