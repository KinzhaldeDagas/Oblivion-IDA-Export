0x895190: push    ebp
0x895191: mov     ebp, esp
0x895193: and     esp, 0FFFFFFF0h
0x895196: push    0FFFFFFFFh
0x895198: push    offset SEH_895190
0x89519D: mov     eax, large fs:0
0x8951A3: push    eax
0x8951A4: sub     esp, 0F8h
0x8951AA: mov     eax, ds:0B30AACh
0x8951AF: xor     eax, esp
0x8951B1: mov     [esp+104h+var_14], eax
0x8951B8: push    ebx
0x8951B9: push    esi
0x8951BA: push    edi
0x8951BB: mov     eax, ds:0B30AACh
0x8951C0: xor     eax, esp
0x8951C2: push    eax
0x8951C3: lea     eax, [esp+114h+var_C]
0x8951CA: mov     large fs:0, eax
0x8951D0: mov     edi, [ebp+arg_0]
0x8951D3: test    edi, edi
0x8951D5: mov     ebx, ecx
0x8951D7: mov     [esp+114h+var_E4], ebx
0x8951DB: mov     dword ptr [ebx+370h], 2
0x8951E5: jz      loc_895EDA
0x8951EB: fldz
0x8951ED: mov     eax, [edi+8Ch]
0x8951F3: test    eax, eax
0x8951F5: fst     [esp+114h+var_D4]
0x8951F9: fst     [esp+114h+var_A0]
0x8951FD: fst     [esp+114h+var_A8]
0x895201: fst     [esp+114h+var_A4]
0x895205: fld     qword ptr ds:0A39088h
0x89520B: jz      short loc_89526A
0x89520D: xor     ecx, ecx
0x89520F: fstp    st
0x895211: push    eax; a2
0x895212: fstp    st
0x895214: lea     ecx, [ebx+ecx*4+374h]; this
0x89521B: call    NiSmartPointer_Set??
0x895220: mov     ecx, ebx
0x895222: call    sub_890BA0
0x895227: test    eax, eax
0x895229: jz      short loc_895237
0x89522B: mov     eax, [eax+8]
0x89522E: test    eax, eax
0x895230: jz      short loc_895237
0x895232: fld     dword ptr [eax+0Ch]
0x895235: jmp     short loc_89523D
0x895237: fld     dword ptr ds:0B2EFC4h
0x89523D: fstp    [esp+114h+var_E8]
0x895241: mov     esi, ebx
0x895243: fld     [esp+114h+var_E8]
0x895247: fmul    qword ptr ds:0A372E0h
0x89524D: fstp    [esp+114h+var_FC]
0x895251: fldz
0x895253: fstp    [esp+114h+var_E8]
0x895257: fld     [esp+114h+var_AC]
0x89525B: fld     [esp+114h+var_FC]
0x89525F: fld     qword ptr ds:0A39088h
0x895265: jmp     loc_895CDC
0x89526A: mov     eax, [edi+70h]
0x89526D: test    eax, eax
0x89526F: jz      loc_8953E2
0x895275: cmp     byte ptr [edi+85h], 0
0x89527C: jnz     loc_8953EB
0x895282: fstp    st
0x895284: push    eax
0x895285: fstp    st
0x895287: call    sub_6FBA90
0x89528C: mov     esi, eax
0x89528E: add     esp, 4
0x895291: test    esi, esi
0x895293: jz      loc_89535F
0x895299: fld     dword ptr [edi+98h]
0x89529F: push    ecx
0x8952A0: fstp    [esp+118h+var_100]
0x8952A4: lea     eax, [esp+118h+var_70]
0x8952AB: fld     [esp+118h+var_100]
0x8952AF: lea     ecx, [esi+18h]
0x8952B2: fstp    [esp+118h+var_118]; float
0x8952B5: push    eax; int
0x8952B6: call    sub_4707B0
0x8952BB: fld     dword ptr [edi+98h]
0x8952C1: mov     ecx, [eax]
0x8952C3: fstp    [esp+114h+var_100]
0x8952C7: mov     edx, [eax+4]
0x8952CA: fld     [esp+114h+var_100]
0x8952CE: mov     eax, [eax+8]
0x8952D1: push    ecx
0x8952D2: mov     [esp+118h+var_B4], ecx
0x8952D6: fstp    [esp+118h+var_118]; float
0x8952D9: lea     ecx, [esp+118h+var_70]
0x8952E0: push    ecx; int
0x8952E1: lea     ecx, [esi+0Ch]
0x8952E4: mov     [esp+11Ch+var_B0], edx
0x8952E8: mov     [esp+11Ch+var_AC], eax
0x8952EC: call    sub_4707B0
0x8952F1: mov     ecx, [eax]
0x8952F3: mov     edx, [eax+4]
0x8952F6: mov     esi, [eax+8]
0x8952F9: mov     eax, ds:0B3F9ACh
0x8952FE: mov     ebx, ds:0B3F9A8h
0x895304: mov     dword ptr [esp+114h+var_F4+4], eax
0x895308: mov     eax, ds:0B3F9B0h
0x89530D: mov     dword ptr [esp+114h+var_94], ecx
0x895314: mov     dword ptr [esp+114h+var_94+4], edx
0x89531B: mov     dword ptr [esp+114h+var_F4], ebx
0x89531F: mov     [esp+114h+var_EC], eax
0x895323: fld     qword ptr ds:0A39088h
0x895329: fldz
0x89532B: fxch    st(1)
0x89532D: fld     [esp+114h+var_B4]
0x895331: fld     [esp+114h+var_AC]
0x895335: fcom    st(1)
0x895337: fnstsw  ax
0x895339: fld     [esp+114h+var_B0]
0x89533D: test    ah, 5
0x895340: jnp     short loc_89534F
0x895342: fcom    st(1)
0x895344: fnstsw  ax
0x895346: test    ah, 41h
0x895349: jnz     loc_895454
0x89534F: mov     eax, [esp+114h+var_E4]
0x895353: or      dword ptr [eax+1F4h], 1
0x89535A: jmp     loc_895458
0x89535F: mov     eax, [edi+70h]
0x895362: fld     dword ptr [eax+2Ch]
0x895365: add     eax, 20h ; ' '
0x895368: test    byte ptr [ebx+1F4h], 1
0x89536F: jz      short loc_89538F
0x895371: fstp    [esp+114h+var_B0]
0x895375: fld     dword ptr [edi+98h]
0x89537B: fmul    qword ptr ds:0A492B0h
0x895381: fstp    [esp+114h+var_E8]
0x895385: fld     [esp+114h+var_E8]
0x895389: fst     [esp+114h+var_AC]
0x89538D: jmp     short loc_8953AB
0x89538F: fstp    [esp+114h+var_AC]
0x895393: fld     dword ptr [edi+98h]
0x895399: fmul    qword ptr ds:0A492B0h
0x89539F: fstp    [esp+114h+var_E8]
0x8953A3: fld     [esp+114h+var_E8]
0x8953A7: fst     [esp+114h+var_B0]
0x8953AB: mov     ecx, ds:0B3F9A8h
0x8953B1: fstp    [esp+114h+var_B4]
0x8953B5: mov     edx, ds:0B3F9ACh
0x8953BB: mov     esi, ds:0B3F9B0h
0x8953C1: mov     ebx, ecx
0x8953C3: mov     dword ptr [esp+114h+var_F4], ebx
0x8953C7: mov     dword ptr [esp+114h+var_F4+4], edx
0x8953CB: mov     [esp+114h+var_EC], esi
0x8953CF: mov     dword ptr [esp+114h+var_94], ecx
0x8953D6: mov     dword ptr [esp+114h+var_94+4], edx
0x8953DD: jmp     loc_895323
0x8953E2: cmp     byte ptr [edi+85h], 0
0x8953E9: jz      short loc_8953EF
0x8953EB: fld1
0x8953ED: jmp     short loc_8953F5
0x8953EF: fld     dword ptr [edi+98h]
0x8953F5: mov     ecx, ds:0B3F9A8h
0x8953FB: fstp    [esp+114h+var_E8]
0x8953FF: fld     [esp+114h+var_E8]
0x895403: mov     esi, ds:0B3F9B0h
0x895409: fld     qword ptr ds:0A492B8h
0x89540F: mov     edx, ds:0B3F9ACh
0x895415: fmul    st, st(1)
0x895417: mov     ebx, ecx
0x895419: mov     eax, esi
0x89541B: mov     dword ptr [esp+114h+var_94], ecx
0x895422: fstp    [esp+114h+var_B4]
0x895426: mov     dword ptr [esp+114h+var_94+4], edx
0x89542D: fld     qword ptr ds:0A968E8h
0x895433: mov     dword ptr [esp+114h+var_F4], ebx
0x895437: fmul    st, st(1)
0x895439: mov     dword ptr [esp+114h+var_F4+4], edx
0x89543D: mov     [esp+114h+var_EC], eax
0x895441: fstp    [esp+114h+var_B0]
0x895445: fmul    qword ptr ds:0A4D910h
0x89544B: fstp    [esp+114h+var_AC]
0x89544F: jmp     loc_89532D
0x895454: mov     eax, [esp+114h+var_E4]
0x895458: test    byte ptr [eax+1F4h], 1
0x89545F: jz      loc_895B2B
0x895465: fxch    st(4)
0x895467: mov     [esp+114h+var_EC], esi
0x89546B: fst     [esp+114h+var_EC]
0x89546F: mov     dword ptr [esp+114h+var_F4], ecx
0x895473: fxch    st(2)
0x895475: mov     dword ptr [esp+114h+var_F4+4], edx
0x895479: fcom    st(4)
0x89547B: fnstsw  ax
0x89547D: test    ah, 41h
0x895480: jnz     short loc_8954EF
0x895482: fld     st
0x895484: fld     qword ptr ds:0A3D0C0h
0x89548A: fmul    st(1), st
0x89548C: fxch    st(1)
0x89548E: fstp    [esp+114h+var_E8]
0x895492: fxch    st(5)
0x895494: fcom    st(2)
0x895496: fnstsw  ax
0x895498: test    ah, 5
0x89549B: jp      short loc_8954A9
0x89549D: fstp    [esp+114h+var_FC]
0x8954A1: fxch    st(1)
0x8954A3: fst     [esp+114h+var_F8]
0x8954A7: jmp     short loc_8954B7
0x8954A9: fxch    st(2)
0x8954AB: fst     [esp+114h+var_FC]
0x8954AF: fxch    st(2)
0x8954B1: fstp    [esp+114h+var_F8]
0x8954B5: fxch    st(1)
0x8954B7: fld     [esp+114h+var_FC]
0x8954BB: mov     [esp+114h+var_DC], edx
0x8954BF: mov     edx, [esp+114h+var_EC]
0x8954C3: fld     st
0x8954C5: fsubp   st(3), st
0x8954C7: mov     [esp+114h+var_D8], edx
0x8954CB: fld     dword ptr [esp+114h+var_F4]
0x8954CF: faddp   st(3), st
0x8954D1: fxch    st(2)
0x8954D3: fstp    dword ptr [esp+114h+var_F4]
0x8954D7: mov     ecx, dword ptr [esp+114h+var_F4]
0x8954DB: fld     dword ptr [esp+114h+var_F4]
0x8954DF: mov     [esp+114h+var_E0], ecx
0x8954E3: fmul    qword ptr ds:0A3D360h
0x8954E9: fstp    [esp+114h+var_E0]
0x8954ED: jmp     short loc_895560
0x8954EF: fld     st(4)
0x8954F1: fld     qword ptr ds:0A3D0C0h
0x8954F7: fmul    st(1), st
0x8954F9: fxch    st(1)
0x8954FB: fstp    [esp+114h+var_E8]
0x8954FF: fxch    st(1)
0x895501: fcom    st(2)
0x895503: fnstsw  ax
0x895505: test    ah, 5
0x895508: jp      short loc_895516
0x89550A: fstp    [esp+114h+var_FC]
0x89550E: fxch    st(1)
0x895510: fst     [esp+114h+var_F8]
0x895514: jmp     short loc_895524
0x895516: fxch    st(2)
0x895518: fst     [esp+114h+var_FC]
0x89551C: fxch    st(2)
0x89551E: fstp    [esp+114h+var_F8]
0x895522: fxch    st(1)
0x895524: fld     [esp+114h+var_FC]
0x895528: mov     [esp+114h+var_E0], ecx
0x89552C: mov     ecx, [esp+114h+var_EC]
0x895530: fld     st
0x895532: fsubp   st(6), st
0x895534: mov     [esp+114h+var_D8], ecx
0x895538: fld     dword ptr [esp+114h+var_F4+4]
0x89553C: faddp   st(6), st
0x89553E: fxch    st(5)
0x895540: fstp    dword ptr [esp+114h+var_F4+4]
0x895544: mov     eax, dword ptr [esp+114h+var_F4+4]
0x895548: fld     dword ptr [esp+114h+var_F4+4]
0x89554C: mov     [esp+114h+var_DC], eax
0x895550: fmul    qword ptr ds:0A3D360h
0x895556: fstp    [esp+114h+var_DC]
0x89555A: fxch    st(1)
0x89555C: fxch    st(4)
0x89555E: fxch    st(1)
0x895560: fld     [esp+114h+var_F8]
0x895564: mov     esi, [esp+114h+var_E4]
0x895568: fld     qword ptr ds:0A31C70h
0x89556E: fmul    st, st(1)
0x895570: fcomp   st(3)
0x895572: fnstsw  ax
0x895574: test    ah, 41h
0x895577: jnz     loc_895BCA
0x89557D: fstp    st(1)
0x89557F: fsub    st, st(1)
0x895581: fstp    [esp+114h+var_F8]
0x895585: fld     [esp+114h+var_F8]
0x895589: fmul    st, st(4)
0x89558B: fadd    st, st(1)
0x89558D: fadd    qword ptr ds:0A2FC68h
0x895593: fstp    [esp+114h+var_EC]
0x895597: fld     [esp+114h+var_EC]
0x89559B: fstp    [esp+114h+var_D8]
0x89559F: fld     dword ptr [edi+4Ch]
0x8955A2: fmulp   st(4), st
0x8955A4: fxch    st(3)
0x8955A6: fstp    [esp+114h+var_100]
0x8955AA: fld     [esp+114h+var_100]
0x8955AE: fst     dword ptr [esi+314h]
0x8955B4: fadd    dword ptr [esi+348h]
0x8955BA: fstp    dword ptr [esi+348h]
0x8955C0: fcomp   dword ptr [edi+50h]
0x8955C3: fnstsw  ax
0x8955C5: test    ah, 44h
0x8955C8: jp      short loc_8955D1
0x8955CA: fmulp   st(1), st
0x8955CC: fstp    dword ptr [edi+50h]
0x8955CF: jmp     short loc_8955D5
0x8955D1: fstp    st(1)
0x8955D3: fstp    st
0x8955D5: xor     ebx, ebx
0x8955D7: mov     eax, 80000000h
0x8955DC: mov     [esp+114h+var_D0], ebx
0x8955E0: mov     [esp+114h+var_CC], ebx
0x8955E4: mov     [esp+114h+var_C8], ebx
0x8955E8: mov     [esp+114h+var_C4], eax
0x8955EC: mov     [esp+114h+var_C0], ebx
0x8955F0: mov     [esp+114h+var_BC], ebx
0x8955F4: mov     [esp+114h+var_B8], eax
0x8955F8: push    14h; Size
0x8955FA: mov     [esp+118h+var_4], ebx
0x895601: call    FormHeapAlloc
0x895606: add     esp, 4
0x895609: mov     [esp+114h+var_100], eax
0x89560D: cmp     eax, ebx
0x89560F: mov     byte ptr [esp+114h+var_4], 1
0x895617: jz      short loc_895638
0x895619: fld     [esp+114h+var_FC]
0x89561D: push    ecx
0x89561E: fstp    [esp+118h+var_118]; float
0x895621: lea     edx, [esp+118h+var_E0]
0x895625: push    edx; int
0x895626: lea     ecx, [esp+11Ch+var_F4]
0x89562A: push    ecx; int
0x89562B: mov     ecx, eax
0x89562D: call    sub_8B6A40
0x895632: mov     [esp+114h+var_98], eax
0x895636: jmp     short loc_89563C
0x895638: mov     [esp+114h+var_98], ebx
0x89563C: fld     [esp+114h+var_EC]
0x895640: lea     ecx, [esp+114h+var_70]
0x895647: fld     st
0x895649: mov     byte ptr [esp+114h+var_4], 0
0x895651: fld     qword ptr ds:0A39088h
0x895657: fmul    st(1), st
0x895659: fxch    st(1)
0x89565B: fstp    [esp+114h+var_D4]
0x89565F: fldz
0x895661: fstp    [esp+114h+var_A0]
0x895665: fmul    [esp+114h+var_FC]
0x895669: fstp    [esp+114h+var_A8]
0x89566D: fld     dword ptr [esp+114h+var_F4]
0x895671: fsub    [esp+114h+var_E0]
0x895675: fstp    [esp+114h+var_100]
0x895679: fld     dword ptr [esp+114h+var_F4+4]
0x89567D: fsub    [esp+114h+var_DC]
0x895681: fstp    [esp+114h+var_A4]
0x895685: fsub    [esp+114h+var_D8]
0x895689: fstp    [esp+114h+var_E4]
0x89568D: fld     [esp+114h+var_100]
0x895691: fstp    dword ptr [esp+114h+var_70]
0x895698: fld     [esp+114h+var_A4]
0x89569C: fstp    dword ptr [esp+114h+var_70+4]
0x8956A3: fld     [esp+114h+var_E4]
0x8956A7: fstp    dword ptr [esp+114h+var_70+8]
0x8956AE: call    sub_404C90
0x8956B3: fmul    qword ptr ds:0A2FAA0h
0x8956B9: mov     edx, dword ptr [esp+114h+var_F4]
0x8956BD: push    14h; Size
0x8956BF: mov     [esp+118h+var_7C], edx
0x8956C6: fstp    [esp+118h+var_100]
0x8956CA: fld     [esp+118h+var_100]
0x8956CE: fmul    qword ptr ds:0A39088h
0x8956D4: fstp    [esp+118h+var_100]
0x8956D8: fld     [esp+118h+var_100]
0x8956DC: fld     [esp+118h+var_A8]
0x8956E0: fadd    st, st
0x8956E2: faddp   st(1), st
0x8956E4: fstp    [esp+118h+var_A4]
0x8956E8: fld     [esp+118h+var_F8]
0x8956EC: fst     [esp+118h+var_EC]
0x8956F0: mov     ecx, [esp+118h+var_EC]
0x8956F4: fld     dword ptr [esp+118h+var_F4+4]
0x8956F8: mov     [esp+118h+var_74], ecx
0x8956FF: fsub    qword ptr ds:0A49310h
0x895705: fstp    dword ptr [esp+118h+var_F4+4]
0x895709: mov     eax, dword ptr [esp+118h+var_F4+4]
0x89570D: fld1
0x89570F: mov     [esp+118h+var_78], eax
0x895716: fadd    st(1), st
0x895718: fxch    st(1)
0x89571A: fstp    [esp+118h+var_E4]
0x89571E: fld     [esp+118h+var_E4]
0x895722: fstp    [esp+118h+var_EC]
0x895726: fsubr   [esp+118h+var_74]
0x89572D: fstp    [esp+118h+var_74]
0x895734: call    FormHeapAlloc
0x895739: add     esp, 4
0x89573C: mov     [esp+114h+var_9C], eax
0x895740: cmp     eax, ebx
0x895742: mov     byte ptr [esp+114h+var_4], 2
0x89574A: jz      short loc_89577C
0x89574C: fld     [esp+114h+var_F8]
0x895750: push    ecx
0x895751: fsub    qword ptr ds:0A2F928h
0x895757: lea     edx, [esp+118h+var_7C]
0x89575E: lea     ecx, [esp+118h+var_F4]
0x895762: fstp    [esp+118h+var_100]
0x895766: fld     [esp+118h+var_100]
0x89576A: fstp    [esp+118h+var_118]; float
0x89576D: push    edx; int
0x89576E: push    ecx; int
0x89576F: mov     ecx, eax
0x895771: call    sub_8B6A40
0x895776: mov     [esp+114h+var_100], eax
0x89577A: jmp     short loc_895780
0x89577C: mov     [esp+114h+var_100], ebx
0x895780: fld     [esp+114h+var_F8]
0x895784: mov     edx, [esp+114h+var_E0]
0x895788: fstp    [esp+114h+var_D8]
0x89578C: mov     ecx, [esp+114h+var_D8]
0x895790: fld     [esp+114h+var_DC]
0x895794: mov     [esp+114h+var_80], ecx
0x89579B: fadd    qword ptr ds:0A49310h
0x8957A1: push    14h; Size
0x8957A3: mov     byte ptr [esp+118h+var_4], 0
0x8957AB: mov     [esp+118h+var_88], edx
0x8957B2: fstp    [esp+118h+var_DC]
0x8957B6: mov     eax, [esp+118h+var_DC]
0x8957BA: fld     [esp+118h+var_E4]
0x8957BE: mov     [esp+118h+var_84], eax
0x8957C5: fstp    [esp+118h+var_D8]
0x8957C9: fld     [esp+118h+var_80]
0x8957D0: fsub    qword ptr ds:0A2F928h
0x8957D6: fstp    [esp+118h+var_80]
0x8957DD: call    FormHeapAlloc
0x8957E2: add     esp, 4
0x8957E5: mov     [esp+114h+var_9C], eax
0x8957E9: cmp     eax, ebx
0x8957EB: mov     byte ptr [esp+114h+var_4], 3
0x8957F3: jz      short loc_895825
0x8957F5: fld     [esp+114h+var_F8]
0x8957F9: push    ecx
0x8957FA: fsub    qword ptr ds:0A2F928h
0x895800: lea     edx, [esp+118h+var_88]
0x895807: lea     ecx, [esp+118h+var_E0]
0x89580B: fstp    [esp+118h+var_F8]
0x89580F: fld     [esp+118h+var_F8]
0x895813: fstp    [esp+118h+var_118]; float
0x895816: push    edx; int
0x895817: push    ecx; int
0x895818: mov     ecx, eax
0x89581A: call    sub_8B6A40
0x89581F: mov     [esp+114h+var_F8], eax
0x895823: jmp     short loc_895829
0x895825: mov     [esp+114h+var_F8], ebx
0x895829: mov     eax, [esp+114h+var_98]
0x89582D: cmp     eax, ebx
0x89582F: mov     byte ptr [esp+114h+var_4], 0
0x895837: jz      short loc_89583E
0x895839: mov     ebx, [eax+8]
0x89583C: jmp     short loc_895840
0x89583E: xor     ebx, ebx
0x895840: mov     edx, [esp+114h+var_C4]
0x895844: and     edx, 3FFFFFFFh
0x89584A: cmp     [esp+114h+var_C8], edx
0x89584E: jnz     short loc_89585F
0x895850: lea     eax, [esp+114h+var_CC]
0x895854: push    4
0x895856: push    eax
0x895857: call    sub_8A6EE0
0x89585C: add     esp, 8
0x89585F: mov     edx, [esp+114h+var_C8]
0x895863: mov     ecx, [esp+114h+var_CC]
0x895867: mov     eax, [esp+114h+var_100]
0x89586B: mov     [ecx+edx*4], ebx
0x89586E: add     [esp+114h+var_C8], 1
0x895873: test    eax, eax
0x895875: jz      short loc_89587C
0x895877: mov     ebx, [eax+8]
0x89587A: jmp     short loc_89587E
0x89587C: xor     ebx, ebx
0x89587E: mov     eax, [esp+114h+var_C4]
0x895882: and     eax, 3FFFFFFFh
0x895887: cmp     [esp+114h+var_C8], eax
0x89588B: jnz     short loc_89589C
0x89588D: lea     ecx, [esp+114h+var_CC]
0x895891: push    4
0x895893: push    ecx
0x895894: call    sub_8A6EE0
0x895899: add     esp, 8
0x89589C: mov     eax, [esp+114h+var_C8]
0x8958A0: mov     edx, [esp+114h+var_CC]
0x8958A4: mov     [edx+eax*4], ebx
0x8958A7: mov     eax, [esp+114h+var_F8]
0x8958AB: add     [esp+114h+var_C8], 1
0x8958B0: test    eax, eax
0x8958B2: jz      short loc_8958B9
0x8958B4: mov     ebx, [eax+8]
0x8958B7: jmp     short loc_8958BB
0x8958B9: xor     ebx, ebx
0x8958BB: mov     ecx, [esp+114h+var_C4]
0x8958BF: and     ecx, 3FFFFFFFh
0x8958C5: cmp     [esp+114h+var_C8], ecx
0x8958C9: jnz     short loc_8958DA
0x8958CB: lea     edx, [esp+114h+var_CC]
0x8958CF: push    4
0x8958D1: push    edx
0x8958D2: call    sub_8A6EE0
0x8958D7: add     esp, 8
0x8958DA: mov     ecx, [esp+114h+var_C8]
0x8958DE: mov     eax, [esp+114h+var_CC]
0x8958E2: mov     [eax+ecx*4], ebx
0x8958E5: mov     edx, [esp+114h+var_B8]
0x8958E9: add     [esp+114h+var_C8], 1
0x8958EE: and     edx, 3FFFFFFFh
0x8958F4: cmp     [esp+114h+var_BC], edx
0x8958F8: jnz     short loc_895909
0x8958FA: lea     eax, [esp+114h+var_C0]
0x8958FE: push    4
0x895900: push    eax
0x895901: call    sub_8A6EE0
0x895906: add     esp, 8
0x895909: mov     ecx, [esp+114h+var_C0]
0x89590D: mov     edx, [esp+114h+var_BC]
0x895911: mov     dword ptr [ecx+edx*4], 0
0x895918: mov     eax, [esp+114h+var_BC]
0x89591C: mov     ecx, [esp+114h+var_B8]
0x895920: add     eax, 1
0x895923: and     ecx, 3FFFFFFFh
0x895929: cmp     eax, ecx
0x89592B: mov     [esp+114h+var_BC], eax
0x89592F: jnz     short loc_895940
0x895931: lea     edx, [esp+114h+var_C0]
0x895935: push    4
0x895937: push    edx
0x895938: call    sub_8A6EE0
0x89593D: add     esp, 8
0x895940: mov     eax, [esp+114h+var_C0]
0x895944: mov     ecx, [esp+114h+var_BC]
0x895948: mov     dword ptr [eax+ecx*4], 0
0x89594F: mov     eax, [esp+114h+var_BC]
0x895953: mov     edx, [esp+114h+var_B8]
0x895957: add     eax, 1
0x89595A: and     edx, 3FFFFFFFh
0x895960: cmp     eax, edx
0x895962: mov     [esp+114h+var_BC], eax
0x895966: jnz     short loc_895977
0x895968: lea     eax, [esp+114h+var_C0]
0x89596C: push    4
0x89596E: push    eax
0x89596F: call    sub_8A6EE0
0x895974: add     esp, 8
0x895977: mov     edx, [esp+114h+var_BC]
0x89597B: mov     ecx, [esp+114h+var_C0]
0x89597F: mov     dword ptr [ecx+edx*4], 0
0x895986: add     [esp+114h+var_BC], 1
0x89598B: push    14h; Size
0x89598D: mov     dword ptr [edi+9Ch], 0
0x895997: call    FormHeapAlloc
0x89599C: add     esp, 4
0x89599F: mov     [esp+114h+var_9C], eax
0x8959A3: test    eax, eax
0x8959A5: mov     byte ptr [esp+114h+var_4], 4
0x8959AD: jz      short loc_8959BD
0x8959AF: lea     ecx, [esp+114h+var_D0]
0x8959B3: push    ecx
0x8959B4: mov     ecx, eax
0x8959B6: call    sub_890410
0x8959BB: jmp     short loc_8959BF
0x8959BD: xor     eax, eax
0x8959BF: cmp     dword ptr [edi+8Ch], 0
0x8959C6: mov     byte ptr [esp+114h+var_4], 0
0x8959CE: jz      short loc_8959D4
0x8959D0: xor     ecx, ecx
0x8959D2: jmp     short loc_8959DA
0x8959D4: mov     ecx, [edi+9Ch]
0x8959DA: push    eax; a2
0x8959DB: lea     ecx, [esi+ecx*4+374h]; this
0x8959E2: call    NiSmartPointer_Set??
0x8959E7: lea     ecx, [esp+114h+var_D0]
0x8959EB: mov     [esp+114h+var_4], 0FFFFFFFFh
0x8959F6: call    sub_893510
0x8959FB: fld     [esp+114h+var_EC]
0x8959FF: fld     qword ptr ds:0A39088h
0x895A05: fldz
0x895A07: fld     [esp+114h+var_FC]
0x895A0B: fld     [esp+114h+var_AC]
0x895A0F: fxch    st(4)
0x895A11: fld     dword ptr [esp+114h+var_94]
0x895A18: lea     ebx, [esi+374h]
0x895A1E: fmul    st, st(4)
0x895A20: fstp    dword ptr [esi+340h]
0x895A26: fld     dword ptr [esp+114h+var_94+4]
0x895A2D: fmul    st, st(4)
0x895A2F: fstp    dword ptr [esi+344h]
0x895A35: cmp     dword ptr [ebx], 0
0x895A38: jnz     loc_895D1F
0x895A3E: fstp    st(4)
0x895A40: fld     st(3)
0x895A42: fadd    st, st(1)
0x895A44: fstp    [esp+114h+var_100]
0x895A48: fld     [esp+114h+var_100]
0x895A4C: fmul    st, st(3)
0x895A4E: fstp    [esp+114h+var_100]
0x895A52: fld     dword ptr [edi+4Ch]
0x895A55: fld     qword ptr ds:0A3D0C0h
0x895A5B: fmul    st(1), st
0x895A5D: fxch    st(1)
0x895A5F: fadd    [esp+114h+var_100]
0x895A63: fstp    [esp+114h+var_100]
0x895A67: fld     [esp+114h+var_100]
0x895A6B: fst     dword ptr [esi+314h]
0x895A71: fadd    dword ptr [esi+348h]
0x895A77: fstp    dword ptr [esi+348h]
0x895A7D: fxch    st(2)
0x895A7F: fcomp   dword ptr [edi+50h]
0x895A82: fnstsw  ax
0x895A84: test    ah, 44h
0x895A87: jp      short loc_895A90
0x895A89: fld     st
0x895A8B: fmul    st, st(3)
0x895A8D: fstp    dword ptr [edi+50h]
0x895A90: test    byte ptr [esi+1F4h], 1
0x895A97: fld     dword ptr [edi+50h]
0x895A9A: fstp    [esp+114h+var_A8]
0x895A9E: fld     [esp+114h+var_A8]
0x895AA2: fld     st
0x895AA4: fmulp   st(3), st
0x895AA6: fld     qword ptr ds:0A2FAA0h
0x895AAC: fmul    st, st(1)
0x895AAE: faddp   st(3), st
0x895AB0: fxch    st(2)
0x895AB2: fstp    [esp+114h+var_A4]
0x895AB6: fld     [esp+114h+var_D8]
0x895ABA: fmul    st, st(3)
0x895ABC: fstp    [esp+114h+var_100]
0x895AC0: fld     [esp+114h+var_100]
0x895AC4: fsub    st, st(2)
0x895AC6: fstp    [esp+114h+var_A0]
0x895ACA: jz      loc_895C0D
0x895AD0: fstp    st
0x895AD2: push    14h; Size
0x895AD4: fxch    st(2)
0x895AD6: mov     dword ptr [edi+9Ch], 0
0x895AE0: fmulp   st(1), st
0x895AE2: fstp    [esp+118h+var_100]
0x895AE6: fadd    [esp+118h+var_100]
0x895AEA: fstp    [esp+118h+var_D4]
0x895AEE: call    FormHeapAlloc
0x895AF3: add     esp, 4
0x895AF6: mov     [esp+114h+var_9C], eax
0x895AFA: test    eax, eax
0x895AFC: mov     [esp+114h+var_4], 5
0x895B07: jz      loc_895BD7
0x895B0D: fld     [esp+114h+var_FC]
0x895B11: push    ecx
0x895B12: fstp    [esp+118h+var_118]; float
0x895B15: lea     ecx, [esp+118h+var_E0]
0x895B19: push    ecx; int
0x895B1A: lea     edx, [esp+11Ch+var_F4]
0x895B1E: push    edx; int
0x895B1F: mov     ecx, eax
0x895B21: call    sub_8B6A40
0x895B26: jmp     loc_895BD9
0x895B2B: fld     st(1)
0x895B2D: mov     ecx, [esp+114h+var_E4]
0x895B31: fadd    st, st
0x895B33: mov     edx, dword ptr [esp+114h+var_F4+4]
0x895B37: mov     [esp+114h+var_E0], ebx
0x895B3B: mov     [esp+114h+var_DC], edx
0x895B3F: fstp    [esp+114h+var_E8]
0x895B43: mov     esi, ecx
0x895B45: faddp   st(2), st
0x895B47: fxch    st(1)
0x895B49: fmul    qword ptr ds:0A2FAA0h
0x895B4F: fstp    [esp+114h+var_FC]
0x895B53: fld     st
0x895B55: fld     [esp+114h+var_FC]
0x895B59: fld     st
0x895B5B: fsubp   st(2), st
0x895B5D: fld     [esp+114h+var_EC]
0x895B61: faddp   st(2), st
0x895B63: fxch    st(1)
0x895B65: fstp    [esp+114h+var_EC]
0x895B69: mov     eax, [esp+114h+var_EC]
0x895B6D: fld     [esp+114h+var_EC]
0x895B71: mov     [esp+114h+var_D8], eax
0x895B75: fld     qword ptr ds:0A3D360h
0x895B7B: fmul    st, st(1)
0x895B7D: fstp    [esp+114h+var_D8]
0x895B81: fld     st(1)
0x895B83: fmul    qword ptr ds:0A31C70h
0x895B89: fstp    [esp+114h+var_100]
0x895B8D: fld     [esp+114h+var_100]
0x895B91: fmul    st, st(4)
0x895B93: fstp    [esp+114h+var_100]
0x895B97: fld     dword ptr [ecx+248h]
0x895B9D: fld     [esp+114h+var_100]
0x895BA1: fcom    st(1)
0x895BA3: fnstsw  ax
0x895BA5: fstp    st(1)
0x895BA7: test    ah, 41h
0x895BAA: jnz     short loc_895BBD
0x895BAC: fstp    dword ptr [ecx+248h]
0x895BB2: fxch    st(2)
0x895BB4: fxch    st(4)
0x895BB6: fxch    st(2)
0x895BB8: jmp     loc_895A11
0x895BBD: fstp    st
0x895BBF: fxch    st(2)
0x895BC1: fxch    st(4)
0x895BC3: fxch    st(2)
0x895BC5: jmp     loc_895A11
0x895BCA: fstp    st
0x895BCC: fstp    st(4)
0x895BCE: fld     [esp+114h+var_EC]
0x895BD2: jmp     loc_895A11
0x895BD7: xor     eax, eax
0x895BD9: cmp     dword ptr [edi+8Ch], 0
0x895BE0: mov     [esp+114h+var_4], 0FFFFFFFFh
0x895BEB: jz      short loc_895BFB
0x895BED: xor     ecx, ecx
0x895BEF: lea     ecx, [esi+ecx*4+374h]
0x895BF6: jmp     loc_895CC6
0x895BFB: mov     ecx, [edi+9Ch]
0x895C01: lea     ecx, [esi+ecx*4+374h]
0x895C08: jmp     loc_895CC6
0x895C0D: fstp    st(1)
0x895C0F: push    ecx
0x895C10: fxch    st(2)
0x895C12: lea     eax, [esp+118h+var_E0]
0x895C16: fmulp   st(1), st
0x895C18: lea     ecx, [esp+118h+var_F4]
0x895C1C: fstp    [esp+118h+var_D4]
0x895C20: fstp    [esp+118h+var_118]; float
0x895C23: push    eax; int
0x895C24: push    ecx; int
0x895C25: call    sub_8905E0
0x895C2A: add     esp, 0Ch
0x895C2D: push    eax; a2
0x895C2E: mov     ecx, ebx; this
0x895C30: call    NiSmartPointer_Set??
0x895C35: cmp     byte ptr [edi+85h], 0
0x895C3C: jz      short loc_895C92
0x895C3E: cmp     dword ptr ds:0BA7A64h, 0
0x895C45: jnz     short loc_895C80
0x895C47: fld     dword ptr [esi+248h]
0x895C4D: sub     esp, 8
0x895C50: fstp    [esp+11Ch+var_100]
0x895C54: lea     edx, [esp+11Ch+var_E0]
0x895C58: fld     [esp+11Ch+var_100]
0x895C5C: lea     eax, [esp+11Ch+var_F4]
0x895C60: fstp    [esp+11Ch+var_118]; float
0x895C64: fld     [esp+11Ch+var_FC]
0x895C68: fstp    [esp+11Ch+var_11C]; float
0x895C6B: push    edx; int
0x895C6C: push    eax; int
0x895C6D: call    sub_893230
0x895C72: add     esp, 10h
0x895C75: push    eax; a2
0x895C76: mov     ecx, offset dword_BA7A64; this
0x895C7B: call    NiSmartPointer_Set??
0x895C80: push    offset dword_BA7A64
0x895C85: lea     ecx, [esi+378h]
0x895C8B: call    sub_55E2A0
0x895C90: jmp     short loc_895CCC
0x895C92: fld     dword ptr [esi+248h]
0x895C98: sub     esp, 8
0x895C9B: fstp    [esp+11Ch+var_100]
0x895C9F: lea     ecx, [esp+11Ch+var_E0]
0x895CA3: fld     [esp+11Ch+var_100]
0x895CA7: lea     edx, [esp+11Ch+var_F4]
0x895CAB: fstp    [esp+11Ch+var_118]; float
0x895CAF: fld     [esp+11Ch+var_FC]
0x895CB3: fstp    [esp+11Ch+var_11C]; float
0x895CB6: push    ecx; int
0x895CB7: push    edx; int
0x895CB8: call    sub_893230
0x895CBD: add     esp, 10h
0x895CC0: lea     ecx, [esi+378h]; this
0x895CC6: push    eax; a2
0x895CC7: call    NiSmartPointer_Set??
0x895CCC: fld     qword ptr ds:0A39088h
0x895CD2: fld     [esp+114h+var_FC]
0x895CD6: fld     [esp+114h+var_AC]
0x895CDA: fxch    st(2)
0x895CDC: fxch    st(1)
0x895CDE: fmul    st, st(1)
0x895CE0: fstp    [esp+114h+var_100]
0x895CE4: fld     [esp+114h+var_100]
0x895CE8: fst     dword ptr [esi+3A0h]
0x895CEE: fstp    dword ptr [esi+3A8h]
0x895CF4: fld     [esp+114h+var_E8]
0x895CF8: fmul    st, st(1)
0x895CFA: fstp    dword ptr [esi+3A4h]
0x895D00: fxch    st(1)
0x895D02: fadd    st, st
0x895D04: fstp    [esp+114h+var_100]
0x895D08: fmul    [esp+114h+var_100]
0x895D0C: fstp    dword ptr [esi+33Ch]
0x895D12: cmp     dword ptr [edi+8Ch], 0
0x895D19: jz      short loc_895D25
0x895D1B: xor     eax, eax
0x895D1D: jmp     short loc_895D2B
0x895D1F: fstp    st
0x895D21: fstp    st(1)
0x895D23: jmp     short loc_895CDE
0x895D25: mov     eax, [edi+9Ch]
0x895D2B: push    eax
0x895D2C: mov     ecx, esi
0x895D2E: call    sub_894940
0x895D33: cmp     byte ptr [edi+84h], 0
0x895D3A: jz      loc_895EDA
0x895D40: xor     eax, eax
0x895D42: mov     [esp+114h+var_54], eax
0x895D49: mov     [esp+114h+var_50], eax
0x895D50: mov     [esp+114h+var_4C], 80000000h
0x895D5B: mov     [esp+114h+var_5C], eax
0x895D62: mov     [esp+114h+var_58], 2
0x895D6A: fld     dword ptr [esi+248h]
0x895D70: fadd    [esp+114h+var_A0]
0x895D74: mov     eax, [edi+74h]
0x895D77: and     eax, 0FFFFFFC0h
0x895D7A: or      eax, 15h
0x895D7D: fstp    [esp+114h+var_A0]
0x895D81: mov     [esp+114h+var_60], eax
0x895D88: fld     [esp+114h+var_A8]
0x895D8C: mov     ebx, 6
0x895D91: fld     st
0x895D93: mov     [esp+114h+var_4], ebx
0x895D9A: fadd    [esp+114h+var_D4]
0x895D9E: fstp    [esp+114h+var_D4]
0x895DA2: fld     [esp+114h+var_A0]
0x895DA6: fld     [esp+114h+var_D4]
0x895DAA: fcom    st(1)
0x895DAC: fnstsw  ax
0x895DAE: test    ah, 41h
0x895DB1: jp      short loc_895DC1
0x895DB3: fadd    dword ptr [esi+248h]
0x895DB9: fstp    [esp+114h+var_D4]
0x895DBD: fld     [esp+114h+var_D4]
0x895DC1: fld     st(2)
0x895DC3: push    1
0x895DC5: fchs
0x895DC7: push    80h ; '€'
0x895DCC: fld     qword ptr ds:0A3D0C0h
0x895DD2: mov     ecx, offset FormHeap
0x895DD7: fmul    st(1), st
0x895DD9: fxch    st(1)
0x895DDB: fstp    [esp+11Ch+var_100]
0x895DDF: fld     [esp+11Ch+var_100]
0x895DE3: fst     dword ptr [esp+11Ch+var_70]
0x895DEA: fstp    dword ptr [esp+11Ch+var_70+4]
0x895DF1: fxch    st(2)
0x895DF3: fstp    dword ptr [esp+11Ch+var_70+8]
0x895DFA: fldz
0x895DFC: fst     dword ptr [esp+11Ch+var_70+0Ch]
0x895E03: movaps  xmm0, [esp+11Ch+var_70]
0x895E0B: fxch    st(3)
0x895E0D: fmulp   st(2), st
0x895E0F: movaps  [esp+11Ch+var_40], xmm0
0x895E17: fxch    st(1)
0x895E19: fstp    [esp+11Ch+var_100]
0x895E1D: fld     [esp+11Ch+var_100]
0x895E21: fst     dword ptr [esp+11Ch+var_70]
0x895E28: fstp    dword ptr [esp+11Ch+var_70+4]
0x895E2F: fstp    dword ptr [esp+11Ch+var_70+8]
0x895E36: fstp    dword ptr [esp+11Ch+var_70+0Ch]
0x895E3D: movaps  xmm0, [esp+11Ch+var_70]
0x895E45: movaps  [esp+11Ch+var_30], xmm0
0x895E4D: call    j_MemoryHeap_Alloc
0x895E52: mov     dl, al
0x895E54: and     dl, 0Fh
0x895E57: mov     cl, 10h
0x895E59: sub     cl, dl
0x895E5B: movzx   edx, cl
0x895E5E: add     eax, edx
0x895E60: mov     [eax-1], cl
0x895E63: mov     [esp+114h+var_9C], eax
0x895E67: lea     ecx, [esp+114h+var_60]
0x895E6E: push    ecx
0x895E6F: mov     ecx, eax
0x895E71: mov     byte ptr [esp+118h+var_4], 7
0x895E79: call    sub_890A70
0x895E7E: add     esi, 368h
0x895E84: push    eax; a2
0x895E85: mov     ecx, esi; this
0x895E87: mov     byte ptr [esp+118h+var_4], bl
0x895E8E: call    NiSmartPointer_Set??
0x895E93: fldz
0x895E95: mov     esi, [esi]
0x895E97: fst     dword ptr [esp+114h+var_70]
0x895E9E: fld     [esp+114h+var_A4]
0x895EA2: lea     ecx, [esp+114h+var_60]
0x895EA9: fstp    dword ptr [esp+114h+var_70+4]
0x895EB0: mov     [esp+114h+var_4], 0FFFFFFFFh
0x895EBB: fst     dword ptr [esp+114h+var_70+8]
0x895EC2: fstp    dword ptr [esp+114h+var_70+0Ch]
0x895EC9: movaps  xmm0, [esp+114h+var_70]
0x895ED1: movaps  xmmword ptr [esi+40h], xmm0
0x895ED5: call    sub_8A5090
0x895EDA: mov     ecx, [esp+114h+var_C]
0x895EE1: mov     large fs:0, ecx
0x895EE8: pop     ecx
0x895EE9: pop     edi
0x895EEA: pop     esi
0x895EEB: pop     ebx
0x895EEC: mov     ecx, [esp+104h+var_14]
0x895EF3: xor     ecx, esp
0x895EF5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x895EFA: mov     esp, ebp
0x895EFC: pop     ebp
0x895EFD: retn    4
