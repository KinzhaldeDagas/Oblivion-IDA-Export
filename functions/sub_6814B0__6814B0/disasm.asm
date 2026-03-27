0x6814B0: push    ebp
0x6814B1: mov     ebp, esp
0x6814B3: and     esp, 0FFFFFFF0h
0x6814B6: push    0FFFFFFFFh
0x6814B8: push    offset SEH_6814B0
0x6814BD: mov     eax, large fs:0
0x6814C3: push    eax
0x6814C4: sub     esp, 148h
0x6814CA: mov     eax, ds:0B30AACh
0x6814CF: xor     eax, esp
0x6814D1: mov     [esp+154h+var_14], eax
0x6814D8: push    ebx
0x6814D9: push    esi
0x6814DA: push    edi
0x6814DB: mov     eax, ds:0B30AACh
0x6814E0: xor     eax, esp
0x6814E2: push    eax
0x6814E3: lea     eax, [esp+164h+var_C]
0x6814EA: mov     large fs:0, eax
0x6814F0: mov     ebx, [ebp+arg_0]
0x6814F3: xor     edi, edi
0x6814F5: cmp     ebx, edi
0x6814F7: mov     [esp+164h+var_141], 0
0x6814FC: jz      loc_681899
0x681502: cmp     [ebp+arg_4], edi
0x681505: jz      loc_681899
0x68150B: mov     ecx, [ebx+58h]
0x68150E: cmp     ecx, edi
0x681510: jz      loc_681899
0x681516: mov     eax, [ecx]
0x681518: mov     edx, [eax+410h]
0x68151E: call    edx
0x681520: mov     esi, eax
0x681522: cmp     esi, edi
0x681524: jz      loc_681899
0x68152A: mov     eax, [esi]
0x68152C: mov     edx, [eax+0Ch]
0x68152F: mov     ecx, esi
0x681531: call    edx
0x681533: test    al, al
0x681535: jnz     loc_681899
0x68153B: mov     ecx, esi
0x68153D: call    sub_68B3F0
0x681542: mov     ecx, [eax]
0x681544: mov     edx, [eax+4]
0x681547: mov     eax, [eax+8]
0x68154A: mov     [esp+164h+var_F4+4], ecx
0x68154E: fld     [esp+164h+var_F4+4]
0x681552: fsub    dword ptr [ebx+2Ch]
0x681555: mov     [esp+164h+var_F4+8], edx
0x681559: mov     [esp+164h+var_F4+0Ch], eax
0x68155D: mov     ecx, esi
0x68155F: fstp    [esp+164h+var_13C]
0x681563: fld     [esp+164h+var_F4+8]
0x681567: fsub    dword ptr [ebx+30h]
0x68156A: fstp    [esp+164h+var_140]
0x68156E: fld     [esp+164h+var_F4+0Ch]
0x681572: fsub    dword ptr [ebx+34h]
0x681575: fstp    [esp+164h+var_148]
0x681579: fld     [esp+164h+var_13C]
0x68157D: fstp    [esp+164h+var_120]
0x681581: fld     [esp+164h+var_140]
0x681585: fstp    [esp+164h+var_11C]
0x681589: fld     [esp+164h+var_148]
0x68158D: fstp    [esp+164h+var_118]
0x681591: fld     dword ptr ds:0A74A70h
0x681597: fstp    [esp+164h+var_13C]
0x68159B: call    sub_683AA0
0x6815A0: test    al, al
0x6815A2: jz      short loc_6815B7
0x6815A4: lea     ecx, [esp+164h+var_120]
0x6815A8: call    sub_404C90
0x6815AD: fmul    qword ptr ds:0A39088h
0x6815B3: fstp    [esp+164h+var_13C]
0x6815B7: mov     edx, [ebx]
0x6815B9: mov     eax, [edx+1E0h]
0x6815BF: mov     ecx, ebx
0x6815C1: call    eax
0x6815C3: fstp    [esp+164h+var_148]
0x6815C7: push    2
0x6815C9: mov     ecx, ebx
0x6815CB: call    sub_5E0630
0x6815D0: test    al, al
0x6815D2: jz      short loc_681601
0x6815D4: fld     [esp+164h+var_148]
0x6815D8: fsub    qword ptr ds:0A3D5B8h
0x6815DE: fstp    [esp+164h+var_148]
0x6815E2: fldz
0x6815E4: fld     [esp+164h+var_148]
0x6815E8: fcom    st(1)
0x6815EA: fnstsw  ax
0x6815EC: fstp    st(1)
0x6815EE: test    ah, 5
0x6815F1: jp      short loc_6815FF
0x6815F3: fadd    qword ptr ds:0A3D5B0h
0x6815F9: fstp    [esp+164h+var_148]
0x6815FD: jmp     short loc_681601
0x6815FF: fstp    st
0x681601: mov     edx, [ebx]
0x681603: fld     dword ptr ds:0A34BA0h
0x681609: mov     eax, [edx+334h]
0x68160F: fstp    [esp+164h+var_140]
0x681613: push    1
0x681615: mov     ecx, ebx
0x681617: call    eax
0x681619: test    al, al
0x68161B: jz      short loc_681627
0x68161D: fld     dword ptr ds:0A2FAACh
0x681623: fstp    [esp+164h+var_140]
0x681627: lea     ecx, [esp+164h+var_120]
0x68162B: push    ecx
0x68162C: call    sub_683CB0
0x681631: fsub    [esp+168h+var_148]
0x681635: add     esp, 4
0x681638: fstp    [esp+164h+var_148]
0x68163C: fld     [esp+164h+var_148]
0x681640: fabs
0x681642: fstp    [esp+164h+var_148]
0x681646: fld     [esp+164h+var_148]
0x68164A: fld     [esp+164h+var_140]
0x68164E: fcompp
0x681650: fnstsw  ax
0x681652: test    ah, 41h
0x681655: jnz     loc_681899
0x68165B: fld1
0x68165D: mov     [esp+164h+var_E0], offset ??_7hkClosestRayHitCollector@@6B@; const hkClosestRayHitCollector::`vftable'
0x681668: fst     [esp+164h+var_BC]
0x68166F: mov     [esp+164h+var_B0], edi
0x681676: fstp    [esp+164h+var_DC]
0x68167D: lea     ecx, [esp+164h+var_A4+4]
0x681684: mov     [esp+164h+var_4], edi
0x68168B: call    bhkWorldRayCastData__Init
0x681690: push    ebx
0x681691: call    sub_680F30
0x681696: fldz
0x681698: mov     edx, [eax+30h]
0x68169B: fst     [esp+168h+var_138]
0x68169F: fld1
0x6816A1: and     edx, 0FFFFFFD5h
0x6816A4: or      edx, 15h
0x6816A7: fstp    [esp+168h+var_134]
0x6816AB: mov     [esp+168h+var_140], eax
0x6816AF: mov     [esp+168h+var_28], edi
0x6816B6: mov     [esp+168h+var_7C], edx
0x6816BD: mov     edx, [ebx]
0x6816BF: fstp    [esp+168h+var_130]
0x6816C3: lea     eax, [esp+168h+var_E0]
0x6816CA: mov     ecx, 9
0x6816CF: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x6816D4: lea     edi, [esp+168h+var_114]
0x6816D8: mov     [esp+168h+var_2C], eax
0x6816DF: mov     eax, [edx+1E0h]
0x6816E5: rep movsd
0x6816E7: add     esp, 4
0x6816EA: mov     ecx, ebx
0x6816EC: call    eax
0x6816EE: push    ecx
0x6816EF: lea     ecx, [esp+168h+var_114]
0x6816F3: fstp    [esp+168h+var_168]; float
0x6816F6: call    NiMatrix33_InitRotationTransform
0x6816FB: lea     ecx, [esp+164h+var_138]
0x6816FF: push    ecx
0x681700: lea     edx, [esp+168h+var_F4+4]
0x681704: push    edx
0x681705: lea     ecx, [esp+16Ch+var_114]
0x681709: call    sub_7101F0
0x68170E: mov     ecx, [eax]
0x681710: mov     esi, [esp+164h+var_140]
0x681714: mov     [esp+164h+var_138], ecx
0x681718: mov     edx, [eax+4]
0x68171B: mov     [esp+164h+var_134], edx
0x68171F: mov     eax, [eax+8]
0x681722: mov     [esp+164h+var_130], eax
0x681726: movaps  xmm0, xmmword ptr [esi+70h]
0x68172A: movaps  xmm1, xmmword ptr [esi+80h]
0x681731: shufps  xmm0, xmm0, 55h ; 'U'
0x681735: shufps  xmm1, xmm1, 55h ; 'U'
0x681739: subss   xmm1, xmm0
0x68173D: movss   [esp+164h+var_F4+4], xmm1
0x681743: fld     [esp+164h+var_F4+4]
0x681747: mov     ecx, ebx; this
0x681749: fstp    [esp+164h+var_148]
0x68174D: call    sub_4D8B90
0x681752: test    al, al
0x681754: jnz     short loc_681764
0x681756: fld     [esp+164h+var_F4+4]
0x68175A: fadd    qword ptr ds:0A74B18h
0x681760: fstp    [esp+164h+var_148]
0x681764: fld     [esp+164h+var_148]
0x681768: fld     [esp+164h+var_13C]
0x68176C: fcom    st(1)
0x68176E: fnstsw  ax
0x681770: fstp    st(1)
0x681772: test    ah, 5
0x681775: jp      short loc_68177D
0x681777: fstp    [esp+164h+var_148]
0x68177B: jmp     short loc_68177F
0x68177D: fstp    st
0x68177F: lea     ecx, [esp+164h+var_138]
0x681783: push    ecx
0x681784: lea     edx, [esp+168h+var_F4+4]
0x681788: push    edx
0x681789: call    sub_4529E0
0x68178E: movaps  xmm2, xmmword ptr [esp+16Ch+var_F4+4]
0x681793: movss   xmm4, dword ptr ds:0A46C30h
0x68179B: mov     ecx, [ebx+30h]
0x68179E: mov     eax, [ebx+2Ch]
0x6817A1: mov     edx, [ebx+34h]
0x6817A4: movaps  xmm0, xmm2
0x6817A7: mulps   xmm0, xmm2
0x6817AA: movaps  xmm1, xmm0
0x6817AD: shufps  xmm1, xmm0, 55h ; 'U'
0x6817B1: addss   xmm1, xmm0
0x6817B5: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x6817B9: addss   xmm0, xmm1
0x6817BD: movaps  xmm1, xmm0
0x6817C0: rsqrtss xmm1, xmm1
0x6817C4: mulss   xmm0, xmm1
0x6817C8: mulss   xmm0, xmm1
0x6817CC: xorps   xmm3, xmm3
0x6817CF: movss   xmm3, xmm4
0x6817D3: movss   xmm4, dword ptr ds:0A3D65Ch
0x6817DB: subss   xmm3, xmm0
0x6817DF: xorps   xmm0, xmm0
0x6817E2: movss   xmm0, xmm4
0x6817E6: mulss   xmm0, xmm1
0x6817EA: mulss   xmm0, xmm3
0x6817EE: shufps  xmm0, xmm0, 0
0x6817F2: mulps   xmm0, xmm2
0x6817F5: movss   xmm2, [esp+16Ch+var_148]
0x6817FB: xorps   xmm1, xmm1
0x6817FE: movss   xmm1, xmm2
0x681802: movaps  xmm2, xmm1
0x681805: shufps  xmm2, xmm1, 0
0x681809: mov     [esp+16Ch+var_128], ecx
0x68180D: mulps   xmm2, xmm0
0x681810: add     esp, 8
0x681813: mov     ecx, ebx
0x681815: movaps  xmmword ptr [esp+164h+var_44+4], xmm2
0x68181D: mov     [esp+164h+var_12C], eax
0x681821: mov     [esp+164h+var_124], edx
0x681825: call    sub_5E0660
0x68182A: fmul    [ebp+arg_8]
0x68182D: lea     eax, [esp+164h+var_12C]
0x681831: push    eax
0x681832: fadd    [esp+168h+var_124]
0x681836: lea     ecx, [esp+168h+var_F4+4]
0x68183A: push    ecx
0x68183B: fstp    [esp+16Ch+var_124]
0x68183F: call    sub_4529E0
0x681844: movaps  xmm0, xmmword ptr [esp+16Ch+var_F4+4]
0x681849: movaps  xmmword ptr [esp+16Ch+var_A4+4], xmm0
0x681851: mov     edx, [esi+8]
0x681854: push    edx
0x681855: call    sub_531DE0
0x68185A: add     esp, 0Ch
0x68185D: test    eax, eax
0x68185F: jz      short loc_681899
0x681861: mov     edx, [eax]
0x681863: mov     edx, [edx+88h]
0x681869: lea     ecx, [esp+164h+var_A4+4]
0x681870: push    ecx
0x681871: mov     ecx, eax
0x681873: call    edx
0x681875: test    al, al
0x681877: jz      short loc_681899
0x681879: mov     eax, [esp+164h+var_50]
0x681880: push    eax
0x681881: call    sub_4806E0
0x681886: push    eax
0x681887: call    sub_4DC270
0x68188C: add     esp, 8
0x68188F: cmp     eax, [ebp+arg_4]
0x681892: jnz     short loc_681899
0x681894: mov     [esp+164h+var_141], 1
0x681899: mov     al, [esp+164h+var_141]
0x68189D: mov     ecx, dword ptr [esp+164h+var_C]
0x6818A4: mov     large fs:0, ecx
0x6818AB: pop     ecx
0x6818AC: pop     edi
0x6818AD: pop     esi
0x6818AE: pop     ebx
0x6818AF: mov     ecx, [esp+154h+var_14]
0x6818B6: xor     ecx, esp
0x6818B8: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6818BD: mov     esp, ebp
0x6818BF: pop     ebp
0x6818C0: retn
