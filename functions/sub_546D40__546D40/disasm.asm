0x546D40: sub     esp, 0Ch
0x546D43: mov     eax, [esp+0Ch+arg_8]
0x546D47: mov     ecx, [esp+0Ch+arg_4]
0x546D4B: push    ebx
0x546D4C: push    esi
0x546D4D: push    eax
0x546D4E: push    ecx
0x546D4F: call    Calc_LuckModifiedSkill
0x546D54: fdiv    qword ptr ds:0A309F0h
0x546D5A: mov     esi, [esp+1Ch+arg_0]
0x546D5E: mov     edx, [esi]
0x546D60: mov     eax, [edx+108h]
0x546D66: add     esp, 8
0x546D69: mov     ecx, esi
0x546D6B: fstp    [esp+14h+var_C]
0x546D6F: call    eax
0x546D71: movsx   ecx, al
0x546D74: mov     [esp+14h+arg_0], ecx
0x546D78: mov     ecx, esi
0x546D7A: fild    [esp+14h+arg_0]
0x546D7E: fstp    [esp+14h+var_8]
0x546D82: call    sub_4A9F70
0x546D87: fadd    [esp+14h+var_8]
0x546D8B: mov     ecx, esi
0x546D8D: fstp    [esp+14h+var_8]
0x546D91: call    sub_4A9F30
0x546D96: fmul    [esp+14h+var_C]
0x546D9A: mov     bl, byte ptr [esp+14h+arg_10]
0x546D9E: test    bl, bl
0x546DA0: mov     ecx, esi
0x546DA2: fadd    [esp+14h+var_8]
0x546DA6: fstp    [esp+14h+arg_0]
0x546DAA: jz      short loc_546DB3
0x546DAC: call    sub_4A9FB0
0x546DB1: jmp     short loc_546DB8
0x546DB3: call    sub_4A9FF0
0x546DB8: cmp     [esp+14h+arg_C], 0
0x546DBD: fstp    [esp+14h+arg_10]
0x546DC1: fld     [esp+14h+arg_10]
0x546DC5: fmul    [esp+14h+arg_0]
0x546DC9: fstp    [esp+14h+arg_0]
0x546DCD: jz      short loc_546DE1
0x546DCF: fld     [esp+14h+arg_0]
0x546DD3: pop     esi
0x546DD4: fstp    [esp+10h+arg_10]
0x546DD8: pop     ebx
0x546DD9: fld     [esp+0Ch+arg_10]
0x546DDD: add     esp, 0Ch
0x546DE0: retn
0x546DE1: test    bl, bl
0x546DE3: jz      short loc_546DE9
0x546DE5: fld1
0x546DE7: jmp     short loc_546DEF
0x546DE9: fld     dword ptr ds:0A41304h
0x546DEF: fstp    [esp+14h+arg_10]
0x546DF3: pop     esi
0x546DF4: fld     dword ptr ds:0B36F10h
0x546DFA: pop     ebx
0x546DFB: fmul    [esp+0Ch+arg_0]
0x546DFF: fmul    [esp+0Ch+arg_10]
0x546E03: fstp    [esp+0Ch+arg_10]
0x546E07: fld     [esp+0Ch+arg_10]
0x546E0B: add     esp, 0Ch
0x546E0E: retn
