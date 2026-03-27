0x896000: push    ebp
0x896001: mov     ebp, esp
0x896003: and     esp, 0FFFFFFF0h
0x896006: sub     esp, 134h
0x89600C: mov     eax, ds:0B30AACh
0x896011: xor     eax, esp
0x896013: mov     [esp+134h+var_4], eax
0x89601A: fldz
0x89601C: push    ebx
0x89601D: push    esi
0x89601E: push    edi
0x89601F: mov     edi, [ebp+arg_0]
0x896022: mov     esi, ecx
0x896024: and     dword ptr [esi+1F4h], 0FFFFFF1Fh
0x89602E: fcomp   dword ptr [edi]
0x896030: mov     [esp+140h+var_118], edi
0x896034: mov     dword ptr [esp+140h+var_104], 0
0x89603C: fnstsw  ax
0x89603E: test    ah, 44h
0x896041: jnp     loc_89701D
0x896047: mov     eax, [esi]
0x896049: mov     edx, [eax+58h]
0x89604C: call    edx
0x89604E: test    eax, eax
0x896050: jz      loc_89701D
0x896056: fld     dword ptr [edi]
0x896058: push    ecx
0x896059: fstp    [esp+144h+var_108]
0x89605D: lea     ebx, [edi+10h]
0x896060: fld     dword ptr ds:0A34BA0h
0x896066: fstp    [esp+144h+var_144]; float
0x896069: push    offset Vector3_InitValue?; int
0x89606E: push    ebx; int
0x89606F: call    sub_8904E0
0x896074: mov     [esp+14Ch+var_12D], al
0x896078: mov     eax, [esi+1F4h]
0x89607E: mov     ecx, eax
0x896080: shr     ecx, 13h
0x896083: and     cl, 1
0x896086: mov     [esp+14Ch+var_11D], cl
0x89608A: mov     ecx, eax
0x89608C: shr     ecx, 14h
0x89608F: add     esp, 0Ch
0x896092: and     cl, 1
0x896095: mov     [esp+140h+var_12E], 0
0x89609A: mov     [esp+140h+var_111], cl
0x89609E: jnz     short loc_8960C4
0x8960A0: cmp     [esp+140h+var_11D], 0
0x8960A5: jnz     short loc_8960C4
0x8960A7: shr     eax, 2
0x8960AA: test    al, 1
0x8960AC: jnz     short loc_8960C9
0x8960AE: mov     ecx, ebx
0x8960B0: call    sub_47DA40
0x8960B5: fld     dword ptr ds:0B2E784h
0x8960BB: fcompp
0x8960BD: fnstsw  ax
0x8960BF: test    ah, 41h
0x8960C2: jnz     short loc_8960C9
0x8960C4: mov     [esp+140h+var_12E], 1
0x8960C9: cmp     [esp+140h+var_12D], 0
0x8960CE: jnz     short loc_8960FB
0x8960D0: cmp     dword ptr [esi+360h], 0
0x8960D7: jz      short loc_8960ED
0x8960D9: xorps   xmm0, xmm0
0x8960DC: movaps  xmmword ptr [esi+350h], xmm0
0x8960E3: mov     dword ptr [esi+360h], 0
0x8960ED: fldz
0x8960EF: fst     dword ptr [esi+304h]
0x8960F5: fstp    dword ptr [esi+308h]
0x8960FB: movaps  xmm2, xmmword ptr ds:0BA7A40h
0x896102: movaps  xmm1, xmmword ptr [esi+2F0h]
0x896109: movss   xmm0, dword ptr ds:0A37080h
0x896111: subps   xmm1, xmm2
0x896114: movaps  xmm2, xmmword ptr ds:0A372D0h
0x89611B: shufps  xmm0, xmm0, 0
0x89611F: movaps  xmmword ptr [esp+140h+var_104+4], xmm0
0x896124: andps   xmm1, xmm2
0x896127: cmpltps xmm0, xmm1
0x89612B: movmskps eax, xmm0
0x89612E: test    al, 7
0x896130: setz    cl
0x896133: and     [esp+140h+var_12D], cl
0x896137: jnz     short loc_896142
0x896139: or      dword ptr [esi+1F4h], 8
0x896140: jmp     short loc_896149
0x896142: and     dword ptr [esi+1F4h], 0FFFFFFF7h
0x896149: mov     edx, ds:0BA9DE4h
0x89614F: mov     eax, large fs:2Ch
0x896155: mov     eax, [eax+edx*4]
0x896158: mov     ecx, [eax+1A4h]
0x89615E: cmp     ecx, [eax+1A8h]
0x896164: mov     [esp+140h+var_10C], eax
0x896168: jnb     short loc_89618A
0x89616A: mov     dword ptr [ecx], offset aTtcharacterMov; "TtCharacter movement"
0x896170: rdtsc
0x896172: mov     [esp+140h+var_128], eax
0x896176: mov     edx, [esp+140h+var_128]
0x89617A: mov     eax, [esp+140h+var_10C]
0x89617E: mov     [ecx+4], edx
0x896181: add     ecx, 0Ch
0x896184: mov     [eax+1A4h], ecx
0x89618A: mov     edx, [esi]
0x89618C: mov     eax, [edx+58h]
0x89618F: mov     ecx, esi
0x896191: call    eax
0x896193: test    eax, eax
0x896195: jnz     short loc_896215
0x896197: cmp     [esp+140h+var_12D], al
0x89619B: jnz     loc_896F6D
0x8961A1: push    ecx
0x8961A2: mov     ecx, edi
0x8961A4: fld     dword ptr [ecx+0Ch]
0x8961A7: lea     ecx, [esp+144h+var_40]
0x8961AE: fstp    [esp+144h+var_144]; float
0x8961B1: call    NiMatrix33_InitRotationTransform
0x8961B6: push    ebx
0x8961B7: lea     edx, [esp+54h]
0x8961BB: push    edx
0x8961BC: lea     ecx, [esp+148h+var_40]
0x8961C3: call    sub_7101F0
0x8961C8: mov     ecx, [eax]
0x8961CA: mov     [ebx], ecx
0x8961CC: mov     edx, [eax+4]
0x8961CF: mov     [ebx+4], edx
0x8961D2: mov     eax, [eax+8]
0x8961D5: lea     ecx, [esp+140h+a2]
0x8961D9: push    ecx
0x8961DA: mov     ecx, esi
0x8961DC: mov     [ebx+8], eax
0x8961DF: call    sub_5E1500
0x8961E4: fld     [esp+140h+a2]
0x8961E8: fadd    dword ptr [ebx]
0x8961EA: lea     edx, [esp+140h+a2]
0x8961EE: push    edx; a2
0x8961EF: mov     ecx, esi; this
0x8961F1: fstp    [esp+144h+a2]
0x8961F5: fld     dword ptr [ebx+4]
0x8961F8: fadd    [esp+144h+a2+4]
0x8961FC: fstp    [esp+144h+a2+4]
0x896200: fld     dword ptr [ebx+8]
0x896203: fadd    [esp+144h+a2+8]
0x896207: fstp    [esp+144h+a2+8]
0x89620B: call    sub_452A10
0x896210: jmp     loc_896F6D
0x896215: fld     dword ptr [edi]
0x896217: fdiv    qword ptr ds:0A96910h
0x89621D: call    Double_To_SInt32
0x896222: mov     ecx, 1
0x896227: sub     ecx, eax
0x896229: cmp     [esp+140h+var_12D], 0
0x89622E: mov     [esp+140h+var_124], ecx
0x896232: jnz     short loc_896274
0x896234: mov     eax, ecx
0x896236: cmp     eax, 1
0x896239: jle     short loc_896274
0x89623B: cmp     [esp+140h+var_12E], 0
0x896240: jnz     short loc_896274
0x896242: cmp     eax, 2
0x896245: jle     short loc_89624F
0x896247: mov     [esp+140h+var_124], 2
0x89624F: fild    [esp+140h+var_124]
0x896253: push    ecx
0x896254: fld1
0x896256: mov     ecx, ebx
0x896258: fdivrp  st(1), st
0x89625A: fstp    [esp+144h+var_128]
0x89625E: fld     [esp+144h+var_128]
0x896262: fstp    [esp+144h+var_144]; float
0x896265: call    NiPoint3__MutliplyByValue
0x89626A: fld     [esp+140h+var_128]
0x89626E: fmul    dword ptr [edi]
0x896270: fstp    dword ptr [edi]
0x896272: jmp     short loc_89627C
0x896274: mov     [esp+140h+var_124], 1
0x89627C: fld     [esp+140h+var_108]
0x896280: push    ecx
0x896281: mov     ecx, esi
0x896283: fstp    [esp+144h+var_144]; float
0x896286: call    sub_894C70
0x89628B: mov     dword ptr [esi+214h], 1Fh
0x896295: mov     dword ptr [esi+218h], 0
0x89629F: test    byte ptr [esi+1F4h], 1
0x8962A6: mov     eax, [esi+364h]
0x8962AC: mov     [esp+140h+var_110], eax
0x8962B0: jz      short loc_8962CB
0x8962B2: fld     dword ptr [edi]
0x8962B4: sub     esp, 8
0x8962B7: fstp    [esp+148h+var_144]; float
0x8962BB: mov     ecx, esi
0x8962BD: fld     dword ptr [edi+0Ch]
0x8962C0: fstp    [esp+148h+var_148]; float
0x8962C3: call    sub_8908E0
0x8962C8: fstp    dword ptr [edi+0Ch]
0x8962CB: fld     dword ptr [edi+0Ch]
0x8962CE: push    ecx
0x8962CF: lea     eax, [esi+2B0h]
0x8962D5: fchs
0x8962D7: fstp    [esp+144h+var_144]; float
0x8962DA: push    eax; int
0x8962DB: lea     ecx, [esp+148h+var_C0]
0x8962E2: call    sub_8B1B00
0x8962E7: fld     dword ptr [edi]
0x8962E9: fstp    dword ptr [esi+2D8h]
0x8962EF: fld     dword ptr [edi]
0x8962F1: fld1
0x8962F3: fdivrp  st(1), st
0x8962F5: fstp    dword ptr [esi+2DCh]
0x8962FB: mov     ecx, [ebx]
0x8962FD: mov     edx, [ebx+4]
0x896300: mov     eax, [ebx+8]
0x896303: mov     [esp+140h+a2], ecx
0x896307: lea     ecx, [esi+1E0h]
0x89630D: mov     [esp+140h+a2+4], edx
0x896311: mov     [esp+140h+a2+8], eax
0x896315: call    sub_88D370
0x89631A: cmp     eax, 5
0x89631D: jz      short loc_896333
0x89631F: mov     ecx, [esi+1F4h]
0x896325: shr     ecx, 0Bh
0x896328: test    cl, 1
0x89632B: jnz     short loc_896333
0x89632D: fldz
0x89632F: fstp    [esp+140h+a2+8]
0x896333: fld     dword ptr [esi+2DCh]
0x896339: mov     ecx, esi
0x89633B: fstp    [esp+140h+var_12C]
0x89633F: fld     [esp+140h+a2]
0x896343: fld     [esp+140h+var_12C]
0x896347: fld     st
0x896349: fmulp   st(2), st
0x89634B: fxch    st(1)
0x89634D: fstp    [esp+140h+a2]
0x896351: fld     st
0x896353: fmul    [esp+140h+a2+4]
0x896357: fstp    [esp+140h+a2+4]
0x89635B: fmul    [esp+140h+a2+8]
0x89635F: fstp    [esp+140h+a2+8]
0x896363: fld     [esp+140h+a2]
0x896367: fld     qword ptr ds:0A39088h
0x89636D: fmul    st(1), st
0x89636F: fxch    st(1)
0x896371: fstp    dword ptr [esi+290h]
0x896377: fld     [esp+140h+a2+4]
0x89637B: fmul    st, st(1)
0x89637D: fstp    dword ptr [esi+294h]
0x896383: fmul    [esp+140h+a2+8]
0x896387: fstp    dword ptr [esi+298h]
0x89638D: call    sub_8903D0
0x896392: test    al, al
0x896394: jz      loc_8964B8
0x89639A: fldz
0x89639C: fcom    dword ptr [edi+4]
0x89639F: fnstsw  ax
0x8963A1: test    ah, 44h
0x8963A4: jnp     loc_8964B6
0x8963AA: fld     dword ptr ds:0A30634h
0x8963B0: push    ecx
0x8963B1: fstp    dword ptr [esp+54h]
0x8963B5: lea     edx, [esp+54h]
0x8963B9: lea     ecx, [esp+144h+var_D0]
0x8963BD: fst     [esp+144h+anonymous_0]
0x8963C1: fst     [esp+144h+anonymous_1]
0x8963C5: fstp    [esp+144h+var_E4]
0x8963C9: fld     dword ptr [edi+4]
0x8963CC: fstp    [esp+144h+var_144]; float
0x8963CF: push    edx; int
0x8963D0: call    sub_8B1B00
0x8963D5: fld     dword ptr [esp+140h+var_D0+0Ch]
0x8963D9: movaps  xmm0, xmmword ptr [esi+290h]
0x8963E0: fld     st
0x8963E2: fld     qword ptr ds:0A3D0C0h
0x8963E8: xorps   xmm2, xmm2
0x8963EB: fmul    st(1), st
0x8963ED: movaps  xmm6, xmm0
0x8963F0: fxch    st(2)
0x8963F2: shufps  xmm6, xmm0, 0D2h ; 'Ò'
0x8963F6: fmul    st, st(1)
0x8963F8: fsub    qword ptr ds:0A2F928h
0x8963FE: fstp    [esp+140h+var_12C]
0x896402: movss   xmm1, [esp+140h+var_12C]
0x896408: fldz
0x89640A: movss   xmm2, xmm1
0x89640E: movaps  xmm1, [esp+140h+var_D0]
0x896413: movaps  [esp+140h+var_D0], xmm1
0x896418: fstp    dword ptr [esp+140h+var_D0+0Ch]
0x89641C: movaps  xmm3, [esp+140h+var_D0]
0x896421: movaps  xmm1, xmm3
0x896424: mulps   xmm1, xmm0
0x896427: movaps  xmm4, xmm1
0x89642A: shufps  xmm4, xmm1, 55h ; 'U'
0x89642E: addss   xmm4, xmm1
0x896432: movaps  xmm5, xmm1
0x896435: shufps  xmm5, xmm1, 0AAh ; 'ª'
0x896439: addss   xmm5, xmm4
0x89643D: movss   dword ptr [esp+140h+var_D0], xmm5
0x896443: fld     dword ptr [esp+140h+var_D0]
0x896447: fmulp   st(2), st
0x896449: xorps   xmm4, xmm4
0x89644C: fxch    st(1)
0x89644E: shufps  xmm2, xmm2, 0
0x896452: mulps   xmm2, xmm0
0x896455: fstp    [esp+140h+var_12C]
0x896459: movss   xmm1, [esp+140h+var_12C]
0x89645F: movss   xmm4, xmm1
0x896463: fstp    [esp+140h+var_12C]
0x896467: movss   xmm5, [esp+140h+var_12C]
0x89646D: shufps  xmm0, xmm0, 0C9h ; 'É'
0x896471: movaps  xmmword ptr [esi+290h], xmm2
0x896478: xorps   xmm1, xmm1
0x89647B: movss   xmm1, xmm5
0x89647F: movaps  xmm5, xmm3
0x896482: shufps  xmm5, xmm3, 0C9h ; 'É'
0x896486: mulps   xmm5, xmm6
0x896489: movaps  xmm6, xmm3
0x89648C: shufps  xmm6, xmm3, 0D2h ; 'Ò'
0x896490: mulps   xmm6, xmm0
0x896493: movaps  xmm0, xmm4
0x896496: shufps  xmm0, xmm4, 0
0x89649A: subps   xmm5, xmm6
0x89649D: shufps  xmm1, xmm1, 0
0x8964A1: mulps   xmm0, xmm3
0x8964A4: mulps   xmm5, xmm1
0x8964A7: addps   xmm0, xmm2
0x8964AA: addps   xmm5, xmm0
0x8964AD: movaps  xmmword ptr [esi+290h], xmm5
0x8964B4: jmp     short loc_8964B8
0x8964B6: fstp    st
0x8964B8: fld     dword ptr [esi+314h]
0x8964BE: movaps  xmm0, [esp+140h+var_C0]
0x8964C6: lea     ecx, [esp+140h+var_B0]
0x8964CD: fstp    dword ptr [esi+348h]
0x8964D3: movaps  [esp+140h+var_B0], xmm0
0x8964DB: call    sub_4D6830
0x8964E0: fldz
0x8964E2: movaps  xmm0, xmmword ptr [esi+2B0h]
0x8964E9: fst     dword ptr [esp+140h+var_D0]
0x8964ED: fld     dword ptr ds:0A30634h
0x8964F3: movaps  xmm1, xmmword ptr ds:0A965C0h
0x8964FA: mov     edi, [esp+140h+var_110]
0x8964FE: fstp    dword ptr [esp+140h+var_D0+4]
0x896502: lea     eax, [esp+140h+var_80]
0x896509: xorps   xmm0, xmm1
0x89650C: fst     dword ptr [esp+140h+var_D0+8]
0x896510: push    eax
0x896511: mov     ecx, edi
0x896513: fstp    dword ptr [esp+144h+var_D0+0Ch]
0x89651A: movaps  [esp+144h+var_A0], xmm0
0x896522: call    sub_6848D0
0x896527: lea     ecx, [esp+140h+var_B0]
0x89652E: push    ecx
0x89652F: lea     ecx, [esp+144h+var_80]
0x896536: call    sub_8B1DD0
0x89653B: fldz
0x89653D: fcomp   dword ptr [esi+32Ch]
0x896543: fnstsw  ax
0x896545: test    ah, 44h
0x896548: jnp     loc_89660A
0x89654E: fld     dword ptr [esi+32Ch]
0x896554: call    __CIcos
0x896559: fstp    [esp+140h+var_12C]
0x89655D: fld     [esp+140h+var_12C]
0x896561: fstp    [esp+140h+var_110]
0x896565: fld     dword ptr [esi+32Ch]
0x89656B: call    __CIsin
0x896570: fstp    [esp+140h+var_12C]
0x896574: fld     [esp+140h+var_12C]
0x896578: lea     edx, [esp+140h+var_40]
0x89657F: fstp    [esp+140h+var_12C]
0x896583: push    edx
0x896584: fld1
0x896586: lea     ecx, [esp+144h+var_80]
0x89658D: fstp    dword ptr [esp+54h]
0x896591: fldz
0x896593: fst     [esp+144h+anonymous_0]
0x896597: fst     [esp+144h+anonymous_1]
0x89659B: fst     [esp+144h+var_E4]
0x89659F: fst     [esp+144h+a2]
0x8965A3: fld     [esp+144h+var_110]
0x8965A7: movaps  xmm0, xmmword ptr [esp+54h]
0x8965AC: fst     [esp+144h+a2+4]
0x8965B0: movaps  [esp+144h+var_40], xmm0
0x8965B8: fld     [esp+144h+var_12C]
0x8965BC: fld     st
0x8965BE: fchs
0x8965C0: fstp    [esp+144h+a2+8]
0x8965C4: fxch    st(2)
0x8965C6: fst     [esp+144h+a2+0Ch]
0x8965CA: fst     dword ptr [esp+144h+var_90]
0x8965D1: movaps  xmm0, xmmword ptr [esp+144h+a2]
0x8965D6: fstp    dword ptr [esp+144h+var_90+0Ch]
0x8965DD: fxch    st(1)
0x8965DF: movaps  [esp+144h+var_30], xmm0
0x8965E7: fstp    dword ptr [esp+144h+var_90+4]
0x8965EE: fstp    dword ptr [esp+144h+var_90+8]
0x8965F5: movaps  xmm0, [esp+144h+var_90]
0x8965FD: movaps  [esp+144h+var_20], xmm0
0x896605: call    sub_8D2C20
0x89660A: test    edi, edi
0x89660C: jz      short loc_896632
0x89660E: mov     ebx, [edi+8]
0x896611: test    ebx, ebx
0x896613: jz      short loc_896632
0x896615: mov     ecx, edi
0x896617: call    sub_89F570
0x89661C: lea     eax, [esp+140h+var_80]
0x896623: push    eax
0x896624: mov     ecx, ebx
0x896626: call    sub_8ABA40
0x89662B: mov     ecx, edi
0x89662D: call    sub_89F570
0x896632: cmp     [esp+140h+var_12D], 0
0x896637: fld     dword ptr [esp+140h+var_C0+0Ch]
0x89663E: movaps  xmm2, [esp+140h+var_D0]
0x896643: fld     st
0x896645: fld     qword ptr ds:0A3D0C0h
0x89664B: xorps   xmm4, xmm4
0x89664E: fmul    st(1), st
0x896650: movaps  xmm6, xmm2
0x896653: fxch    st(2)
0x896655: shufps  xmm6, xmm2, 0C9h ; 'É'
0x896659: movaps  xmm7, xmm2
0x89665C: fmul    st, st(1)
0x89665E: shufps  xmm7, xmm2, 0D2h ; 'Ò'
0x896662: fsub    qword ptr ds:0A2F928h
0x896668: fstp    [esp+140h+var_12C]
0x89666C: movss   xmm0, [esp+140h+var_12C]
0x896672: fldz
0x896674: movss   xmm4, xmm0
0x896678: movaps  xmm0, [esp+140h+var_C0]
0x896680: movaps  [esp+140h+var_90], xmm0
0x896688: fstp    dword ptr [esp+140h+var_90+0Ch]
0x89668F: movaps  xmm1, [esp+140h+var_90]
0x896697: movaps  xmm0, xmm1
0x89669A: mulps   xmm0, xmm2
0x89669D: movaps  xmm3, xmm0
0x8966A0: shufps  xmm3, xmm0, 55h ; 'U'
0x8966A4: addss   xmm3, xmm0
0x8966A8: movaps  xmm5, xmm0
0x8966AB: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8966AF: addss   xmm5, xmm3
0x8966B3: movss   dword ptr [esp+140h+var_D0], xmm5
0x8966B9: fld     dword ptr [esp+140h+var_D0]
0x8966BD: fmulp   st(2), st
0x8966BF: xorps   xmm3, xmm3
0x8966C2: fxch    st(1)
0x8966C4: xorps   xmm5, xmm5
0x8966C7: fstp    [esp+140h+var_12C]
0x8966CB: movss   xmm0, [esp+140h+var_12C]
0x8966D1: movss   xmm5, xmm0
0x8966D5: fstp    [esp+140h+var_12C]
0x8966D9: movss   xmm0, [esp+140h+var_12C]
0x8966DF: movss   xmm3, xmm0
0x8966E3: movaps  xmm0, xmm1
0x8966E6: shufps  xmm0, xmm1, 0D2h ; 'Ò'
0x8966EA: mulps   xmm6, xmm0
0x8966ED: movaps  xmm0, xmm1
0x8966F0: shufps  xmm0, xmm1, 0C9h ; 'É'
0x8966F4: shufps  xmm3, xmm3, 0
0x8966F8: mulps   xmm0, xmm7
0x8966FB: subps   xmm0, xmm6
0x8966FE: mulps   xmm0, xmm3
0x896701: movaps  xmm3, xmm5
0x896704: shufps  xmm3, xmm5, 0
0x896708: mulps   xmm3, xmm1
0x89670B: movaps  xmm1, xmm4
0x89670E: shufps  xmm1, xmm4, 0
0x896712: mulps   xmm1, xmm2
0x896715: addps   xmm3, xmm1
0x896718: addps   xmm0, xmm3
0x89671B: jz      short loc_896745
0x89671D: movaps  xmm1, xmmword ptr [esi+2C0h]
0x896724: movaps  xmm2, xmm0
0x896727: subps   xmm2, xmm1
0x89672A: movaps  xmm1, xmmword ptr ds:0A372D0h
0x896731: andps   xmm2, xmm1
0x896734: movaps  xmm1, xmmword ptr [esp+140h+var_104+4]
0x896739: cmpltps xmm1, xmm2
0x89673D: movmskps ecx, xmm1
0x896740: test    cl, 7
0x896743: jz      short loc_896751
0x896745: fld     dword ptr ds:0B2E780h
0x89674B: fstp    dword ptr [esi+30Ch]
0x896751: cmp     [esp+140h+var_11D], 0
0x896756: mov     edi, [esi+8]
0x896759: movaps  xmmword ptr [esi+2C0h], xmm0
0x896760: mov     [esp+140h+var_11C], edi
0x896764: mov     [esp+140h+var_12E], 1
0x896769: jz      loc_896832
0x89676F: test    edi, edi
0x896771: jz      short loc_89677C
0x896773: mov     ecx, edi
0x896775: call    sub_8AC0A0
0x89677A: jmp     short loc_896781
0x89677C: mov     eax, offset stru_BA7A40
0x896781: movaps  xmm0, xmmword ptr [eax]
0x896784: mov     edi, [esp+140h+var_10C]
0x896788: lea     ebx, [esi+2E0h]
0x89678E: movaps  xmmword ptr [ebx], xmm0
0x896791: movaps  xmm0, xmmword ptr ds:0BA7A40h
0x896798: movaps  xmmword ptr [esi+280h], xmm0
0x89679F: mov     ecx, [edi+1A4h]
0x8967A5: cmp     ecx, [edi+1A8h]
0x8967AB: jnb     short loc_8967C9
0x8967AD: mov     dword ptr [ecx], offset aTtupdateCharac; "Ttupdate character state"
0x8967B3: rdtsc
0x8967B5: mov     [esp+140h+var_128], eax
0x8967B9: mov     edx, [esp+140h+var_128]
0x8967BD: mov     [ecx+4], edx
0x8967C0: add     ecx, 0Ch
0x8967C3: mov     [edi+1A4h], ecx
0x8967C9: mov     eax, [esi+1ECh]
0x8967CF: mov     ecx, [esi+1E8h]
0x8967D5: push    eax
0x8967D6: call    sub_8BA170
0x8967DB: mov     edx, [eax]
0x8967DD: mov     ecx, eax
0x8967DF: mov     eax, [edx+18h]
0x8967E2: push    esi
0x8967E3: call    eax
0x8967E5: mov     ecx, [edi+1A4h]
0x8967EB: cmp     ecx, [edi+1A8h]
0x8967F1: jnb     short loc_89680F
0x8967F3: mov     dword ptr [ecx], offset aEt; "Et"
0x8967F9: rdtsc
0x8967FB: mov     [esp+140h+var_128], eax
0x8967FF: mov     edx, [esp+140h+var_128]
0x896803: mov     [ecx+4], edx
0x896806: add     ecx, 0Ch
0x896809: mov     [edi+1A4h], ecx
0x89680F: mov     ecx, [esi+8]; this
0x896812: test    ecx, ecx
0x896814: jz      short loc_89681C
0x896816: push    ebx; a2
0x896817: call    sub_8AC0B0
0x89681C: fld     dword ptr [esi+2D8h]
0x896822: push    ecx
0x896823: mov     ecx, esi
0x896825: fstp    [esp+144h+var_144]
0x896828: call    sub_894E80
0x89682D: jmp     loc_896DF1
0x896832: cmp     [esp+140h+var_124], 0
0x896837: jz      loc_896CF1
0x89683D: lea     ecx, [ecx+0]
0x896840: sub     [esp+140h+var_124], 1
0x896845: mov     ebx, [esp+140h+var_10C]
0x896849: mov     dword ptr ds:0BA7A5Ch, 0
0x896853: mov     ecx, [esi+8]
0x896856: test    ecx, ecx
0x896858: jz      short loc_896861
0x89685A: call    sub_8AC0A0
0x89685F: jmp     short loc_896866
0x896861: mov     eax, offset stru_BA7A40
0x896866: cmp     [esp+140h+var_12D], 0
0x89686B: movaps  xmm0, xmmword ptr [eax]
0x89686E: movaps  xmmword ptr [esi+2E0h], xmm0
0x896875: jz      short loc_89688F
0x896877: lea     ecx, [esi+1E0h]
0x89687D: call    sub_88D370
0x896882: cmp     eax, 2
0x896885: jz      short loc_89688F
0x896887: fldz
0x896889: fstp    dword ptr [esi+2E8h]
0x89688F: and     dword ptr [esi+1F4h], 0FFFFF9FFh
0x896899: or      dword ptr [esi+1F4h], 10000h
0x8968A3: mov     ecx, esi
0x8968A5: call    sub_891780
0x8968AA: mov     edi, [esi+8]
0x8968AD: test    edi, edi
0x8968AF: jz      short loc_8968D5
0x8968B1: mov     ecx, esi
0x8968B3: call    sub_89F570
0x8968B8: lea     eax, [esi+260h]
0x8968BE: push    eax
0x8968BF: lea     eax, [esp+144h+var_A0]
0x8968C6: push    eax
0x8968C7: mov     ecx, edi
0x8968C9: call    sub_8AE890
0x8968CE: mov     ecx, esi
0x8968D0: call    sub_89F570
0x8968D5: and     dword ptr [esi+1F4h], 0FFFEFFFFh
0x8968DF: cmp     dword ptr [esi+260h], 2
0x8968E6: jnz     short loc_8968F5
0x8968E8: cmp     byte ptr [esi+250h], 0
0x8968EF: jnz     short loc_8968F5
0x8968F1: mov     cl, 1
0x8968F3: jmp     short loc_8968F7
0x8968F5: xor     cl, cl
0x8968F7: mov     edx, [esi+1F4h]
0x8968FD: test    edx, 2000h
0x896903: jz      loc_896A00
0x896909: test    cl, cl
0x89690B: jnz     short loc_896916
0x89690D: mov     eax, edx
0x89690F: shr     eax, 9
0x896912: test    al, 1
0x896914: jz      short loc_896927
0x896916: fldz
0x896918: fcom    dword ptr [esi+2E8h]
0x89691E: fnstsw  ax
0x896920: test    ah, 1
0x896923: jnz     short loc_896938
0x896925: fstp    st
0x896927: and     dword ptr [esi+1F4h], 0FFFFDFFFh
0x896931: xor     cl, cl
0x896933: jmp     loc_896A08
0x896938: movaps  xmm1, xmmword ptr [esi+2E0h]
0x89693F: movaps  xmm0, xmm1
0x896942: mulps   xmm0, xmm1
0x896945: movaps  xmm2, xmm0
0x896948: shufps  xmm2, xmm0, 55h ; 'U'
0x89694C: movaps  xmm3, xmm0
0x89694F: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x896953: addss   xmm2, xmm0
0x896957: addss   xmm3, xmm2
0x89695B: sqrtss  xmm3, xmm3
0x89695F: movss   dword ptr [esp+140h+var_D0], xmm3
0x896965: fld     dword ptr [esp+140h+var_D0]
0x896969: fcom    st(1)
0x89696B: fnstsw  ax
0x89696D: fstp    st(1)
0x89696F: test    ah, 41h
0x896972: jnz     loc_8969FA
0x896978: test    cl, cl
0x89697A: fld1
0x89697C: fdivrp  st(1), st
0x89697E: xorps   xmm0, xmm0
0x896981: fstp    [esp+140h+var_128]
0x896985: movss   xmm2, [esp+140h+var_128]
0x89698B: movss   xmm0, xmm2
0x89698F: jz      short loc_8969FC
0x896991: shr     edx, 9
0x896994: test    dl, 1
0x896997: jz      short loc_8969FC
0x896999: fld     dword ptr [esi+238h]
0x89699F: fld     dword ptr [esi+210h]
0x8969A5: fcompp
0x8969A7: fnstsw  ax
0x8969A9: test    ah, 41h
0x8969AC: jp      short loc_8969FC
0x8969AE: shufps  xmm0, xmm0, 0
0x8969B2: mulps   xmm0, xmm1
0x8969B5: movaps  xmm1, xmmword ptr [esi+230h]
0x8969BC: mulps   xmm0, xmm1
0x8969BF: movaps  xmm1, xmm0
0x8969C2: shufps  xmm1, xmm0, 55h ; 'U'
0x8969C6: movaps  xmm2, xmm0
0x8969C9: addss   xmm1, xmm0
0x8969CD: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8969D1: addss   xmm2, xmm1
0x8969D5: movss   dword ptr [esp+140h+var_D0], xmm2
0x8969DB: fld     dword ptr [esp+140h+var_D0]
0x8969DF: fcomp   qword ptr ds:0A68610h
0x8969E5: fnstsw  ax
0x8969E7: test    ah, 41h
0x8969EA: jp      short loc_8969FC
0x8969EC: and     dword ptr [esi+1F4h], 0FFFFDFFFh
0x8969F6: xor     cl, cl
0x8969F8: jmp     short loc_896A08
0x8969FA: fstp    st
0x8969FC: xor     cl, cl
0x8969FE: jmp     short loc_896A08
0x896A00: shr     edx, 9
0x896A03: and     dl, 1
0x896A06: or      cl, dl
0x896A08: test    cl, cl
0x896A0A: jz      short loc_896A18
0x896A0C: or      dword ptr [esi+1F4h], 100h
0x896A16: jmp     short loc_896A22
0x896A18: and     dword ptr [esi+1F4h], 0FFFFFEFFh
0x896A22: mov     ecx, [ebx+1A4h]
0x896A28: cmp     ecx, [ebx+1A8h]
0x896A2E: jnb     short loc_896A4C
0x896A30: mov     dword ptr [ecx], offset aTtupdateCharac; "Ttupdate character state"
0x896A36: rdtsc
0x896A38: mov     [esp+140h+var_110], eax
0x896A3C: mov     edx, [esp+140h+var_110]
0x896A40: mov     [ecx+4], edx
0x896A43: add     ecx, 0Ch
0x896A46: mov     [ebx+1A4h], ecx
0x896A4C: mov     eax, [esi+1ECh]
0x896A52: mov     ecx, [esi+1E8h]
0x896A58: push    eax
0x896A59: call    sub_8BA170
0x896A5E: mov     edx, [eax]
0x896A60: mov     ecx, eax
0x896A62: mov     eax, [edx+18h]
0x896A65: push    esi
0x896A66: call    eax
0x896A68: mov     ecx, [ebx+1A4h]
0x896A6E: cmp     ecx, [ebx+1A8h]
0x896A74: jnb     short loc_896A92
0x896A76: mov     dword ptr [ecx], offset aEt; "Et"
0x896A7C: rdtsc
0x896A7E: mov     [esp+140h+var_12C], eax
0x896A82: mov     edx, [esp+140h+var_12C]
0x896A86: mov     [ecx+4], edx
0x896A89: add     ecx, 0Ch
0x896A8C: mov     [ebx+1A4h], ecx
0x896A92: mov     ecx, [esi+8]; this
0x896A95: test    ecx, ecx
0x896A97: jz      short loc_896AA5
0x896A99: lea     eax, [esi+2E0h]
0x896A9F: push    eax; a2
0x896AA0: call    sub_8AC0B0
0x896AA5: cmp     [esp+140h+var_12D], 0
0x896AAA: mov     [esp+140h+var_12E], 1
0x896AAF: jz      loc_896BC2
0x896AB5: lea     ecx, [esi+1E0h]
0x896ABB: call    sub_88D370
0x896AC0: cmp     eax, 2
0x896AC3: jz      loc_896BC2
0x896AC9: mov     ecx, [esp+140h+var_11C]
0x896ACD: call    sub_8ABDB0
0x896AD2: mov     eax, [eax+4]
0x896AD5: cmp     eax, [esi+3C0h]
0x896ADB: jg      loc_896BC2
0x896AE1: xor     edi, edi
0x896AE3: mov     [esp+140h+var_12E], 0
0x896AE8: mov     [esp+140h+var_128], edi
0x896AEC: mov     ebx, [esp+140h+var_11C]
0x896AF0: mov     ecx, ebx
0x896AF2: call    sub_8ABDB0
0x896AF7: mov     ecx, [esp+140h+var_128]
0x896AFB: cmp     ecx, [eax+4]
0x896AFE: jge     loc_896BBB
0x896B04: mov     ecx, ebx
0x896B06: call    sub_8ABDB0
0x896B0B: mov     edx, [eax]
0x896B0D: mov     eax, [esi+3BCh]
0x896B13: movaps  xmm0, xmmword ptr [edx+edi]
0x896B17: movaps  xmm1, xmmword ptr [eax+edi]
0x896B1B: subps   xmm1, xmm0
0x896B1E: movaps  xmm0, xmmword ptr ds:0A372D0h
0x896B25: andps   xmm1, xmm0
0x896B28: movaps  xmm0, xmmword ptr [esp+140h+var_104+4]
0x896B2D: cmpltps xmm0, xmm1
0x896B31: movmskps ecx, xmm0
0x896B34: test    ecx, ecx
0x896B36: jnz     short loc_896BA1
0x896B38: mov     ecx, ebx
0x896B3A: call    sub_8ABDB0
0x896B3F: mov     edx, [esi+3BCh]
0x896B45: mov     eax, [eax]
0x896B47: movaps  xmm0, xmmword ptr [edi+eax+10h]
0x896B4C: movaps  xmm1, xmmword ptr [edx+edi+10h]
0x896B51: lea     ebx, [edx+edi]
0x896B54: subps   xmm1, xmm0
0x896B57: movaps  xmm0, xmmword ptr ds:0A372D0h
0x896B5E: andps   xmm1, xmm0
0x896B61: movaps  xmm0, xmmword ptr [esp+140h+var_104+4]
0x896B66: cmpltps xmm0, xmm1
0x896B6A: movmskps ecx, xmm0
0x896B6D: test    ecx, ecx
0x896B6F: jnz     short loc_896BA1
0x896B71: mov     ecx, [esp+140h+var_11C]
0x896B75: call    sub_8ABDB0
0x896B7A: mov     edx, [eax]
0x896B7C: mov     eax, [ebx+20h]
0x896B7F: cmp     eax, [edx+edi+20h]
0x896B83: jnz     short loc_896BA1
0x896B85: mov     ebx, [esi+3BCh]
0x896B8B: mov     ecx, [esp+140h+var_11C]
0x896B8F: add     ebx, edi
0x896B91: call    sub_8ABDB0
0x896B96: mov     ecx, [eax]
0x896B98: mov     edx, [ebx+28h]
0x896B9B: cmp     edx, [edi+ecx+28h]
0x896B9F: jz      short loc_896BA6
0x896BA1: mov     [esp+140h+var_12E], 1
0x896BA6: add     [esp+140h+var_128], 1
0x896BAB: add     edi, 30h ; '0'
0x896BAE: cmp     [esp+140h+var_12E], 0
0x896BB3: jz      loc_896AEC
0x896BB9: jmp     short loc_896BC2
0x896BBB: cmp     [esp+140h+var_12E], 0
0x896BC0: jz      short loc_896BEF
0x896BC2: mov     al, [esp+140h+var_111]
0x896BC6: neg     al
0x896BC8: lea     ecx, [esi+2D0h]
0x896BCE: push    ecx
0x896BCF: mov     ecx, esi
0x896BD1: sbb     eax, eax
0x896BD3: and     eax, 0FFFFFFFDh
0x896BD6: add     eax, 4
0x896BD9: mov     ds:0B2EFB8h, eax
0x896BDE: call    sub_8902B0
0x896BE3: mov     dword ptr ds:0B2EFB8h, 4
0x896BED: jmp     short loc_896C0C
0x896BEF: mov     ecx, [esi+8]; this
0x896BF2: test    ecx, ecx
0x896BF4: movaps  xmm0, xmmword ptr ds:0BA7A40h
0x896BFB: lea     eax, [esi+2E0h]
0x896C01: movaps  xmmword ptr [eax], xmm0
0x896C04: jz      short loc_896C0C
0x896C06: push    eax; a2
0x896C07: call    sub_8AC0B0
0x896C0C: cmp     dword ptr ds:0BA7A5Ch, 0
0x896C13: jz      loc_896CD8
0x896C19: test    dword ptr [esi+1F4h], 2000h
0x896C23: jnz     loc_896CD8
0x896C29: mov     ecx, esi
0x896C2B: call    sub_89F570
0x896C30: mov     ecx, esi
0x896C32: call    sub_47DE20
0x896C37: mov     edi, eax
0x896C39: mov     ecx, edi
0x896C3B: call    sub_8AC070
0x896C40: movaps  xmm0, xmmword ptr [eax]
0x896C43: mov     edx, ds:0BA7A5Ch
0x896C49: movaps  xmmword ptr [esp+50h], xmm0
0x896C4E: mov     eax, [edx+50h]
0x896C51: fld     dword ptr [eax+0D8h]
0x896C57: push    0; int
0x896C59: fmul    dword ptr [esi+2D8h]
0x896C5F: push    0FFFF0000h; int
0x896C64: push    ecx
0x896C65: lea     ecx, [esp+5Ch]
0x896C69: fstp    [esp+14Ch+var_128]
0x896C6D: fld     dword ptr ds:0BA7A58h
0x896C73: fadd    dword ptr [esi+348h]
0x896C79: fadd    [esp+14Ch+var_128]
0x896C7D: fstp    [esp+14Ch+anonymous_1]
0x896C81: fld     dword ptr ds:0A46B10h
0x896C87: fstp    [esp+14Ch+var_14C]; float
0x896C8A: push    ecx; int
0x896C8B: mov     ecx, ds:0BA7DA0h
0x896C91: call    sub_8A7930
0x896C96: lea     edx, [esp+50h]
0x896C9A: push    edx
0x896C9B: mov     ecx, edi
0x896C9D: call    sub_8AC080
0x896CA2: fld     [esp+140h+var_128]
0x896CA6: fadd    dword ptr ds:0BA7A58h
0x896CAC: push    0; int
0x896CAE: push    0FF00FFFFh; int
0x896CB3: push    ecx
0x896CB4: mov     ecx, ds:0BA7DA0h
0x896CBA: fstp    [esp+14Ch+anonymous_1]
0x896CBE: fld     dword ptr ds:0A46B10h
0x896CC4: lea     eax, [esp+5Ch]
0x896CC8: fstp    [esp+14Ch+var_14C]; float
0x896CCB: push    eax; int
0x896CCC: call    sub_8A7930
0x896CD1: mov     ecx, esi
0x896CD3: call    sub_89F570
0x896CD8: cmp     [esp+140h+var_124], 0
0x896CDD: mov     dword ptr [esi+2A0h], 0Bh
0x896CE7: jnz     loc_896840
0x896CED: mov     edi, [esp+140h+var_11C]
0x896CF1: mov     ecx, edi
0x896CF3: call    sub_8ABDB0
0x896CF8: cmp     dword ptr [eax+4], 5
0x896CFC: jle     short loc_896D05
0x896CFE: mov     eax, 5
0x896D03: jmp     short loc_896D0F
0x896D05: mov     ecx, edi
0x896D07: call    sub_8ABDB0
0x896D0C: mov     eax, [eax+4]
0x896D0F: test    eax, eax
0x896D11: mov     [esp+140h+var_12C], eax
0x896D15: mov     [esp+140h+var_128], 0
0x896D1D: jle     loc_896DF1
0x896D23: xor     edi, edi
0x896D25: lea     ebx, [esi+3BCh]
0x896D2B: mov     [esp+140h+var_124], edi
0x896D2F: nop
0x896D30: mov     ecx, [esp+140h+var_128]
0x896D34: cmp     ecx, [esi+3C0h]
0x896D3A: mov     ecx, [esp+140h+var_11C]
0x896D3E: jge     short loc_896D76
0x896D40: call    sub_8ABDB0
0x896D45: mov     eax, [eax]
0x896D47: mov     ecx, [ebx]
0x896D49: movaps  xmm0, xmmword ptr [eax+edi]
0x896D4D: add     eax, edi
0x896D4F: add     ecx, edi
0x896D51: movaps  xmmword ptr [ecx], xmm0
0x896D54: movaps  xmm0, xmmword ptr [eax+10h]
0x896D58: movaps  xmmword ptr [ecx+10h], xmm0
0x896D5C: mov     edx, [eax+20h]
0x896D5F: mov     [ecx+20h], edx
0x896D62: mov     edx, [eax+24h]
0x896D65: mov     [ecx+24h], edx
0x896D68: mov     edx, [eax+28h]
0x896D6B: mov     [ecx+28h], edx
0x896D6E: mov     eax, [eax+2Ch]
0x896D71: mov     [ecx+2Ch], eax
0x896D74: jmp     short loc_896DD5
0x896D76: call    sub_8ABDB0
0x896D7B: mov     ecx, [ebx+8]
0x896D7E: mov     edi, [eax]
0x896D80: add     edi, [esp+140h+var_124]
0x896D84: and     ecx, 3FFFFFFFh
0x896D8A: cmp     [ebx+4], ecx
0x896D8D: jnz     short loc_896D9A
0x896D8F: push    30h ; '0'
0x896D91: push    ebx
0x896D92: call    sub_8A6EE0
0x896D97: add     esp, 8
0x896D9A: mov     ecx, [ebx+4]
0x896D9D: lea     eax, [ecx+ecx*2]
0x896DA0: shl     eax, 4
0x896DA3: add     eax, [ebx]
0x896DA5: add     ecx, 1
0x896DA8: mov     [ebx+4], ecx
0x896DAB: movaps  xmm0, xmmword ptr [edi]
0x896DAE: movaps  xmmword ptr [eax], xmm0
0x896DB1: movaps  xmm0, xmmword ptr [edi+10h]
0x896DB5: movaps  xmmword ptr [eax+10h], xmm0
0x896DB9: mov     edx, [edi+20h]
0x896DBC: mov     [eax+20h], edx
0x896DBF: mov     ecx, [edi+24h]
0x896DC2: mov     [eax+24h], ecx
0x896DC5: mov     edx, [edi+28h]
0x896DC8: mov     [eax+28h], edx
0x896DCB: mov     ecx, [edi+2Ch]
0x896DCE: mov     edi, [esp+140h+var_124]
0x896DD2: mov     [eax+2Ch], ecx
0x896DD5: mov     eax, [esp+140h+var_128]
0x896DD9: add     eax, 1
0x896DDC: add     edi, 30h ; '0'
0x896DDF: cmp     eax, [esp+140h+var_12C]
0x896DE3: mov     [esp+140h+var_128], eax
0x896DE7: mov     [esp+140h+var_124], edi
0x896DEB: jl      loc_896D30
0x896DF1: mov     ecx, esi
0x896DF3: call    sub_8939B0
0x896DF8: mov     eax, [esi+1F4h]
0x896DFE: test    al, 0E0h
0x896E00: jz      short loc_896E0A
0x896E02: mov     dword ptr [esp+140h+var_104], 2
0x896E0A: shr     eax, 2
0x896E0D: test    al, 1
0x896E0F: jz      short loc_896E25
0x896E11: fld1
0x896E13: fstp    dword ptr [esp+50h]
0x896E17: fld     dword ptr ds:0A3D9A4h
0x896E1D: fstp    [esp+140h+anonymous_0]
0x896E21: fldz
0x896E23: jmp     short loc_896E87
0x896E25: cmp     [esp+140h+var_12E], 0
0x896E2A: jnz     short loc_896E40
0x896E2C: fldz
0x896E2E: fstp    dword ptr [esp+50h]
0x896E32: fld1
0x896E34: fstp    [esp+140h+anonymous_0]
0x896E38: fld     dword ptr ds:0A3D9A4h
0x896E3E: jmp     short loc_896E87
0x896E40: lea     ecx, [esi+1E0h]
0x896E46: call    sub_88D370
0x896E4B: sub     eax, 2
0x896E4E: jz      short loc_896E75
0x896E50: sub     eax, 3
0x896E53: jz      short loc_896E63
0x896E55: fld1
0x896E57: fst     dword ptr [esp+50h]
0x896E5B: fstp    [esp+140h+anonymous_0]
0x896E5F: fldz
0x896E61: jmp     short loc_896E87
0x896E63: fld     dword ptr ds:0A3D65Ch
0x896E69: fst     dword ptr [esp+50h]
0x896E6D: fldz
0x896E6F: fstp    [esp+140h+anonymous_0]
0x896E73: jmp     short loc_896E87
0x896E75: fldz
0x896E77: fstp    dword ptr [esp+50h]
0x896E7B: fld     dword ptr ds:0A3D65Ch
0x896E81: fstp    [esp+140h+anonymous_0]
0x896E85: fld1
0x896E87: mov     edx, [esp+50h]
0x896E8B: fstp    [esp+140h+anonymous_1]
0x896E8F: mov     ecx, [esp+140h+anonymous_1]
0x896E93: mov     eax, [esp+140h+anonymous_0]
0x896E97: mov     [esp+140h+a2+8], ecx
0x896E9B: mov     ecx, [esi+8]
0x896E9E: test    ecx, ecx
0x896EA0: mov     [esp+140h+a2], edx
0x896EA4: mov     [esp+140h+a2+4], eax
0x896EA8: jz      short loc_896EB1
0x896EAA: call    sub_8AC0C0
0x896EAF: jmp     short loc_896EB3
0x896EB1: xor     eax, eax
0x896EB3: mov     eax, [eax+8]
0x896EB6: test    eax, eax
0x896EB8: jz      short loc_896F21
0x896EBA: cmp     dword ptr [eax+2B0h], 0
0x896EC1: jz      short loc_896F21
0x896EC3: fld     dword ptr ds:0A968F0h
0x896EC9: sub     esp, 10h
0x896ECC: fstp    [esp+150h+var_144]; float
0x896ED0: fld     [esp+150h+a2+8]
0x896ED4: fstp    [esp+150h+var_148]; float
0x896ED8: fld     [esp+150h+a2+4]
0x896EDC: fstp    [esp+150h+var_14C]; float
0x896EE0: fld     [esp+150h+a2]
0x896EE4: fstp    [esp+150h+var_150]; float
0x896EE7: call    sub_8AEBB0
0x896EEC: mov     ecx, [esi+8]
0x896EEF: mov     ebx, [esi+364h]
0x896EF5: add     esp, 10h
0x896EF8: test    ecx, ecx
0x896EFA: mov     edi, eax
0x896EFC: jz      short loc_896F05
0x896EFE: call    sub_8AC0C0
0x896F03: jmp     short loc_896F07
0x896F05: xor     eax, eax
0x896F07: mov     eax, [eax+8]
0x896F0A: test    eax, eax
0x896F0C: jz      short loc_896F16
0x896F0E: mov     eax, [eax+2B0h]
0x896F14: jmp     short loc_896F18
0x896F16: xor     eax, eax
0x896F18: push    edi
0x896F19: push    ebx
0x896F1A: mov     ecx, eax
0x896F1C: call    sub_88BB60
0x896F21: mov     eax, [esp+140h+var_118]
0x896F25: fld     dword ptr [eax+0Ch]
0x896F28: mov     edx, [esi]
0x896F2A: mov     eax, [eax+1Ch]
0x896F2D: mov     edx, [edx+84h]
0x896F33: push    ecx
0x896F34: fstp    [esp+144h+var_144]
0x896F37: push    eax
0x896F38: mov     ecx, esi
0x896F3A: call    edx
0x896F3C: mov     ecx, esi
0x896F3E: call    sub_891160
0x896F43: test    eax, eax
0x896F45: jz      short loc_896F6D
0x896F47: push    2
0x896F49: mov     ecx, eax
0x896F4B: call    NiNode_GetNiPropertyByID
0x896F50: test    eax, eax
0x896F52: jz      short loc_896F6D
0x896F54: mov     ecx, [esp+140h+a2]
0x896F58: mov     edx, [esp+140h+a2+4]
0x896F5C: add     dword ptr [eax+54h], 1
0x896F60: mov     [eax+40h], ecx
0x896F63: mov     ecx, [esp+140h+a2+8]
0x896F67: mov     [eax+44h], edx
0x896F6A: mov     [eax+48h], ecx
0x896F6D: mov     edi, [esp+140h+var_10C]
0x896F71: mov     ecx, [edi+1A4h]
0x896F77: cmp     ecx, [edi+1A8h]
0x896F7D: jnb     short loc_896F9B
0x896F7F: mov     dword ptr [ecx], offset aEt; "Et"
0x896F85: rdtsc
0x896F87: mov     [esp+140h+var_118], eax
0x896F8B: mov     edx, [esp+140h+var_118]
0x896F8F: mov     [ecx+4], edx
0x896F92: add     ecx, 0Ch
0x896F95: mov     [edi+1A4h], ecx
0x896F9B: fldz
0x896F9D: fcom    dword ptr [esi+300h]
0x896FA3: fnstsw  ax
0x896FA5: test    ah, 5
0x896FA8: jp      short loc_896FDB
0x896FAA: fld     dword ptr [esi+300h]
0x896FB0: fsub    [esp+140h+var_108]
0x896FB4: fstp    [esp+140h+var_118]
0x896FB8: fld     [esp+140h+var_118]
0x896FBC: fst     dword ptr [esi+300h]
0x896FC2: fcomp   st(1)
0x896FC4: fnstsw  ax
0x896FC6: test    ah, 41h
0x896FC9: jp      short loc_896FDB
0x896FCB: xorps   xmm0, xmm0
0x896FCE: fst     dword ptr [esi+300h]
0x896FD4: movaps  xmmword ptr [esi+2F0h], xmm0
0x896FDB: fcomp   dword ptr [esi+30Ch]
0x896FE1: fnstsw  ax
0x896FE3: test    ah, 5
0x896FE6: jp      short loc_896FF8
0x896FE8: fld     dword ptr [esi+30Ch]
0x896FEE: fsub    [esp+140h+var_108]
0x896FF2: fstp    dword ptr [esi+30Ch]
0x896FF8: and     dword ptr [esi+1F4h], 0FFFFEFFFh
0x897002: mov     eax, dword ptr [esp+140h+var_104]
0x897006: pop     edi
0x897007: pop     esi
0x897008: pop     ebx
0x897009: mov     ecx, [esp+134h+var_4]
0x897010: xor     ecx, esp
0x897012: call    @__security_check_cookie@4; __security_check_cookie(x)
0x897017: mov     esp, ebp
0x897019: pop     ebp
0x89701A: retn    4
0x89701D: mov     ecx, [esp+140h+var_4]
0x897024: pop     edi
0x897025: pop     esi
0x897026: pop     ebx
0x897027: xor     ecx, esp
0x897029: xor     eax, eax
0x89702B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x897030: mov     esp, ebp
0x897032: pop     ebp
0x897033: retn    4
