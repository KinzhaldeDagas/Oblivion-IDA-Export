0x564E30: push    ebp
0x564E31: mov     ebp, esp
0x564E33: and     esp, 0FFFFFFF0h
0x564E36: push    0FFFFFFFFh
0x564E38: push    offset SEH_564E30
0x564E3D: mov     eax, large fs:0
0x564E43: push    eax
0x564E44: sub     esp, 258h
0x564E4A: mov     eax, ds:0B30AACh
0x564E4F: xor     eax, esp
0x564E51: mov     [esp+264h+var_14], eax
0x564E58: push    ebx
0x564E59: push    esi
0x564E5A: push    edi
0x564E5B: mov     eax, ds:0B30AACh
0x564E60: xor     eax, esp
0x564E62: push    eax
0x564E63: lea     eax, [esp+274h+var_C]
0x564E6A: mov     large fs:0, eax
0x564E70: mov     esi, ecx
0x564E72: mov     ecx, [esi+0DCh]
0x564E78: xor     edi, edi
0x564E7A: cmp     ecx, edi
0x564E7C: jz      short loc_564E86
0x564E7E: mov     eax, [ecx]
0x564E80: mov     edx, [eax+4]
0x564E83: push    esi
0x564E84: call    edx
0x564E86: fld     [ebp+arg_0]
0x564E89: push    ecx
0x564E8A: mov     ecx, esi
0x564E8C: fstp    [esp+278h+var_278]; float
0x564E8F: call    sub_563F90
0x564E94: test    al, al
0x564E96: jz      loc_5654E5
0x564E9C: mov     ecx, esi
0x564E9E: call    sub_564A80
0x564EA3: mov     ebx, eax
0x564EA5: cmp     ebx, edi
0x564EA7: mov     [esp+274h+var_250], ebx
0x564EAB: jz      loc_5654E5
0x564EB1: mov     eax, [ebx]
0x564EB3: mov     edx, [eax+58h]
0x564EB6: mov     ecx, ebx
0x564EB8: call    edx
0x564EBA: test    eax, eax
0x564EBC: jz      loc_5654E5
0x564EC2: mov     esi, [esi+0DCh]
0x564EC8: mov     ecx, [esi+0Ch]
0x564ECB: push    offset off_A65A20; SubStr
0x564ED0: call    sub_7875C0
0x564ED5: push    eax; Str
0x564ED6: call    _strstr
0x564EDB: add     esp, 8
0x564EDE: cmp     eax, edi
0x564EE0: jz      short loc_564EEF
0x564EE2: movsx   eax, byte ptr [eax+3]
0x564EE6: sub     eax, 30h ; '0'
0x564EE9: mov     [esp+274h+var_264], eax
0x564EED: jmp     short loc_564EF9
0x564EEF: mov     ecx, ds:0B3A004h
0x564EF5: mov     [esp+274h+var_264], ecx
0x564EF9: fild    [esp+274h+var_264]
0x564EFD: lea     edx, [esp+274h+var_1A4]
0x564F04: mov     [esp+274h+var_1B8], offset ??_7hkAllCdBodyPairCollector@@6B@; const hkAllCdBodyPairCollector::`vftable'
0x564F0F: mov     [esp+274h+var_1B0], edx
0x564F16: fmul    dword ptr ds:0B3A024h
0x564F1C: mov     [esp+274h+var_1A8], 80000010h
0x564F27: mov     [esp+274h+var_1AC], edi
0x564F2E: mov     byte ptr [esp+274h+var_1B4], 0
0x564F36: fmul    qword ptr ds:0A309F0h
0x564F3C: fstp    [esp+274h+var_238]
0x564F40: lea     eax, [esp+274h+var_1B8]
0x564F47: push    eax
0x564F48: mov     ecx, ebx
0x564F4A: mov     [esp+278h+var_4], edi
0x564F51: call    sub_5639A0
0x564F56: cmp     [esp+274h+var_1AC], edi
0x564F5D: mov     [esp+274h+var_24C], edi
0x564F61: jle     loc_5654CE
0x564F67: mov     [esp+274h+var_264], edi
0x564F6B: jmp     short loc_564F70
0x564F6D: align 10h
0x564F70: mov     ecx, [esp+274h+var_1B0]
0x564F77: mov     edx, [esp+274h+var_264]
0x564F7B: mov     eax, [ecx+edx+8]
0x564F7F: cmp     byte ptr [eax+18h], 2
0x564F83: jnz     short loc_564F8C
0x564F85: mov     ebx, [eax+10h]
0x564F88: add     ebx, eax
0x564F8A: jmp     short loc_564F8E
0x564F8C: xor     ebx, ebx
0x564F8E: cmp     byte ptr [eax+18h], 1
0x564F92: jnz     short loc_564F9B
0x564F94: mov     esi, [eax+10h]
0x564F97: add     esi, eax
0x564F99: jmp     short loc_564F9D
0x564F9B: xor     esi, esi
0x564F9D: cmp     ebx, edi
0x564F9F: jz      loc_565157
0x564FA5: push    ebx
0x564FA6: push    3E8h
0x564FAB: call    sub_891130
0x564FB0: add     esp, 8
0x564FB3: cmp     eax, edi
0x564FB5: jz      loc_5654B1
0x564FBB: mov     ecx, eax; this
0x564FBD: call    MobileObject_GetCharProxy
0x564FC2: mov     esi, eax
0x564FC4: cmp     esi, edi
0x564FC6: jz      loc_5654B1
0x564FCC: call    Rand6
0x564FD1: fstp    [esp+274h+var_258]
0x564FD5: call    Rand6
0x564FDA: fstp    [esp+274h+var_254]
0x564FDE: call    Rand6
0x564FE3: fstp    [esp+274h+var_260]
0x564FE7: fld     [esp+274h+var_258]
0x564FEB: mov     eax, [esp+274h+var_264]
0x564FEF: mov     edi, [esp+274h+var_1B0]
0x564FF6: fstp    dword ptr [esp+274h+var_84+4]
0x564FFD: fld     [esp+274h+var_254]
0x565001: mov     ecx, [edi+eax+8]
0x565005: mov     eax, [ecx+8]
0x565008: fstp    dword ptr [esp+274h+var_84+8]
0x56500F: fld     [esp+274h+var_260]
0x565013: mov     ecx, [esp+274h+var_250]
0x565017: fstp    dword ptr [esp+274h+var_84+0Ch]
0x56501E: fldz
0x565020: fst     dword ptr [esp+274h+var_74]
0x565027: movaps  xmm2, [esp+274h+var_84+4]
0x56502F: movaps  xmm0, xmm2
0x565032: mulps   xmm0, xmm2
0x565035: movaps  xmm1, xmm0
0x565038: shufps  xmm1, xmm0, 55h ; 'U'
0x56503C: addss   xmm1, xmm0
0x565040: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x565044: addss   xmm0, xmm1
0x565048: rsqrtss xmm0, xmm0
0x56504C: shufps  xmm0, xmm0, 0
0x565050: mulps   xmm2, xmm0
0x565053: movaps  xmm0, xmmword ptr [eax+30h]
0x565057: movaps  xmmword ptr [esp+274h+var_64+4], xmm2
0x56505F: fstp    dword ptr [esp+274h+var_64+10h]
0x565066: movaps  [esp+274h+var_84+4], xmm2
0x56506E: movaps  xmmword ptr [esp+274h+var_44+4], xmm0
0x565076: movaps  [esp+274h+var_74+4], xmm0
0x56507E: call    sub_494EF0
0x565083: mov     edx, [esp+274h+var_264]
0x565087: mov     [esp+274h+var_50], eax
0x56508E: mov     eax, [edi+edx+8]
0x565092: mov     edx, [esi+1F0h]
0x565098: mov     edx, [edx+8]
0x56509B: lea     ecx, [esi+1F0h]
0x5650A1: mov     [esp+274h+var_48], eax
0x5650A8: lea     eax, [esp+274h+var_74+4]
0x5650AF: xor     edi, edi
0x5650B1: push    eax
0x5650B2: mov     dword ptr [esp+278h+var_44], edi
0x5650B9: mov     [esp+278h+var_4C], edi
0x5650C0: call    edx
0x5650C2: fld1
0x5650C4: mov     ecx, [esi+8]
0x5650C7: fstp    [esp+274h+var_200]
0x5650CB: cmp     ecx, edi
0x5650CD: mov     byte ptr [esp+274h+var_1FC], 4
0x5650D2: mov     byte ptr [esp+274h+var_1FC+1], 7
0x5650D7: jz      short loc_5650EF
0x5650D9: call    sub_8AC0A0
0x5650DE: push    eax
0x5650DF: lea     eax, [esp+278h+var_1EC]
0x5650E6: push    eax
0x5650E7: call    sub_43F3E0
0x5650EC: add     esp, 8
0x5650EF: lea     ecx, [esp+274h+var_1EC]
0x5650F6: call    sub_404C90
0x5650FB: fstp    [esp+274h+var_204]
0x5650FF: mov     ecx, [esp+274h+var_250]
0x565103: lea     edx, [esp+274h+var_44+4]
0x56510A: push    edx
0x56510B: lea     eax, [esp+278h+var_1EC]
0x565112: add     ebx, ecx
0x565114: push    eax
0x565115: mov     [esp+27Ch+var_1F8], ebx
0x56511C: call    sub_43F3E0
0x565121: mov     ecx, [eax]
0x565123: mov     [esp+27Ch+var_210], ecx
0x565127: mov     edx, [eax+4]
0x56512A: mov     [esp+27Ch+var_20C], edx
0x56512E: mov     eax, [eax+8]
0x565131: lea     ecx, [esp+27Ch+var_210]
0x565135: push    ecx
0x565136: mov     [esp+280h+var_208], eax
0x56513A: mov     [esp+280h+var_1F4], edi
0x565141: mov     [esp+280h+var_1F0], edi
0x565148: call    sub_6B0C70
0x56514D: add     esp, 0Ch
0x565150: xor     edi, edi
0x565152: jmp     loc_5654B1
0x565157: cmp     esi, edi
0x565159: jz      loc_5654B1
0x56515F: push    64h ; 'd'
0x565161: call    Rand3
0x565166: mov     [esp+278h+var_260], eax
0x56516A: fild    [esp+278h+var_260]
0x56516E: add     esp, 4
0x565171: fld     [esp+274h+var_238]
0x565175: fcompp
0x565177: fnstsw  ax
0x565179: test    ah, 1
0x56517C: jnz     loc_5654B1
0x565182: mov     eax, [esi+50h]
0x565185: fld1
0x565187: movaps  xmm0, xmmword ptr [eax+0D0h]
0x56518E: movaps  xmm1, xmmword ptr [eax+0E0h]
0x565195: mulps   xmm0, xmm0
0x565198: movaps  xmm2, xmm0
0x56519B: shufps  xmm2, xmm0, 55h ; 'U'
0x56519F: movaps  xmm3, xmm0
0x5651A2: addss   xmm2, xmm0
0x5651A6: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x5651AA: addss   xmm3, xmm2
0x5651AE: movss   [esp+274h+var_248], xmm3
0x5651B4: fcomp   [esp+274h+var_248]
0x5651B8: movaps  [esp+274h+anonymous_0], xmm1
0x5651C0: movaps  xmmword ptr [esp+274h+var_1E4+4], xmm0
0x5651C8: fnstsw  ax
0x5651CA: test    ah, 5
0x5651CD: jp      loc_5652DB
0x5651D3: mov     edx, ds:0B3A014h
0x5651D9: mov     eax, ds:0B3A00Ch
0x5651DE: movaps  xmm1, xmm0
0x5651E1: shufps  xmm1, xmm0, 55h ; 'U'
0x5651E5: addss   xmm1, xmm0
0x5651E9: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x5651ED: push    edx
0x5651EE: addss   xmm0, xmm1
0x5651F2: sqrtss  xmm0, xmm0
0x5651F6: push    eax
0x5651F7: movss   [esp+27Ch+var_248], xmm0
0x5651FD: call    Rand2
0x565202: mov     [esp+27Ch+var_260], eax
0x565206: fild    [esp+27Ch+var_260]
0x56520A: add     esp, 8
0x56520D: fdiv    qword ptr ds:0A309F0h
0x565213: fld1
0x565215: fsubrp  st(1), st
0x565217: fmul    [esp+274h+var_248]
0x56521B: fstp    [esp+274h+var_25C]
0x56521F: call    Rand7
0x565224: fstp    [esp+274h+var_260]
0x565228: call    Rand7
0x56522D: fstp    [esp+274h+var_254]
0x565231: call    Rand7
0x565236: fsub    qword ptr ds:0A3C770h
0x56523C: movss   xmm3, [esp+274h+var_25C]
0x565242: mov     ecx, esi
0x565244: fstp    [esp+274h+var_258]
0x565248: fld     [esp+274h+var_260]
0x56524C: fstp    dword ptr [esp+274h+var_A4+4]
0x565253: fld     [esp+274h+var_254]
0x565257: fstp    dword ptr [esp+274h+var_A4+8]
0x56525E: fld     [esp+274h+var_258]
0x565262: fstp    dword ptr [esp+274h+var_A4+0Ch]
0x565269: fldz
0x56526B: fstp    [esp+274h+var_94]
0x565272: movaps  xmm1, [esp+274h+var_A4+4]
0x56527A: movaps  xmm0, xmm1
0x56527D: mulps   xmm0, xmm1
0x565280: movaps  xmm2, xmm0
0x565283: shufps  xmm2, xmm0, 55h ; 'U'
0x565287: addss   xmm2, xmm0
0x56528B: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x56528F: addss   xmm0, xmm2
0x565293: xorps   xmm2, xmm2
0x565296: rsqrtss xmm0, xmm0
0x56529A: shufps  xmm0, xmm0, 0
0x56529E: movss   xmm2, xmm3
0x5652A2: shufps  xmm2, xmm2, 0
0x5652A6: mulps   xmm1, xmm0
0x5652A9: mulps   xmm1, xmm2
0x5652AC: movaps  [esp+274h+var_A4+4], xmm1
0x5652B4: call    sub_8A6410
0x5652B9: mov     ecx, [esi+50h]
0x5652BC: mov     edx, [ecx]
0x5652BE: mov     edx, [edx+54h]
0x5652C1: lea     eax, [esp+274h+var_A4+4]
0x5652C8: push    eax
0x5652C9: call    edx
0x5652CB: movaps  xmm0, xmmword ptr [esp+274h+var_1E4+4]
0x5652D3: movaps  xmm1, [esp+274h+anonymous_0]
0x5652DB: fld1
0x5652DD: mulps   xmm1, xmm1
0x5652E0: movaps  xmm2, xmm1
0x5652E3: shufps  xmm2, xmm1, 55h ; 'U'
0x5652E7: movaps  xmm3, xmm1
0x5652EA: addss   xmm2, xmm1
0x5652EE: shufps  xmm3, xmm1, 0AAh ; 'ª'
0x5652F2: addss   xmm3, xmm2
0x5652F6: movss   [esp+274h+var_248], xmm3
0x5652FC: fcomp   [esp+274h+var_248]
0x565300: fnstsw  ax
0x565302: test    ah, 5
0x565305: jp      loc_565402
0x56530B: movaps  xmm0, xmm1
0x56530E: shufps  xmm0, xmm1, 55h ; 'U'
0x565312: addss   xmm0, xmm1
0x565316: shufps  xmm1, xmm1, 0AAh ; 'ª'
0x56531A: addss   xmm1, xmm0
0x56531E: sqrtss  xmm1, xmm1
0x565322: push    14h
0x565324: movss   [esp+278h+var_248], xmm1
0x56532A: call    Rand3
0x56532F: mov     [esp+278h+var_25C], eax
0x565333: fild    [esp+278h+var_25C]
0x565337: add     esp, 4
0x56533A: fdiv    qword ptr ds:0A309F0h
0x565340: fadd    qword ptr ds:0A65A18h
0x565346: fmul    [esp+274h+var_248]
0x56534A: fstp    [esp+274h+var_258]
0x56534E: call    Rand7
0x565353: fstp    [esp+274h+var_25C]
0x565357: call    Rand7
0x56535C: fstp    [esp+274h+var_260]
0x565360: call    Rand7
0x565365: fsub    qword ptr ds:0A3C770h
0x56536B: movss   xmm3, [esp+274h+var_258]
0x565371: mov     ecx, esi
0x565373: fstp    [esp+274h+var_254]
0x565377: fld     [esp+274h+var_25C]
0x56537B: fstp    [esp+274h+var_90]
0x565382: fld     [esp+274h+var_260]
0x565386: fstp    [esp+274h+var_8C]
0x56538D: fld     [esp+274h+var_254]
0x565391: fstp    [esp+274h+var_88]
0x565398: fldz
0x56539A: fstp    dword ptr [esp+274h+var_84]
0x5653A1: movaps  xmm1, xmmword ptr [esp+274h+var_90]
0x5653A9: movaps  xmm0, xmm1
0x5653AC: mulps   xmm0, xmm1
0x5653AF: movaps  xmm2, xmm0
0x5653B2: shufps  xmm2, xmm0, 55h ; 'U'
0x5653B6: addss   xmm2, xmm0
0x5653BA: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x5653BE: addss   xmm0, xmm2
0x5653C2: xorps   xmm2, xmm2
0x5653C5: rsqrtss xmm0, xmm0
0x5653C9: shufps  xmm0, xmm0, 0
0x5653CD: movss   xmm2, xmm3
0x5653D1: shufps  xmm2, xmm2, 0
0x5653D5: mulps   xmm1, xmm0
0x5653D8: mulps   xmm1, xmm2
0x5653DB: movaps  xmmword ptr [esp+274h+var_90], xmm1
0x5653E3: call    sub_8A6410
0x5653E8: mov     ecx, [esi+50h]
0x5653EB: mov     eax, [ecx]
0x5653ED: mov     eax, [eax+58h]
0x5653F0: lea     edx, [esp+274h+var_90]
0x5653F7: push    edx
0x5653F8: call    eax
0x5653FA: movaps  xmm0, xmmword ptr [esp+274h+var_1E4+4]
0x565402: mov     ecx, [esp+274h+var_1B0]
0x565409: mov     edx, [esp+274h+var_264]
0x56540D: mov     eax, [ecx+edx+8]
0x565411: mov     eax, [eax]
0x565413: cmp     eax, edi
0x565415: jz      short loc_56541C
0x565417: mov     eax, [eax+8]
0x56541A: jmp     short loc_56541E
0x56541C: xor     eax, eax
0x56541E: cmp     eax, edi
0x565420: mov     byte ptr [esp+274h+var_220], 4
0x565425: jz      short loc_565430
0x565427: mov     al, [eax+10h]
0x56542A: mov     byte ptr [esp+274h+var_220+1], al
0x56542E: jmp     short loc_565435
0x565430: mov     byte ptr [esp+274h+var_220+1], 0
0x565435: fld1
0x565437: mov     eax, [esi+50h]
0x56543A: mov     ecx, [esp+274h+var_250]
0x56543E: fstp    [esp+274h+var_224]
0x565442: movaps  xmm1, xmm0
0x565445: shufps  xmm1, xmm0, 55h ; 'U'
0x565449: addss   xmm1, xmm0
0x56544D: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x565451: addss   xmm0, xmm1
0x565455: sqrtss  xmm0, xmm0
0x565459: movss   [esp+274h+var_248], xmm0
0x56545F: fld     [esp+274h+var_248]
0x565463: fmul    qword ptr ds:0A372E0h
0x565469: add     eax, 40h ; '@'
0x56546C: push    eax
0x56546D: lea     eax, [esp+278h+var_1C4]
0x565474: lea     edx, [esi+ecx]
0x565477: fstp    [esp+278h+var_228]
0x56547B: push    eax
0x56547C: mov     [esp+27Ch+var_21C], edx
0x565480: call    sub_43F3E0
0x565485: mov     ecx, [eax]
0x565487: mov     [esp+27Ch+var_234], ecx
0x56548B: mov     edx, [eax+4]
0x56548E: mov     ecx, [esi+0Ch]
0x565491: mov     [esp+27Ch+var_230], edx
0x565495: mov     eax, [eax+8]
0x565498: lea     edx, [esp+27Ch+var_234]
0x56549C: push    edx
0x56549D: mov     [esp+280h+var_22C], eax
0x5654A1: mov     [esp+280h+var_218], ecx
0x5654A5: mov     [esp+280h+var_214], edi
0x5654A9: call    sub_6B0C70
0x5654AE: add     esp, 0Ch
0x5654B1: mov     eax, [esp+274h+var_24C]
0x5654B5: add     [esp+274h+var_264], 10h
0x5654BA: add     eax, 1
0x5654BD: cmp     eax, [esp+274h+var_1AC]
0x5654C4: mov     [esp+274h+var_24C], eax
0x5654C8: jl      loc_564F70
0x5654CE: lea     ecx, [esp+274h+var_1B8]; this
0x5654D5: mov     [esp+274h+var_4], 0FFFFFFFFh
0x5654E0: call    ??1hkAllCdBodyPairCollector@@UAE@XZ; hkAllCdBodyPairCollector::~hkAllCdBodyPairCollector(void)
0x5654E5: mov     ecx, dword ptr [esp+274h+var_C]
0x5654EC: mov     large fs:0, ecx
0x5654F3: pop     ecx
0x5654F4: pop     edi
0x5654F5: pop     esi
0x5654F6: pop     ebx
0x5654F7: mov     ecx, [esp+264h+var_14]
0x5654FE: xor     ecx, esp
0x565500: call    @__security_check_cookie@4; __security_check_cookie(x)
0x565505: mov     esp, ebp
0x565507: pop     ebp
0x565508: retn    4
