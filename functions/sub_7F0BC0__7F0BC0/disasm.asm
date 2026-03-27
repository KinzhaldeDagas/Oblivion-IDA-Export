0x7F0BC0: push    0FFFFFFFFh
0x7F0BC2: push    offset SEH_7F0BC0
0x7F0BC7: mov     eax, large fs:0
0x7F0BCD: push    eax
0x7F0BCE: sub     esp, 2Ch
0x7F0BD1: push    ebx
0x7F0BD2: push    ebp
0x7F0BD3: push    esi
0x7F0BD4: push    edi
0x7F0BD5: mov     eax, ds:0B30AACh
0x7F0BDA: xor     eax, esp
0x7F0BDC: push    eax
0x7F0BDD: lea     eax, [esp+4Ch+var_C]
0x7F0BE1: mov     large fs:0, eax
0x7F0BE7: mov     ebp, ecx
0x7F0BE9: mov     esi, [esp+4Ch+arg_C]
0x7F0BED: mov     eax, [esi+8]
0x7F0BF0: mov     ecx, [ebp+18h]
0x7F0BF3: mov     edx, [ecx]
0x7F0BF5: push    eax
0x7F0BF6: mov     eax, [edx+8]
0x7F0BF9: call    eax
0x7F0BFB: mov     eax, [esi+2Ch]
0x7F0BFE: mov     ecx, [ebp+18h]
0x7F0C01: mov     edx, [ecx]
0x7F0C03: push    eax
0x7F0C04: mov     eax, [edx+28h]
0x7F0C07: call    eax
0x7F0C09: mov     eax, [esi+28h]
0x7F0C0C: mov     ecx, [ebp+18h]
0x7F0C0F: mov     edx, [ecx]
0x7F0C11: push    eax
0x7F0C12: mov     eax, [edx+24h]
0x7F0C15: call    eax
0x7F0C17: mov     edi, [esi+0Ch]
0x7F0C1A: test    edi, edi
0x7F0C1C: mov     byte ptr [esp+4Ch+arg_C], 0
0x7F0C21: jz      loc_7F0CED
0x7F0C27: fld     dword ptr [edi+2Ch]
0x7F0C2A: mov     eax, [esp+4Ch+arg_0]
0x7F0C2E: fstp    [esp+4Ch+var_30]
0x7F0C32: fld     dword ptr [edi+30h]
0x7F0C35: fstp    [esp+4Ch+var_2C]
0x7F0C39: fld     dword ptr ds:0B46658h
0x7F0C3F: fstp    [esp+4Ch+var_28]
0x7F0C43: fld     dword ptr ds:0B4665Ch
0x7F0C49: fstp    [esp+4Ch+var_24]
0x7F0C4D: fld     dword ptr ds:0B46660h
0x7F0C53: fstp    [esp+4Ch+var_20]
0x7F0C57: fld     dword ptr [eax+88h]
0x7F0C5D: fsub    [esp+4Ch+var_28]
0x7F0C61: fstp    [esp+4Ch+var_38]
0x7F0C65: fld     dword ptr [eax+8Ch]
0x7F0C6B: fsub    [esp+4Ch+var_24]
0x7F0C6F: fstp    [esp+4Ch+arg_0]
0x7F0C73: fld     dword ptr [eax+90h]
0x7F0C79: fsub    [esp+4Ch+var_20]
0x7F0C7D: fstp    [esp+4Ch+var_34]
0x7F0C81: fld     [esp+4Ch+arg_0]
0x7F0C85: fld     [esp+4Ch+var_38]
0x7F0C89: fld     [esp+4Ch+var_34]
0x7F0C8D: fld     st(1)
0x7F0C8F: fmulp   st(2), st
0x7F0C91: fld     st(2)
0x7F0C93: fmulp   st(3), st
0x7F0C95: fxch    st(1)
0x7F0C97: faddp   st(2), st
0x7F0C99: fmul    st, st
0x7F0C9B: faddp   st(1), st
0x7F0C9D: fstp    [esp+4Ch+arg_0]
0x7F0CA1: fld     [esp+4Ch+arg_0]
0x7F0CA5: call    __CIsqrt
0x7F0CAA: fstp    [esp+4Ch+arg_0]
0x7F0CAE: fld     [esp+4Ch+arg_0]
0x7F0CB2: fstp    [esp+4Ch+arg_0]
0x7F0CB6: fld     [esp+4Ch+arg_0]
0x7F0CBA: fld     [esp+4Ch+var_30]
0x7F0CBE: fcom    st(1)
0x7F0CC0: fnstsw  ax
0x7F0CC2: test    ah, 5
0x7F0CC5: jnp     loc_7F0D83
0x7F0CCB: mov     ecx, [esp+4Ch+arg_18]
0x7F0CCF: fld     dword ptr [ecx+0Ch]
0x7F0CD2: fstp    [esp+4Ch+arg_0]
0x7F0CD6: fld     [esp+4Ch+arg_0]
0x7F0CDA: faddp   st(2), st
0x7F0CDC: fcom    st(1)
0x7F0CDE: fnstsw  ax
0x7F0CE0: fstp    st(1)
0x7F0CE2: test    ah, 5
0x7F0CE5: jnp     loc_7F0D85
0x7F0CEB: fstp    st
0x7F0CED: cmp     byte ptr ds:0B42E86h, 0
0x7F0CF4: jz      short loc_7F0D71
0x7F0CF6: fld1
0x7F0CF8: sub     esp, 10h
0x7F0CFB: mov     eax, esp
0x7F0CFD: fst     [esp+5Ch+var_1C]
0x7F0D01: mov     ecx, [esp+5Ch+var_1C]
0x7F0D05: fst     [esp+5Ch+var_18]
0x7F0D09: mov     edx, [esp+5Ch+var_18]
0x7F0D0D: fst     [esp+5Ch+var_14]
0x7F0D11: mov     [eax], ecx
0x7F0D13: fstp    [esp+5Ch+var_10]
0x7F0D17: mov     ecx, [esp+5Ch+var_14]
0x7F0D1B: mov     [eax+4], edx
0x7F0D1E: mov     edx, [esp+5Ch+var_10]
0x7F0D22: mov     [eax+8], ecx
0x7F0D25: push    0
0x7F0D27: mov     [eax+0Ch], edx
0x7F0D2A: call    sub_7ECAE0
0x7F0D2F: fldz
0x7F0D31: fst     [esp+60h+var_1C]
0x7F0D35: add     esp, 4
0x7F0D38: fld     dword ptr ds:0A47E6Ch
0x7F0D3E: mov     ecx, [esp+5Ch+var_1C]
0x7F0D42: mov     eax, esp
0x7F0D44: fstp    [esp+5Ch+var_18]
0x7F0D48: mov     edx, [esp+5Ch+var_18]
0x7F0D4C: mov     [eax], ecx
0x7F0D4E: mov     [eax+4], edx
0x7F0D51: fst     [esp+5Ch+var_14]
0x7F0D55: mov     ecx, [esp+5Ch+var_14]
0x7F0D59: fstp    [esp+5Ch+var_10]
0x7F0D5D: mov     edx, [esp+5Ch+var_10]
0x7F0D61: mov     [eax+8], ecx
0x7F0D64: push    1
0x7F0D66: mov     [eax+0Ch], edx
0x7F0D69: call    sub_7ECAE0
0x7F0D6E: add     esp, 14h
0x7F0D71: mov     esi, [esi+18h]
0x7F0D74: test    esi, esi
0x7F0D76: jnz     loc_7F0E31
0x7F0D7C: xor     ebx, ebx
0x7F0D7E: jmp     loc_7F0E42
0x7F0D83: fstp    st(1)
0x7F0D85: fld     [esp+4Ch+var_2C]
0x7F0D89: mov     edx, [edi+20h]
0x7F0D8C: mov     eax, [edi+24h]
0x7F0D8F: fld     st
0x7F0D91: mov     ecx, [edi+28h]
0x7F0D94: fsubrp  st(2), st
0x7F0D96: fxch    st(1)
0x7F0D98: mov     [esp+4Ch+var_28], edx
0x7F0D9C: mov     [esp+4Ch+var_24], eax
0x7F0DA0: fstp    [esp+4Ch+arg_C]
0x7F0DA4: mov     [esp+4Ch+var_20], ecx
0x7F0DA8: fstp    [esp+4Ch+var_1C]
0x7F0DAC: mov     edx, [esp+4Ch+var_1C]
0x7F0DB0: fld     [esp+4Ch+arg_C]
0x7F0DB4: mov     ds:0B46638h, edx
0x7F0DBA: fstp    [esp+4Ch+var_18]
0x7F0DBE: mov     eax, [esp+4Ch+var_18]
0x7F0DC2: fldz
0x7F0DC4: mov     ds:0B4663Ch, eax
0x7F0DC9: fst     [esp+4Ch+var_14]
0x7F0DCD: mov     byte ptr [esp+4Ch+arg_C], 1
0x7F0DD2: mov     ecx, [esp+4Ch+var_14]
0x7F0DD6: fst     [esp+4Ch+var_10]
0x7F0DDA: fld     [esp+4Ch+var_28]
0x7F0DDE: mov     edx, [esp+4Ch+var_10]
0x7F0DE2: fstp    [esp+4Ch+var_1C]
0x7F0DE6: mov     ds:0B46640h, ecx
0x7F0DEC: fld     [esp+4Ch+var_24]
0x7F0DF0: mov     eax, [esp+4Ch+var_1C]
0x7F0DF4: fstp    [esp+4Ch+var_18]
0x7F0DF8: mov     ds:0B46644h, edx
0x7F0DFE: fld     [esp+4Ch+var_20]
0x7F0E02: mov     ecx, [esp+4Ch+var_18]
0x7F0E06: fstp    [esp+4Ch+var_14]
0x7F0E0A: mov     ds:0B46648h, eax
0x7F0E0F: mov     edx, [esp+4Ch+var_14]
0x7F0E13: mov     ds:0B4664Ch, ecx
0x7F0E19: fstp    [esp+4Ch+var_10]
0x7F0E1D: mov     eax, [esp+4Ch+var_10]
0x7F0E21: mov     ds:0B46650h, edx
0x7F0E27: mov     ds:0B46654h, eax
0x7F0E2C: jmp     loc_7F0CED
0x7F0E31: mov     eax, [esi]
0x7F0E33: mov     edx, [eax+54h]
0x7F0E36: mov     ecx, esi
0x7F0E38: call    edx
0x7F0E3A: xor     ebx, ebx
0x7F0E3C: cmp     eax, 9
0x7F0E3F: setz    bl
0x7F0E42: neg     ebx
0x7F0E44: sbb     ebx, ebx
0x7F0E46: and     ebx, esi
0x7F0E48: mov     eax, [ebx]
0x7F0E4A: mov     edx, [eax+0A0h]
0x7F0E50: mov     ecx, ebx
0x7F0E52: call    edx
0x7F0E54: mov     esi, eax
0x7F0E56: lea     edi, [ebp+7Ch]
0x7F0E59: mov     ecx, 0C0h ; 'À'
0x7F0E5E: rep movsd
0x7F0E60: mov     eax, [ebx]
0x7F0E62: mov     edx, [eax+9Ch]
0x7F0E68: mov     ecx, ebx
0x7F0E6A: call    edx
0x7F0E6C: mov     ecx, ebx
0x7F0E6E: fld     dword ptr [eax+18h]
0x7F0E71: fstp    [esp+4Ch+arg_0]
0x7F0E75: fld     [esp+4Ch+arg_0]
0x7F0E79: fmul    dword ptr ds:0B4672Ch
0x7F0E7F: fstp    dword ptr ds:0B4677Ch
0x7F0E85: mov     eax, [ebx]
0x7F0E87: mov     edx, [eax+9Ch]
0x7F0E8D: call    edx
0x7F0E8F: fld     dword ptr [eax+1Ch]
0x7F0E92: fstp    [esp+4Ch+arg_0]
0x7F0E96: mov     ecx, ebx
0x7F0E98: fld     [esp+4Ch+arg_0]
0x7F0E9C: fmul    dword ptr ds:0B46730h
0x7F0EA2: fstp    dword ptr ds:0B4678Ch
0x7F0EA8: mov     eax, [ebx]
0x7F0EAA: mov     edx, [eax+9Ch]
0x7F0EB0: call    edx
0x7F0EB2: fld     dword ptr [eax+14h]
0x7F0EB5: fstp    dword ptr ds:0B46780h
0x7F0EBB: mov     eax, [ebx]
0x7F0EBD: mov     edx, [eax+9Ch]
0x7F0EC3: mov     ecx, ebx
0x7F0EC5: call    edx
0x7F0EC7: fld     dword ptr [eax+10h]
0x7F0ECA: fstp    dword ptr ds:0B46790h
0x7F0ED0: mov     ecx, ebx
0x7F0ED2: fldz
0x7F0ED4: fst     dword ptr ds:0B467A0h
0x7F0EDA: fst     dword ptr ds:0B467A4h
0x7F0EE0: fst     dword ptr ds:0B467A8h
0x7F0EE6: fstp    dword ptr ds:0B467ACh
0x7F0EEC: mov     eax, [ebx]
0x7F0EEE: mov     edx, [eax+9Ch]
0x7F0EF4: call    edx
0x7F0EF6: fld     dword ptr [eax+0Ch]
0x7F0EF9: fstp    dword ptr ds:0B467A4h
0x7F0EFF: mov     eax, [ebp+394h]
0x7F0F05: mov     eax, [eax+24h]
0x7F0F08: mov     esi, [eax]
0x7F0F0A: test    esi, esi
0x7F0F0C: mov     [esp+4Ch+arg_0], esi
0x7F0F10: jz      short loc_7F0F16
0x7F0F12: add     dword ptr [esi+5Ch], 1
0x7F0F16: mov     edx, [ebx]
0x7F0F18: mov     eax, [edx+78h]
0x7F0F1B: mov     ecx, ebx
0x7F0F1D: mov     [esp+4Ch+var_4], 0
0x7F0F25: call    eax
0x7F0F27: mov     esi, [esi+4]
0x7F0F2A: mov     edi, eax
0x7F0F2C: cmp     esi, edi
0x7F0F2E: jz      short loc_7F0F67
0x7F0F30: test    esi, esi
0x7F0F32: jz      short loc_7F0F50
0x7F0F34: lea     ecx, [esi+4]
0x7F0F37: push    ecx; lpAddend
0x7F0F38: call    dword ptr ds:0A2807Ch
0x7F0F3E: test    eax, eax
0x7F0F40: jnz     short loc_7F0F50
0x7F0F42: test    esi, esi
0x7F0F44: jz      short loc_7F0F50
0x7F0F46: mov     edx, [esi]
0x7F0F48: mov     eax, [edx]
0x7F0F4A: push    1
0x7F0F4C: mov     ecx, esi
0x7F0F4E: call    eax
0x7F0F50: test    edi, edi
0x7F0F52: mov     esi, [esp+4Ch+arg_0]
0x7F0F56: mov     [esi+4], edi
0x7F0F59: jz      short loc_7F0F6B
0x7F0F5B: add     edi, 4
0x7F0F5E: push    edi; lpAddend
0x7F0F5F: call    dword ptr ds:0A28078h
0x7F0F65: jmp     short loc_7F0F6B
0x7F0F67: mov     esi, [esp+4Ch+arg_0]
0x7F0F6B: cmp     byte ptr ds:0B42E86h, 0
0x7F0F72: jz      short loc_7F0F7C
0x7F0F74: mov     eax, [ebp+37Ch]
0x7F0F7A: jmp     short loc_7F0FD7
0x7F0F7C: mov     ecx, ebx
0x7F0F7E: call    sub_7ED5D0
0x7F0F83: test    ax, ax
0x7F0F86: jnz     short loc_7F0FB0
0x7F0F88: cmp     byte ptr [esp+4Ch+arg_C], al
0x7F0F8C: mov     ecx, [ebp+394h]; this
0x7F0F92: jz      short loc_7F0FA8
0x7F0F94: mov     eax, [ebp+380h]
0x7F0F9A: push    eax; a2
0x7F0F9B: call    sub_7AECB0
0x7F0FA0: mov     eax, [ebp+390h]
0x7F0FA6: jmp     short loc_7F0FE9
0x7F0FA8: mov     eax, [ebp+37Ch]
0x7F0FAE: jmp     short loc_7F0FDD
0x7F0FB0: cmp     byte ptr [esp+4Ch+arg_C], 0
0x7F0FB5: jz      short loc_7F0FD1
0x7F0FB7: mov     eax, [ebp+388h]
0x7F0FBD: mov     ecx, [ebp+394h]; this
0x7F0FC3: push    eax; a2
0x7F0FC4: call    sub_7AECB0
0x7F0FC9: mov     eax, [ebp+390h]
0x7F0FCF: jmp     short loc_7F0FE9
0x7F0FD1: mov     eax, [ebp+384h]
0x7F0FD7: mov     ecx, [ebp+394h]; this
0x7F0FDD: push    eax; a2
0x7F0FDE: call    sub_7AECB0
0x7F0FE3: mov     eax, [ebp+38Ch]
0x7F0FE9: mov     ecx, [ebp+394h]; this
0x7F0FEF: push    eax; a2
0x7F0FF0: call    sub_7AEC60
0x7F0FF5: cmp     word ptr ds:0B42EACh, 4
0x7F0FFD: jnz     loc_7F10B3
0x7F1003: mov     esi, [ebp+394h]
0x7F1009: cmp     dword ptr [esi+30h], 0
0x7F100D: jnz     short loc_7F1017
0x7F100F: call    sub_772DF0
0x7F1014: mov     [esi+30h], eax
0x7F1017: mov     ecx, [esi+30h]
0x7F101A: push    0
0x7F101C: push    1
0x7F101E: push    34h ; '4'
0x7F1020: call    sub_772CD0
0x7F1025: mov     esi, [ebp+394h]
0x7F102B: cmp     dword ptr [esi+30h], 0
0x7F102F: jnz     short loc_7F1039
0x7F1031: call    sub_772DF0
0x7F1036: mov     [esi+30h], eax
0x7F1039: mov     ecx, [esi+30h]
0x7F103C: push    0
0x7F103E: push    8
0x7F1040: push    38h ; '8'
0x7F1042: call    sub_772CD0
0x7F1047: mov     esi, [ebp+394h]
0x7F104D: cmp     dword ptr [esi+30h], 0
0x7F1051: jnz     short loc_7F105B
0x7F1053: call    sub_772DF0
0x7F1058: mov     [esi+30h], eax
0x7F105B: mov     ecx, [esi+30h]
0x7F105E: push    0
0x7F1060: push    7
0x7F1062: push    37h ; '7'
0x7F1064: call    sub_772CD0
0x7F1069: mov     esi, [ebp+394h]
0x7F106F: cmp     dword ptr [esi+30h], 0
0x7F1073: jnz     short loc_7F107D
0x7F1075: call    sub_772DF0
0x7F107A: mov     [esi+30h], eax
0x7F107D: mov     ecx, [esi+30h]
0x7F1080: push    0
0x7F1082: push    1
0x7F1084: push    35h ; '5'
0x7F1086: call    sub_772CD0
0x7F108B: mov     esi, [ebp+394h]
0x7F1091: cmp     dword ptr [esi+30h], 0
0x7F1095: jnz     short loc_7F109F
0x7F1097: call    sub_772DF0
0x7F109C: mov     [esi+30h], eax
0x7F109F: mov     ecx, [esi+30h]
0x7F10A2: push    0
0x7F10A4: push    1
0x7F10A6: push    36h ; '6'
0x7F10A8: call    sub_772CD0
0x7F10AD: mov     esi, [esp+4Ch+arg_0]
0x7F10B1: jmp     short loc_7F10D5
0x7F10B3: mov     edi, [ebp+394h]
0x7F10B9: cmp     dword ptr [edi+30h], 0
0x7F10BD: jnz     short loc_7F10C7
0x7F10BF: call    sub_772DF0
0x7F10C4: mov     [edi+30h], eax
0x7F10C7: mov     ecx, [edi+30h]
0x7F10CA: push    0
0x7F10CC: push    0
0x7F10CE: push    34h ; '4'
0x7F10D0: call    sub_772CD0
0x7F10D5: mov     edi, [ebp+394h]
0x7F10DB: cmp     dword ptr [edi+30h], 0
0x7F10DF: jnz     short loc_7F10E9
0x7F10E1: call    sub_772DF0
0x7F10E6: mov     [edi+30h], eax
0x7F10E9: mov     ecx, [edi+30h]
0x7F10EC: push    0
0x7F10EE: push    7
0x7F10F0: push    0A8h ; '¨'
0x7F10F5: call    sub_772CD0
0x7F10FA: mov     ebp, [ebp+394h]
0x7F1100: cmp     dword ptr [ebp+30h], 0
0x7F1104: jnz     short loc_7F110E
0x7F1106: call    sub_772DF0
0x7F110B: mov     [ebp+30h], eax
0x7F110E: mov     ecx, [ebp+30h]
0x7F1111: push    0
0x7F1113: push    0
0x7F1115: push    1Ch
0x7F1117: call    sub_772CD0
0x7F111C: or      eax, 0FFFFFFFFh
0x7F111F: test    esi, esi
0x7F1121: mov     [esp+4Ch+var_4], eax
0x7F1125: jz      short loc_7F1133
0x7F1127: add     [esi+5Ch], eax
0x7F112A: jnz     short loc_7F1133
0x7F112C: mov     ecx, esi
0x7F112E: call    sub_772560
0x7F1133: mov     ecx, [esp+4Ch+var_C]
0x7F1137: mov     large fs:0, ecx
0x7F113E: pop     ecx
0x7F113F: pop     edi
0x7F1140: pop     esi
0x7F1141: pop     ebp
0x7F1142: pop     ebx
0x7F1143: add     esp, 38h
0x7F1146: retn    1Ch
