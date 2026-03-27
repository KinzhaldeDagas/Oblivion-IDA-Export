0x6FCDC0: push    0FFFFFFFFh
0x6FCDC2: push    offset SEH_6FCDC0
0x6FCDC7: mov     eax, large fs:0
0x6FCDCD: push    eax
0x6FCDCE: sub     esp, 4Ch
0x6FCDD1: push    ebx
0x6FCDD2: push    ebp
0x6FCDD3: push    esi
0x6FCDD4: push    edi
0x6FCDD5: mov     eax, ds:0B30AACh
0x6FCDDA: xor     eax, esp
0x6FCDDC: push    eax
0x6FCDDD: lea     eax, [esp+6Ch+var_C]
0x6FCDE1: mov     large fs:0, eax
0x6FCDE7: mov     eax, [esp+6Ch+arg_0]
0x6FCDEB: mov     ebx, [eax+4]
0x6FCDEE: mov     esi, [eax]
0x6FCDF0: mov     ebp, [eax+8]
0x6FCDF3: mov     [esp+6Ch+var_30], ebx
0x6FCDF7: fld     [esp+6Ch+var_30]
0x6FCDFB: fst     [esp+6Ch+var_48]
0x6FCDFF: mov     [esp+6Ch+var_34], esi
0x6FCE03: fld     [esp+6Ch+var_34]
0x6FCE07: mov     [esp+6Ch+var_2C], ebp
0x6FCE0B: fst     [esp+6Ch+var_40]
0x6FCE0F: fld     [esp+6Ch+var_2C]
0x6FCE13: fst     [esp+6Ch+var_50]
0x6FCE17: fld     st(1)
0x6FCE19: fmulp   st(2), st
0x6FCE1B: fld     st(2)
0x6FCE1D: fmulp   st(3), st
0x6FCE1F: fxch    st(1)
0x6FCE21: faddp   st(2), st
0x6FCE23: fmul    st, st
0x6FCE25: faddp   st(1), st
0x6FCE27: fstp    [esp+6Ch+arg_0]
0x6FCE2B: fld     [esp+6Ch+arg_0]
0x6FCE2F: call    __CIsqrt
0x6FCE34: fstp    [esp+6Ch+arg_0]
0x6FCE38: fld     [esp+6Ch+arg_0]
0x6FCE3C: fstp    [esp+6Ch+arg_0]
0x6FCE40: fld     dword ptr ds:0A58E1Ch
0x6FCE46: fld     [esp+6Ch+arg_0]
0x6FCE4A: fcom    st(1)
0x6FCE4C: fnstsw  ax
0x6FCE4E: fstp    st(1)
0x6FCE50: test    ah, 5
0x6FCE53: jp      loc_6FCEE0
0x6FCE59: fdivr   qword ptr ds:0A49310h
0x6FCE5F: fstp    [esp+6Ch+arg_0]
0x6FCE63: fld     [esp+6Ch+arg_0]
0x6FCE67: fld     [esp+6Ch+var_40]
0x6FCE6B: fmul    st, st(1)
0x6FCE6D: fstp    [esp+6Ch+arg_0]
0x6FCE71: fld     [esp+6Ch+var_48]
0x6FCE75: fmul    st, st(1)
0x6FCE77: fstp    [esp+6Ch+var_58]
0x6FCE7B: fmul    [esp+6Ch+var_50]
0x6FCE7F: fstp    [esp+6Ch+var_54]
0x6FCE83: fld     [esp+6Ch+arg_0]
0x6FCE87: fst     dword ptr [esp+6Ch+var_40]
0x6FCE8B: mov     esi, dword ptr [esp+6Ch+var_40]
0x6FCE8F: fld     [esp+6Ch+var_58]
0x6FCE93: mov     [esp+6Ch+var_34], esi
0x6FCE97: fst     dword ptr [esp+6Ch+var_40+4]
0x6FCE9B: mov     ebx, dword ptr [esp+6Ch+var_40+4]
0x6FCE9F: fld     [esp+6Ch+var_54]
0x6FCEA3: mov     [esp+6Ch+var_30], ebx
0x6FCEA7: fst     [esp+6Ch+var_38]
0x6FCEAB: mov     ebp, [esp+6Ch+var_38]
0x6FCEAF: fld     st(2)
0x6FCEB1: mov     [esp+6Ch+var_2C], ebp
0x6FCEB5: fmulp   st(3), st
0x6FCEB7: fld     st(1)
0x6FCEB9: fmulp   st(2), st
0x6FCEBB: fxch    st(2)
0x6FCEBD: faddp   st(1), st
0x6FCEBF: fld     st(1)
0x6FCEC1: fmulp   st(2), st
0x6FCEC3: faddp   st(1), st
0x6FCEC5: fstp    [esp+6Ch+arg_0]
0x6FCEC9: fld     [esp+6Ch+arg_0]
0x6FCECD: call    __CIsqrt
0x6FCED2: fstp    [esp+6Ch+arg_0]
0x6FCED6: fld     [esp+6Ch+arg_0]
0x6FCEDA: fstp    [esp+6Ch+arg_0]
0x6FCEDE: jmp     short loc_6FCEE2
0x6FCEE0: fstp    st
0x6FCEE2: push    3Ch ; '<'; Size
0x6FCEE4: call    FormHeapAlloc
0x6FCEE9: fldz
0x6FCEEB: fst     dword ptr [esp+70h+var_40]
0x6FCEEF: mov     edi, eax
0x6FCEF1: mov     eax, dword ptr [esp+70h+var_40]
0x6FCEF5: fst     dword ptr [esp+70h+var_40+4]
0x6FCEF9: mov     ecx, dword ptr [esp+70h+var_40+4]
0x6FCEFD: fstp    [esp+70h+var_38]
0x6FCF01: fld     [esp+70h+arg_0]
0x6FCF05: mov     edx, [esp+70h+var_38]
0x6FCF09: fmul    qword ptr ds:0A74560h
0x6FCF0F: mov     [edi], eax
0x6FCF11: add     esp, 4
0x6FCF14: mov     [edi+4], ecx
0x6FCF17: lea     eax, [esp+6Ch+var_18]
0x6FCF1B: push    eax
0x6FCF1C: fstp    [esp+70h+arg_0]
0x6FCF20: lea     ecx, [esp+70h+var_34]
0x6FCF24: mov     [edi+8], edx
0x6FCF27: call    sub_6FBBA0
0x6FCF2C: fld     [esp+6Ch+arg_0]
0x6FCF30: fld     dword ptr [eax]
0x6FCF32: fmul    st, st(1)
0x6FCF34: fstp    [esp+6Ch+var_54]
0x6FCF38: fld     dword ptr [eax+4]
0x6FCF3B: fmul    st, st(1)
0x6FCF3D: fstp    dword ptr [esp+6Ch+var_50]
0x6FCF41: fmul    dword ptr [eax+8]
0x6FCF44: mov     [edi+0Ch], esi
0x6FCF47: mov     [edi+10h], ebx
0x6FCF4A: mov     [edi+14h], ebp
0x6FCF4D: fstp    dword ptr [esp+6Ch+var_40]
0x6FCF51: fld     [esp+6Ch+var_34]
0x6FCF55: fld     qword ptr ds:0A31C70h
0x6FCF5B: fmul    st(1), st
0x6FCF5D: fxch    st(1)
0x6FCF5F: fstp    [esp+6Ch+arg_0]
0x6FCF63: fld     [esp+6Ch+var_30]
0x6FCF67: fmul    st, st(1)
0x6FCF69: fstp    [esp+6Ch+var_58]
0x6FCF6D: fmul    [esp+6Ch+var_2C]
0x6FCF71: fstp    dword ptr [esp+6Ch+var_48]
0x6FCF75: fld     [esp+6Ch+arg_0]
0x6FCF79: fld     [esp+6Ch+var_54]
0x6FCF7D: fld     st(1)
0x6FCF7F: fsub    st, st(1)
0x6FCF81: fstp    [esp+6Ch+arg_0]
0x6FCF85: fld     [esp+6Ch+var_58]
0x6FCF89: fld     dword ptr [esp+6Ch+var_50]
0x6FCF8D: fld     st(1)
0x6FCF8F: fsub    st, st(1)
0x6FCF91: fstp    dword ptr [esp+6Ch+var_50]
0x6FCF95: fld     dword ptr [esp+6Ch+var_48]
0x6FCF99: fld     dword ptr [esp+6Ch+var_40]
0x6FCF9D: fld     st(1)
0x6FCF9F: fsub    st, st(1)
0x6FCFA1: fstp    dword ptr [esp+6Ch+var_40]
0x6FCFA5: fld     [esp+6Ch+arg_0]
0x6FCFA9: fstp    [esp+6Ch+var_28]
0x6FCFAD: fld     dword ptr [esp+6Ch+var_50]
0x6FCFB1: fstp    [esp+6Ch+var_24]
0x6FCFB5: fld     dword ptr [esp+6Ch+var_40]
0x6FCFB9: fstp    [esp+6Ch+var_20]
0x6FCFBD: fxch    st(5)
0x6FCFBF: faddp   st(4), st
0x6FCFC1: fxch    st(3)
0x6FCFC3: fstp    [esp+6Ch+arg_0]
0x6FCFC7: faddp   st(1), st
0x6FCFC9: fstp    dword ptr [esp+6Ch+var_40]
0x6FCFCD: faddp   st(1), st
0x6FCFCF: fstp    dword ptr [esp+6Ch+var_48]
0x6FCFD3: fld     [esp+6Ch+arg_0]
0x6FCFD7: fstp    [esp+6Ch+var_34]
0x6FCFDB: mov     ecx, [esp+6Ch+var_34]
0x6FCFDF: fld     dword ptr [esp+6Ch+var_40]
0x6FCFE3: mov     [edi+18h], ecx
0x6FCFE6: fstp    [esp+6Ch+var_30]
0x6FCFEA: mov     edx, [esp+6Ch+var_30]
0x6FCFEE: fld     dword ptr [esp+6Ch+var_48]
0x6FCFF2: fstp    [esp+6Ch+var_2C]
0x6FCFF6: mov     eax, [esp+6Ch+var_2C]
0x6FCFFA: mov     ecx, [esp+6Ch+var_28]
0x6FCFFE: mov     [edi+24h], esi
0x6FD001: mov     [edi+1Ch], edx
0x6FD004: mov     edx, [esp+6Ch+var_24]
0x6FD008: mov     [edi+28h], ebx
0x6FD00B: mov     [edi+2Ch], ebp
0x6FD00E: mov     ebp, [esp+6Ch+arg_4]
0x6FD012: test    ebp, ebp
0x6FD014: mov     [edi+20h], eax
0x6FD017: mov     eax, [esp+6Ch+var_20]
0x6FD01B: mov     [edi+30h], ecx
0x6FD01E: mov     [edi+34h], edx
0x6FD021: mov     [edi+38h], eax
0x6FD024: jnz     short loc_6FD02B
0x6FD026: mov     ebp, offset dword_B25550
0x6FD02B: push    60h ; '`'; Size
0x6FD02D: call    FormHeapAlloc
0x6FD032: mov     esi, eax
0x6FD034: add     esp, 4
0x6FD037: mov     [esp+6Ch+arg_0], esi
0x6FD03B: test    esi, esi
0x6FD03D: mov     [esp+6Ch+var_4], 0
0x6FD045: jz      short loc_6FD058
0x6FD047: push    offset sub_47EA50
0x6FD04C: push    6
0x6FD04E: push    10h
0x6FD050: push    esi
0x6FD051: call    sub_401080
0x6FD056: jmp     short loc_6FD05A
0x6FD058: xor     esi, esi
0x6FD05A: mov     ecx, [ebp+0]
0x6FD05D: fldz
0x6FD05F: mov     [esi], ecx
0x6FD061: fst     [esp+6Ch+var_28]
0x6FD065: mov     edx, [ebp+4]
0x6FD068: fld1
0x6FD06A: mov     [esi+4], edx
0x6FD06D: fst     [esp+6Ch+var_24]
0x6FD071: mov     eax, [ebp+8]
0x6FD074: fst     [esp+6Ch+var_1C]
0x6FD078: mov     [esi+8], eax
0x6FD07B: fxch    st(1)
0x6FD07D: mov     ecx, [ebp+0Ch]
0x6FD080: fst     [esp+6Ch+var_20]
0x6FD084: mov     [esi+0Ch], ecx
0x6FD087: mov     edx, [ebp+0]
0x6FD08A: mov     [esi+10h], edx
0x6FD08D: mov     eax, [ebp+4]
0x6FD090: mov     [esi+14h], eax
0x6FD093: mov     ecx, [ebp+8]
0x6FD096: mov     eax, [esp+6Ch+var_28]
0x6FD09A: fst     [esp+6Ch+var_28]
0x6FD09E: mov     [esi+18h], ecx
0x6FD0A1: mov     edx, [ebp+0Ch]
0x6FD0A4: mov     ecx, [esp+6Ch+var_24]
0x6FD0A8: mov     [esi+1Ch], edx
0x6FD0AB: mov     edx, [esp+6Ch+var_20]
0x6FD0AF: fst     [esp+6Ch+var_20]
0x6FD0B3: mov     [esi+20h], eax
0x6FD0B6: fxch    st(1)
0x6FD0B8: mov     eax, [esp+6Ch+var_1C]
0x6FD0BC: fst     [esp+6Ch+var_24]
0x6FD0C0: mov     [esi+24h], ecx
0x6FD0C3: fst     [esp+6Ch+var_1C]
0x6FD0C7: mov     ecx, [esp+6Ch+var_28]
0x6FD0CB: fxch    st(1)
0x6FD0CD: mov     [esi+28h], edx
0x6FD0D0: fst     [esp+6Ch+var_28]
0x6FD0D4: mov     edx, [esp+6Ch+var_24]
0x6FD0D8: mov     [esi+2Ch], eax
0x6FD0DB: mov     eax, [esp+6Ch+var_20]
0x6FD0DF: fstp    [esp+6Ch+var_20]
0x6FD0E3: mov     [esi+30h], ecx
0x6FD0E6: mov     ecx, [esp+6Ch+var_1C]
0x6FD0EA: fst     [esp+6Ch+var_24]
0x6FD0EE: mov     [esi+34h], edx
0x6FD0F1: fstp    [esp+6Ch+var_1C]
0x6FD0F5: mov     edx, [esp+6Ch+var_28]
0x6FD0F9: mov     [esi+38h], eax
0x6FD0FC: mov     eax, [esp+6Ch+var_24]
0x6FD100: mov     [esi+40h], edx
0x6FD103: mov     edx, [esp+6Ch+var_1C]
0x6FD107: mov     [esi+3Ch], ecx
0x6FD10A: mov     ecx, [esp+6Ch+var_20]
0x6FD10E: mov     [esi+44h], eax
0x6FD111: mov     [esi+48h], ecx
0x6FD114: push    6; Size
0x6FD116: mov     [esp+70h+var_4], 0FFFFFFFFh
0x6FD11E: mov     [esi+4Ch], edx
0x6FD121: call    FormHeapAlloc
0x6FD126: mov     ebp, eax
0x6FD128: mov     ebx, 1
0x6FD12D: push    0C0h ; 'À'; Size
0x6FD132: mov     [ebp+0], bl
0x6FD135: mov     byte ptr [ebp+1], 0
0x6FD139: mov     [ebp+2], bl
0x6FD13C: mov     [ebp+3], bl
0x6FD13F: mov     byte ptr [ebp+4], 0
0x6FD143: call    FormHeapAlloc
0x6FD148: add     esp, 8
0x6FD14B: mov     [esp+6Ch+arg_0], eax
0x6FD14F: test    eax, eax
0x6FD151: mov     [esp+6Ch+var_4], ebx
0x6FD155: jz      short loc_6FD16D
0x6FD157: push    ebp
0x6FD158: push    0
0x6FD15A: push    0
0x6FD15C: push    0
0x6FD15E: push    esi
0x6FD15F: push    edi
0x6FD160: push    5
0x6FD162: mov     ecx, eax
0x6FD164: call    sub_7177E0
0x6FD169: mov     ebp, eax
0x6FD16B: jmp     short loc_6FD16F
0x6FD16D: xor     ebp, ebp
0x6FD16F: mov     eax, ds:0B3F9A8h
0x6FD174: mov     [ebp+54h], eax
0x6FD177: mov     ecx, ds:0B3F9ACh
0x6FD17D: mov     [ebp+58h], ecx
0x6FD180: mov     edx, ds:0B3F9B0h
0x6FD186: mov     [ebp+5Ch], edx
0x6FD189: lea     edi, [ebp+30h]
0x6FD18C: mov     ecx, 9
0x6FD191: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x6FD196: rep movsd
0x6FD198: push    offset aBstestobjectsD; "BSTestObjects DirArrow"
0x6FD19D: mov     ecx, ebp
0x6FD19F: mov     [esp+70h+var_4], 0FFFFFFFFh
0x6FD1A7: call    NiObjectNET_SetName
0x6FD1AC: mov     eax, ebp
0x6FD1AE: mov     ecx, [esp+6Ch+var_C]
0x6FD1B2: mov     large fs:0, ecx
0x6FD1B9: pop     ecx
0x6FD1BA: pop     edi
0x6FD1BB: pop     esi
0x6FD1BC: pop     ebp
0x6FD1BD: pop     ebx
0x6FD1BE: add     esp, 58h
0x6FD1C1: retn
