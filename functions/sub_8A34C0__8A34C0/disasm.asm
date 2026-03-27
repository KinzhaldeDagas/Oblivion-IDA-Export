0x8A34C0: push    ebp
0x8A34C1: mov     ebp, esp
0x8A34C3: and     esp, 0FFFFFFF0h
0x8A34C6: sub     esp, 84h
0x8A34CC: mov     eax, ds:0B30AACh
0x8A34D1: xor     eax, esp
0x8A34D3: mov     [esp+84h+var_4], eax
0x8A34DA: push    ebx
0x8A34DB: mov     ebx, [ebp+arg_0]
0x8A34DE: push    esi
0x8A34DF: mov     esi, ecx
0x8A34E1: mov     eax, [esi]
0x8A34E3: mov     edx, [eax+0A4h]
0x8A34E9: push    edi
0x8A34EA: mov     edi, [ebp+arg_4]
0x8A34ED: lea     ecx, [esp+90h+var_30]
0x8A34F1: push    ecx
0x8A34F2: mov     ecx, esi
0x8A34F4: call    edx
0x8A34F6: fld     dword ptr [edi+0Ch]
0x8A34F9: fstp    dword ptr [esp+90h+var_84]
0x8A34FD: movaps  xmm1, xmmword ptr [eax]
0x8A3500: fld     dword ptr [esp+90h+var_84]
0x8A3504: xorps   xmm4, xmm4
0x8A3507: fld     st
0x8A3509: mov     eax, [esi]
0x8A350B: fld     qword ptr ds:0A3D0C0h
0x8A3511: mov     edx, [eax+0A8h]
0x8A3517: fmul    st(1), st
0x8A3519: movaps  xmm6, xmm1
0x8A351C: fxch    st(2)
0x8A351E: shufps  xmm6, xmm1, 0D2h ; 'Ò'
0x8A3522: movaps  xmm7, xmm1
0x8A3525: fmul    st, st(1)
0x8A3527: shufps  xmm7, xmm1, 0C9h ; 'É'
0x8A352B: lea     ecx, [esp+90h+var_30]
0x8A352F: push    ecx
0x8A3530: fsub    qword ptr ds:0A2F928h
0x8A3536: mov     ecx, esi
0x8A3538: fstp    dword ptr [esp+94h+var_84]
0x8A353C: movss   xmm0, dword ptr [esp+94h+var_84]
0x8A3542: fldz
0x8A3544: movss   xmm4, xmm0
0x8A3548: movaps  xmm0, xmmword ptr [edi]
0x8A354B: movaps  [esp+94h+var_84+4], xmm0
0x8A3550: fstp    [esp+94h+var_74]
0x8A3554: movaps  xmm2, [esp+94h+var_84+4]
0x8A3559: movaps  xmm0, xmm2
0x8A355C: mulps   xmm0, xmm1
0x8A355F: movaps  xmm3, xmm0
0x8A3562: shufps  xmm3, xmm0, 55h ; 'U'
0x8A3566: addss   xmm3, xmm0
0x8A356A: movaps  xmm5, xmm0
0x8A356D: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8A3571: addss   xmm5, xmm3
0x8A3575: movss   dword ptr [esp+94h+var_84+4], xmm5
0x8A357B: fld     dword ptr [esp+94h+var_84+4]
0x8A357F: fmulp   st(2), st
0x8A3581: xorps   xmm3, xmm3
0x8A3584: fxch    st(1)
0x8A3586: xorps   xmm5, xmm5
0x8A3589: fstp    dword ptr [esp+94h+var_84]
0x8A358D: movss   xmm0, dword ptr [esp+94h+var_84]
0x8A3593: movss   xmm5, xmm0
0x8A3597: fstp    dword ptr [esp+94h+var_84]
0x8A359B: movss   xmm0, dword ptr [esp+94h+var_84]
0x8A35A1: movss   xmm3, xmm0
0x8A35A5: movaps  xmm0, xmm2
0x8A35A8: shufps  xmm0, xmm2, 0C9h ; 'É'
0x8A35AC: mulps   xmm0, xmm6
0x8A35AF: movaps  xmm6, xmm2
0x8A35B2: shufps  xmm6, xmm2, 0D2h ; 'Ò'
0x8A35B6: shufps  xmm3, xmm3, 0
0x8A35BA: mulps   xmm6, xmm7
0x8A35BD: subps   xmm0, xmm6
0x8A35C0: mulps   xmm0, xmm3
0x8A35C3: movaps  xmm3, xmm5
0x8A35C6: shufps  xmm3, xmm5, 0
0x8A35CA: mulps   xmm3, xmm2
0x8A35CD: movaps  xmm2, xmm4
0x8A35D0: shufps  xmm2, xmm4, 0
0x8A35D4: mulps   xmm2, xmm1
0x8A35D7: movaps  xmm1, xmmword ptr [ebx]
0x8A35DA: addps   xmm3, xmm2
0x8A35DD: addps   xmm0, xmm3
0x8A35E0: addps   xmm0, xmm1
0x8A35E3: movaps  [esp+94h+anonymous_0], xmm0
0x8A35E8: call    edx
0x8A35EA: movss   xmm0, [ebp+arg_8]
0x8A35EF: movaps  xmm2, xmmword ptr [eax]
0x8A35F2: mov     ebx, [esi+8]
0x8A35F5: test    ebx, ebx
0x8A35F7: xorps   xmm1, xmm1
0x8A35FA: movss   xmm1, xmm0
0x8A35FE: movaps  xmm0, [esp+90h+anonymous_0]
0x8A3603: subps   xmm0, xmm2
0x8A3606: shufps  xmm1, xmm1, 0
0x8A360A: mulps   xmm1, xmm0
0x8A360D: movaps  xmm0, xmm1
0x8A3610: mulps   xmm0, xmm1
0x8A3613: movaps  xmm2, xmm0
0x8A3616: shufps  xmm2, xmm0, 55h ; 'U'
0x8A361A: movaps  xmm3, xmm0
0x8A361D: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8A3621: addss   xmm2, xmm0
0x8A3625: addss   xmm3, xmm2
0x8A3629: sqrtss  xmm3, xmm3
0x8A362D: movaps  [esp+90h+anonymous_0], xmm1
0x8A3632: movss   dword ptr [esp+90h+var_84+4], xmm3
0x8A3638: jz      short loc_8A365D
0x8A363A: mov     ecx, ebx
0x8A363C: call    sub_8A98D0
0x8A3641: test    eax, eax
0x8A3643: jnz     short loc_8A3648
0x8A3645: mov     eax, [ebx+50h]
0x8A3648: fld     dword ptr [eax+0B4h]
0x8A364E: movaps  xmm1, [esp+90h+anonymous_0]
0x8A3653: fstp    dword ptr [esp+90h+var_84]
0x8A3657: fld     dword ptr [esp+90h+var_84]
0x8A365B: jmp     short loc_8A365F
0x8A365D: fldz
0x8A365F: fstp    dword ptr [esp+90h+var_84]
0x8A3663: fld     dword ptr [esp+90h+var_84+4]
0x8A3667: fld     dword ptr [esp+90h+var_84]
0x8A366B: fcom    st(1)
0x8A366D: fnstsw  ax
0x8A366F: test    ah, 5
0x8A3672: jp      short loc_8A3698
0x8A3674: fdivrp  st(1), st
0x8A3676: xorps   xmm0, xmm0
0x8A3679: fstp    dword ptr [esp+90h+var_84]
0x8A367D: movss   xmm2, dword ptr [esp+90h+var_84]
0x8A3683: movss   xmm0, xmm2
0x8A3687: movaps  xmm2, xmm0
0x8A368A: shufps  xmm2, xmm0, 0
0x8A368E: mulps   xmm2, xmm1
0x8A3691: movaps  [esp+90h+anonymous_0], xmm2
0x8A3696: jmp     short loc_8A369C
0x8A3698: fstp    st(1)
0x8A369A: fstp    st
0x8A369C: mov     edx, [esi]
0x8A369E: mov     edx, [edx+90h]
0x8A36A4: lea     eax, [esp+90h+var_20]
0x8A36A8: push    eax
0x8A36A9: mov     ecx, esi
0x8A36AB: call    edx
0x8A36AD: fld     dword ptr [eax+0Ch]
0x8A36B0: movaps  xmm0, xmmword ptr [eax]
0x8A36B3: movaps  xmm1, xmmword ptr ds:0A965C0h
0x8A36BA: lea     eax, [esp+90h+var_70]
0x8A36BE: push    eax
0x8A36BF: xorps   xmm0, xmm1
0x8A36C2: movaps  [esp+94h+var_70], xmm0
0x8A36C7: fstp    dword ptr [esp+94h+var_70+0Ch]
0x8A36CB: push    edi
0x8A36CC: lea     ecx, [esp+98h+var_84+4]
0x8A36D0: call    sub_889470
0x8A36D5: lea     ecx, [esp+90h+var_84+4]
0x8A36D9: call    sub_4D6830
0x8A36DE: movaps  xmm0, xmmword ptr ds:0BA7A40h
0x8A36E5: lea     ecx, [esp+90h+var_84+4]
0x8A36E9: movaps  [esp+90h+var_70], xmm0
0x8A36EE: call    sub_8A2C00
0x8A36F3: fstp    dword ptr [esp+90h+var_84]
0x8A36F7: fld     dword ptr [esp+90h+var_84]
0x8A36FB: fcomp   qword ptr ds:0A30E40h
0x8A3701: fnstsw  ax
0x8A3703: test    ah, 41h
0x8A3706: jnz     short loc_8A3741
0x8A3708: lea     ecx, [esp+90h+var_70]
0x8A370C: push    ecx
0x8A370D: lea     ecx, [esp+94h+var_84+4]
0x8A3711: call    sub_8A2C70
0x8A3716: fld     dword ptr [esp+90h+var_84]
0x8A371A: fmul    [ebp+arg_8]
0x8A371D: xorps   xmm3, xmm3
0x8A3720: fstp    dword ptr [esp+90h+var_84]
0x8A3724: movss   xmm0, dword ptr [esp+90h+var_84]
0x8A372A: movss   xmm3, xmm0
0x8A372E: movaps  xmm0, [esp+90h+var_70]
0x8A3733: shufps  xmm3, xmm3, 0
0x8A3737: mulps   xmm3, xmm0
0x8A373A: movaps  [esp+90h+var_70], xmm3
0x8A373F: jmp     short loc_8A3746
0x8A3741: movaps  xmm3, [esp+90h+var_70]
0x8A3746: mov     edi, [esi+8]
0x8A3749: test    edi, edi
0x8A374B: movaps  xmm0, xmm3
0x8A374E: mulps   xmm0, xmm3
0x8A3751: movaps  xmm1, xmm0
0x8A3754: shufps  xmm1, xmm0, 55h ; 'U'
0x8A3758: movaps  xmm2, xmm0
0x8A375B: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8A375F: addss   xmm1, xmm0
0x8A3763: addss   xmm2, xmm1
0x8A3767: sqrtss  xmm2, xmm2
0x8A376B: movss   dword ptr [esp+90h+var_84+4], xmm2
0x8A3771: jz      short loc_8A37AB
0x8A3773: mov     ecx, edi
0x8A3775: call    sub_8A98D0
0x8A377A: test    eax, eax
0x8A377C: jz      short loc_8A3793
0x8A377E: fld     dword ptr [eax+0B8h]
0x8A3784: movaps  xmm3, [esp+90h+var_70]
0x8A3789: fstp    dword ptr [esp+90h+var_84]
0x8A378D: fld     dword ptr [esp+90h+var_84]
0x8A3791: jmp     short loc_8A37AD
0x8A3793: mov     edx, [edi+50h]
0x8A3796: fld     dword ptr [edx+0B8h]
0x8A379C: movaps  xmm3, [esp+90h+var_70]
0x8A37A1: fstp    dword ptr [esp+90h+var_84]
0x8A37A5: fld     dword ptr [esp+90h+var_84]
0x8A37A9: jmp     short loc_8A37AD
0x8A37AB: fldz
0x8A37AD: fstp    dword ptr [esp+90h+var_84]
0x8A37B1: fld     dword ptr [esp+90h+var_84+4]
0x8A37B5: fld     dword ptr [esp+90h+var_84]
0x8A37B9: fcom    st(1)
0x8A37BB: fnstsw  ax
0x8A37BD: test    ah, 5
0x8A37C0: jp      short loc_8A37E4
0x8A37C2: fdivrp  st(1), st
0x8A37C4: xorps   xmm0, xmm0
0x8A37C7: fstp    dword ptr [esp+90h+var_84]
0x8A37CB: movss   xmm1, dword ptr [esp+90h+var_84]
0x8A37D1: movss   xmm0, xmm1
0x8A37D5: movaps  xmm1, xmm0
0x8A37D8: shufps  xmm1, xmm0, 0
0x8A37DC: mulps   xmm1, xmm3
0x8A37DF: movaps  xmm3, xmm1
0x8A37E2: jmp     short loc_8A37E8
0x8A37E4: fstp    st(1)
0x8A37E6: fstp    st
0x8A37E8: mov     eax, [esi+8]
0x8A37EB: test    eax, eax
0x8A37ED: movss   xmm0, [ebp+arg_C]
0x8A37F2: xorps   xmm1, xmm1
0x8A37F5: movss   xmm1, xmm0
0x8A37F9: jz      short loc_8A3806
0x8A37FB: mov     ecx, [eax+50h]
0x8A37FE: add     ecx, 0D0h ; 'Ð'
0x8A3804: jmp     short loc_8A380B
0x8A3806: mov     ecx, offset stru_BA7A40
0x8A380B: test    eax, eax
0x8A380D: movaps  xmm2, xmmword ptr ds:0A6DFE0h
0x8A3814: movaps  xmm5, xmmword ptr [ecx]
0x8A3817: movaps  xmm0, xmm1
0x8A381A: shufps  xmm0, xmm1, 0
0x8A381E: movaps  xmm4, xmm2
0x8A3821: subps   xmm4, xmm0
0x8A3824: mulps   xmm0, [esp+90h+anonymous_0]
0x8A3829: mulps   xmm4, xmm5
0x8A382C: addps   xmm4, xmm0
0x8A382F: movaps  [esp+90h+var_50], xmm4
0x8A3834: jz      short loc_8A3840
0x8A3836: mov     eax, [eax+50h]
0x8A3839: add     eax, 0E0h ; 'à'
0x8A383E: jmp     short loc_8A3845
0x8A3840: mov     eax, offset stru_BA7A40
0x8A3845: movaps  xmm0, xmmword ptr [eax]
0x8A3848: mov     eax, [esi]
0x8A384A: mov     edx, [eax+58h]
0x8A384D: shufps  xmm1, xmm1, 0
0x8A3851: subps   xmm2, xmm1
0x8A3854: mulps   xmm2, xmm0
0x8A3857: mulps   xmm1, xmm3
0x8A385A: addps   xmm2, xmm1
0x8A385D: mov     ecx, esi
0x8A385F: movaps  [esp+90h+anonymous_1], xmm2
0x8A3864: call    edx
0x8A3866: test    eax, eax
0x8A3868: jz      short loc_8A388C
0x8A386A: movaps  xmm0, xmmword ptr [eax+20h]
0x8A386E: fld     dword ptr [esp+90h+var_50+8]
0x8A3872: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x8A3876: movss   dword ptr [esp+90h+var_84+4], xmm0
0x8A387C: fld     dword ptr [esp+90h+var_84+4]
0x8A3880: fmul    [ebp+arg_C]
0x8A3883: fdiv    [ebp+arg_8]
0x8A3886: fsubp   st(1), st
0x8A3888: fstp    dword ptr [esp+90h+var_50+8]
0x8A388C: mov     edi, [esi+8]
0x8A388F: test    edi, edi
0x8A3891: jz      short loc_8A38B7
0x8A3893: mov     ecx, esi
0x8A3895: call    sub_89F570
0x8A389A: mov     ecx, edi
0x8A389C: call    sub_8A6410
0x8A38A1: mov     ecx, [edi+50h]
0x8A38A4: mov     eax, [ecx]
0x8A38A6: mov     eax, [eax+54h]
0x8A38A9: lea     edx, [esp+90h+var_50]
0x8A38AD: push    edx
0x8A38AE: call    eax
0x8A38B0: mov     ecx, esi
0x8A38B2: call    sub_89F570
0x8A38B7: mov     edi, [esi+8]
0x8A38BA: test    edi, edi
0x8A38BC: jz      short loc_8A38E2
0x8A38BE: mov     ecx, esi
0x8A38C0: call    sub_89F570
0x8A38C5: mov     ecx, edi
0x8A38C7: call    sub_8A6410
0x8A38CC: mov     ecx, [edi+50h]
0x8A38CF: mov     edx, [ecx]
0x8A38D1: mov     edx, [edx+58h]
0x8A38D4: lea     eax, [esp+90h+anonymous_1]
0x8A38D8: push    eax
0x8A38D9: call    edx
0x8A38DB: mov     ecx, esi
0x8A38DD: call    sub_89F570
0x8A38E2: mov     ecx, [esp+90h+var_4]
0x8A38E9: pop     edi
0x8A38EA: pop     esi
0x8A38EB: pop     ebx
0x8A38EC: xor     ecx, esp
0x8A38EE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8A38F3: mov     esp, ebp
0x8A38F5: pop     ebp
0x8A38F6: retn    10h
