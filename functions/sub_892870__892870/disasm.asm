0x892870: push    ebp
0x892871: mov     ebp, esp
0x892873: and     esp, 0FFFFFFF0h
0x892876: sub     esp, 74h
0x892879: mov     eax, ds:0B30AACh
0x89287E: xor     eax, esp
0x892880: mov     [esp+74h+var_4], eax
0x892884: push    ebx
0x892885: mov     ebx, [ebp+arg_8]
0x892888: push    esi
0x892889: push    edi
0x89288A: mov     edi, ecx
0x89288C: mov     ecx, [ebp+arg_4]
0x89288F: mov     esi, [ecx+0B0h]
0x892895: test    esi, esi
0x892897: jz      loc_892D6D
0x89289D: mov     edx, [esi+3B0h]
0x8928A3: cmp     edx, [edi+1C0h]
0x8928A9: mov     eax, [edi+1BCh]
0x8928AF: mov     [esp+80h+var_64], eax
0x8928B3: ja      loc_892D6D
0x8928B9: test    dword ptr [esi+1F4h], 4000h
0x8928C3: jnz     loc_892D6D
0x8928C9: call    sub_8AC0A0
0x8928CE: fldz
0x8928D0: movaps  xmm0, xmmword ptr [ebx+10h]
0x8928D4: movaps  [esp+80h+var_40], xmm0
0x8928D9: fst     dword ptr [esp+80h+var_40+8]
0x8928DD: movaps  xmm2, [esp+80h+var_40]
0x8928E2: movaps  xmm0, xmm2
0x8928E5: mulps   xmm0, xmm2
0x8928E8: movaps  xmm1, xmm0
0x8928EB: shufps  xmm1, xmm0, 55h ; 'U'
0x8928EF: movaps  xmm3, xmm0
0x8928F2: addss   xmm1, xmm0
0x8928F6: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8928FA: addss   xmm3, xmm1
0x8928FE: movss   dword ptr [esp+80h+var_50], xmm3
0x892904: fcom    dword ptr [esp+80h+var_50]
0x892908: fnstsw  ax
0x89290A: test    ah, 5
0x89290D: jp      short loc_89295F
0x89290F: movss   xmm3, dword ptr ds:0A46C30h
0x892917: movaps  xmm1, xmm0
0x89291A: shufps  xmm1, xmm0, 55h ; 'U'
0x89291E: addss   xmm1, xmm0
0x892922: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x892926: addss   xmm0, xmm1
0x89292A: movaps  xmm1, xmm0
0x89292D: rsqrtss xmm1, xmm1
0x892931: mulss   xmm0, xmm1
0x892935: mulss   xmm0, xmm1
0x892939: subss   xmm3, xmm0
0x89293D: movss   xmm0, dword ptr ds:0A3D65Ch
0x892945: mulss   xmm0, xmm1
0x892949: mulss   xmm0, xmm3
0x89294D: movaps  xmm1, xmm0
0x892950: shufps  xmm1, xmm0, 0
0x892954: mulps   xmm1, xmm2
0x892957: movaps  xmm2, xmm1
0x89295A: movaps  [esp+80h+var_40], xmm2
0x89295F: add     edi, 0FFFFFE10h
0x892965: jz      short loc_89297E
0x892967: mov     ecx, [edi+8]
0x89296A: test    ecx, ecx
0x89296C: jz      short loc_89297E
0x89296E: fstp    st
0x892970: call    sub_8AC0A0
0x892975: movaps  xmm2, [esp+80h+var_40]
0x89297A: fldz
0x89297C: jmp     short loc_892983
0x89297E: mov     eax, offset stru_BA7A40
0x892983: cmp     [esp+80h+var_64], 2
0x892988: movaps  xmm0, xmmword ptr [eax]
0x89298B: movaps  [esp+80h+var_50], xmm0
0x892990: fstp    dword ptr [esp+80h+var_50+8]
0x892994: movaps  xmm0, [esp+80h+var_50]
0x892999: mulps   xmm0, xmm0
0x89299C: movaps  xmm1, xmm0
0x89299F: shufps  xmm1, xmm0, 55h ; 'U'
0x8929A3: movaps  xmm3, xmm0
0x8929A6: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8929AA: addss   xmm1, xmm0
0x8929AE: addss   xmm3, xmm1
0x8929B2: sqrtss  xmm3, xmm3
0x8929B6: movss   dword ptr [esp+80h+var_50], xmm3
0x8929BC: fld     dword ptr [esp+80h+var_50]
0x8929C0: fst     [esp+80h+var_68]
0x8929C4: jnz     short loc_8929D2
0x8929C6: fadd    qword ptr ds:0A46E48h
0x8929CC: fstp    [esp+80h+var_68]
0x8929D0: jmp     short loc_8929D4
0x8929D2: fstp    st
0x8929D4: fld     [esp+80h+var_68]
0x8929D8: xorps   xmm0, xmm0
0x8929DB: fmul    qword ptr ds:0A967E0h
0x8929E1: lea     eax, [esp+80h+var_40]
0x8929E5: push    eax
0x8929E6: lea     ecx, [esp+84h+var_30]
0x8929EA: fstp    [esp+84h+var_68]
0x8929EE: push    ecx
0x8929EF: movss   xmm1, [esp+88h+var_68]
0x8929F5: movss   xmm0, xmm1
0x8929F9: movaps  xmm1, xmm0
0x8929FC: shufps  xmm1, xmm0, 0
0x892A00: mulps   xmm1, xmm2
0x892A03: movaps  [esp+88h+var_40], xmm1
0x892A08: call    sub_43F3E0
0x892A0D: fld     dword ptr ds:0A34BA0h
0x892A13: movaps  xmm0, xmmword ptr [esi+350h]
0x892A1A: fstp    [esp+88h+var_84]; float
0x892A1E: movaps  xmm1, [esp+88h+var_40]
0x892A23: add     esp, 4
0x892A26: lea     eax, [esp+84h+var_30]
0x892A2A: addps   xmm0, xmm1
0x892A2D: movaps  xmmword ptr [esi+350h], xmm0
0x892A34: mov     edx, 1
0x892A39: add     [esi+360h], edx
0x892A3F: push    eax; int
0x892A40: mov     ecx, esi
0x892A42: call    sub_8907A0
0x892A47: test    [esi+1F4h], dl
0x892A4D: jz      loc_892D6D
0x892A53: mov     ecx, [esi+8]
0x892A56: test    ecx, ecx
0x892A58: movaps  xmm0, xmmword ptr [ebx]
0x892A5B: movaps  [esp+80h+var_40], xmm0
0x892A60: jz      short loc_892A6E
0x892A62: call    sub_8AC070
0x892A67: movaps  xmm0, [esp+80h+var_40]
0x892A6C: jmp     short loc_892A73
0x892A6E: mov     eax, offset stru_BA7A40
0x892A73: movaps  xmm1, xmmword ptr [eax]
0x892A76: fldz
0x892A78: subps   xmm0, xmm1
0x892A7B: movaps  [esp+80h+var_40], xmm0
0x892A80: fst     dword ptr [esp+80h+var_40+8]
0x892A84: movaps  xmm0, xmmword ptr [esi+2C0h]
0x892A8B: movaps  [esp+80h+var_50], xmm0
0x892A90: fst     dword ptr [esp+80h+var_50+8]
0x892A94: movaps  xmm2, [esp+80h+var_50]
0x892A99: movss   xmm4, dword ptr ds:0A46C30h
0x892AA1: movss   xmm3, dword ptr ds:0A3D65Ch
0x892AA9: movaps  xmm7, [esp+80h+var_40]
0x892AAE: movaps  xmm0, xmm2
0x892AB1: mulps   xmm0, xmm2
0x892AB4: movaps  xmm1, xmm0
0x892AB7: shufps  xmm1, xmm0, 55h ; 'U'
0x892ABB: addss   xmm1, xmm0
0x892ABF: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x892AC3: addss   xmm0, xmm1
0x892AC7: movaps  xmm1, xmm0
0x892ACA: rsqrtss xmm1, xmm1
0x892ACE: mulss   xmm0, xmm1
0x892AD2: mulss   xmm0, xmm1
0x892AD6: movaps  xmm5, xmm4
0x892AD9: subss   xmm5, xmm0
0x892ADD: movaps  xmm0, xmm3
0x892AE0: mulss   xmm0, xmm1
0x892AE4: mulss   xmm0, xmm5
0x892AE8: movaps  xmm1, xmm0
0x892AEB: shufps  xmm1, xmm0, 0
0x892AEF: mulps   xmm1, xmm2
0x892AF2: movaps  xmm0, xmm1
0x892AF5: mulps   xmm0, xmm7
0x892AF8: movaps  xmm2, xmm0
0x892AFB: shufps  xmm2, xmm0, 55h ; 'U'
0x892AFF: addss   xmm2, xmm0
0x892B03: movaps  xmm5, xmm0
0x892B06: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x892B0A: addss   xmm5, xmm2
0x892B0E: movss   dword ptr [esp+80h+var_30], xmm5
0x892B14: fld     dword ptr [esp+80h+var_30]
0x892B18: fstp    [esp+80h+var_64]
0x892B1C: xorps   xmm2, xmm2
0x892B1F: movss   xmm0, [esp+80h+var_64]
0x892B25: movss   xmm2, xmm0
0x892B29: shufps  xmm2, xmm2, 0
0x892B2D: mulps   xmm2, xmm1
0x892B30: movaps  xmm0, xmm2
0x892B33: mulps   xmm0, xmm2
0x892B36: movaps  xmm1, xmm0
0x892B39: shufps  xmm1, xmm0, 55h ; 'U'
0x892B3D: addss   xmm1, xmm0
0x892B41: movaps  xmm5, xmm0
0x892B44: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x892B48: addss   xmm5, xmm1
0x892B4C: sqrtss  xmm5, xmm5
0x892B50: movss   dword ptr [esp+80h+var_30], xmm5
0x892B56: fld     dword ptr [esp+80h+var_30]
0x892B5A: fld     dword ptr [esi+3A4h]
0x892B60: movaps  xmm0, xmmword ptr [ebx+10h]
0x892B64: fmul    qword ptr ds:0A2FAA0h
0x892B6A: movaps  [esp+80h+var_30], xmm0
0x892B6F: movaps  [esp+80h+var_60], xmm4
0x892B74: movaps  [esp+80h+var_20], xmm3
0x892B79: fdivp   st(1), st
0x892B7B: movaps  [esp+80h+var_50], xmm2
0x892B80: fsub    dword ptr ds:0B2E89Ch
0x892B86: fstp    [esp+80h+var_68]
0x892B8A: fst     dword ptr [esp+80h+var_30+8]
0x892B8E: movaps  xmm5, [esp+80h+var_30]
0x892B93: movaps  xmm0, xmm5
0x892B96: mulps   xmm0, xmm5
0x892B99: movaps  xmm1, xmm0
0x892B9C: shufps  xmm1, xmm0, 55h ; 'U'
0x892BA0: addss   xmm1, xmm0
0x892BA4: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x892BA8: addss   xmm0, xmm1
0x892BAC: movaps  xmm1, xmm0
0x892BAF: rsqrtss xmm1, xmm1
0x892BB3: mulss   xmm0, xmm1
0x892BB7: mulss   xmm0, xmm1
0x892BBB: test    edi, edi
0x892BBD: movaps  xmm6, xmm4
0x892BC0: subss   xmm6, xmm0
0x892BC4: movaps  xmm0, xmm3
0x892BC7: mulss   xmm0, xmm1
0x892BCB: mulss   xmm0, xmm6
0x892BCF: movaps  xmm1, xmm0
0x892BD2: shufps  xmm1, xmm0, 0
0x892BD6: mulps   xmm1, xmm5
0x892BD9: movaps  [esp+80h+var_30], xmm1
0x892BDE: jz      short loc_892C0B
0x892BE0: mov     ecx, [edi+8]
0x892BE3: test    ecx, ecx
0x892BE5: jz      short loc_892C0B
0x892BE7: fstp    st
0x892BE9: call    sub_8AC0A0
0x892BEE: movaps  xmm1, [esp+80h+var_30]
0x892BF3: fldz
0x892BF5: movaps  xmm7, [esp+80h+var_40]
0x892BFA: movaps  xmm2, [esp+80h+var_50]
0x892BFF: movaps  xmm4, [esp+80h+var_60]
0x892C04: movaps  xmm3, [esp+80h+var_20]
0x892C09: jmp     short loc_892C10
0x892C0B: mov     eax, offset stru_BA7A40
0x892C10: movaps  xmm0, xmmword ptr [eax]
0x892C13: movaps  [esp+80h+var_50], xmm0
0x892C18: fst     dword ptr [esp+80h+var_50+8]
0x892C1C: movaps  xmm6, [esp+80h+var_50]
0x892C21: movaps  xmm0, xmm6
0x892C24: mulps   xmm0, xmm6
0x892C27: movaps  xmm5, xmm0
0x892C2A: shufps  xmm5, xmm0, 55h ; 'U'
0x892C2E: addss   xmm5, xmm0
0x892C32: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x892C36: addss   xmm0, xmm5
0x892C3A: movaps  xmm5, xmm0
0x892C3D: rsqrtss xmm5, xmm5
0x892C41: mulss   xmm0, xmm5
0x892C45: mulss   xmm0, xmm5
0x892C49: subss   xmm4, xmm0
0x892C4D: mulss   xmm3, xmm5
0x892C51: mulss   xmm3, xmm4
0x892C55: movaps  xmm0, xmm3
0x892C58: shufps  xmm0, xmm0, 0
0x892C5C: mulps   xmm0, xmm6
0x892C5F: mulps   xmm0, xmm1
0x892C62: movaps  xmm1, xmm0
0x892C65: shufps  xmm1, xmm0, 55h ; 'U'
0x892C69: movaps  xmm3, xmm0
0x892C6C: addss   xmm1, xmm0
0x892C70: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x892C74: addss   xmm3, xmm1
0x892C78: movss   dword ptr [esp+80h+var_20], xmm3
0x892C7E: fld     dword ptr [esp+80h+var_20]
0x892C82: fchs
0x892C84: fmul    [esp+80h+var_68]
0x892C88: fstp    [esp+80h+var_68]
0x892C8C: fld     [esp+80h+var_68]
0x892C90: fld1
0x892C92: fcom    st(1)
0x892C94: fnstsw  ax
0x892C96: fld1
0x892C98: test    ah, 5
0x892C9B: jp      short loc_892CA3
0x892C9D: fst     [esp+80h+var_68]
0x892CA1: jmp     short loc_892CAB
0x892CA3: fxch    st(2)
0x892CA5: fst     [esp+80h+var_68]
0x892CA9: fxch    st(2)
0x892CAB: fld     [esp+80h+var_68]
0x892CAF: fcomp   qword ptr ds:0A2FC68h
0x892CB5: fnstsw  ax
0x892CB7: test    ah, 5
0x892CBA: jnp     loc_892D61
0x892CC0: fxch    st(1)
0x892CC2: fcomp   st(2)
0x892CC4: fnstsw  ax
0x892CC6: test    ah, 5
0x892CC9: jp      short loc_892CD7
0x892CCB: fstp    st(1)
0x892CCD: fstp    [esp+80h+var_68]
0x892CD1: fld     [esp+80h+var_68]
0x892CD5: jmp     short loc_892CE6
0x892CD7: fstp    st
0x892CD9: fcom    st(1)
0x892CDB: fnstsw  ax
0x892CDD: test    ah, 41h
0x892CE0: jnz     loc_892D69
0x892CE6: movaps  xmm1, xmm7
0x892CE9: fxch    st(1)
0x892CEB: shufps  xmm1, xmm7, 0D2h ; 'Ò'
0x892CEF: movaps  xmm0, xmm2
0x892CF2: shufps  xmm0, xmm2, 0C9h ; 'É'
0x892CF6: mulps   xmm0, xmm1
0x892CF9: movaps  xmm1, xmm2
0x892CFC: shufps  xmm1, xmm2, 0D2h ; 'Ò'
0x892D00: shufps  xmm7, xmm7, 0C9h ; 'É'
0x892D04: mulps   xmm1, xmm7
0x892D07: subps   xmm1, xmm0
0x892D0A: movaps  [esp+80h+var_20], xmm1
0x892D0F: fcomp   dword ptr [esp+80h+var_20+8]
0x892D13: fnstsw  ax
0x892D15: test    ah, 5
0x892D18: jp      short loc_892D28
0x892D1A: fmul    qword ptr ds:0A3D360h
0x892D20: fstp    [esp+80h+var_68]
0x892D24: fld     [esp+80h+var_68]
0x892D28: fld     dword ptr ds:0A3D9A4h
0x892D2E: sub     esp, 8
0x892D31: fstp    [esp+88h+var_84]; float
0x892D35: mov     ecx, esi
0x892D37: fmul    dword ptr ds:0B2E898h
0x892D3D: fstp    [esp+88h+var_64]
0x892D41: fld     [esp+88h+var_64]
0x892D45: fstp    [esp+88h+var_88]; float
0x892D48: call    sub_890890
0x892D4D: pop     edi
0x892D4E: pop     esi
0x892D4F: pop     ebx
0x892D50: mov     ecx, [esp+74h+var_4]
0x892D54: xor     ecx, esp
0x892D56: call    @__security_check_cookie@4; __security_check_cookie(x)
0x892D5B: mov     esp, ebp
0x892D5D: pop     ebp
0x892D5E: retn    0Ch
0x892D61: fstp    st(2)
0x892D63: fstp    st(2)
0x892D65: fstp    st(1)
0x892D67: jmp     short loc_892D6B
0x892D69: fstp    st
0x892D6B: fstp    st
0x892D6D: mov     ecx, [esp+80h+var_4]
0x892D71: pop     edi
0x892D72: pop     esi
0x892D73: pop     ebx
0x892D74: xor     ecx, esp
0x892D76: call    @__security_check_cookie@4; __security_check_cookie(x)
0x892D7B: mov     esp, ebp
0x892D7D: pop     ebp
0x892D7E: retn    0Ch
