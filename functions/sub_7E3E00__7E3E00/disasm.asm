0x7E3E00: push    ebx
0x7E3E01: push    esi
0x7E3E02: push    edi
0x7E3E03: mov     edi, ecx
0x7E3E05: mov     eax, [edi]
0x7E3E07: mov     edx, [eax+80h]
0x7E3E0D: call    edx
0x7E3E0F: mov     eax, [esp+0Ch+arg_C]
0x7E3E13: mov     ebx, [eax+18h]
0x7E3E16: test    ebx, ebx
0x7E3E18: jnz     short loc_7E3E1E
0x7E3E1A: xor     esi, esi
0x7E3E1C: jmp     short loc_7E3E31
0x7E3E1E: mov     edx, [ebx]
0x7E3E20: mov     eax, [edx+54h]
0x7E3E23: mov     ecx, ebx
0x7E3E25: call    eax
0x7E3E27: xor     ecx, ecx
0x7E3E29: cmp     eax, 0Eh
0x7E3E2C: setz    cl
0x7E3E2F: mov     esi, ecx
0x7E3E31: neg     esi
0x7E3E33: sbb     esi, esi
0x7E3E35: and     esi, ebx
0x7E3E37: jz      loc_7E4109
0x7E3E3D: mov     edx, [edi+84h]
0x7E3E43: mov     eax, [edx+24h]
0x7E3E46: mov     ecx, [esi+10Ch]
0x7E3E4C: lea     ebx, [edi+84h]
0x7E3E52: push    ebp
0x7E3E53: mov     ebp, [eax]
0x7E3E55: push    ecx; a2
0x7E3E56: mov     ecx, ebp; this
0x7E3E58: call    sub_76C910
0x7E3E5D: push    3
0x7E3E5F: mov     ecx, ebp
0x7E3E61: call    sub_7715E0
0x7E3E66: fld     dword ptr [esi+0F8h]
0x7E3E6C: fstp    dword ptr [edi+0B4h]
0x7E3E72: fld     dword ptr [esi+84h]
0x7E3E78: fstp    dword ptr [edi+0B8h]
0x7E3E7E: fld     dword ptr [esi+8Ch]
0x7E3E84: fstp    dword ptr [edi+0BCh]
0x7E3E8A: fld     dword ptr [esi+90h]
0x7E3E90: fstp    dword ptr [edi+0C0h]
0x7E3E96: mov     edx, [esi+94h]
0x7E3E9C: mov     [edi+0F4h], edx
0x7E3EA2: mov     eax, [esi+98h]
0x7E3EA8: mov     [edi+0F8h], eax
0x7E3EAE: mov     ecx, [esi+9Ch]
0x7E3EB4: mov     [edi+0FCh], ecx
0x7E3EBA: mov     edx, [esi+0A0h]
0x7E3EC0: mov     [edi+100h], edx
0x7E3EC6: mov     eax, [esi+0A4h]
0x7E3ECC: mov     [edi+104h], eax
0x7E3ED2: mov     ecx, [esi+0A8h]
0x7E3ED8: mov     [edi+108h], ecx
0x7E3EDE: mov     edx, [esi+0B8h]
0x7E3EE4: mov     [edi+118h], edx
0x7E3EEA: mov     eax, [esi+0BCh]
0x7E3EF0: mov     [edi+11Ch], eax
0x7E3EF6: mov     ecx, [esi+0C0h]
0x7E3EFC: mov     [edi+120h], ecx
0x7E3F02: mov     edx, [esi+0C4h]
0x7E3F08: mov     [edi+124h], edx
0x7E3F0E: mov     eax, [esi+0C8h]
0x7E3F14: mov     [edi+128h], eax
0x7E3F1A: mov     ecx, [esi+0CCh]
0x7E3F20: mov     [edi+12Ch], ecx
0x7E3F26: mov     edx, [esi+0D0h]
0x7E3F2C: mov     [edi+130h], edx
0x7E3F32: mov     eax, [esi+0D4h]
0x7E3F38: mov     [edi+134h], eax
0x7E3F3E: mov     ecx, [esi+0D8h]
0x7E3F44: mov     [edi+138h], ecx
0x7E3F4A: mov     edx, [esi+0DCh]
0x7E3F50: mov     [edi+13Ch], edx
0x7E3F56: mov     eax, [esi+0E0h]
0x7E3F5C: mov     [edi+140h], eax
0x7E3F62: mov     ecx, [esi+0E4h]
0x7E3F68: mov     [edi+144h], ecx
0x7E3F6E: fld     dword ptr [esi+0ACh]
0x7E3F74: fstp    dword ptr [edi+0C4h]
0x7E3F7A: fld     dword ptr [esi+0B0h]
0x7E3F80: fstp    dword ptr [edi+0C8h]
0x7E3F86: fld     dword ptr [esi+0B4h]
0x7E3F8C: fstp    dword ptr [edi+0CCh]
0x7E3F92: fld     dword ptr ds:0B2D80Ch
0x7E3F98: fstp    dword ptr [edi+0D0h]
0x7E3F9E: fld     dword ptr [esi+0E8h]
0x7E3FA4: fstp    dword ptr [edi+0D4h]
0x7E3FAA: fld     dword ptr [esi+0ECh]
0x7E3FB0: fstp    dword ptr [edi+0D8h]
0x7E3FB6: fld     dword ptr [esi+0F0h]
0x7E3FBC: fstp    dword ptr [edi+0DCh]
0x7E3FC2: fld     dword ptr [esi+0F4h]
0x7E3FC8: fstp    dword ptr [edi+0E0h]
0x7E3FCE: cmp     byte ptr [esi+78h], 0
0x7E3FD2: jz      short loc_7E3FF8
0x7E3FD4: mov     eax, [esp+10h+arg_0]
0x7E3FD8: fld     dword ptr [eax+88h]
0x7E3FDE: fstp    dword ptr [edi+0E4h]
0x7E3FE4: fld     dword ptr [eax+8Ch]
0x7E3FEA: fstp    dword ptr [edi+0E8h]
0x7E3FF0: fld     dword ptr [eax+90h]
0x7E3FF6: jmp     short loc_7E4006
0x7E3FF8: fldz
0x7E3FFA: fst     dword ptr [edi+0E4h]
0x7E4000: fst     dword ptr [edi+0E8h]
0x7E4006: fstp    dword ptr [edi+0ECh]
0x7E400C: fld     dword ptr [esi+124h]
0x7E4012: fstp    dword ptr [edi+0F0h]
0x7E4018: mov     eax, ds:0B4600Ch
0x7E401D: test    eax, eax
0x7E401F: jnz     short loc_7E4039
0x7E4021: cmp     dword ptr ds:0B42F48h, 2
0x7E4028: setl    al
0x7E402B: sub     eax, 1
0x7E402E: and     eax, 50h
0x7E4031: add     eax, 28h ; '('
0x7E4034: mov     ds:0B4600Ch, eax
0x7E4039: mov     edx, [esi+6Ch]
0x7E403C: shl     eax, 5
0x7E403F: push    eax; Size
0x7E4040: mov     eax, [edi+80h]
0x7E4046: push    edx; Src
0x7E4047: push    eax; Dst
0x7E4048: call    _memcpy
0x7E404D: mov     ebp, [ebx]
0x7E404F: mov     ecx, [esi+0FCh]
0x7E4055: add     esp, 0Ch
0x7E4058: cmp     dword ptr [ebp+30h], 0
0x7E405C: mov     [esp+10h+arg_C], ecx
0x7E4060: jnz     short loc_7E406A
0x7E4062: call    sub_772DF0
0x7E4067: mov     [ebp+30h], eax
0x7E406A: mov     edx, [esp+10h+arg_C]
0x7E406E: mov     ecx, [ebp+30h]
0x7E4071: push    0
0x7E4073: push    edx
0x7E4074: push    13h
0x7E4076: call    sub_772CD0
0x7E407B: mov     ebp, [ebx]
0x7E407D: cmp     dword ptr [ebp+30h], 0
0x7E4081: mov     eax, [esi+100h]
0x7E4087: mov     [esp+10h+arg_C], eax
0x7E408B: jnz     short loc_7E4095
0x7E408D: call    sub_772DF0
0x7E4092: mov     [ebp+30h], eax
0x7E4095: mov     ecx, [esp+10h+arg_C]
0x7E4099: push    0
0x7E409B: push    ecx
0x7E409C: mov     ecx, [ebp+30h]
0x7E409F: push    14h
0x7E40A1: call    sub_772CD0
0x7E40A6: mov     ebp, [ebx]
0x7E40A8: cmp     dword ptr [ebp+30h], 0
0x7E40AC: mov     edx, [esi+104h]
0x7E40B2: mov     [esp+10h+arg_C], edx
0x7E40B6: jnz     short loc_7E40C0
0x7E40B8: call    sub_772DF0
0x7E40BD: mov     [ebp+30h], eax
0x7E40C0: mov     eax, [esp+10h+arg_C]
0x7E40C4: mov     ecx, [ebp+30h]
0x7E40C7: push    1
0x7E40C9: push    eax
0x7E40CA: push    0ABh ; '«'
0x7E40CF: call    sub_772CD0
0x7E40D4: mov     ebp, [ebx]
0x7E40D6: cmp     dword ptr [ebp+30h], 0
0x7E40DA: mov     esi, [esi+108h]
0x7E40E0: jnz     short loc_7E40EA
0x7E40E2: call    sub_772DF0
0x7E40E7: mov     [ebp+30h], eax
0x7E40EA: mov     ecx, [ebp+30h]
0x7E40ED: push    0
0x7E40EF: push    esi
0x7E40F0: push    17h
0x7E40F2: call    sub_772CD0
0x7E40F7: mov     ecx, [edi+38h]
0x7E40FA: push    ebx
0x7E40FB: push    ecx
0x7E40FC: lea     ecx, [edi+40h]
0x7E40FF: call    sub_76CE40
0x7E4104: add     dword ptr [edi+38h], 1
0x7E4108: pop     ebp
0x7E4109: pop     edi
0x7E410A: pop     esi
0x7E410B: xor     eax, eax
0x7E410D: pop     ebx
0x7E410E: retn    1Ch
