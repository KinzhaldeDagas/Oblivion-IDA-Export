0x573F10: mov     ecx, [esp+arg_0]
0x573F14: fld     dword ptr [ecx+2Ch]
0x573F17: mov     edx, [esp+arg_C]
0x573F1B: fadd    dword ptr [edx]
0x573F1D: mov     eax, 1
0x573F22: sub     esp, 0Ch
0x573F25: test    ds:0B3A6CCh, al
0x573F2B: fstp    dword ptr [edx]
0x573F2D: fldz
0x573F2F: jnz     short loc_573F4F
0x573F31: or      ds:0B3A6CCh, eax
0x573F37: fst     dword ptr ds:0B3A6C0h
0x573F3D: fst     dword ptr ds:0B3A6C4h
0x573F43: fld     dword ptr ds:0A30634h
0x573F49: fstp    dword ptr ds:0B3A6C8h
0x573F4F: fld     dword ptr [edx]
0x573F51: push    ebx
0x573F52: mov     ebx, [esp+10h+arg_8]
0x573F56: fstp    [esp+10h+var_C]
0x573F5A: mov     eax, [ebx+0B4h]
0x573F60: fld     dword ptr [edx+4]
0x573F63: mov     eax, [eax+1Ch]
0x573F66: fstp    [esp+10h+var_8]
0x573F6A: fld     dword ptr [ecx+34h]
0x573F6D: push    ebp
0x573F6E: fadd    dword ptr [edx+8]
0x573F71: mov     ebp, [esp+14h+var_C]
0x573F75: push    esi
0x573F76: mov     esi, [esp+18h+arg_4]
0x573F7A: fstp    [esp+18h+var_4]
0x573F7E: add     esi, esi
0x573F80: push    edi
0x573F81: add     esi, esi
0x573F83: lea     edi, [esi+esi*2]
0x573F86: add     edi, edi
0x573F88: add     edi, edi
0x573F8A: mov     [eax+edi], ebp
0x573F8D: mov     ebp, [esp+1Ch+var_8]
0x573F91: mov     [eax+edi+4], ebp
0x573F95: mov     ebp, [esp+1Ch+var_4]
0x573F99: mov     [eax+edi+8], ebp
0x573F9D: fld     dword ptr [edx]
0x573F9F: add     eax, edi
0x573FA1: fstp    [esp+1Ch+var_C]
0x573FA5: fld     dword ptr [edx+4]
0x573FA8: mov     ebp, [esp+1Ch+var_C]
0x573FAC: fstp    [esp+1Ch+var_8]
0x573FB0: fld     dword ptr [ecx+34h]
0x573FB3: fadd    dword ptr [edx+8]
0x573FB6: fsub    dword ptr [ecx+28h]
0x573FB9: mov     [eax+0Ch], ebp
0x573FBC: mov     ebp, [esp+1Ch+var_8]
0x573FC0: mov     [eax+10h], ebp
0x573FC3: fstp    [esp+1Ch+var_4]
0x573FC7: mov     ebp, [esp+1Ch+var_4]
0x573FCB: mov     [eax+14h], ebp
0x573FCE: fld     dword ptr [ecx+24h]
0x573FD1: fadd    dword ptr [edx]
0x573FD3: fstp    [esp+1Ch+var_C]
0x573FD7: mov     ebp, [esp+1Ch+var_C]
0x573FDB: fld     dword ptr [edx+4]
0x573FDE: fstp    [esp+1Ch+var_8]
0x573FE2: fld     dword ptr [ecx+34h]
0x573FE5: fadd    dword ptr [edx+8]
0x573FE8: mov     [eax+18h], ebp
0x573FEB: mov     ebp, [esp+1Ch+var_8]
0x573FEF: mov     [eax+1Ch], ebp
0x573FF2: fstp    [esp+1Ch+var_4]
0x573FF6: mov     ebp, [esp+1Ch+var_4]
0x573FFA: mov     [eax+20h], ebp
0x573FFD: fld     dword ptr [ecx+24h]
0x574000: fadd    dword ptr [edx]
0x574002: fstp    [esp+1Ch+var_C]
0x574006: mov     ebp, [esp+1Ch+var_C]
0x57400A: fld     dword ptr [edx+4]
0x57400D: fstp    [esp+1Ch+var_8]
0x574011: fld     dword ptr [ecx+34h]
0x574014: fadd    dword ptr [edx+8]
0x574017: fsub    dword ptr [ecx+28h]
0x57401A: mov     [eax+24h], ebp
0x57401D: mov     ebp, [esp+1Ch+var_8]
0x574021: mov     [eax+28h], ebp
0x574024: fstp    [esp+1Ch+var_4]
0x574028: mov     ebp, [esp+1Ch+var_4]
0x57402C: mov     [eax+2Ch], ebp
0x57402F: mov     eax, [ebx+0B4h]
0x574035: mov     eax, [eax+20h]
0x574038: test    eax, eax
0x57403A: jz      short loc_5740A9
0x57403C: add     eax, edi
0x57403E: mov     edi, ds:0B3A6C0h
0x574044: mov     [eax], edi
0x574046: mov     edi, ds:0B3A6C4h
0x57404C: mov     [eax+4], edi
0x57404F: mov     edi, ds:0B3A6C8h
0x574055: mov     [eax+8], edi
0x574058: mov     edi, ds:0B3A6C0h
0x57405E: mov     [eax+0Ch], edi
0x574061: mov     edi, ds:0B3A6C4h
0x574067: mov     [eax+10h], edi
0x57406A: mov     edi, ds:0B3A6C8h
0x574070: mov     [eax+14h], edi
0x574073: mov     edi, ds:0B3A6C0h
0x574079: mov     [eax+18h], edi
0x57407C: mov     edi, ds:0B3A6C4h
0x574082: mov     [eax+1Ch], edi
0x574085: mov     edi, ds:0B3A6C8h
0x57408B: mov     [eax+20h], edi
0x57408E: mov     edi, ds:0B3A6C0h
0x574094: mov     [eax+24h], edi
0x574097: mov     edi, ds:0B3A6C4h
0x57409D: mov     [eax+28h], edi
0x5740A0: mov     edi, ds:0B3A6C8h
0x5740A6: mov     [eax+2Ch], edi
0x5740A9: mov     edi, [esp+1Ch+arg_10]
0x5740AD: test    edi, edi
0x5740AF: jz      short loc_57411A
0x5740B1: mov     ebp, [ebx+0B4h]
0x5740B7: mov     eax, esi
0x5740B9: shl     eax, 4
0x5740BC: add     eax, [ebp+24h]
0x5740BF: mov     ebp, [edi]
0x5740C1: mov     [eax], ebp
0x5740C3: mov     ebp, [edi+4]
0x5740C6: mov     [eax+4], ebp
0x5740C9: mov     ebp, [edi+8]
0x5740CC: mov     [eax+8], ebp
0x5740CF: mov     ebp, [edi+0Ch]
0x5740D2: mov     [eax+0Ch], ebp
0x5740D5: mov     ebp, [edi]
0x5740D7: mov     [eax+10h], ebp
0x5740DA: mov     ebp, [edi+4]
0x5740DD: mov     [eax+14h], ebp
0x5740E0: mov     ebp, [edi+8]
0x5740E3: mov     [eax+18h], ebp
0x5740E6: mov     ebp, [edi+0Ch]
0x5740E9: mov     [eax+1Ch], ebp
0x5740EC: mov     ebp, [edi]
0x5740EE: mov     [eax+20h], ebp
0x5740F1: mov     ebp, [edi+4]
0x5740F4: mov     [eax+24h], ebp
0x5740F7: mov     ebp, [edi+8]
0x5740FA: mov     [eax+28h], ebp
0x5740FD: mov     ebp, [edi+0Ch]
0x574100: mov     [eax+2Ch], ebp
0x574103: mov     ebp, [edi]
0x574105: mov     [eax+30h], ebp
0x574108: mov     ebp, [edi+4]
0x57410B: mov     [eax+34h], ebp
0x57410E: mov     ebp, [edi+8]
0x574111: mov     [eax+38h], ebp
0x574114: mov     edi, [edi+0Ch]
0x574117: mov     [eax+3Ch], edi
0x57411A: mov     eax, [ebx+0B4h]
0x574120: fld     dword ptr [ecx+4]
0x574123: mov     eax, [eax+28h]
0x574126: fstp    [esp+1Ch+var_C]
0x57412A: fld     dword ptr [ecx+8]
0x57412D: mov     edi, [esp+1Ch+var_C]
0x574131: mov     [eax+esi*8], edi
0x574134: fstp    [esp+1Ch+var_8]
0x574138: mov     edi, [esp+1Ch+var_8]
0x57413C: mov     [eax+esi*8+4], edi
0x574140: fld     dword ptr [ecx+14h]
0x574143: lea     eax, [eax+esi*8]
0x574146: fstp    [esp+1Ch+var_C]
0x57414A: fld     dword ptr [ecx+18h]
0x57414D: mov     edi, [esp+1Ch+var_C]
0x574151: mov     [eax+8], edi
0x574154: fstp    [esp+1Ch+var_8]
0x574158: mov     edi, [esp+1Ch+var_8]
0x57415C: mov     [eax+0Ch], edi
0x57415F: fld     dword ptr [ecx+0Ch]
0x574162: fstp    [esp+1Ch+var_C]
0x574166: mov     edi, [esp+1Ch+var_C]
0x57416A: fld     dword ptr [ecx+10h]
0x57416D: mov     [eax+10h], edi
0x574170: fstp    [esp+1Ch+var_8]
0x574174: mov     edi, [esp+1Ch+var_8]
0x574178: mov     [eax+14h], edi
0x57417B: fld     dword ptr [ecx+1Ch]
0x57417E: fstp    [esp+1Ch+var_C]
0x574182: mov     edi, [esp+1Ch+var_C]
0x574186: fld     dword ptr [ecx+20h]
0x574189: mov     [eax+18h], edi
0x57418C: fstp    [esp+1Ch+var_8]
0x574190: mov     edi, [esp+1Ch+var_8]
0x574194: mov     [eax+1Ch], edi
0x574197: mov     edi, [ebx+0B4h]
0x57419D: mov     edi, [edi+48h]
0x5741A0: mov     eax, [esp+1Ch+arg_4]
0x5741A4: lea     eax, [eax+eax*2]
0x5741A7: lea     eax, [edi+eax*4]
0x5741AA: lea     edi, [esi+1]
0x5741AD: lea     ebx, [esi+2]
0x5741B0: mov     [eax], si
0x5741B3: add     esi, 3
0x5741B6: mov     [eax+2], di
0x5741BA: mov     [eax+4], bx
0x5741BE: mov     [eax+6], bx
0x5741C2: mov     [eax+8], di
0x5741C6: mov     [eax+0Ah], si
0x5741CA: fcom    dword ptr [ecx+24h]
0x5741CD: pop     edi
0x5741CE: pop     esi
0x5741CF: pop     ebp
0x5741D0: fnstsw  ax
0x5741D2: pop     ebx
0x5741D3: test    ah, 5
0x5741D6: jp      short loc_5741DD
0x5741D8: fstp    st
0x5741DA: fld     dword ptr [ecx+30h]
0x5741DD: fstp    [esp+0Ch+arg_4]
0x5741E1: fld     dword ptr [ecx+24h]
0x5741E4: fadd    [esp+0Ch+arg_4]
0x5741E8: fadd    dword ptr [edx]
0x5741EA: fstp    dword ptr [edx]
0x5741EC: add     esp, 0Ch
0x5741EF: retn    14h
