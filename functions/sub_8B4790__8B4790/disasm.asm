0x8B4790: push    ebp
0x8B4791: mov     ebp, esp
0x8B4793: and     esp, 0FFFFFFF0h
0x8B4796: sub     esp, 424h
0x8B479C: fld     [ebp+arg_C]
0x8B479F: push    ebx
0x8B47A0: fcomp   dword ptr ds:0A2FAA8h
0x8B47A6: push    esi
0x8B47A7: push    edi
0x8B47A8: fnstsw  ax
0x8B47AA: test    ah, 41h
0x8B47AD: jnp     short loc_8B47BF
0x8B47AF: fld     [ebp+arg_8]
0x8B47B2: fcomp   dword ptr ds:0A2FAA8h
0x8B47B8: fnstsw  ax
0x8B47BA: test    ah, 41h
0x8B47BD: jp      short loc_8B47CB
0x8B47BF: mov     eax, 1
0x8B47C4: pop     edi
0x8B47C5: pop     esi
0x8B47C6: pop     ebx
0x8B47C7: mov     esp, ebp
0x8B47C9: pop     ebp
0x8B47CA: retn
0x8B47CB: mov     esi, [ebp+arg_0]
0x8B47CE: mov     edi, [ebp+arg_4]
0x8B47D1: movaps  xmm0, xmmword ptr [esi]
0x8B47D4: movaps  xmm2, xmmword ptr [edi]
0x8B47D7: subps   xmm2, xmm0
0x8B47DA: movaps  xmm0, xmm2
0x8B47DD: mulps   xmm0, xmm2
0x8B47E0: movaps  xmm1, xmm0
0x8B47E3: shufps  xmm1, xmm0, 55h ; 'U'
0x8B47E7: addss   xmm1, xmm0
0x8B47EB: movaps  xmm3, xmm1
0x8B47EE: movaps  xmm1, xmm0
0x8B47F1: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8B47F5: addss   xmm1, xmm3
0x8B47F9: movaps  [esp+430h+var_3F0], xmm1
0x8B47FE: sqrtss  xmm1, xmm1
0x8B4802: lea     eax, [esp+430h+var_418]
0x8B4806: movss   dword ptr [esp+430h+var_3F0], xmm1
0x8B480C: movaps  xmm1, [esp+430h+var_3F0]
0x8B4811: movss   dword ptr [eax], xmm1
0x8B4815: fld     [esp+430h+var_418]
0x8B4819: fcomp   dword ptr ds:0A2FAA8h
0x8B481F: fnstsw  ax
0x8B4821: test    ah, 41h
0x8B4824: jnz     loc_8B49C7
0x8B482A: movaps  xmm1, xmm0
0x8B482D: shufps  xmm1, xmm0, 55h ; 'U'
0x8B4831: addss   xmm1, xmm0
0x8B4835: movaps  xmm3, xmm0
0x8B4838: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8B483C: movaps  xmm0, xmm3
0x8B483F: addss   xmm0, xmm1
0x8B4843: movaps  [esp+430h+var_3F0], xmm0
0x8B4848: rsqrtss xmm1, xmm0
0x8B484C: movss   dword ptr [esp+430h+var_3F0], xmm1
0x8B4852: movaps  xmm1, [esp+430h+var_3F0]
0x8B4857: mulss   xmm0, xmm1
0x8B485B: mulss   xmm0, xmm1
0x8B485F: mov     [esp+430h+var_420], 40400000h
0x8B4867: movss   xmm3, [esp+430h+var_420]
0x8B486D: mov     [esp+430h+var_420], 3F000000h
0x8B4875: movss   xmm4, [esp+430h+var_420]
0x8B487B: movaps  xmm5, xmm3
0x8B487E: subss   xmm5, xmm0
0x8B4882: movaps  xmm0, xmm4
0x8B4885: mulss   xmm0, xmm1
0x8B4889: mulss   xmm0, xmm5
0x8B488D: movaps  xmm1, xmm0
0x8B4890: shufps  xmm1, xmm0, 0
0x8B4894: mulps   xmm1, xmm2
0x8B4897: mov     dword ptr [esp+430h+var_410], 0
0x8B489F: mov     dword ptr [esp+430h+var_410+4], 0
0x8B48A7: mov     dword ptr [esp+430h+var_410+8], 3F800000h
0x8B48AF: mov     dword ptr [esp+430h+var_410+0Ch], 0
0x8B48B7: movaps  xmm2, [esp+430h+var_410]
0x8B48BC: movaps  xmm0, xmm1
0x8B48BF: mulps   xmm0, xmm2
0x8B48C2: movaps  xmm5, xmm0
0x8B48C5: shufps  xmm5, xmm0, 55h ; 'U'
0x8B48C9: movaps  xmm6, xmm0
0x8B48CC: addss   xmm5, xmm0
0x8B48D0: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x8B48D4: lea     ecx, [esp+430h+var_420]
0x8B48D8: addss   xmm6, xmm5
0x8B48DC: movss   dword ptr [ecx], xmm6
0x8B48E0: fld     [esp+430h+var_420]
0x8B48E4: fabs
0x8B48E6: fcomp   dword ptr ds:0A97F54h
0x8B48EC: fnstsw  ax
0x8B48EE: test    ah, 5
0x8B48F1: jp      loc_8B49C7
0x8B48F7: movaps  xmm5, xmm1
0x8B48FA: shufps  xmm5, xmm1, 0C9h ; 'É'
0x8B48FE: movaps  xmm6, xmm2
0x8B4901: shufps  xmm6, xmm2, 0D2h ; 'Ò'
0x8B4905: mulps   xmm6, xmm5
0x8B4908: movaps  xmm5, xmm1
0x8B490B: shufps  xmm5, xmm1, 0D2h ; 'Ò'
0x8B490F: movaps  xmm1, xmm2
0x8B4912: shufps  xmm1, xmm2, 0C9h ; 'É'
0x8B4916: movaps  xmm2, xmm1
0x8B4919: mulps   xmm2, xmm5
0x8B491C: subps   xmm2, xmm6
0x8B491F: movaps  xmm1, xmm2
0x8B4922: mulps   xmm1, xmm2
0x8B4925: movaps  xmm5, xmm1
0x8B4928: shufps  xmm5, xmm1, 55h ; 'U'
0x8B492C: addss   xmm5, xmm1
0x8B4930: movaps  xmm6, xmm1
0x8B4933: shufps  xmm6, xmm1, 0AAh ; 'ª'
0x8B4937: movaps  xmm1, xmm6
0x8B493A: addss   xmm1, xmm5
0x8B493E: movaps  [esp+430h+var_3F0], xmm1
0x8B4943: rsqrtss xmm5, xmm1
0x8B4947: movss   dword ptr [esp+430h+var_3F0], xmm5
0x8B494D: movaps  xmm5, [esp+430h+var_3F0]
0x8B4952: mulss   xmm1, xmm5
0x8B4956: mulss   xmm1, xmm5
0x8B495A: subss   xmm3, xmm1
0x8B495E: mulss   xmm4, xmm5
0x8B4962: movaps  xmm1, xmm4
0x8B4965: mulss   xmm1, xmm3
0x8B4969: movaps  xmm3, xmm1
0x8B496C: shufps  xmm3, xmm1, 0
0x8B4970: mulps   xmm3, xmm2
0x8B4973: movaps  xmm1, xmm0
0x8B4976: shufps  xmm1, xmm0, 55h ; 'U'
0x8B497A: movaps  xmm2, xmm0
0x8B497D: addss   xmm1, xmm0
0x8B4981: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8B4985: lea     edx, [esp+430h+var_420]
0x8B4989: addss   xmm2, xmm1
0x8B498D: movss   dword ptr [edx], xmm2
0x8B4991: mov     eax, [esp+430h+var_420]
0x8B4995: push    eax; float
0x8B4996: movaps  [esp+434h+var_390], xmm3
0x8B499E: call    sub_8A2AF0
0x8B49A3: fstp    [esp+434h+var_434]; float
0x8B49A6: lea     ecx, [esp+434h+var_390]
0x8B49AD: push    ecx; int
0x8B49AE: lea     ecx, [esp+438h+var_3F0]
0x8B49B2: call    sub_8B1B00
0x8B49B7: lea     edx, [esp+430h+var_3F0]
0x8B49BB: push    edx
0x8B49BC: lea     ecx, [esp+434h+var_3D0]
0x8B49C0: call    sub_8B1DD0
0x8B49C5: jmp     short loc_8B49F7
0x8B49C7: xorps   xmm0, xmm0
0x8B49CA: movaps  [esp+430h+var_3D0], xmm0
0x8B49CF: movaps  [esp+430h+var_3C0], xmm0
0x8B49D4: movaps  [esp+430h+var_3B0], xmm0
0x8B49DC: mov     dword ptr [esp+430h+var_3D0], 3F800000h
0x8B49E4: mov     dword ptr [esp+430h+var_3C0+4], 3F800000h
0x8B49EC: mov     dword ptr [esp+430h+var_3B0+8], 3F800000h
0x8B49F7: fld     [ebp+arg_8]
0x8B49FA: movaps  xmm1, xmmword ptr [edi]
0x8B49FD: fmul    [ebp+arg_8]
0x8B4A00: movaps  xmm2, xmmword ptr [esi]
0x8B4A03: mov     [esp+430h+var_420], 3F000000h
0x8B4A0B: movss   xmm0, [esp+430h+var_420]
0x8B4A11: fst     [esp+430h+var_414]
0x8B4A15: addps   xmm2, xmm1
0x8B4A18: fmul    [ebp+arg_8]
0x8B4A1B: movaps  xmm1, xmm0
0x8B4A1E: lea     eax, [esp+430h+var_1B0]
0x8B4A25: shufps  xmm1, xmm0, 0
0x8B4A29: fmul    dword ptr ds:0A97F2Ch
0x8B4A2F: movaps  [esp+430h+var_390], xmm0
0x8B4A37: xor     esi, esi
0x8B4A39: mulps   xmm1, xmm2
0x8B4A3C: fstp    [esp+430h+var_3D4]
0x8B4A40: mov     [esp+430h+var_1C0], eax
0x8B4A47: fld     [esp+430h+var_418]
0x8B4A4B: xorps   xmm0, xmm0
0x8B4A4E: fmul    [ebp+arg_8]
0x8B4A51: movaps  [esp+430h+var_3A0], xmm1
0x8B4A59: mov     [esp+430h+var_1BC], esi
0x8B4A60: mov     [esp+430h+var_1B8], 80000003h
0x8B4A6B: fmul    [ebp+arg_8]
0x8B4A6E: movaps  [esp+430h+var_3F0], xmm0
0x8B4A73: lea     eax, [esp+430h+var_170]
0x8B4A7A: mov     edx, 3
0x8B4A7F: fmul    dword ptr ds:0A97F28h
0x8B4A85: mov     ecx, 3F800000h
0x8B4A8A: fst     [esp+430h+var_41C]
0x8B4A8E: fadd    [esp+430h+var_3D4]
0x8B4A92: fdivr   dword ptr ds:0A2F948h
0x8B4A98: fld     [esp+430h+var_3D4]
0x8B4A9C: fmul    st, st(1)
0x8B4A9E: fmul    [ebp+arg_C]
0x8B4AA1: fstp    [esp+430h+var_420]
0x8B4AA5: fmul    [esp+430h+var_41C]
0x8B4AA9: fmul    [ebp+arg_C]
0x8B4AAC: fstp    [esp+430h+var_3F4]
0x8B4AB0: mov     [eax-40h], esi
0x8B4AB3: mov     [eax-3Ch], esi
0x8B4AB6: movaps  xmmword ptr [eax-30h], xmm0
0x8B4ABA: movaps  xmmword ptr [eax-20h], xmm0
0x8B4ABE: movaps  xmmword ptr [eax-10h], xmm0
0x8B4AC2: movaps  xmmword ptr [eax], xmm0
0x8B4AC5: movaps  xmmword ptr [eax+10h], xmm0
0x8B4AC9: movaps  xmmword ptr [eax+20h], xmm0
0x8B4ACD: movaps  xmmword ptr [eax+30h], xmm0
0x8B4AD1: mov     [eax+10h], ecx
0x8B4AD4: mov     [eax+24h], ecx
0x8B4AD7: mov     [eax+38h], ecx
0x8B4ADA: movaps  xmmword ptr [eax+40h], xmm0
0x8B4ADE: add     eax, 90h
0x8B4AE3: dec     edx
0x8B4AE4: jnz     short loc_8B4AB0
0x8B4AE6: lea     ecx, [esp+430h+var_380]
0x8B4AED: call    sub_539B00
0x8B4AF2: fld     [esp+430h+var_418]
0x8B4AF6: fmul    [esp+430h+var_418]
0x8B4AFA: movaps  xmm0, [esp+430h+var_3D0]
0x8B4AFF: mov     ecx, [esp+430h+var_3F4]
0x8B4B03: movaps  [esp+430h+var_330], xmm0
0x8B4B0B: fmul    dword ptr ds:0A41304h
0x8B4B11: movaps  xmm0, [esp+430h+var_3C0]
0x8B4B16: movaps  [esp+430h+var_320], xmm0
0x8B4B1E: movaps  xmm0, [esp+430h+var_3B0]
0x8B4B26: fmul    dword ptr ds:0A7C038h
0x8B4B2C: fld     [esp+430h+var_414]
0x8B4B30: movaps  [esp+430h+var_310], xmm0
0x8B4B38: fmul    dword ptr ds:0A41304h
0x8B4B3E: movaps  xmm0, [esp+430h+var_3A0]
0x8B4B46: movaps  [esp+430h+var_300], xmm0
0x8B4B4E: movaps  xmm0, [esp+430h+var_3F0]
0x8B4B53: faddp   st(1), st
0x8B4B55: movaps  [esp+430h+var_360], xmm0
0x8B4B5D: movaps  [esp+430h+var_350], xmm0
0x8B4B65: movaps  [esp+430h+var_340], xmm0
0x8B4B6D: fst     dword ptr [esp+430h+var_360]
0x8B4B74: lea     edx, [esp+430h+var_410]
0x8B4B78: fstp    dword ptr [esp+430h+var_350+4]
0x8B4B7F: push    edx
0x8B4B80: fld     [esp+434h+var_414]
0x8B4B84: mov     [esp+434h+var_414], ecx
0x8B4B88: fmul    dword ptr ds:0A3D65Ch
0x8B4B8E: movss   xmm0, [esp+434h+var_414]
0x8B4B94: lea     ecx, [esp+434h+var_360]
0x8B4B9B: mov     dword ptr [esp+434h+var_370], 0
0x8B4BA6: fstp    dword ptr [esp+434h+var_340+8]
0x8B4BAD: mov     dword ptr [esp+434h+var_370+4], 0
0x8B4BB8: mov     dword ptr [esp+434h+var_370+8], 0
0x8B4BC3: mov     dword ptr [esp+434h+var_370+0Ch], 0
0x8B4BCE: movaps  [esp+434h+var_410], xmm0
0x8B4BD3: call    sub_8D2A60
0x8B4BD8: mov     ecx, [esp+430h+var_3F4]
0x8B4BDC: mov     edx, [esp+430h+var_1B8]
0x8B4BE3: mov     eax, [esp+430h+var_41C]
0x8B4BE7: movaps  xmm0, [esp+430h+var_3F0]
0x8B4BEC: mov     [esp+430h+var_37C], ecx
0x8B4BF3: mov     ecx, [esp+430h+var_1BC]
0x8B4BFA: and     edx, 3FFFFFFFh
0x8B4C00: cmp     ecx, edx
0x8B4C02: movaps  [esp+430h+var_370], xmm0
0x8B4C0A: mov     [esp+430h+var_380], eax
0x8B4C11: jnz     short loc_8B4C2F
0x8B4C13: lea     eax, [esp+430h+var_1C0]
0x8B4C1A: push    90h
0x8B4C1F: push    eax
0x8B4C20: call    sub_8A6EE0
0x8B4C25: mov     ecx, [esp+438h+var_1BC]
0x8B4C2C: add     esp, 8
0x8B4C2F: mov     esi, [esp+430h+var_1C0]
0x8B4C36: lea     eax, [ecx+ecx*8]
0x8B4C39: shl     eax, 4
0x8B4C3C: add     eax, esi
0x8B4C3E: inc     ecx
0x8B4C3F: mov     [esp+430h+var_1BC], ecx
0x8B4C46: mov     ecx, [esp+430h+var_380]
0x8B4C4D: mov     [eax], ecx
0x8B4C4F: mov     edx, [esp+430h+var_37C]
0x8B4C56: mov     [eax+4], edx
0x8B4C59: movaps  xmm0, [esp+430h+var_370]
0x8B4C61: movaps  xmmword ptr [eax+10h], xmm0
0x8B4C65: movaps  xmm0, [esp+430h+var_360]
0x8B4C6D: movaps  xmmword ptr [eax+20h], xmm0
0x8B4C71: movaps  xmm0, [esp+430h+var_350]
0x8B4C79: movaps  xmmword ptr [eax+30h], xmm0
0x8B4C7D: movaps  xmm0, [esp+430h+var_340]
0x8B4C85: movaps  xmmword ptr [eax+40h], xmm0
0x8B4C89: movaps  xmm0, [esp+430h+var_330]
0x8B4C91: movaps  xmmword ptr [eax+50h], xmm0
0x8B4C95: movaps  xmm0, [esp+430h+var_320]
0x8B4C9D: movaps  xmmword ptr [eax+60h], xmm0
0x8B4CA1: movaps  xmm0, [esp+430h+var_310]
0x8B4CA9: movaps  xmmword ptr [eax+70h], xmm0
0x8B4CAD: movaps  xmm0, [esp+430h+var_300]
0x8B4CB5: lea     ecx, [esp+430h+var_2E0]
0x8B4CBC: movaps  xmmword ptr [eax+80h], xmm0
0x8B4CC3: call    sub_539B00
0x8B4CC8: fld     [esp+430h+var_418]
0x8B4CCC: movaps  xmm0, [esp+430h+var_3D0]
0x8B4CD1: fmul    dword ptr ds:0A3D65Ch
0x8B4CD7: movaps  [esp+430h+var_290], xmm0
0x8B4CDF: movaps  xmm0, [esp+430h+var_3C0]
0x8B4CE4: lea     eax, [esp+430h+var_410]
0x8B4CE8: fst     [esp+430h+var_3F4]
0x8B4CEC: movaps  [esp+430h+var_280], xmm0
0x8B4CF4: fstp    dword ptr [esp+430h+var_410+8]
0x8B4CF8: movaps  xmm0, [esp+430h+var_3B0]
0x8B4D00: push    eax
0x8B4D01: lea     ecx, [esp+434h+var_3D0]
0x8B4D05: movaps  [esp+434h+var_270], xmm0
0x8B4D0D: movaps  xmm0, [esp+434h+var_3A0]
0x8B4D15: push    ecx
0x8B4D16: lea     ecx, [esp+438h+var_410]
0x8B4D1A: movaps  [esp+438h+var_260], xmm0
0x8B4D22: mov     dword ptr [esp+438h+var_410], 0
0x8B4D2A: mov     dword ptr [esp+438h+var_410+4], 0
0x8B4D32: mov     dword ptr [esp+438h+var_410+0Ch], 0
0x8B4D3A: call    sub_88FE00
0x8B4D3F: fld     [ebp+arg_8]
0x8B4D42: movaps  xmm1, [esp+430h+var_260]
0x8B4D4A: fmul    dword ptr ds:0A97F50h
0x8B4D50: movaps  xmm0, [esp+430h+var_410]
0x8B4D55: mov     esi, [esp+430h+var_420]
0x8B4D59: mov     edi, [ebp+arg_8]
0x8B4D5C: fstp    dword ptr [esp+430h+var_2D0+8]
0x8B4D63: lea     edx, [esp+430h+var_380]
0x8B4D6A: addps   xmm0, xmm1
0x8B4D6D: push    edx; int
0x8B4D6E: movaps  [esp+434h+var_410], xmm0
0x8B4D73: movaps  [esp+434h+var_260], xmm0
0x8B4D7B: movaps  xmm0, [esp+434h+var_3F0]
0x8B4D80: push    esi; float
0x8B4D81: push    edi; float
0x8B4D82: mov     dword ptr [esp+43Ch+var_2D0], 0
0x8B4D8D: mov     dword ptr [esp+43Ch+var_2D0+4], 0
0x8B4D98: mov     dword ptr [esp+43Ch+var_2D0+0Ch], 0
0x8B4DA3: movaps  [esp+43Ch+var_360], xmm0
0x8B4DAB: movaps  [esp+43Ch+var_350], xmm0
0x8B4DB3: movaps  [esp+43Ch+var_340], xmm0
0x8B4DBB: call    sub_8B3550
0x8B4DC0: movaps  xmm0, [esp+43Ch+var_360]
0x8B4DC8: movaps  [esp+43Ch+var_2C0], xmm0
0x8B4DD0: movaps  xmm0, [esp+43Ch+var_350]
0x8B4DD8: movaps  [esp+43Ch+var_2B0], xmm0
0x8B4DE0: movaps  xmm0, [esp+43Ch+var_340]
0x8B4DE8: movaps  [esp+43Ch+var_2A0], xmm0
0x8B4DF0: movaps  xmm0, [esp+43Ch+var_390]
0x8B4DF8: add     esp, 0Ch
0x8B4DFB: movaps  [esp+430h+var_2F0], xmm0
0x8B4E03: lea     eax, [esp+430h+var_2F0]
0x8B4E0A: push    eax
0x8B4E0B: lea     ecx, [esp+434h+var_2C0]
0x8B4E12: call    sub_8D2A60
0x8B4E17: fld     [esp+430h+var_420]
0x8B4E1B: fmul    dword ptr ds:0A3D65Ch
0x8B4E21: lea     ecx, [esp+430h+var_2C0]
0x8B4E28: push    ecx; int
0x8B4E29: lea     edx, [esp+434h+var_2D0]
0x8B4E30: fstp    [esp+434h+var_41C]
0x8B4E34: mov     ebx, [esp+434h+var_41C]
0x8B4E38: push    ebx; float
0x8B4E39: push    edx; int
0x8B4E3A: call    sub_8B36D0
0x8B4E3F: fld     [esp+43Ch+var_3D4]
0x8B4E43: fmul    dword ptr ds:0A3D65Ch
0x8B4E49: mov     edx, [esp+43Ch+var_1B8]
0x8B4E50: mov     ecx, [esp+43Ch+var_1BC]
0x8B4E57: and     edx, 3FFFFFFFh
0x8B4E5D: add     esp, 0Ch
0x8B4E60: fst     [esp+430h+var_420]
0x8B4E64: cmp     ecx, edx
0x8B4E66: fstp    [esp+430h+var_2E0]
0x8B4E6D: mov     eax, ebx
0x8B4E6F: mov     [esp+430h+var_2DC], eax
0x8B4E76: jnz     short loc_8B4E94
0x8B4E78: lea     eax, [esp+430h+var_1C0]
0x8B4E7F: push    90h
0x8B4E84: push    eax
0x8B4E85: call    sub_8A6EE0
0x8B4E8A: mov     ecx, [esp+438h+var_1BC]
0x8B4E91: add     esp, 8
0x8B4E94: mov     edx, [esp+430h+var_1C0]
0x8B4E9B: lea     eax, [ecx+ecx*8]
0x8B4E9E: shl     eax, 4
0x8B4EA1: add     eax, edx
0x8B4EA3: inc     ecx
0x8B4EA4: mov     [esp+430h+var_1BC], ecx
0x8B4EAB: mov     ecx, [esp+430h+var_2E0]
0x8B4EB2: mov     [eax], ecx
0x8B4EB4: mov     edx, [esp+430h+var_2DC]
0x8B4EBB: mov     [eax+4], edx
0x8B4EBE: movaps  xmm0, [esp+430h+var_2D0]
0x8B4EC6: movaps  xmmword ptr [eax+10h], xmm0
0x8B4ECA: movaps  xmm0, [esp+430h+var_2C0]
0x8B4ED2: movaps  xmmword ptr [eax+20h], xmm0
0x8B4ED6: movaps  xmm0, [esp+430h+var_2B0]
0x8B4EDE: movaps  xmmword ptr [eax+30h], xmm0
0x8B4EE2: movaps  xmm0, [esp+430h+var_2A0]
0x8B4EEA: movaps  xmmword ptr [eax+40h], xmm0
0x8B4EEE: movaps  xmm0, [esp+430h+var_290]
0x8B4EF6: movaps  xmmword ptr [eax+50h], xmm0
0x8B4EFA: movaps  xmm0, [esp+430h+var_280]
0x8B4F02: movaps  xmmword ptr [eax+60h], xmm0
0x8B4F06: movaps  xmm0, [esp+430h+var_270]
0x8B4F0E: movaps  xmmword ptr [eax+70h], xmm0
0x8B4F12: movaps  xmm0, [esp+430h+var_260]
0x8B4F1A: lea     ecx, [esp+430h+var_250]
0x8B4F21: movaps  xmmword ptr [eax+80h], xmm0
0x8B4F28: call    sub_539B00
0x8B4F2D: fld     [esp+430h+var_3F4]
0x8B4F31: movaps  xmm0, [esp+430h+var_3D0]
0x8B4F36: fchs
0x8B4F38: movaps  [esp+430h+var_200], xmm0
0x8B4F40: fstp    dword ptr [esp+430h+var_410+8]
0x8B4F44: movaps  xmm0, [esp+430h+var_3C0]
0x8B4F49: lea     eax, [esp+430h+var_410]
0x8B4F4D: movaps  [esp+430h+var_1F0], xmm0
0x8B4F55: movaps  xmm0, [esp+430h+var_3B0]
0x8B4F5D: push    eax
0x8B4F5E: lea     ecx, [esp+434h+var_3D0]
0x8B4F62: movaps  [esp+434h+var_1E0], xmm0
0x8B4F6A: movaps  xmm0, [esp+434h+var_3A0]
0x8B4F72: push    ecx
0x8B4F73: lea     ecx, [esp+438h+var_410]
0x8B4F77: movaps  [esp+438h+var_1D0], xmm0
0x8B4F7F: mov     dword ptr [esp+438h+var_410], 0
0x8B4F87: mov     dword ptr [esp+438h+var_410+4], 0
0x8B4F8F: mov     dword ptr [esp+438h+var_410+0Ch], 0
0x8B4F97: call    sub_88FE00
0x8B4F9C: fld     [ebp+arg_8]
0x8B4F9F: movaps  xmm1, [esp+430h+var_1D0]
0x8B4FA7: fmul    dword ptr ds:0A97F4Ch
0x8B4FAD: movaps  xmm0, [esp+430h+var_410]
0x8B4FB2: lea     edx, [esp+430h+var_380]
0x8B4FB9: addps   xmm0, xmm1
0x8B4FBC: fstp    dword ptr [esp+430h+var_240+8]
0x8B4FC3: push    edx; int
0x8B4FC4: movaps  [esp+434h+var_410], xmm0
0x8B4FC9: movaps  [esp+434h+var_1D0], xmm0
0x8B4FD1: movaps  xmm0, [esp+434h+var_3F0]
0x8B4FD6: push    esi; float
0x8B4FD7: push    edi; float
0x8B4FD8: mov     dword ptr [esp+43Ch+var_240], 0
0x8B4FE3: mov     dword ptr [esp+43Ch+var_240+4], 0
0x8B4FEE: mov     dword ptr [esp+43Ch+var_240+0Ch], 0
0x8B4FF9: movaps  [esp+43Ch+var_360], xmm0
0x8B5001: movaps  [esp+43Ch+var_350], xmm0
0x8B5009: movaps  [esp+43Ch+var_340], xmm0
0x8B5011: call    sub_8B3550
0x8B5016: movaps  xmm0, [esp+43Ch+var_360]
0x8B501E: movaps  [esp+43Ch+var_230], xmm0
0x8B5026: movaps  xmm0, [esp+43Ch+var_350]
0x8B502E: movaps  [esp+43Ch+var_220], xmm0
0x8B5036: movaps  xmm0, [esp+43Ch+var_340]
0x8B503E: add     esp, 0Ch
0x8B5041: lea     eax, [esp+430h+var_2F0]
0x8B5048: movaps  [esp+430h+var_210], xmm0
0x8B5050: movaps  xmm0, [esp+430h+var_390]
0x8B5058: push    eax
0x8B5059: lea     ecx, [esp+434h+var_230]
0x8B5060: movaps  [esp+434h+var_2F0], xmm0
0x8B5068: call    sub_8D2A60
0x8B506D: lea     ecx, [esp+430h+var_230]
0x8B5074: push    ecx; int
0x8B5075: push    ebx; float
0x8B5076: lea     edx, [esp+438h+var_240]
0x8B507D: push    edx; int
0x8B507E: call    sub_8B36D0
0x8B5083: mov     ecx, [esp+43Ch+var_41C]
0x8B5087: mov     edx, [esp+43Ch+var_1B8]
0x8B508E: mov     eax, [esp+43Ch+var_420]
0x8B5092: mov     [esp+43Ch+var_24C], ecx
0x8B5099: mov     ecx, [esp+43Ch+var_1BC]
0x8B50A0: and     edx, 3FFFFFFFh
0x8B50A6: add     esp, 0Ch
0x8B50A9: cmp     ecx, edx
0x8B50AB: mov     [esp+430h+var_250], eax
0x8B50B2: jnz     short loc_8B50D0
0x8B50B4: lea     eax, [esp+430h+var_1C0]
0x8B50BB: push    90h
0x8B50C0: push    eax
0x8B50C1: call    sub_8A6EE0
0x8B50C6: mov     ecx, [esp+438h+var_1BC]
0x8B50CD: add     esp, 8
0x8B50D0: mov     edx, [esp+430h+var_1C0]
0x8B50D7: lea     eax, [ecx+ecx*8]
0x8B50DA: shl     eax, 4
0x8B50DD: add     eax, edx
0x8B50DF: inc     ecx
0x8B50E0: mov     [esp+430h+var_1BC], ecx
0x8B50E7: mov     ecx, [esp+430h+var_250]
0x8B50EE: mov     [eax], ecx
0x8B50F0: mov     edx, [esp+430h+var_24C]
0x8B50F7: mov     [eax+4], edx
0x8B50FA: movaps  xmm0, [esp+430h+var_240]
0x8B5102: movaps  xmmword ptr [eax+10h], xmm0
0x8B5106: movaps  xmm0, [esp+430h+var_230]
0x8B510E: movaps  xmmword ptr [eax+20h], xmm0
0x8B5112: movaps  xmm0, [esp+430h+var_220]
0x8B511A: movaps  xmmword ptr [eax+30h], xmm0
0x8B511E: movaps  xmm0, [esp+430h+var_210]
0x8B5126: movaps  xmmword ptr [eax+40h], xmm0
0x8B512A: movaps  xmm0, [esp+430h+var_200]
0x8B5132: movaps  xmmword ptr [eax+50h], xmm0
0x8B5136: movaps  xmm0, [esp+430h+var_1F0]
0x8B513E: movaps  xmmword ptr [eax+60h], xmm0
0x8B5142: movaps  xmm0, [esp+430h+var_1E0]
0x8B514A: movaps  xmmword ptr [eax+70h], xmm0
0x8B514E: movaps  xmm0, [esp+430h+var_1D0]
0x8B5156: movaps  xmmword ptr [eax+80h], xmm0
0x8B515D: mov     eax, [ebp+arg_10]
0x8B5160: push    eax
0x8B5161: lea     ecx, [esp+434h+var_1C0]
0x8B5168: push    ecx
0x8B5169: call    sub_8B3E60
0x8B516E: mov     eax, [esp+438h+var_1B8]
0x8B5175: add     esp, 8
0x8B5178: test    eax, eax
0x8B517A: js      short loc_8B51B7
0x8B517C: mov     ecx, large fs:2Ch
0x8B5183: mov     edx, ds:0BA9DE4h
0x8B5189: mov     edx, [ecx+edx*4]
0x8B518C: mov     ecx, [edx+19Ch]
0x8B5192: test    ecx, ecx
0x8B5194: jnz     short loc_8B519C
0x8B5196: mov     ecx, ds:0BA7D9Ch
0x8B519C: mov     edx, [esp+430h+var_1C0]
0x8B51A3: and     eax, 3FFFFFFFh
0x8B51A8: lea     eax, [eax+eax*8]
0x8B51AB: push    14h
0x8B51AD: shl     eax, 4
0x8B51B0: push    eax
0x8B51B1: push    edx
0x8B51B2: call    sub_8A75D0
0x8B51B7: pop     edi
0x8B51B8: pop     esi
0x8B51B9: xor     eax, eax
0x8B51BB: pop     ebx
0x8B51BC: mov     esp, ebp
0x8B51BE: pop     ebp
0x8B51BF: retn
