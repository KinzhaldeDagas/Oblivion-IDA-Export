0x532F50: push    ebp
0x532F51: mov     ebp, esp
0x532F53: and     esp, 0FFFFFFF0h
0x532F56: sub     esp, 84h
0x532F5C: mov     eax, ds:0B30AACh
0x532F61: xor     eax, esp
0x532F63: mov     [esp+84h+var_4], eax
0x532F6A: mov     eax, [ebp+arg_0]
0x532F6D: test    eax, eax
0x532F6F: push    ebx
0x532F70: push    esi
0x532F71: push    edi
0x532F72: mov     [esp+90h+var_64], ecx
0x532F76: mov     dword ptr [esp+90h+var_54], eax
0x532F7A: jz      loc_53319B
0x532F80: cmp     word ptr [ecx+14h], 0
0x532F85: jz      loc_53319B
0x532F8B: fld     dword ptr ds:0A56054h
0x532F91: fstp    [esp+90h+var_7C]
0x532F95: fld     [esp+90h+var_7C]
0x532F99: fsincos
0x532F9B: fstp    [esp+90h+var_58]
0x532F9F: fstp    [esp+90h+var_5C]
0x532FA3: movss   xmm1, dword ptr ds:0A46C30h
0x532FAB: fldz
0x532FAD: mov     edi, [ebp+arg_4]
0x532FB0: fstp    [esp+90h+var_78]
0x532FB4: xorps   xmm0, xmm0
0x532FB7: movss   xmm0, xmm1
0x532FBB: movss   xmm1, dword ptr ds:0A3D65Ch
0x532FC3: movaps  [esp+90h+var_40], xmm0
0x532FC8: xorps   xmm0, xmm0
0x532FCB: movss   xmm0, xmm1
0x532FCF: xor     ebx, ebx
0x532FD1: movaps  [esp+90h+var_54+4], xmm0
0x532FD6: mov     [esp+90h+var_7C], 2
0x532FDE: mov     edi, edi
0x532FE0: fld     qword ptr ds:0A39088h
0x532FE6: mov     [esp+90h+var_60], 2
0x532FEE: fld     dword ptr ds:0A37448h
0x532FF4: fstp    [esp+90h+var_74]
0x532FF8: jmp     short loc_533008
0x532FFA: align 10h
0x533000: fstp    st
0x533002: fld     qword ptr ds:0A39088h
0x533008: mov     edx, [edi]
0x53300A: mov     eax, [esp+90h+var_64]
0x53300E: mov     ecx, [eax+0Ch]
0x533011: mov     esi, [ecx+ebx*4]
0x533014: mov     [esp+90h+var_70], edx
0x533018: fld     [esp+90h+var_70]
0x53301C: fadd    [esp+90h+var_74]
0x533020: lea     eax, [ecx+ebx*4]
0x533023: mov     eax, [edi+4]
0x533026: mov     ecx, [edi+8]
0x533029: fstp    [esp+90h+var_70]
0x53302D: mov     edx, [esi]
0x53302F: mov     edx, [edx+94h]
0x533035: mov     [esp+90h+var_6C], eax
0x533039: fld     [esp+90h+var_6C]
0x53303D: fadd    [esp+90h+var_78]
0x533041: mov     [esp+90h+var_68], ecx
0x533045: lea     eax, [esp+90h+var_20]
0x533049: push    eax
0x53304A: fstp    [esp+94h+var_6C]
0x53304E: mov     ecx, esi
0x533050: fld     [esp+94h+var_70]
0x533054: add     ebx, 1
0x533057: fmul    st, st(1)
0x533059: fstp    [esp+94h+var_20]
0x53305D: fld     [esp+94h+var_6C]
0x533061: fmul    st, st(1)
0x533063: fstp    [esp+94h+var_1C]
0x533067: fmul    [esp+94h+var_68]
0x53306B: fstp    [esp+94h+var_18]
0x53306F: call    edx
0x533071: fld     [esp+90h+var_5C]
0x533075: movaps  xmm3, [esp+90h+var_40]
0x53307A: mov     eax, [esi]
0x53307C: fstp    [esp+90h+var_30]
0x533080: fldz
0x533082: mov     edx, [eax+98h]
0x533088: fst     [esp+90h+var_2C]
0x53308C: lea     ecx, [esp+90h+var_30]
0x533090: fstp    [esp+90h+var_28]
0x533094: push    ecx
0x533095: fld     [esp+94h+var_58]
0x533099: mov     ecx, esi
0x53309B: fstp    [esp+94h+var_24]
0x53309F: movaps  xmm2, xmmword ptr [esp+94h+var_30]
0x5330A4: movaps  xmm0, xmm2
0x5330A7: mulps   xmm0, xmm2
0x5330AA: movaps  xmm1, xmm0
0x5330AD: shufps  xmm1, xmm0, 4Eh ; 'N'
0x5330B1: addps   xmm1, xmm0
0x5330B4: movaps  xmm0, xmm1
0x5330B7: shufps  xmm0, xmm1, 0B1h ; '±'
0x5330BB: addps   xmm0, xmm1
0x5330BE: movaps  xmm1, xmm0
0x5330C1: rsqrtss xmm1, xmm1
0x5330C5: mulss   xmm0, xmm1
0x5330C9: mulss   xmm0, xmm1
0x5330CD: subss   xmm3, xmm0
0x5330D1: movaps  xmm0, [esp+94h+var_54+4]
0x5330D6: mulss   xmm0, xmm1
0x5330DA: mulss   xmm0, xmm3
0x5330DE: movaps  xmm1, xmm0
0x5330E1: shufps  xmm1, xmm0, 0
0x5330E5: mulps   xmm1, xmm2
0x5330E8: movaps  xmmword ptr [esp+94h+var_30], xmm1
0x5330ED: call    edx
0x5330EF: fld     [esp+90h+var_74]
0x5330F3: sub     [esp+90h+var_60], 1
0x5330F8: fld     qword ptr ds:0A30F70h
0x5330FE: fadd    st(1), st
0x533100: fxch    st(1)
0x533102: fstp    [esp+90h+var_74]
0x533106: jnz     loc_533000
0x53310C: sub     [esp+90h+var_7C], 1
0x533111: fadd    [esp+90h+var_78]
0x533115: fstp    [esp+90h+var_78]
0x533119: jnz     loc_532FE0
0x53311F: mov     ebx, [esp+90h+var_64]
0x533123: cmp     word ptr [ebx+14h], 0
0x533128: jz      short loc_53314C
0x53312A: mov     eax, [ebx+0Ch]
0x53312D: mov     ecx, [eax]
0x53312F: test    ecx, ecx
0x533131: jz      short loc_53314C
0x533133: mov     edx, [ecx]
0x533135: mov     eax, [edx+58h]
0x533138: call    eax
0x53313A: test    eax, eax
0x53313C: jz      short loc_533146
0x53313E: mov     eax, [eax+2B0h]
0x533144: jmp     short loc_533148
0x533146: xor     eax, eax
0x533148: test    eax, eax
0x53314A: jnz     short loc_53319B
0x53314C: xor     esi, esi
0x53314E: cmp     [ebx+14h], si
0x533152: jbe     short loc_53319B
0x533154: mov     ecx, [ebx+0Ch]
0x533157: mov     edi, [ecx+esi*4]
0x53315A: test    edi, edi
0x53315C: jz      short loc_53316C
0x53315E: mov     edx, [edi]
0x533160: mov     eax, dword ptr [esp+90h+var_54]
0x533164: mov     edx, [edx+5Ch]
0x533167: push    eax
0x533168: mov     ecx, edi
0x53316A: call    edx
0x53316C: push    0FFh
0x533171: push    28h ; '('
0x533173: push    96h ; '–'
0x533178: push    0DCh ; 'Ü'
0x53317D: call    sub_8AEB80
0x533182: mov     ecx, dword ptr [esp+0A0h+var_54]
0x533186: add     esp, 10h
0x533189: push    eax
0x53318A: push    edi
0x53318B: call    sub_88BB60
0x533190: movzx   eax, word ptr [ebx+14h]
0x533194: add     esi, 1
0x533197: cmp     esi, eax
0x533199: jb      short loc_533154
0x53319B: mov     ecx, [esp+90h+var_4]
0x5331A2: pop     edi
0x5331A3: pop     esi
0x5331A4: pop     ebx
0x5331A5: xor     ecx, esp
0x5331A7: xor     al, al
0x5331A9: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5331AE: mov     esp, ebp
0x5331B0: pop     ebp
0x5331B1: retn    0Ch
