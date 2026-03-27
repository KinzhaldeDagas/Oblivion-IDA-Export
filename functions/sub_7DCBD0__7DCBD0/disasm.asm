0x7DCBD0: push    0FFFFFFFFh
0x7DCBD2: push    offset SEH_7DCBD0
0x7DCBD7: mov     eax, large fs:0
0x7DCBDD: push    eax
0x7DCBDE: sub     esp, 24h
0x7DCBE1: push    ebx
0x7DCBE2: push    ebp
0x7DCBE3: push    esi
0x7DCBE4: push    edi
0x7DCBE5: mov     eax, ds:0B30AACh
0x7DCBEA: xor     eax, esp
0x7DCBEC: push    eax; _DWORD
0x7DCBED: lea     eax, [esp+44h+var_C]
0x7DCBF1: mov     large fs:0, eax
0x7DCBF7: mov     edi, ecx
0x7DCBF9: mov     eax, [edi]
0x7DCBFB: mov     edx, [eax+80h]
0x7DCC01: call    edx
0x7DCC03: mov     eax, [esp+44h+arg_C]
0x7DCC07: mov     ebp, [eax+18h]
0x7DCC0A: mov     eax, ds:0B42E90h
0x7DCC0F: mov     cl, ds:0B45DC0h
0x7DCC15: mov     dl, ds:0B45DBAh
0x7DCC1B: add     eax, 0FFFFFE84h; switch 31 cases
0x7DCC20: xor     esi, esi
0x7DCC22: cmp     eax, 1Eh
0x7DCC25: mov     [esp+44h+var_30], ebp
0x7DCC29: ja      def_7DCC36; jumptable 007DCC36 default case, cases 381-407
0x7DCC2F: movzx   eax, ds:byte_7DD1B8[eax]
0x7DCC36: jmp     ds:jpt_7DCC36[eax*4]; switch jump
0x7DCC3D: test    cl, cl; jumptable 007DCC36 case 409
0x7DCC3F: jz      short loc_7DCC5A
0x7DCC41: cmp     byte ptr ds:0B45DB8h, 0
0x7DCC48: jz      short loc_7DCC52
0x7DCC4A: mov     esi, [edi+90h]
0x7DCC50: jmp     short def_7DCC36; jumptable 007DCC36 default case, cases 381-407
0x7DCC52: mov     esi, [edi+84h]
0x7DCC58: jmp     short def_7DCC36; jumptable 007DCC36 default case, cases 381-407
0x7DCC5A: cmp     byte ptr ds:0B45DB8h, 0
0x7DCC61: jz      short loc_7DCC6B
0x7DCC63: mov     esi, [edi+8Ch]
0x7DCC69: jmp     short def_7DCC36; jumptable 007DCC36 default case, cases 381-407
0x7DCC6B: mov     esi, [edi+7Ch]
0x7DCC6E: jmp     short def_7DCC36; jumptable 007DCC36 default case, cases 381-407
0x7DCC70: cmp     byte ptr ds:0B45DB8h, 0; jumptable 007DCC36 case 408
0x7DCC77: jz      short loc_7DCC8D
0x7DCC79: test    cl, cl
0x7DCC7B: jz      short loc_7DCC85
0x7DCC7D: mov     esi, [edi+0A4h]
0x7DCC83: jmp     short def_7DCC36; jumptable 007DCC36 default case, cases 381-407
0x7DCC85: mov     esi, [edi+0A0h]
0x7DCC8B: jmp     short def_7DCC36; jumptable 007DCC36 default case, cases 381-407
0x7DCC8D: test    cl, cl
0x7DCC8F: jz      short loc_7DCC99
0x7DCC91: mov     esi, [edi+9Ch]
0x7DCC97: jmp     short def_7DCC36; jumptable 007DCC36 default case, cases 381-407
0x7DCC99: mov     esi, [edi+98h]
0x7DCC9F: jmp     short def_7DCC36; jumptable 007DCC36 default case, cases 381-407
0x7DCCA1: mov     esi, [edi+0A8h]; jumptable 007DCC36 case 410
0x7DCCA7: jmp     short def_7DCC36; jumptable 007DCC36 default case, cases 381-407
0x7DCCA9: test    dl, dl; jumptable 007DCC36 case 380
0x7DCCAB: jz      short loc_7DCCB5
0x7DCCAD: mov     esi, [edi+0B4h]
0x7DCCB3: jmp     short def_7DCC36; jumptable 007DCC36 default case, cases 381-407
0x7DCCB5: test    cl, cl
0x7DCCB7: jz      short loc_7DCCC1
0x7DCCB9: mov     esi, [edi+0B0h]
0x7DCCBF: jmp     short def_7DCC36; jumptable 007DCC36 default case, cases 381-407
0x7DCCC1: mov     esi, [edi+0ACh]
0x7DCCC7: cmp     byte ptr ds:0B45DB9h, 0; jumptable 007DCC36 default case, cases 381-407
0x7DCCCE: jz      short loc_7DCCDF
0x7DCCD0: cmp     dword ptr [edi+10Ch], 0
0x7DCCD7: jz      short loc_7DCCDF
0x7DCCD9: cmp     byte ptr [ebp+72h], 0
0x7DCCDD: jnz     short loc_7DCCFE
0x7DCCDF: cmp     esi, [edi+7Ch]
0x7DCCE2: jz      short loc_7DCCEC
0x7DCCE4: cmp     esi, [edi+84h]
0x7DCCEA: jnz     short loc_7DCCFE
0x7DCCEC: test    cl, cl
0x7DCCEE: jz      short loc_7DCCF8
0x7DCCF0: mov     esi, [edi+88h]
0x7DCCF6: jmp     short loc_7DCCFE
0x7DCCF8: mov     esi, [edi+80h]
0x7DCCFE: mov     al, ds:0B45DBBh
0x7DCD03: test    al, al
0x7DCD05: jz      short loc_7DCD0D
0x7DCD07: mov     esi, [edi+94h]
0x7DCD0D: test    dl, dl
0x7DCD0F: jz      short loc_7DCD1B
0x7DCD11: test    al, al
0x7DCD13: jnz     short loc_7DCD1B
0x7DCD15: mov     esi, [edi+0A8h]
0x7DCD1B: cmp     byte ptr [ebp+71h], 0
0x7DCD1F: jz      short loc_7DCD43
0x7DCD21: test    al, al
0x7DCD23: jnz     short loc_7DCD43
0x7DCD25: test    dl, dl
0x7DCD27: jz      short loc_7DCD31
0x7DCD29: mov     esi, [edi+0B4h]
0x7DCD2F: jmp     short loc_7DCD43
0x7DCD31: test    cl, cl
0x7DCD33: jz      short loc_7DCD3D
0x7DCD35: mov     esi, [edi+0B0h]
0x7DCD3B: jmp     short loc_7DCD43
0x7DCD3D: mov     esi, [edi+0ACh]
0x7DCD43: cmp     byte ptr ds:0B45DD0h, 0
0x7DCD4A: jz      short loc_7DCD52
0x7DCD4C: mov     esi, [edi+0B8h]
0x7DCD52: cmp     esi, [edi+98h]
0x7DCD58: jz      short loc_7DCD72
0x7DCD5A: cmp     esi, [edi+0A0h]
0x7DCD60: jz      short loc_7DCD72
0x7DCD62: cmp     esi, [edi+9Ch]
0x7DCD68: jz      short loc_7DCD72
0x7DCD6A: cmp     esi, [edi+0A4h]
0x7DCD70: jnz     short loc_7DCD7B
0x7DCD72: fld     dword ptr [ebp+7Ch]
0x7DCD75: fstp    dword ptr ds:0B45EB4h
0x7DCD7B: mov     ecx, ebp
0x7DCD7D: fld     dword ptr [ecx+80h]
0x7DCD83: fstp    dword ptr ds:0B45EB8h
0x7DCD89: mov     edx, [esi+24h]
0x7DCD8C: mov     ebx, [edx]
0x7DCD8E: mov     ebp, [ebx+4]
0x7DCD91: test    ebp, ebp
0x7DCD93: jz      short loc_7DCDB9
0x7DCD95: lea     eax, [ebp+4]
0x7DCD98: push    eax; lpAddend
0x7DCD99: call    dword ptr ds:0A2807Ch
0x7DCD9F: test    eax, eax
0x7DCDA1: jnz     short loc_7DCDB2
0x7DCDA3: test    ebp, ebp
0x7DCDA5: jz      short loc_7DCDB2
0x7DCDA7: mov     edx, [ebp+0]
0x7DCDAA: mov     eax, [edx]
0x7DCDAC: push    1
0x7DCDAE: mov     ecx, ebp
0x7DCDB0: call    eax
0x7DCDB2: mov     dword ptr [ebx+4], 0
0x7DCDB9: mov     ecx, [esi+24h]
0x7DCDBC: mov     ebx, [ecx+4]
0x7DCDBF: mov     ebp, [ebx+4]
0x7DCDC2: test    ebp, ebp
0x7DCDC4: jz      short loc_7DCDEA
0x7DCDC6: lea     edx, [ebp+4]
0x7DCDC9: push    edx; lpAddend
0x7DCDCA: call    dword ptr ds:0A2807Ch
0x7DCDD0: test    eax, eax
0x7DCDD2: jnz     short loc_7DCDE3
0x7DCDD4: test    ebp, ebp
0x7DCDD6: jz      short loc_7DCDE3
0x7DCDD8: mov     eax, [ebp+0]
0x7DCDDB: mov     edx, [eax]
0x7DCDDD: push    1
0x7DCDDF: mov     ecx, ebp
0x7DCDE1: call    edx
0x7DCDE3: mov     dword ptr [ebx+4], 0
0x7DCDEA: mov     eax, [esi+24h]
0x7DCDED: mov     ebx, [eax+8]
0x7DCDF0: mov     ebp, [ebx+4]
0x7DCDF3: test    ebp, ebp
0x7DCDF5: jz      short loc_7DCE1B
0x7DCDF7: lea     ecx, [ebp+4]
0x7DCDFA: push    ecx; lpAddend
0x7DCDFB: call    dword ptr ds:0A2807Ch
0x7DCE01: test    eax, eax
0x7DCE03: jnz     short loc_7DCE14
0x7DCE05: test    ebp, ebp
0x7DCE07: jz      short loc_7DCE14
0x7DCE09: mov     edx, [ebp+0]
0x7DCE0C: mov     eax, [edx]
0x7DCE0E: push    1
0x7DCE10: mov     ecx, ebp
0x7DCE12: call    eax
0x7DCE14: mov     dword ptr [ebx+4], 0
0x7DCE1B: mov     ecx, [esi+24h]
0x7DCE1E: mov     ebx, [ecx+0Ch]
0x7DCE21: mov     ebp, [ebx+4]
0x7DCE24: test    ebp, ebp
0x7DCE26: jz      short loc_7DCE4C
0x7DCE28: lea     edx, [ebp+4]
0x7DCE2B: push    edx; lpAddend
0x7DCE2C: call    dword ptr ds:0A2807Ch
0x7DCE32: test    eax, eax
0x7DCE34: jnz     short loc_7DCE45
0x7DCE36: test    ebp, ebp
0x7DCE38: jz      short loc_7DCE45
0x7DCE3A: mov     eax, [ebp+0]
0x7DCE3D: mov     edx, [eax]
0x7DCE3F: push    1
0x7DCE41: mov     ecx, ebp
0x7DCE43: call    edx
0x7DCE45: mov     dword ptr [ebx+4], 0
0x7DCE4C: mov     eax, [esi+24h]
0x7DCE4F: mov     ebx, [eax+10h]
0x7DCE52: mov     ebp, [ebx+4]
0x7DCE55: test    ebp, ebp
0x7DCE57: jz      short loc_7DCE7D
0x7DCE59: lea     ecx, [ebp+4]
0x7DCE5C: push    ecx; lpAddend
0x7DCE5D: call    dword ptr ds:0A2807Ch
0x7DCE63: test    eax, eax
0x7DCE65: jnz     short loc_7DCE76
0x7DCE67: test    ebp, ebp
0x7DCE69: jz      short loc_7DCE76
0x7DCE6B: mov     edx, [ebp+0]
0x7DCE6E: mov     eax, [edx]
0x7DCE70: push    1
0x7DCE72: mov     ecx, ebp
0x7DCE74: call    eax
0x7DCE76: mov     dword ptr [ebx+4], 0
0x7DCE7D: mov     ecx, [esp+44h+arg_C]
0x7DCE81: fldz
0x7DCE83: mov     eax, [ecx+0Ch]
0x7DCE86: test    eax, eax
0x7DCE88: jz      loc_7DCF3E
0x7DCE8E: fld     dword ptr [eax+2Ch]
0x7DCE91: mov     edx, [eax+20h]
0x7DCE94: mov     ecx, [eax+24h]
0x7DCE97: fstp    [esp+44h+var_2C]
0x7DCE9B: fld     dword ptr [eax+30h]
0x7DCE9E: mov     [esp+44h+var_28], edx
0x7DCEA2: mov     edx, [eax+28h]
0x7DCEA5: fstp    [esp+44h+arg_C]
0x7DCEA9: fld     [esp+44h+arg_C]
0x7DCEAD: mov     [esp+44h+var_24], ecx
0x7DCEB1: fld     st
0x7DCEB3: mov     [esp+44h+var_20], edx
0x7DCEB7: fsub    [esp+44h+var_2C]
0x7DCEBB: fstp    [esp+44h+arg_C]
0x7DCEBF: fstp    [esp+44h+var_1C]
0x7DCEC3: mov     eax, [esp+44h+var_1C]
0x7DCEC7: fld     [esp+44h+arg_C]
0x7DCECB: mov     ds:0B45E74h, eax
0x7DCED0: fstp    [esp+44h+var_18]
0x7DCED4: mov     ecx, [esp+44h+var_18]
0x7DCED8: mov     ds:0B45E78h, ecx
0x7DCEDE: fst     [esp+44h+var_14]
0x7DCEE2: mov     edx, [esp+44h+var_14]
0x7DCEE6: fst     [esp+44h+var_10]
0x7DCEEA: mov     eax, [esp+44h+var_10]
0x7DCEEE: fld     [esp+44h+var_28]
0x7DCEF2: mov     ds:0B45E7Ch, edx
0x7DCEF8: fstp    [esp+44h+var_1C]
0x7DCEFC: mov     ecx, [esp+44h+var_1C]
0x7DCF00: fld     [esp+44h+var_24]
0x7DCF04: mov     ds:0B45E80h, eax
0x7DCF09: fstp    [esp+44h+var_18]
0x7DCF0D: mov     edx, [esp+44h+var_18]
0x7DCF11: fld     [esp+44h+var_20]
0x7DCF15: mov     ds:0B45E84h, ecx
0x7DCF1B: fstp    [esp+44h+var_14]
0x7DCF1F: mov     eax, [esp+44h+var_14]
0x7DCF23: mov     ds:0B45E88h, edx
0x7DCF29: fstp    [esp+44h+var_10]
0x7DCF2D: mov     ecx, [esp+44h+var_10]
0x7DCF31: mov     ds:0B45E8Ch, eax
0x7DCF36: mov     ds:0B45E90h, ecx
0x7DCF3C: jmp     short loc_7DCF40
0x7DCF3E: fstp    st
0x7DCF40: mov     eax, [edi+108h]
0x7DCF46: test    eax, eax
0x7DCF48: jz      short loc_7DCF60
0x7DCF4A: cmp     byte ptr ds:0B45DB8h, 0
0x7DCF51: jnz     short loc_7DCF60
0x7DCF53: mov     edx, [esi+24h]
0x7DCF56: mov     ecx, [edx]; this
0x7DCF58: push    eax; a2
0x7DCF59: call    sub_76C910
0x7DCF5E: jmp     short loc_7DCFCD
0x7DCF60: mov     eax, [edi+110h]
0x7DCF66: test    eax, eax
0x7DCF68: jz      short loc_7DCF80
0x7DCF6A: cmp     byte ptr ds:0B45DB8h, 0
0x7DCF71: jz      short loc_7DCF80
0x7DCF73: mov     ecx, [esi+24h]
0x7DCF76: mov     ecx, [ecx]; this
0x7DCF78: push    eax; a2
0x7DCF79: call    sub_76C910
0x7DCF7E: jmp     short loc_7DCFCD
0x7DCF80: mov     edx, [esi+24h]
0x7DCF83: mov     ebx, [edx]
0x7DCF85: mov     eax, ds:0B430DCh
0x7DCF8A: mov     ebp, [ebx+4]
0x7DCF8D: cmp     ebp, eax
0x7DCF8F: mov     ecx, eax
0x7DCF91: mov     [esp+44h+arg_C], ecx
0x7DCF95: jz      short loc_7DCFCD
0x7DCF97: test    ebp, ebp
0x7DCF99: jz      short loc_7DCFBC
0x7DCF9B: lea     eax, [ebp+4]
0x7DCF9E: push    eax; lpAddend
0x7DCF9F: call    dword ptr ds:0A2807Ch
0x7DCFA5: test    eax, eax
0x7DCFA7: jnz     short loc_7DCFB8
0x7DCFA9: test    ebp, ebp
0x7DCFAB: jz      short loc_7DCFB8
0x7DCFAD: mov     edx, [ebp+0]
0x7DCFB0: mov     eax, [edx]
0x7DCFB2: push    1
0x7DCFB4: mov     ecx, ebp
0x7DCFB6: call    eax
0x7DCFB8: mov     ecx, [esp+44h+arg_C]
0x7DCFBC: test    ecx, ecx
0x7DCFBE: mov     [ebx+4], ecx
0x7DCFC1: jz      short loc_7DCFCD
0x7DCFC3: add     ecx, 4
0x7DCFC6: push    ecx; lpAddend
0x7DCFC7: call    dword ptr ds:0A28078h
0x7DCFCD: mov     ebx, [esp+44h+var_30]
0x7DCFD1: cmp     byte ptr [ebx+71h], 0
0x7DCFD5: jnz     short loc_7DCFE9
0x7DCFD7: mov     eax, [edi+104h]
0x7DCFDD: mov     ecx, [esi+24h]
0x7DCFE0: mov     ecx, [ecx+4]; this
0x7DCFE3: push    eax; a2
0x7DCFE4: call    sub_76C910
0x7DCFE9: mov     eax, [edi+114h]
0x7DCFEF: test    eax, eax
0x7DCFF1: jz      short loc_7DCFFF
0x7DCFF3: mov     edx, [esi+24h]
0x7DCFF6: mov     ecx, [edx+8]; this
0x7DCFF9: push    eax; a2
0x7DCFFA: call    sub_76C910
0x7DCFFF: cmp     byte ptr ds:0B45DB9h, 0
0x7DD006: jz      short loc_7DD05E
0x7DD008: cmp     byte ptr [ebx+72h], 0
0x7DD00C: jz      short loc_7DD038
0x7DD00E: mov     eax, [edi+10Ch]
0x7DD014: test    eax, eax
0x7DD016: jz      short loc_7DD038
0x7DD018: mov     ecx, [esi+24h]
0x7DD01B: mov     ecx, [ecx+0Ch]; this
0x7DD01E: push    eax; a2
0x7DD01F: call    sub_76C910
0x7DD024: fild    dword ptr [ebx+74h]
0x7DD027: fstp    dword ptr ds:0B45EE4h
0x7DD02D: fild    dword ptr [ebx+78h]
0x7DD030: fstp    dword ptr ds:0B45EE8h
0x7DD036: jmp     short loc_7DD05E
0x7DD038: mov     eax, [edi+10Ch]
0x7DD03E: test    eax, eax
0x7DD040: jz      short loc_7DD05E
0x7DD042: cmp     esi, [edi+98h]
0x7DD048: jz      short loc_7DD052
0x7DD04A: cmp     esi, [edi+9Ch]
0x7DD050: jnz     short loc_7DD05E
0x7DD052: mov     edx, [esi+24h]
0x7DD055: mov     ecx, [edx+0Ch]; this
0x7DD058: push    eax; a2
0x7DD059: call    sub_76C910
0x7DD05E: cmp     byte ptr [ebx+70h], 0
0x7DD062: jz      short loc_7DD077
0x7DD064: mov     eax, [ebx+6Ch]
0x7DD067: test    eax, eax
0x7DD069: jz      short loc_7DD077
0x7DD06B: mov     ecx, [esi+24h]
0x7DD06E: mov     ecx, [ecx+10h]; this
0x7DD071: push    eax; a2
0x7DD072: call    sub_76C910
0x7DD077: cmp     dword ptr ds:0B42D78h, 0
0x7DD07E: mov     ebx, 1
0x7DD083: jz      short loc_7DD092
0x7DD085: push    ebx; _DWORD
0x7DD086: push    ebx; _DWORD
0x7DD087: call    dword ptr ds:0B42D78h
0x7DD08D: add     esp, 8
0x7DD090: jmp     short loc_7DD094
0x7DD092: fldz
0x7DD094: cmp     dword ptr ds:0B42D78h, 0
0x7DD09B: fstp    [esp+44h+arg_C]
0x7DD09F: fld     [esp+44h+arg_C]
0x7DD0A3: fmul    dword ptr ds:0B45E54h
0x7DD0A9: fadd    dword ptr ds:0B45E64h
0x7DD0AF: fstp    dword ptr ds:0B45E64h
0x7DD0B5: jz      short loc_7DD0C4
0x7DD0B7: push    ebx; _DWORD
0x7DD0B8: push    ebx; _DWORD
0x7DD0B9: call    dword ptr ds:0B42D78h
0x7DD0BF: add     esp, 8
0x7DD0C2: jmp     short loc_7DD0C6
0x7DD0C4: fldz
0x7DD0C6: fstp    [esp+44h+arg_C]
0x7DD0CA: fld     [esp+44h+arg_C]
0x7DD0CE: fmul    dword ptr ds:0B45E58h
0x7DD0D4: fadd    dword ptr ds:0B45E68h
0x7DD0DA: fstp    dword ptr ds:0B45E68h
0x7DD0E0: fld1
0x7DD0E2: fcom    dword ptr ds:0B45E64h
0x7DD0E8: fnstsw  ax
0x7DD0EA: test    ah, 41h
0x7DD0ED: jp      short loc_7DD0F7
0x7DD0EF: fldz
0x7DD0F1: fstp    dword ptr ds:0B45E64h
0x7DD0F7: fcomp   dword ptr ds:0B45E68h
0x7DD0FD: fnstsw  ax
0x7DD0FF: test    ah, 41h
0x7DD102: jp      short loc_7DD10C
0x7DD104: fldz
0x7DD106: fstp    dword ptr ds:0B45E68h
0x7DD10C: fld     dword ptr ds:0B45DC4h
0x7DD112: mov     edx, ds:0B3F92Ch
0x7DD118: mov     eax, ds:0B3F930h
0x7DD11D: fstp    dword ptr ds:0B45E94h
0x7DD123: mov     ecx, ds:0B3F934h
0x7DD129: mov     [esp+44h+var_28], edx
0x7DD12D: fld     [esp+44h+var_28]
0x7DD131: fstp    dword ptr ds:0B45ED4h
0x7DD137: mov     [esp+44h+var_24], eax
0x7DD13B: fld     [esp+44h+var_24]
0x7DD13F: mov     [esp+44h+var_20], ecx
0x7DD143: fstp    dword ptr ds:0B45ED8h
0x7DD149: mov     [esp+44h+arg_C], esi
0x7DD14D: fld     [esp+44h+var_20]
0x7DD151: fstp    dword ptr ds:0B45EDCh
0x7DD157: add     [esi+60h], ebx
0x7DD15A: mov     eax, [edi+38h]
0x7DD15D: lea     edx, [esp+44h+arg_C]
0x7DD161: push    edx
0x7DD162: push    eax
0x7DD163: lea     ecx, [edi+40h]
0x7DD166: mov     [esp+4Ch+var_4], 0
0x7DD16E: call    sub_76CE40
0x7DD173: or      eax, 0FFFFFFFFh
0x7DD176: add     [esi+60h], eax
0x7DD179: mov     [esp+44h+var_4], eax
0x7DD17D: jnz     short loc_7DD186
0x7DD17F: mov     ecx, esi
0x7DD181: call    sub_7604D0
0x7DD186: add     [edi+38h], ebx
0x7DD189: xor     eax, eax
0x7DD18B: mov     ecx, dword ptr [esp+44h+var_C]
0x7DD18F: mov     large fs:0, ecx
0x7DD196: pop     ecx
0x7DD197: pop     edi
0x7DD198: pop     esi
0x7DD199: pop     ebp
0x7DD19A: pop     ebx
0x7DD19B: add     esp, 30h
0x7DD19E: retn    1Ch
