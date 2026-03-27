0x874F30: push    0FFFFFFFFh
0x874F32: push    offset SEH_880560
0x874F37: mov     eax, large fs:0
0x874F3D: push    eax
0x874F3E: push    ebx
0x874F3F: push    ebp
0x874F40: push    esi
0x874F41: push    edi
0x874F42: mov     eax, ds:0B30AACh
0x874F47: xor     eax, esp
0x874F49: push    eax
0x874F4A: lea     eax, [esp+20h+var_C]
0x874F4E: mov     large fs:0, eax
0x874F54: mov     esi, ecx
0x874F56: mov     ebx, [esp+20h+arg_8]
0x874F5A: mov     eax, [ebx+10h]
0x874F5D: mov     edi, ds:0B47650h
0x874F63: push    eax
0x874F64: call    sub_848C40
0x874F69: mov     ebx, [ebx+0Ch]
0x874F6C: push    ebx
0x874F6D: mov     ecx, esi
0x874F6F: call    sub_848E50
0x874F74: mov     ecx, [esp+20h+arg_0]
0x874F78: mov     eax, [esi]
0x874F7A: mov     edx, [eax+0BCh]
0x874F80: push    0
0x874F82: push    ebx
0x874F83: push    ecx
0x874F84: mov     ecx, esi
0x874F86: call    edx
0x874F88: mov     eax, [edi+24h]
0x874F8B: mov     ecx, [esp+20h+arg_C]
0x874F8F: mov     ebx, [eax]
0x874F91: mov     edx, [ecx]
0x874F93: mov     eax, [edx+88h]
0x874F99: push    0
0x874F9B: mov     [esp+24h+arg_8], ebx
0x874F9F: call    eax
0x874FA1: mov     ebx, [ebx+4]
0x874FA4: mov     ebp, eax
0x874FA6: cmp     ebx, ebp
0x874FA8: jz      short loc_874FDF
0x874FAA: test    ebx, ebx
0x874FAC: jz      short loc_874FCA
0x874FAE: lea     ecx, [ebx+4]
0x874FB1: push    ecx; lpAddend
0x874FB2: call    dword ptr ds:0A2807Ch
0x874FB8: test    eax, eax
0x874FBA: jnz     short loc_874FCA
0x874FBC: test    ebx, ebx
0x874FBE: jz      short loc_874FCA
0x874FC0: mov     edx, [ebx]
0x874FC2: mov     eax, [edx]
0x874FC4: push    1
0x874FC6: mov     ecx, ebx
0x874FC8: call    eax
0x874FCA: test    ebp, ebp
0x874FCC: mov     ecx, [esp+20h+arg_8]
0x874FD0: mov     [ecx+4], ebp
0x874FD3: jz      short loc_874FDF
0x874FD5: add     ebp, 4
0x874FD8: push    ebp; lpAddend
0x874FD9: call    dword ptr ds:0A28078h
0x874FDF: mov     edx, [edi+24h]
0x874FE2: mov     eax, [esp+20h+arg_C]
0x874FE6: mov     ebx, [edx+4]
0x874FE9: push    0
0x874FEB: push    eax
0x874FEC: mov     ecx, esi
0x874FEE: mov     [esp+28h+arg_8], ebx
0x874FF2: call    sub_848FD0
0x874FF7: mov     ebx, [ebx+4]
0x874FFA: mov     ebp, eax
0x874FFC: cmp     ebx, ebp
0x874FFE: jz      short loc_875035
0x875000: test    ebx, ebx
0x875002: jz      short loc_875020
0x875004: lea     ecx, [ebx+4]
0x875007: push    ecx; lpAddend
0x875008: call    dword ptr ds:0A2807Ch
0x87500E: test    eax, eax
0x875010: jnz     short loc_875020
0x875012: test    ebx, ebx
0x875014: jz      short loc_875020
0x875016: mov     edx, [ebx]
0x875018: mov     eax, [edx]
0x87501A: push    1
0x87501C: mov     ecx, ebx
0x87501E: call    eax
0x875020: test    ebp, ebp
0x875022: mov     ecx, [esp+20h+arg_8]
0x875026: mov     [ecx+4], ebp
0x875029: jz      short loc_875035
0x87502B: add     ebp, 4
0x87502E: push    ebp; lpAddend
0x87502F: call    dword ptr ds:0A28078h
0x875035: mov     edx, [edi+24h]
0x875038: mov     ebx, [edx+10h]
0x87503B: mov     eax, ds:0B43110h
0x875040: mov     ebp, [ebx+4]
0x875043: add     ebx, 4
0x875046: cmp     ebp, eax
0x875048: mov     [esp+20h+arg_C], eax
0x87504C: jz      short loc_875083
0x87504E: test    ebp, ebp
0x875050: jz      short loc_875073
0x875052: lea     eax, [ebp+4]
0x875055: push    eax; lpAddend
0x875056: call    dword ptr ds:0A2807Ch
0x87505C: test    eax, eax
0x87505E: jnz     short loc_87506F
0x875060: test    ebp, ebp
0x875062: jz      short loc_87506F
0x875064: mov     edx, [ebp+0]
0x875067: mov     eax, [edx]
0x875069: push    1
0x87506B: mov     ecx, ebp
0x87506D: call    eax
0x87506F: mov     eax, [esp+20h+arg_C]
0x875073: test    eax, eax
0x875075: mov     [ebx], eax
0x875077: jz      short loc_875083
0x875079: add     eax, 4
0x87507C: push    eax; lpAddend
0x87507D: call    dword ptr ds:0A28078h
0x875083: mov     ecx, [edi+24h]
0x875086: mov     ebx, [ecx+14h]
0x875089: mov     eax, ds:0B43108h
0x87508E: mov     ebp, [ebx+4]
0x875091: add     ebx, 4
0x875094: cmp     ebp, eax
0x875096: mov     [esp+20h+arg_C], eax
0x87509A: jz      short loc_8750D1
0x87509C: test    ebp, ebp
0x87509E: jz      short loc_8750C1
0x8750A0: lea     edx, [ebp+4]
0x8750A3: push    edx; lpAddend
0x8750A4: call    dword ptr ds:0A2807Ch
0x8750AA: test    eax, eax
0x8750AC: jnz     short loc_8750BD
0x8750AE: test    ebp, ebp
0x8750B0: jz      short loc_8750BD
0x8750B2: mov     eax, [ebp+0]
0x8750B5: mov     edx, [eax]
0x8750B7: push    1
0x8750B9: mov     ecx, ebp
0x8750BB: call    edx
0x8750BD: mov     eax, [esp+20h+arg_C]
0x8750C1: test    eax, eax
0x8750C3: mov     [ebx], eax
0x8750C5: jz      short loc_8750D1
0x8750C7: add     eax, 4
0x8750CA: push    eax; lpAddend
0x8750CB: call    dword ptr ds:0A28078h
0x8750D1: mov     eax, [edi+24h]
0x8750D4: mov     ebp, [eax+18h]
0x8750D7: mov     eax, ds:0B4310Ch
0x8750DC: mov     ebx, [ebp+4]
0x8750DF: cmp     ebx, eax
0x8750E1: mov     ecx, eax
0x8750E3: mov     [esp+20h+arg_C], ecx
0x8750E7: jz      short loc_87511E
0x8750E9: test    ebx, ebx
0x8750EB: jz      short loc_87510D
0x8750ED: lea     ecx, [ebx+4]
0x8750F0: push    ecx; lpAddend
0x8750F1: call    dword ptr ds:0A2807Ch
0x8750F7: test    eax, eax
0x8750F9: jnz     short loc_875109
0x8750FB: test    ebx, ebx
0x8750FD: jz      short loc_875109
0x8750FF: mov     edx, [ebx]
0x875101: mov     eax, [edx]
0x875103: push    1
0x875105: mov     ecx, ebx
0x875107: call    eax
0x875109: mov     ecx, [esp+20h+arg_C]
0x87510D: test    ecx, ecx
0x87510F: mov     [ebp+4], ecx
0x875112: jz      short loc_87511E
0x875114: add     ecx, 4
0x875117: push    ecx; lpAddend
0x875118: call    dword ptr ds:0A28078h
0x87511E: mov     ebx, 1
0x875123: add     [edi+60h], ebx
0x875126: mov     [esp+20h+arg_C], edi
0x87512A: mov     edx, [esi+38h]
0x87512D: lea     ecx, [esp+20h+arg_C]
0x875131: push    ecx
0x875132: push    edx
0x875133: lea     ecx, [esi+40h]
0x875136: mov     [esp+28h+var_4], 0
0x87513E: call    sub_76CE40
0x875143: or      eax, 0FFFFFFFFh
0x875146: add     [edi+60h], eax
0x875149: mov     [esp+20h+var_4], eax
0x87514D: jnz     short loc_875156
0x87514F: mov     ecx, edi
0x875151: call    sub_7604D0
0x875156: add     [esi+38h], ebx
0x875159: mov     ecx, [esp+20h+var_C]
0x87515D: mov     large fs:0, ecx
0x875164: pop     ecx
0x875165: pop     edi
0x875166: pop     esi
0x875167: pop     ebp
0x875168: pop     ebx
0x875169: add     esp, 0Ch
0x87516C: retn    10h
