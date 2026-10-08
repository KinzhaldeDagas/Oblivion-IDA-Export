0x7844A0: push    0FFFFFFFFh; Oblivion compact stBezierSpline control-curve sampler. Constructs a 2D result, clamps percent to [0,1], returns the terminal control point at the final segment, otherwise cubic-interpolates four splinePoints records. Sole caller is CreateEvenlySpacedPoints.
0x7844A2: push    offset SEH_7844A0
0x7844A7: mov     eax, large fs:0
0x7844AD: push    eax
0x7844AE: sub     esp, 34h
0x7844B1: push    ebx
0x7844B2: push    ebp
0x7844B3: push    esi
0x7844B4: push    edi
0x7844B5: mov     eax, ds:0B30AACh
0x7844BA: xor     eax, esp
0x7844BC: push    eax
0x7844BD: lea     eax, [esp+54h+var_C]
0x7844C1: mov     large fs:0, eax
0x7844C7: mov     ebp, ecx
0x7844C9: xor     edi, edi
0x7844CB: mov     [esp+54h+var_34], edi
0x7844CF: mov     esi, [esp+54h+result]
0x7844D3: push    2; size
0x7844D5: mov     ecx, esi; this
0x7844D7: mov     [esp+58h+var_4], edi
0x7844DB: call    OB_stVec_ctor_size_010201A0; Oblivion stVec(size) constructor: zeros all five float slots, clamps only sizes greater than 5 down to 5, and stores the resulting logical size. Exact body corroborated by RT4.1 Vec.cpp.
0x7844E0: mov     eax, [ebp+10h]
0x7844E3: cmp     eax, edi
0x7844E5: mov     [esp+54h+var_4], edi
0x7844E9: mov     [esp+54h+var_34], 1
0x7844F1: jz      loc_7846AE
0x7844F7: mov     ecx, [ebp+14h]
0x7844FA: sub     ecx, eax
0x7844FC: mov     eax, 2AAAAAABh
0x784501: imul    ecx
0x784503: sar     edx, 2
0x784506: mov     ebx, edx
0x784508: shr     ebx, 1Fh
0x78450B: add     ebx, edx
0x78450D: cmp     ebx, 1
0x784510: mov     [esp+54h+var_28], ebx
0x784514: jle     loc_7846AE
0x78451A: fld     [esp+54h+percent]
0x78451E: fcomp   qword ptr ds:0A2FC68h
0x784524: fnstsw  ax
0x784526: test    ah, 5
0x784529: jp      short loc_784531
0x78452B: fldz
0x78452D: fstp    [esp+54h+percent]
0x784531: fld     [esp+54h+percent]
0x784535: fcomp   qword ptr ds:0A2F928h
0x78453B: fnstsw  ax
0x78453D: test    ah, 41h
0x784540: jnz     short loc_784548
0x784542: fld1
0x784544: fstp    [esp+54h+percent]
0x784548: lea     eax, [ebx-1]
0x78454B: mov     [esp+54h+var_38], eax
0x78454F: fild    [esp+54h+var_38]
0x784553: fmul    [esp+54h+percent]
0x784557: fstp    [esp+54h+percent]
0x78455B: fld     [esp+54h+percent]
0x78455F: fld     st
0x784561: fld     st(1)
0x784563: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x784568: mov     [esp+54h+var_3C], eax
0x78456C: fisub   [esp+54h+var_3C]
0x784570: xor     cl, cl
0x784572: cmp     ebx, edi
0x784574: mov     [esp+54h+var_40], edi
0x784578: fstp    [esp+54h+var_2C]
0x78457C: jle     loc_7846AC
0x784582: mov     [esp+54h+var_3C], edi
0x784586: mov     ebx, 2
0x78458B: test    cl, cl
0x78458D: jnz     loc_7846AC
0x784593: cmp     edi, [esp+54h+var_38]
0x784597: jnz     short loc_7845F3
0x784599: mov     eax, [ebp+10h]
0x78459C: test    eax, eax
0x78459E: jz      short loc_7845BA
0x7845A0: mov     ecx, [ebp+14h]
0x7845A3: sub     ecx, eax
0x7845A5: mov     eax, 2AAAAAABh
0x7845AA: imul    ecx
0x7845AC: sar     edx, 2
0x7845AF: mov     eax, edx
0x7845B1: shr     eax, 1Fh
0x7845B4: add     eax, edx
0x7845B6: cmp     edi, eax
0x7845B8: jb      short loc_7845C5
0x7845BA: fstp    st
0x7845BC: call    __invalid_parameter_noinfo
0x7845C1: fld     [esp+54h+percent]
0x7845C5: mov     eax, [ebp+10h]
0x7845C8: add     eax, [esp+54h+var_3C]
0x7845CC: mov     ecx, [eax]
0x7845CE: mov     [esi], ecx
0x7845D0: mov     edx, [eax+4]
0x7845D3: mov     [esi+4], edx
0x7845D6: mov     ecx, [eax+8]
0x7845D9: mov     [esi+8], ecx
0x7845DC: mov     edx, [eax+0Ch]
0x7845DF: mov     [esi+0Ch], edx
0x7845E2: mov     ecx, [eax+10h]
0x7845E5: mov     [esi+10h], ecx
0x7845E8: mov     edx, [eax+14h]
0x7845EB: mov     [esi+14h], edx
0x7845EE: jmp     loc_784691
0x7845F3: fild    [esp+54h+var_40]
0x7845F7: fcomp   st(1)
0x7845F9: fnstsw  ax
0x7845FB: test    ah, 41h
0x7845FE: jp      loc_784693
0x784604: lea     eax, [edi+1]
0x784607: mov     [esp+54h+var_30], eax
0x78460B: fild    [esp+54h+var_30]
0x78460F: fcomp   st(1)
0x784611: fnstsw  ax
0x784613: test    ah, 41h
0x784616: jnz     short loc_784693
0x784618: push    ecx
0x784619: fstp    st
0x78461B: fld     [esp+58h+var_2C]
0x78461F: lea     ecx, [ebx+1]
0x784622: fstp    [esp+58h+t]; t
0x784625: lea     edi, [ebp+4Ch]
0x784628: push    ecx; index
0x784629: mov     ecx, edi; this
0x78462B: call    OB_stVector_stVec_At_010201A0; Oblivion checked accessor for the compact 16-byte vector of 0x18-byte stVec elements. Validates index against (end-begin)/0x18 and returns begin + index*0x18.
0x784630: push    eax; p3
0x784631: push    ebx; index
0x784632: mov     ecx, edi; this
0x784634: call    OB_stVector_stVec_At_010201A0; Oblivion checked accessor for the compact 16-byte vector of 0x18-byte stVec elements. Validates index against (end-begin)/0x18 and returns begin + index*0x18.
0x784639: push    eax; p2
0x78463A: lea     edx, [ebx-1]
0x78463D: push    edx; index
0x78463E: mov     ecx, edi; this
0x784640: call    OB_stVector_stVec_At_010201A0; Oblivion checked accessor for the compact 16-byte vector of 0x18-byte stVec elements. Validates index against (end-begin)/0x18 and returns begin + index*0x18.
0x784645: push    eax; p1
0x784646: lea     eax, [ebx-2]
0x784649: push    eax; index
0x78464A: mov     ecx, edi; this
0x78464C: call    OB_stVector_stVec_At_010201A0; Oblivion checked accessor for the compact 16-byte vector of 0x18-byte stVec elements. Validates index against (end-begin)/0x18 and returns begin + index*0x18.
0x784651: push    eax; p0
0x784652: lea     ecx, [esp+68h+var_24]
0x784656: push    ecx; result
0x784657: mov     ecx, ebp
0x784659: call    OB_StSpline_CubicBezierInterpolate2D_010201A0; Oblivion cubic Bezier interpolation for the first two components of four stVec control records, implemented by de Casteljau lerps and returned as a 2D stVec. Corroborated by RT4.1 IdvSpline.cpp SplineInterpolate after binary observation.
0x78465E: mov     edx, [eax]
0x784660: mov     [esi], edx
0x784662: mov     ecx, [eax+4]
0x784665: mov     [esi+4], ecx
0x784668: mov     edx, [eax+8]
0x78466B: mov     [esi+8], edx
0x78466E: mov     ecx, [eax+0Ch]
0x784671: mov     [esi+0Ch], ecx
0x784674: mov     edx, [eax+10h]
0x784677: mov     [esi+10h], edx
0x78467A: mov     eax, [eax+14h]
0x78467D: lea     ecx, [esp+54h+var_24]; this
0x784681: mov     [esi+14h], eax
0x784684: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x784689: fld     [esp+54h+percent]
0x78468D: mov     edi, [esp+54h+var_40]
0x784691: mov     cl, 1
0x784693: add     [esp+54h+var_3C], 18h
0x784698: add     edi, 1
0x78469B: add     ebx, 3
0x78469E: cmp     edi, [esp+54h+var_28]
0x7846A2: mov     [esp+54h+var_40], edi
0x7846A6: jl      loc_78458B
0x7846AC: fstp    st
0x7846AE: mov     eax, esi
0x7846B0: mov     ecx, [esp+54h+var_C]
0x7846B4: mov     large fs:0, ecx
0x7846BB: pop     ecx
0x7846BC: pop     edi
0x7846BD: pop     esi
0x7846BE: pop     ebp
0x7846BF: pop     ebx
0x7846C0: add     esp, 40h
0x7846C3: retn    8
0x9CAF10: mov     eax, [ebp-34h]
0x9CAF13: and     eax, 1
0x9CAF16: jz      locret_9CAF28
0x9CAF1C: and     dword ptr [ebp-34h], 0FFFFFFFEh
0x9CAF20: mov     ecx, [ebp+4]; this
0x9CAF23: jmp     Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9CAF28: retn
0x9CAF29: mov     edx, [esp+percent]
0x9CAF2D: lea     eax, [edx-44h]
0x9CAF30: mov     ecx, [edx-48h]
0x9CAF33: xor     ecx, eax
0x9CAF35: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CAF3A: mov     eax, offset stru_AF353C
0x9CAF3F: jmp     ___CxxFrameHandler3
