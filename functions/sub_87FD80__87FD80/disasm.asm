0x87FD80: push    0FFFFFFFFh
0x87FD82: push    offset SEH_880560
0x87FD87: mov     eax, large fs:0
0x87FD8D: push    eax
0x87FD8E: push    ebx
0x87FD8F: push    ebp
0x87FD90: push    esi
0x87FD91: push    edi
0x87FD92: mov     eax, ds:0B30AACh
0x87FD97: xor     eax, esp
0x87FD99: push    eax
0x87FD9A: lea     eax, [esp+20h+var_C]
0x87FD9E: mov     large fs:0, eax
0x87FDA4: mov     esi, ecx
0x87FDA6: mov     ebx, [esp+20h+arg_8]
0x87FDAA: mov     eax, [ebx+10h]
0x87FDAD: mov     edi, ds:0B47720h
0x87FDB3: push    eax
0x87FDB4: call    sub_848C40
0x87FDB9: mov     ebx, [ebx+0Ch]
0x87FDBC: push    ebx
0x87FDBD: mov     ecx, esi
0x87FDBF: call    sub_848E50
0x87FDC4: mov     ecx, [esp+20h+arg_0]
0x87FDC8: mov     eax, [esi]
0x87FDCA: mov     edx, [eax+0BCh]
0x87FDD0: push    0
0x87FDD2: push    ebx
0x87FDD3: push    ecx
0x87FDD4: mov     ecx, esi
0x87FDD6: call    edx
0x87FDD8: mov     eax, [edi+24h]
0x87FDDB: mov     ecx, [esp+20h+arg_C]
0x87FDDF: mov     ebx, [eax]
0x87FDE1: mov     edx, [ecx]
0x87FDE3: mov     eax, [edx+88h]
0x87FDE9: push    0
0x87FDEB: mov     [esp+24h+arg_8], ebx
0x87FDEF: call    eax
0x87FDF1: mov     ebx, [ebx+4]
0x87FDF4: mov     ebp, eax
0x87FDF6: cmp     ebx, ebp
0x87FDF8: jz      short loc_87FE2F
0x87FDFA: test    ebx, ebx
0x87FDFC: jz      short loc_87FE1A
0x87FDFE: lea     ecx, [ebx+4]
0x87FE01: push    ecx; lpAddend
0x87FE02: call    dword ptr ds:0A2807Ch
0x87FE08: test    eax, eax
0x87FE0A: jnz     short loc_87FE1A
0x87FE0C: test    ebx, ebx
0x87FE0E: jz      short loc_87FE1A
0x87FE10: mov     edx, [ebx]
0x87FE12: mov     eax, [edx]
0x87FE14: push    1
0x87FE16: mov     ecx, ebx
0x87FE18: call    eax
0x87FE1A: test    ebp, ebp
0x87FE1C: mov     ecx, [esp+20h+arg_8]
0x87FE20: mov     [ecx+4], ebp
0x87FE23: jz      short loc_87FE2F
0x87FE25: add     ebp, 4
0x87FE28: push    ebp; lpAddend
0x87FE29: call    dword ptr ds:0A28078h
0x87FE2F: mov     edx, [edi+24h]
0x87FE32: mov     eax, [esp+20h+arg_C]
0x87FE36: mov     ebx, [edx+4]
0x87FE39: push    0
0x87FE3B: push    eax
0x87FE3C: mov     ecx, esi
0x87FE3E: mov     [esp+28h+arg_8], ebx
0x87FE42: call    sub_848FD0
0x87FE47: mov     ebx, [ebx+4]
0x87FE4A: mov     ebp, eax
0x87FE4C: cmp     ebx, ebp
0x87FE4E: jz      short loc_87FE85
0x87FE50: test    ebx, ebx
0x87FE52: jz      short loc_87FE70
0x87FE54: lea     ecx, [ebx+4]
0x87FE57: push    ecx; lpAddend
0x87FE58: call    dword ptr ds:0A2807Ch
0x87FE5E: test    eax, eax
0x87FE60: jnz     short loc_87FE70
0x87FE62: test    ebx, ebx
0x87FE64: jz      short loc_87FE70
0x87FE66: mov     edx, [ebx]
0x87FE68: mov     eax, [edx]
0x87FE6A: push    1
0x87FE6C: mov     ecx, ebx
0x87FE6E: call    eax
0x87FE70: test    ebp, ebp
0x87FE72: mov     ecx, [esp+20h+arg_8]
0x87FE76: mov     [ecx+4], ebp
0x87FE79: jz      short loc_87FE85
0x87FE7B: add     ebp, 4
0x87FE7E: push    ebp; lpAddend
0x87FE7F: call    dword ptr ds:0A28078h
0x87FE85: mov     edx, [edi+24h]
0x87FE88: mov     ebx, [edx+10h]
0x87FE8B: mov     eax, ds:0B43110h
0x87FE90: mov     ebp, [ebx+4]
0x87FE93: add     ebx, 4
0x87FE96: cmp     ebp, eax
0x87FE98: mov     [esp+20h+arg_C], eax
0x87FE9C: jz      short loc_87FED3
0x87FE9E: test    ebp, ebp
0x87FEA0: jz      short loc_87FEC3
0x87FEA2: lea     eax, [ebp+4]
0x87FEA5: push    eax; lpAddend
0x87FEA6: call    dword ptr ds:0A2807Ch
0x87FEAC: test    eax, eax
0x87FEAE: jnz     short loc_87FEBF
0x87FEB0: test    ebp, ebp
0x87FEB2: jz      short loc_87FEBF
0x87FEB4: mov     edx, [ebp+0]
0x87FEB7: mov     eax, [edx]
0x87FEB9: push    1
0x87FEBB: mov     ecx, ebp
0x87FEBD: call    eax
0x87FEBF: mov     eax, [esp+20h+arg_C]
0x87FEC3: test    eax, eax
0x87FEC5: mov     [ebx], eax
0x87FEC7: jz      short loc_87FED3
0x87FEC9: add     eax, 4
0x87FECC: push    eax; lpAddend
0x87FECD: call    dword ptr ds:0A28078h
0x87FED3: mov     ecx, [edi+24h]
0x87FED6: mov     ebx, [ecx+14h]
0x87FED9: mov     eax, ds:0B43108h
0x87FEDE: mov     ebp, [ebx+4]
0x87FEE1: add     ebx, 4
0x87FEE4: cmp     ebp, eax
0x87FEE6: mov     [esp+20h+arg_C], eax
0x87FEEA: jz      short loc_87FF21
0x87FEEC: test    ebp, ebp
0x87FEEE: jz      short loc_87FF11
0x87FEF0: lea     edx, [ebp+4]
0x87FEF3: push    edx; lpAddend
0x87FEF4: call    dword ptr ds:0A2807Ch
0x87FEFA: test    eax, eax
0x87FEFC: jnz     short loc_87FF0D
0x87FEFE: test    ebp, ebp
0x87FF00: jz      short loc_87FF0D
0x87FF02: mov     eax, [ebp+0]
0x87FF05: mov     edx, [eax]
0x87FF07: push    1
0x87FF09: mov     ecx, ebp
0x87FF0B: call    edx
0x87FF0D: mov     eax, [esp+20h+arg_C]
0x87FF11: test    eax, eax
0x87FF13: mov     [ebx], eax
0x87FF15: jz      short loc_87FF21
0x87FF17: add     eax, 4
0x87FF1A: push    eax; lpAddend
0x87FF1B: call    dword ptr ds:0A28078h
0x87FF21: mov     eax, [edi+24h]
0x87FF24: mov     ebp, [eax+18h]
0x87FF27: mov     eax, ds:0B4310Ch
0x87FF2C: mov     ebx, [ebp+4]
0x87FF2F: cmp     ebx, eax
0x87FF31: mov     ecx, eax
0x87FF33: mov     [esp+20h+arg_C], ecx
0x87FF37: jz      short loc_87FF6E
0x87FF39: test    ebx, ebx
0x87FF3B: jz      short loc_87FF5D
0x87FF3D: lea     ecx, [ebx+4]
0x87FF40: push    ecx; lpAddend
0x87FF41: call    dword ptr ds:0A2807Ch
0x87FF47: test    eax, eax
0x87FF49: jnz     short loc_87FF59
0x87FF4B: test    ebx, ebx
0x87FF4D: jz      short loc_87FF59
0x87FF4F: mov     edx, [ebx]
0x87FF51: mov     eax, [edx]
0x87FF53: push    1
0x87FF55: mov     ecx, ebx
0x87FF57: call    eax
0x87FF59: mov     ecx, [esp+20h+arg_C]
0x87FF5D: test    ecx, ecx
0x87FF5F: mov     [ebp+4], ecx
0x87FF62: jz      short loc_87FF6E
0x87FF64: add     ecx, 4
0x87FF67: push    ecx; lpAddend
0x87FF68: call    dword ptr ds:0A28078h
0x87FF6E: mov     ebx, 1
0x87FF73: add     [edi+60h], ebx
0x87FF76: mov     [esp+20h+arg_C], edi
0x87FF7A: mov     edx, [esi+38h]
0x87FF7D: lea     ecx, [esp+20h+arg_C]
0x87FF81: push    ecx
0x87FF82: push    edx
0x87FF83: lea     ecx, [esi+40h]
0x87FF86: mov     [esp+28h+var_4], 0
0x87FF8E: call    sub_76CE40
0x87FF93: or      eax, 0FFFFFFFFh
0x87FF96: add     [edi+60h], eax
0x87FF99: mov     [esp+20h+var_4], eax
0x87FF9D: jnz     short loc_87FFA6
0x87FF9F: mov     ecx, edi
0x87FFA1: call    sub_7604D0
0x87FFA6: add     [esi+38h], ebx
0x87FFA9: mov     ecx, [esp+20h+var_C]
0x87FFAD: mov     large fs:0, ecx
0x87FFB4: pop     ecx
0x87FFB5: pop     edi
0x87FFB6: pop     esi
0x87FFB7: pop     ebp
0x87FFB8: pop     ebx
0x87FFB9: add     esp, 0Ch
0x87FFBC: retn    10h
