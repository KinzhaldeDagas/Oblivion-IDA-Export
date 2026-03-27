0x83FD50: push    0FFFFFFFFh
0x83FD52: push    offset SEH_882120
0x83FD57: mov     eax, large fs:0
0x83FD5D: push    eax
0x83FD5E: push    ebx
0x83FD5F: push    ebp
0x83FD60: push    esi
0x83FD61: push    edi
0x83FD62: mov     eax, ds:0B30AACh
0x83FD67: xor     eax, esp
0x83FD69: push    eax
0x83FD6A: lea     eax, [esp+20h+var_C]
0x83FD6E: mov     large fs:0, eax
0x83FD74: mov     edi, ecx
0x83FD76: mov     ebp, [esp+20h+arg_8]
0x83FD7A: mov     esi, [ebp+0Ch]
0x83FD7D: mov     ebx, ds:0B458A4h
0x83FD83: push    esi
0x83FD84: call    sub_848E50
0x83FD89: mov     ebp, [ebp+10h]
0x83FD8C: mov     ecx, [esp+20h+arg_0]
0x83FD90: mov     eax, [edi]
0x83FD92: mov     edx, [eax+0BCh]
0x83FD98: push    ebp
0x83FD99: push    esi
0x83FD9A: push    ecx
0x83FD9B: mov     ecx, edi
0x83FD9D: call    edx
0x83FD9F: mov     esi, [esp+20h+arg_C]
0x83FDA3: mov     eax, [esi+0A8h]
0x83FDA9: mov     ds:0B46628h, eax
0x83FDAE: mov     ecx, [esi+0ACh]
0x83FDB4: mov     ds:0B4662Ch, ecx
0x83FDBA: mov     edx, [esi+0B0h]
0x83FDC0: mov     ds:0B46630h, edx
0x83FDC6: mov     eax, [esi+0B4h]
0x83FDCC: mov     ds:0B46634h, eax
0x83FDD1: mov     ecx, [ebx+24h]
0x83FDD4: mov     ebp, [ecx]
0x83FDD6: mov     edx, [esi]
0x83FDD8: mov     eax, [edx+88h]
0x83FDDE: push    0
0x83FDE0: mov     ecx, esi
0x83FDE2: mov     [esp+24h+arg_8], ebp
0x83FDE6: call    eax
0x83FDE8: mov     ebp, [ebp+4]
0x83FDEB: cmp     ebp, eax
0x83FDED: mov     [esp+20h+arg_0], eax
0x83FDF1: jz      short loc_83FE2D
0x83FDF3: test    ebp, ebp
0x83FDF5: jz      short loc_83FE18
0x83FDF7: lea     ecx, [ebp+4]
0x83FDFA: push    ecx; lpAddend
0x83FDFB: call    dword ptr ds:0A2807Ch
0x83FE01: test    eax, eax
0x83FE03: jnz     short loc_83FE14
0x83FE05: test    ebp, ebp
0x83FE07: jz      short loc_83FE14
0x83FE09: mov     edx, [ebp+0]
0x83FE0C: mov     eax, [edx]
0x83FE0E: push    1
0x83FE10: mov     ecx, ebp
0x83FE12: call    eax
0x83FE14: mov     eax, [esp+20h+arg_0]
0x83FE18: test    eax, eax
0x83FE1A: mov     ecx, [esp+20h+arg_8]
0x83FE1E: mov     [ecx+4], eax
0x83FE21: jz      short loc_83FE2D
0x83FE23: add     eax, 4
0x83FE26: push    eax; lpAddend
0x83FE27: call    dword ptr ds:0A28078h
0x83FE2D: mov     edx, [esp+20h+arg_8]
0x83FE31: push    esi
0x83FE32: push    edx
0x83FE33: mov     ecx, edi
0x83FE35: call    sub_848FA0
0x83FE3A: mov     eax, [ebx+24h]
0x83FE3D: mov     ebp, [eax+4]
0x83FE40: push    0
0x83FE42: push    esi
0x83FE43: mov     ecx, edi
0x83FE45: mov     [esp+28h+arg_8], ebp
0x83FE49: call    sub_848FD0
0x83FE4E: mov     ebp, [ebp+4]
0x83FE51: cmp     ebp, eax
0x83FE53: mov     [esp+20h+arg_0], eax
0x83FE57: jz      short loc_83FE93
0x83FE59: test    ebp, ebp
0x83FE5B: jz      short loc_83FE7E
0x83FE5D: lea     ecx, [ebp+4]
0x83FE60: push    ecx; lpAddend
0x83FE61: call    dword ptr ds:0A2807Ch
0x83FE67: test    eax, eax
0x83FE69: jnz     short loc_83FE7A
0x83FE6B: test    ebp, ebp
0x83FE6D: jz      short loc_83FE7A
0x83FE6F: mov     edx, [ebp+0]
0x83FE72: mov     eax, [edx]
0x83FE74: push    1
0x83FE76: mov     ecx, ebp
0x83FE78: call    eax
0x83FE7A: mov     eax, [esp+20h+arg_0]
0x83FE7E: test    eax, eax
0x83FE80: mov     ecx, [esp+20h+arg_8]
0x83FE84: mov     [ecx+4], eax
0x83FE87: jz      short loc_83FE93
0x83FE89: add     eax, 4
0x83FE8C: push    eax; lpAddend
0x83FE8D: call    dword ptr ds:0A28078h
0x83FE93: mov     edx, [esp+20h+arg_8]
0x83FE97: push    esi
0x83FE98: push    edx
0x83FE99: mov     ecx, edi
0x83FE9B: call    sub_848FA0
0x83FEA0: mov     eax, [ebx+24h]
0x83FEA3: mov     ebp, [eax+10h]
0x83FEA6: mov     edx, [esi]
0x83FEA8: mov     eax, [edx+88h]
0x83FEAE: push    1
0x83FEB0: mov     ecx, esi
0x83FEB2: mov     [esp+24h+arg_8], ebp
0x83FEB6: call    eax
0x83FEB8: mov     ebp, [ebp+4]
0x83FEBB: cmp     ebp, eax
0x83FEBD: mov     [esp+20h+arg_0], eax
0x83FEC1: jz      short loc_83FEFD
0x83FEC3: test    ebp, ebp
0x83FEC5: jz      short loc_83FEE8
0x83FEC7: lea     ecx, [ebp+4]
0x83FECA: push    ecx; lpAddend
0x83FECB: call    dword ptr ds:0A2807Ch
0x83FED1: test    eax, eax
0x83FED3: jnz     short loc_83FEE4
0x83FED5: test    ebp, ebp
0x83FED7: jz      short loc_83FEE4
0x83FED9: mov     edx, [ebp+0]
0x83FEDC: mov     eax, [edx]
0x83FEDE: push    1
0x83FEE0: mov     ecx, ebp
0x83FEE2: call    eax
0x83FEE4: mov     eax, [esp+20h+arg_0]
0x83FEE8: test    eax, eax
0x83FEEA: mov     ecx, [esp+20h+arg_8]
0x83FEEE: mov     [ecx+4], eax
0x83FEF1: jz      short loc_83FEFD
0x83FEF3: add     eax, 4
0x83FEF6: push    eax; lpAddend
0x83FEF7: call    dword ptr ds:0A28078h
0x83FEFD: mov     edx, [esp+20h+arg_8]
0x83FF01: push    esi
0x83FF02: push    edx
0x83FF03: mov     ecx, edi
0x83FF05: call    sub_848FA0
0x83FF0A: mov     ecx, [ebx+24h]
0x83FF0D: mov     esi, [ecx+18h]
0x83FF10: mov     eax, ds:0B43108h
0x83FF15: mov     ebp, [esi+4]
0x83FF18: add     esi, 4
0x83FF1B: cmp     ebp, eax
0x83FF1D: mov     [esp+20h+arg_8], eax
0x83FF21: jz      short loc_83FF58
0x83FF23: test    ebp, ebp
0x83FF25: jz      short loc_83FF48
0x83FF27: lea     edx, [ebp+4]
0x83FF2A: push    edx; lpAddend
0x83FF2B: call    dword ptr ds:0A2807Ch
0x83FF31: test    eax, eax
0x83FF33: jnz     short loc_83FF44
0x83FF35: test    ebp, ebp
0x83FF37: jz      short loc_83FF44
0x83FF39: mov     eax, [ebp+0]
0x83FF3C: mov     edx, [eax]
0x83FF3E: push    1
0x83FF40: mov     ecx, ebp
0x83FF42: call    edx
0x83FF44: mov     eax, [esp+20h+arg_8]
0x83FF48: test    eax, eax
0x83FF4A: mov     [esi], eax
0x83FF4C: jz      short loc_83FF58
0x83FF4E: add     eax, 4
0x83FF51: push    eax; lpAddend
0x83FF52: call    dword ptr ds:0A28078h
0x83FF58: mov     eax, [ebx+24h]
0x83FF5B: mov     ebp, [eax+1Ch]
0x83FF5E: mov     eax, ds:0B4310Ch
0x83FF63: mov     esi, [ebp+4]
0x83FF66: cmp     esi, eax
0x83FF68: mov     ecx, eax
0x83FF6A: mov     [esp+20h+arg_8], ecx
0x83FF6E: jz      short loc_83FFA5
0x83FF70: test    esi, esi
0x83FF72: jz      short loc_83FF94
0x83FF74: lea     ecx, [esi+4]
0x83FF77: push    ecx; lpAddend
0x83FF78: call    dword ptr ds:0A2807Ch
0x83FF7E: test    eax, eax
0x83FF80: jnz     short loc_83FF90
0x83FF82: test    esi, esi
0x83FF84: jz      short loc_83FF90
0x83FF86: mov     edx, [esi]
0x83FF88: mov     eax, [edx]
0x83FF8A: push    1
0x83FF8C: mov     ecx, esi
0x83FF8E: call    eax
0x83FF90: mov     ecx, [esp+20h+arg_8]
0x83FF94: test    ecx, ecx
0x83FF96: mov     [ebp+4], ecx
0x83FF99: jz      short loc_83FFA5
0x83FF9B: add     ecx, 4
0x83FF9E: push    ecx; lpAddend
0x83FF9F: call    dword ptr ds:0A28078h
0x83FFA5: mov     esi, 1
0x83FFAA: add     [ebx+60h], esi
0x83FFAD: mov     [esp+20h+arg_8], ebx
0x83FFB1: mov     edx, [edi+38h]
0x83FFB4: lea     ecx, [esp+20h+arg_8]
0x83FFB8: push    ecx
0x83FFB9: push    edx
0x83FFBA: lea     ecx, [edi+40h]
0x83FFBD: mov     [esp+28h+var_4], 0
0x83FFC5: call    sub_76CE40
0x83FFCA: or      eax, 0FFFFFFFFh
0x83FFCD: add     [ebx+60h], eax
0x83FFD0: mov     [esp+20h+var_4], eax
0x83FFD4: jnz     short loc_83FFDD
0x83FFD6: mov     ecx, ebx
0x83FFD8: call    sub_7604D0
0x83FFDD: add     [edi+38h], esi
0x83FFE0: mov     ecx, [esp+20h+var_C]
0x83FFE4: mov     large fs:0, ecx
0x83FFEB: pop     ecx
0x83FFEC: pop     edi
0x83FFED: pop     esi
0x83FFEE: pop     ebp
0x83FFEF: pop     ebx
0x83FFF0: add     esp, 0Ch
0x83FFF3: retn    10h
