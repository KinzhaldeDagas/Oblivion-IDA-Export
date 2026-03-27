0x94BE00: push    ebp
0x94BE01: mov     ebp, esp
0x94BE03: and     esp, 0FFFFFFF0h
0x94BE06: sub     esp, 364h
0x94BE0C: mov     eax, ds:0B30AACh
0x94BE11: push    ebx
0x94BE12: push    esi
0x94BE13: push    edi
0x94BE14: mov     edi, [ebp+arg_0]
0x94BE17: mov     [esp+370h+var_4], eax
0x94BE1E: mov     eax, [edi]
0x94BE20: mov     ebx, ecx
0x94BE22: mov     ecx, edi
0x94BE24: call    dword ptr [eax+8]
0x94BE27: add     eax, 0FFFFFFFEh; switch 24 cases
0x94BE2A: cmp     eax, 17h
0x94BE2D: ja      def_94BE3A; jumptable 0094BE3A default case, cases 18,21
0x94BE33: movzx   ecx, ds:byte_94CC38[eax]
0x94BE3A: jmp     ds:jpt_94BE3A[ecx*4]; switch jump
0x94BE41: mov     eax, [ebp+arg_4]; jumptable 0094BE3A case 14
0x94BE44: xorps   xmm0, xmm0
0x94BE47: lea     edx, [esp+370h+var_2A0]
0x94BE4E: movaps  [esp+370h+var_2A0], xmm0
0x94BE56: movaps  [esp+370h+var_290], xmm0
0x94BE5E: movaps  [esp+370h+var_280], xmm0
0x94BE66: movaps  xmm0, xmmword ptr [edi+20h]
0x94BE6A: push    edx
0x94BE6B: push    eax
0x94BE6C: lea     ecx, [esp+378h+var_250]
0x94BE73: mov     dword ptr [esp+378h+var_2A0], 3F800000h
0x94BE7E: mov     dword ptr [esp+378h+var_290+4], 3F800000h
0x94BE89: mov     dword ptr [esp+378h+var_280+8], 3F800000h
0x94BE94: movaps  [esp+378h+var_270], xmm0
0x94BE9C: call    sub_8B1F70
0x94BEA1: mov     ecx, [ebp+arg_8]
0x94BEA4: mov     eax, [edi+10h]
0x94BEA7: push    ecx
0x94BEA8: lea     edx, [esp+374h+var_250]
0x94BEAF: push    edx
0x94BEB0: push    eax
0x94BEB1: mov     ecx, ebx
0x94BEB3: call    sub_94BE00
0x94BEB8: mov     ecx, [esp+370h+var_4]
0x94BEBF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x94BEC4: pop     edi
0x94BEC5: pop     esi
0x94BEC6: pop     ebx
0x94BEC7: mov     esp, ebp
0x94BEC9: pop     ebp
0x94BECA: retn    0Ch
0x94BECD: mov     edx, [ebp+arg_4]; jumptable 0094BE3A case 15
0x94BED0: lea     ecx, [edi+20h]
0x94BED3: push    ecx
0x94BED4: push    edx
0x94BED5: lea     ecx, [esp+378h+var_250]
0x94BEDC: call    sub_8B1F70
0x94BEE1: mov     eax, [ebp+arg_8]
0x94BEE4: mov     edx, [edi+10h]
0x94BEE7: push    eax
0x94BEE8: lea     ecx, [esp+374h+var_250]
0x94BEEF: push    ecx
0x94BEF0: push    edx
0x94BEF1: mov     ecx, ebx
0x94BEF3: call    sub_94BE00
0x94BEF8: mov     ecx, [esp+370h+var_4]
0x94BEFF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x94BF04: pop     edi
0x94BF05: pop     esi
0x94BF06: pop     ebx
0x94BF07: mov     esp, ebp
0x94BF09: pop     ebp
0x94BF0A: retn    0Ch
0x94BF0D: mov     ecx, [ebp+arg_4]; jumptable 0094BE3A case 25
0x94BF10: lea     eax, [edi+20h]
0x94BF13: push    eax
0x94BF14: push    ecx
0x94BF15: lea     ecx, [esp+378h+var_250]
0x94BF1C: call    sub_8B1F70
0x94BF21: mov     edx, [ebp+arg_8]
0x94BF24: mov     ecx, [edi+0Ch]
0x94BF27: push    edx
0x94BF28: lea     eax, [esp+374h+var_250]
0x94BF2F: push    eax
0x94BF30: push    ecx
0x94BF31: mov     ecx, ebx
0x94BF33: call    sub_94BE00
0x94BF38: mov     ecx, [esp+370h+var_4]
0x94BF3F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x94BF44: pop     edi
0x94BF45: pop     esi
0x94BF46: pop     ebx
0x94BF47: mov     esp, ebp
0x94BF49: pop     ebp
0x94BF4A: retn    0Ch
0x94BF4D: mov     edx, [ebp+arg_8]; jumptable 0094BE3A cases 3,22,24
0x94BF50: mov     eax, [ebp+arg_4]
0x94BF53: mov     ecx, [edi+0Ch]
0x94BF56: push    edx
0x94BF57: push    eax
0x94BF58: push    ecx
0x94BF59: mov     ecx, ebx
0x94BF5B: call    sub_94BE00
0x94BF60: mov     ecx, [esp+370h+var_4]
0x94BF67: call    @__security_check_cookie@4; __security_check_cookie(x)
0x94BF6C: pop     edi
0x94BF6D: pop     esi
0x94BF6E: pop     ebx
0x94BF6F: mov     esp, ebp
0x94BF71: pop     ebp
0x94BF72: retn    0Ch
0x94BF75: mov     edx, [edi]; jumptable 0094BE3A cases 2,12,13,16,20
0x94BF77: mov     ecx, edi
0x94BF79: call    dword ptr [edx+20h]
0x94BF7C: mov     esi, eax
0x94BF7E: cmp     esi, 0FFFFFFFFh
0x94BF81: jz      loc_94CBF1; jumptable 0094BE3A cases 4,8,11,17,19,23
0x94BF87: jmp     short loc_94BF90
0x94BF89: align 10h
0x94BF90: mov     eax, [edi]
0x94BF92: lea     ecx, [esp+370h+var_210]
0x94BF99: push    ecx
0x94BF9A: push    esi
0x94BF9B: mov     ecx, edi
0x94BF9D: call    dword ptr [eax+28h]
0x94BFA0: mov     edx, [ebp+arg_8]
0x94BFA3: mov     ecx, [ebp+arg_4]
0x94BFA6: push    edx
0x94BFA7: push    ecx
0x94BFA8: push    eax
0x94BFA9: mov     ecx, ebx
0x94BFAB: call    sub_94BE00
0x94BFB0: mov     edx, [edi]
0x94BFB2: push    esi
0x94BFB3: mov     ecx, edi
0x94BFB5: call    dword ptr [edx+24h]
0x94BFB8: mov     esi, eax
0x94BFBA: cmp     esi, 0FFFFFFFFh
0x94BFBD: jnz     short loc_94BF90
0x94BFBF: mov     ecx, [esp+370h+var_4]
0x94BFC6: call    @__security_check_cookie@4; __security_check_cookie(x)
0x94BFCB: pop     edi
0x94BFCC: pop     esi
0x94BFCD: pop     ebx
0x94BFCE: mov     esp, ebp
0x94BFD0: pop     ebp
0x94BFD1: retn    0Ch
0x94BFD4: fld     dword ptr [edi+0Ch]; jumptable 0094BE3A case 10
0x94BFD7: fcomp   dword ptr [ebx+8]
0x94BFDA: fnstsw  ax
0x94BFDC: test    ah, 41h
0x94BFDF: jnz     loc_94CBF1; jumptable 0094BE3A cases 4,8,11,17,19,23
0x94BFE5: mov     eax, [edi+20h]
0x94BFE8: xor     esi, esi
0x94BFEA: test    eax, eax
0x94BFEC: jle     loc_94CBF1; jumptable 0094BE3A cases 4,8,11,17,19,23
0x94BFF2: mov     ecx, [edi+18h]
0x94BFF5: mov     eax, [ecx]
0x94BFF7: lea     edx, [esp+370h+var_210]
0x94BFFE: push    edx
0x94BFFF: mov     edx, [edi+1Ch]
0x94C002: mov     edx, [edx+esi*4]
0x94C005: push    edx
0x94C006: call    dword ptr [eax+28h]
0x94C009: mov     ecx, [ebp+arg_8]
0x94C00C: mov     edx, [ebp+arg_4]
0x94C00F: push    ecx
0x94C010: push    edx
0x94C011: push    eax
0x94C012: mov     ecx, ebx
0x94C014: call    sub_94BE00
0x94C019: mov     eax, [edi+20h]
0x94C01C: inc     esi
0x94C01D: cmp     esi, eax
0x94C01F: jl      short loc_94BFF2
0x94C021: mov     ecx, [esp+370h+var_4]
0x94C028: call    @__security_check_cookie@4; __security_check_cookie(x)
0x94C02D: pop     edi
0x94C02E: pop     esi
0x94C02F: pop     ebx
0x94C030: mov     esp, ebp
0x94C032: pop     ebp
0x94C033: retn    0Ch
0x94C036: mov     ecx, edi; jumptable 0094BE3A case 5
0x94C038: call    sub_8F2260
0x94C03D: fstp    [esp+370h+var_358]
0x94C041: fld     dword ptr [edi+0Ch]
0x94C044: fst     [esp+370h+var_354]
0x94C048: fcomp   dword ptr [ebx+8]
0x94C04B: fnstsw  ax
0x94C04D: test    ah, 41h
0x94C050: jnz     loc_94CBF1; jumptable 0094BE3A cases 4,8,11,17,19,23
0x94C056: mov     esi, [ebp+arg_4]
0x94C059: lea     eax, [edi+30h]
0x94C05C: push    eax
0x94C05D: push    esi
0x94C05E: lea     ecx, [esp+378h+var_320]
0x94C062: call    sub_88FCC0
0x94C067: add     edi, 20h ; ' '
0x94C06A: push    edi
0x94C06B: push    esi
0x94C06C: lea     ecx, [esp+378h+var_350]
0x94C070: call    sub_88FCC0
0x94C075: movaps  xmm0, [esp+370h+var_320]
0x94C07A: subps   xmm0, xmmword ptr [esp+370h+var_350]
0x94C07F: mov     ecx, [esp+370h+var_354]
0x94C083: movaps  [esp+370h+var_2E0], xmm0
0x94C08B: mulps   xmm0, xmm0
0x94C08E: movaps  xmm1, xmm0
0x94C091: shufps  xmm1, xmm0, 55h ; 'U'
0x94C095: addss   xmm1, xmm0
0x94C099: movaps  xmm2, xmm0
0x94C09C: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x94C0A0: movaps  xmm0, xmm2
0x94C0A3: addss   xmm0, xmm1
0x94C0A7: movaps  xmmword ptr [esp+370h+var_301+1], xmm0
0x94C0AC: rsqrtss xmm1, xmm0
0x94C0B0: movss   dword ptr [esp+370h+var_301+1], xmm1
0x94C0B6: movaps  xmm1, xmmword ptr [esp+370h+var_301+1]
0x94C0BB: mulss   xmm0, xmm1
0x94C0BF: mulss   xmm0, xmm1
0x94C0C3: mov     [esp+370h+var_334], 40400000h
0x94C0CB: movss   xmm2, [esp+370h+var_334]
0x94C0D1: subss   xmm2, xmm0
0x94C0D5: mov     [esp+370h+var_334], 3F000000h
0x94C0DD: movss   xmm0, [esp+370h+var_334]
0x94C0E3: mulss   xmm0, xmm1
0x94C0E7: push    ecx
0x94C0E8: mulss   xmm0, xmm2
0x94C0EC: lea     ecx, [esp+374h+var_301+1]
0x94C0F0: movaps  [esp+374h+var_330], xmm0
0x94C0F5: call    sub_535AA0
0x94C0FA: movaps  xmm0, [esp+370h+var_330]
0x94C0FF: mov     ecx, ds:0BA7D98h
0x94C105: movaps  xmm1, xmm0
0x94C108: shufps  xmm1, xmm0, 0
0x94C10C: mulps   xmm1, [esp+370h+var_2E0]
0x94C114: movaps  xmm0, xmmword ptr [esp+370h+var_301+1]
0x94C119: movaps  xmm2, xmm0
0x94C11C: shufps  xmm2, xmm0, 0
0x94C120: movaps  xmm0, xmm2
0x94C123: mulps   xmm0, xmm1
0x94C126: movaps  xmm1, [esp+370h+var_320]
0x94C12B: addps   xmm1, xmm0
0x94C12E: movaps  [esp+370h+var_320], xmm1
0x94C133: movaps  xmm1, xmmword ptr [esp+370h+var_350]
0x94C138: subps   xmm1, xmm0
0x94C13B: push    8
0x94C13D: movaps  xmmword ptr [esp+374h+var_350], xmm1
0x94C142: mov     edx, [ecx]
0x94C144: push    90h
0x94C149: call    dword ptr [edx+10h]
0x94C14C: fld     [esp+370h+var_354]
0x94C150: fadd    [esp+370h+var_358]
0x94C154: push    1
0x94C156: push    9
0x94C158: push    ecx
0x94C159: fstp    [esp+37Ch+var_37C]
0x94C15C: lea     ecx, [esp+37Ch+var_350]
0x94C160: push    ecx
0x94C161: lea     edx, [esp+380h+var_320]
0x94C165: push    edx
0x94C166: mov     ecx, eax
0x94C168: mov     word ptr [eax+4], 90h
0x94C16E: call    sub_916380
0x94C173: push    esi
0x94C174: jmp     short loc_94C1C6
0x94C176: fld     dword ptr [edi+0Ch]; jumptable 0094BE3A case 7
0x94C179: fcom    dword ptr [ebx+8]
0x94C17C: fnstsw  ax
0x94C17E: test    ah, 41h
0x94C181: jnz     loc_94CBEF
0x94C187: movaps  xmm1, xmmword ptr [edi+10h]
0x94C18B: fstp    [esp+370h+var_358]
0x94C18F: movss   xmm0, [esp+370h+var_358]
0x94C195: mov     ecx, ds:0BA7D98h
0x94C19B: shufps  xmm0, xmm0, 0
0x94C19F: addps   xmm0, xmm1
0x94C1A2: push    8
0x94C1A4: movaps  [esp+374h+var_330], xmm0
0x94C1A9: mov     eax, [ecx]
0x94C1AB: push    70h ; 'p'
0x94C1AD: call    dword ptr [eax+10h]
0x94C1B0: lea     ecx, [esp+370h+var_330]
0x94C1B4: push    ecx
0x94C1B5: mov     ecx, eax
0x94C1B7: mov     word ptr [eax+4], 70h ; 'p'
0x94C1BD: call    sub_949CA0
0x94C1C2: mov     edx, [ebp+arg_4]
0x94C1C5: push    edx
0x94C1C6: mov     edi, eax
0x94C1C8: lea     ecx, [edi+10h]
0x94C1CB: call    sub_539980
0x94C1D0: mov     esi, [ebp+arg_8]
0x94C1D3: mov     eax, [esi+8]
0x94C1D6: mov     ecx, [esi+4]
0x94C1D9: and     eax, 3FFFFFFFh
0x94C1DE: cmp     ecx, eax
0x94C1E0: jnz     short loc_94C1ED
0x94C1E2: push    4
0x94C1E4: push    esi
0x94C1E5: call    sub_8A6EE0
0x94C1EA: add     esp, 8
0x94C1ED: mov     ecx, [esi+4]
0x94C1F0: mov     edx, [esi]
0x94C1F2: mov     [edx+ecx*4], edi
0x94C1F5: inc     dword ptr [esi+4]
0x94C1F8: mov     ecx, [esp+370h+var_4]
0x94C1FF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x94C204: pop     edi
0x94C205: pop     esi
0x94C206: pop     ebx
0x94C207: mov     esp, ebp
0x94C209: pop     ebp
0x94C20A: retn    0Ch
0x94C20D: fld     dword ptr [edi+0Ch]; jumptable 0094BE3A case 6
0x94C210: fst     [esp+370h+var_334]
0x94C214: fcomp   dword ptr [ebx+8]
0x94C217: fnstsw  ax
0x94C219: test    ah, 41h
0x94C21C: jnz     loc_94CBF1; jumptable 0094BE3A cases 4,8,11,17,19,23
0x94C222: lea     esi, [edi+20h]
0x94C225: push    3A83126Fh; float
0x94C22A: lea     ebx, [edi+10h]
0x94C22D: add     edi, 30h ; '0'
0x94C230: push    edi; int
0x94C231: push    esi; int
0x94C232: lea     eax, [esp+37Ch+var_301]
0x94C236: push    ebx; int
0x94C237: push    eax; int
0x94C238: mov     [esp+384h+var_354], esi
0x94C23C: call    sub_950B10
0x94C241: mov     cl, [eax]
0x94C243: add     esp, 14h
0x94C246: test    cl, cl
0x94C248: jz      loc_94CBF1; jumptable 0094BE3A cases 4,8,11,17,19,23
0x94C24E: movaps  xmm6, xmmword ptr [esi]
0x94C251: movaps  xmm0, xmmword ptr [ebx]
0x94C254: movaps  xmm2, xmm6
0x94C257: subps   xmm2, xmm0
0x94C25A: movaps  xmm0, xmm2
0x94C25D: mulps   xmm0, xmm2
0x94C260: movaps  xmm1, xmm0
0x94C263: shufps  xmm1, xmm0, 55h ; 'U'
0x94C267: addss   xmm1, xmm0
0x94C26B: movaps  xmm3, xmm0
0x94C26E: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x94C272: movaps  xmm0, xmm3
0x94C275: addss   xmm0, xmm1
0x94C279: movaps  xmmword ptr [esp+370h+var_301+1], xmm0
0x94C27E: rsqrtss xmm1, xmm0
0x94C282: movss   dword ptr [esp+370h+var_301+1], xmm1
0x94C288: movaps  xmm1, xmmword ptr [esp+370h+var_301+1]
0x94C28D: mulss   xmm0, xmm1
0x94C291: mulss   xmm0, xmm1
0x94C295: mov     [esp+370h+var_358], 40400000h
0x94C29D: movss   xmm4, [esp+370h+var_358]
0x94C2A3: movaps  xmm3, xmm4
0x94C2A6: subss   xmm3, xmm0
0x94C2AA: mov     [esp+370h+var_358], 3F000000h
0x94C2B2: movss   xmm5, [esp+370h+var_358]
0x94C2B8: movaps  xmm0, xmm5
0x94C2BB: mulss   xmm0, xmm1
0x94C2BF: mulss   xmm0, xmm3
0x94C2C3: movaps  xmm3, xmmword ptr [edi]
0x94C2C6: movaps  xmm1, xmm0
0x94C2C9: shufps  xmm1, xmm0, 0
0x94C2CD: mulps   xmm1, xmm2
0x94C2D0: movaps  xmm2, xmm3
0x94C2D3: subps   xmm2, xmm6
0x94C2D6: movaps  xmm0, xmm2
0x94C2D9: mulps   xmm0, xmm2
0x94C2DC: movaps  xmm6, xmm0
0x94C2DF: shufps  xmm6, xmm0, 55h ; 'U'
0x94C2E3: addss   xmm6, xmm0
0x94C2E7: movaps  xmm7, xmm0
0x94C2EA: shufps  xmm7, xmm0, 0AAh ; 'ª'
0x94C2EE: movaps  xmm0, xmm7
0x94C2F1: addss   xmm0, xmm6
0x94C2F5: movaps  [esp+370h+var_320], xmm0
0x94C2FA: rsqrtss xmm6, xmm0
0x94C2FE: movss   dword ptr [esp+370h+var_320], xmm6
0x94C304: movaps  xmm6, [esp+370h+var_320]
0x94C309: mulss   xmm0, xmm6
0x94C30D: mulss   xmm0, xmm6
0x94C311: movaps  xmm7, xmm4
0x94C314: subss   xmm7, xmm0
0x94C318: movaps  xmm0, xmm5
0x94C31B: mulss   xmm0, xmm6
0x94C31F: mulss   xmm0, xmm7
0x94C323: movaps  xmm6, xmm0
0x94C326: shufps  xmm6, xmm0, 0
0x94C32A: movaps  xmm0, xmm6
0x94C32D: mulps   xmm0, xmm2
0x94C330: movaps  [esp+370h+var_2C0], xmm0
0x94C338: movaps  xmm0, xmmword ptr [ebx]
0x94C33B: subps   xmm3, xmm0
0x94C33E: movaps  xmm0, xmm3
0x94C341: mulps   xmm0, xmm3
0x94C344: movaps  xmm2, xmm0
0x94C347: shufps  xmm2, xmm0, 55h ; 'U'
0x94C34B: addss   xmm2, xmm0
0x94C34F: movaps  xmm6, xmm0
0x94C352: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x94C356: movaps  xmm0, xmm6
0x94C359: addss   xmm0, xmm2
0x94C35D: movaps  [esp+370h+var_320], xmm0
0x94C362: rsqrtss xmm2, xmm0
0x94C366: movss   dword ptr [esp+370h+var_320], xmm2
0x94C36C: movaps  xmm2, [esp+370h+var_320]
0x94C371: mulss   xmm0, xmm2
0x94C375: mulss   xmm0, xmm2
0x94C379: movaps  [esp+370h+var_2E0], xmm4
0x94C381: movaps  xmmword ptr [esp+370h+var_301+1], xmm5
0x94C386: subss   xmm4, xmm0
0x94C38A: mulss   xmm5, xmm2
0x94C38E: movaps  xmm0, xmm5
0x94C391: mov     ecx, ds:0BA9DE4h
0x94C397: mov     edx, large fs:2Ch
0x94C39E: mov     eax, [edx+ecx*4]
0x94C3A1: mov     ecx, [eax+19Ch]
0x94C3A7: test    ecx, ecx
0x94C3A9: mulss   xmm0, xmm4
0x94C3AD: movaps  xmm2, xmm0
0x94C3B0: shufps  xmm2, xmm0, 0
0x94C3B4: movaps  xmm0, xmm2
0x94C3B7: mulps   xmm0, xmm3
0x94C3BA: movaps  xmm2, xmm0
0x94C3BD: shufps  xmm2, xmm0, 0C9h ; 'É'
0x94C3C1: movaps  xmm3, xmm1
0x94C3C4: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x94C3C8: shufps  xmm0, xmm0, 0D2h ; 'Ò'
0x94C3CC: shufps  xmm1, xmm1, 0C9h ; 'É'
0x94C3D0: movaps  [esp+370h+var_2F0], xmm0
0x94C3D8: movaps  [esp+370h+var_2D0], xmm1
0x94C3E0: mulps   xmm1, xmm0
0x94C3E3: movaps  [esp+370h+var_260], xmm3
0x94C3EB: mulps   xmm3, xmm2
0x94C3EE: movaps  xmm0, xmm1
0x94C3F1: subps   xmm0, xmm3
0x94C3F4: movaps  [esp+370h+var_2B0], xmm2
0x94C3FC: movaps  [esp+370h+var_320], xmm0
0x94C401: mov     [esp+370h+var_308], eax
0x94C405: jnz     short loc_94C40D
0x94C407: mov     ecx, ds:0BA7D9Ch
0x94C40D: push    14h
0x94C40F: push    80h ; '€'
0x94C414: call    sub_8A7560
0x94C419: mov     esi, [esp+370h+var_334]
0x94C41D: movaps  xmm0, [esp+370h+var_320]
0x94C422: mov     ecx, 8
0x94C427: mov     [esp+370h+var_350+8], ecx
0x94C42B: mov     [esp+370h+var_350+4], ecx
0x94C42F: mov     [esp+370h+var_350], eax
0x94C433: push    esi
0x94C434: lea     ecx, [esp+374h+var_330]
0x94C438: movaps  xmmword ptr [eax], xmm0
0x94C43B: call    sub_535AA0
0x94C440: mov     eax, [esp+370h+var_350]
0x94C444: movaps  xmm1, [esp+370h+var_330]
0x94C449: movaps  xmm0, xmmword ptr [eax]
0x94C44C: movaps  xmm2, xmmword ptr [ebx]
0x94C44F: movaps  xmm3, xmm1
0x94C452: shufps  xmm3, xmm1, 0
0x94C456: mulps   xmm3, xmm0
0x94C459: addps   xmm3, xmm2
0x94C45C: mulps   xmm0, xmm3
0x94C45F: movaps  xmm1, xmm0
0x94C462: shufps  xmm1, xmm0, 55h ; 'U'
0x94C466: addss   xmm1, xmm0
0x94C46A: movaps  xmm2, xmm0
0x94C46D: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x94C471: addss   xmm2, xmm1
0x94C475: movaps  xmm1, [esp+370h+var_320]
0x94C47A: lea     ecx, [esp+370h+var_358]
0x94C47E: movss   dword ptr [ecx], xmm2
0x94C482: fld     [esp+370h+var_358]
0x94C486: fchs
0x94C488: push    esi
0x94C489: fstp    dword ptr [eax+0Ch]
0x94C48C: movaps  xmm0, xmmword ptr ds:0A965C0h
0x94C493: mov     edx, [esp+374h+var_350]
0x94C497: xorps   xmm1, xmm0
0x94C49A: lea     ecx, [esp+374h+var_330]
0x94C49E: movaps  xmmword ptr [edx+10h], xmm1
0x94C4A2: call    sub_535AA0
0x94C4A7: mov     eax, [esp+370h+var_350]
0x94C4AB: movaps  xmm1, [esp+370h+var_330]
0x94C4B0: movaps  xmm0, xmmword ptr [eax+10h]
0x94C4B4: movaps  xmm2, xmmword ptr [ebx]
0x94C4B7: movaps  xmm3, xmm1
0x94C4BA: shufps  xmm3, xmm1, 0
0x94C4BE: mulps   xmm3, xmm0
0x94C4C1: addps   xmm3, xmm2
0x94C4C4: mulps   xmm0, xmm3
0x94C4C7: movaps  xmm1, xmm0
0x94C4CA: shufps  xmm1, xmm0, 55h ; 'U'
0x94C4CE: addss   xmm1, xmm0
0x94C4D2: movaps  xmm2, xmm0
0x94C4D5: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x94C4D9: addss   xmm2, xmm1
0x94C4DD: movaps  xmm1, [esp+370h+var_320]
0x94C4E2: lea     ecx, [esp+370h+var_358]
0x94C4E6: movss   dword ptr [ecx], xmm2
0x94C4EA: fld     [esp+370h+var_358]
0x94C4EE: movaps  xmm2, [esp+370h+var_260]
0x94C4F6: fchs
0x94C4F8: movaps  xmm0, xmm1
0x94C4FB: fstp    dword ptr [eax+1Ch]
0x94C4FE: mov     edx, [esp+370h+var_350]
0x94C502: shufps  xmm0, xmm1, 0C9h ; 'É'
0x94C506: movaps  [esp+370h+var_330], xmm0
0x94C50B: mulps   xmm2, xmm0
0x94C50E: movaps  xmm0, [esp+370h+var_2D0]
0x94C516: shufps  xmm1, xmm1, 0D2h ; 'Ò'
0x94C51A: mulps   xmm0, xmm1
0x94C51D: subps   xmm0, xmm2
0x94C520: push    esi
0x94C521: lea     ecx, [esp+374h+var_2D0]
0x94C528: movaps  [esp+374h+var_320], xmm1
0x94C52D: movaps  xmmword ptr [edx+20h], xmm0
0x94C531: call    sub_535AA0
0x94C536: mov     eax, [esp+370h+var_350]
0x94C53A: movaps  xmm0, xmmword ptr [eax+20h]
0x94C53E: movaps  xmm2, xmmword ptr [ebx]
0x94C541: movaps  xmm1, [esp+370h+var_2D0]
0x94C549: movaps  xmm3, xmm1
0x94C54C: shufps  xmm3, xmm1, 0
0x94C550: mulps   xmm3, xmm0
0x94C553: addps   xmm3, xmm2
0x94C556: mulps   xmm0, xmm3
0x94C559: movaps  xmm1, xmm0
0x94C55C: shufps  xmm1, xmm0, 55h ; 'U'
0x94C560: addss   xmm1, xmm0
0x94C564: movaps  xmm2, xmm0
0x94C567: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x94C56B: movaps  xmm0, [esp+370h+var_2C0]
0x94C573: addss   xmm2, xmm1
0x94C577: lea     ecx, [esp+370h+var_358]
0x94C57B: movss   dword ptr [ecx], xmm2
0x94C57F: fld     [esp+370h+var_358]
0x94C583: fchs
0x94C585: movaps  xmm1, xmm0
0x94C588: fstp    dword ptr [eax+2Ch]
0x94C58B: mov     edx, [esp+370h+var_350]
0x94C58F: movaps  xmm2, xmm0
0x94C592: shufps  xmm2, xmm0, 0C9h ; 'É'
0x94C596: mulps   xmm2, [esp+370h+var_320]
0x94C59B: shufps  xmm1, xmm0, 0D2h ; 'Ò'
0x94C59F: mulps   xmm1, [esp+370h+var_330]
0x94C5A4: subps   xmm2, xmm1
0x94C5A7: push    esi
0x94C5A8: lea     ecx, [esp+374h+var_2C0]
0x94C5AF: movaps  xmmword ptr [edx+30h], xmm2
0x94C5B3: call    sub_535AA0
0x94C5B8: mov     eax, [esp+370h+var_350]
0x94C5BC: movaps  xmm0, xmmword ptr [eax+30h]
0x94C5C0: movaps  xmm1, [esp+370h+var_2C0]
0x94C5C8: mov     ecx, [esp+370h+var_354]
0x94C5CC: movaps  xmm2, xmmword ptr [ecx]
0x94C5CF: movaps  xmm3, xmm1
0x94C5D2: shufps  xmm3, xmm1, 0
0x94C5D6: mulps   xmm3, xmm0
0x94C5D9: addps   xmm3, xmm2
0x94C5DC: mulps   xmm0, xmm3
0x94C5DF: movaps  xmm1, xmm0
0x94C5E2: shufps  xmm1, xmm0, 55h ; 'U'
0x94C5E6: addss   xmm1, xmm0
0x94C5EA: movaps  xmm2, xmm0
0x94C5ED: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x94C5F1: movaps  xmm0, [esp+370h+var_320]
0x94C5F6: mulps   xmm0, [esp+370h+var_2B0]
0x94C5FE: addss   xmm2, xmm1
0x94C602: lea     edx, [esp+370h+var_358]
0x94C606: movss   dword ptr [edx], xmm2
0x94C60A: fld     [esp+370h+var_358]
0x94C60E: movaps  xmm1, xmm0
0x94C611: fchs
0x94C613: movaps  xmm0, [esp+370h+var_330]
0x94C618: fstp    dword ptr [eax+3Ch]
0x94C61B: mulps   xmm0, [esp+370h+var_2F0]
0x94C623: mov     eax, [esp+370h+var_350]
0x94C627: subps   xmm0, xmm1
0x94C62A: push    esi
0x94C62B: lea     ecx, [esp+374h+var_2F0]
0x94C632: movaps  xmmword ptr [eax+40h], xmm0
0x94C636: call    sub_535AA0
0x94C63B: movaps  xmm1, [esp+370h+var_2F0]
0x94C643: mov     eax, [esp+370h+var_350]
0x94C647: movaps  xmm0, xmmword ptr [eax+40h]
0x94C64B: movaps  xmm2, xmmword ptr [edi]
0x94C64E: movaps  xmm3, xmm1
0x94C651: shufps  xmm3, xmm1, 0
0x94C655: mulps   xmm3, xmm0
0x94C658: addps   xmm3, xmm2
0x94C65B: mulps   xmm0, xmm3
0x94C65E: movaps  xmm1, xmm0
0x94C661: shufps  xmm1, xmm0, 55h ; 'U'
0x94C665: movaps  xmm2, xmm0
0x94C668: addss   xmm1, xmm0
0x94C66C: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x94C670: lea     ecx, [esp+370h+var_358]
0x94C674: addss   xmm2, xmm1
0x94C678: movss   dword ptr [ecx], xmm2
0x94C67C: fld     [esp+370h+var_358]
0x94C680: fchs
0x94C682: fstp    dword ptr [eax+4Ch]
0x94C685: mov     eax, [esp+370h+var_350]
0x94C689: movaps  xmm0, xmmword ptr [eax+30h]
0x94C68D: movaps  xmm1, xmmword ptr [eax+20h]
0x94C691: addps   xmm1, xmm0
0x94C694: movaps  xmmword ptr [eax+50h], xmm1
0x94C698: mov     eax, [esp+370h+var_350]
0x94C69C: movaps  xmm1, xmmword ptr [eax+50h]
0x94C6A0: movaps  xmm0, xmm1
0x94C6A3: mulps   xmm0, xmm1
0x94C6A6: movaps  xmm2, xmm0
0x94C6A9: shufps  xmm2, xmm0, 55h ; 'U'
0x94C6AD: addss   xmm2, xmm0
0x94C6B1: movaps  xmm3, xmm0
0x94C6B4: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x94C6B8: movaps  xmm0, xmm3
0x94C6BB: movaps  xmm3, [esp+370h+var_2E0]
0x94C6C3: addss   xmm0, xmm2
0x94C6C7: movaps  [esp+370h+var_330], xmm0
0x94C6CC: rsqrtss xmm2, xmm0
0x94C6D0: movss   dword ptr [esp+370h+var_330], xmm2
0x94C6D6: movaps  xmm2, [esp+370h+var_330]
0x94C6DB: mulss   xmm0, xmm2
0x94C6DF: mulss   xmm0, xmm2
0x94C6E3: subss   xmm3, xmm0
0x94C6E7: movaps  xmm0, xmmword ptr [esp+370h+var_301+1]
0x94C6EC: mulss   xmm0, xmm2
0x94C6F0: mulss   xmm0, xmm3
0x94C6F4: movaps  xmm2, xmm0
0x94C6F7: shufps  xmm2, xmm0, 0
0x94C6FB: mulps   xmm2, xmm1
0x94C6FE: push    esi
0x94C6FF: lea     ecx, [esp+374h+var_2F0]
0x94C706: movaps  xmmword ptr [eax+50h], xmm2
0x94C70A: call    sub_535AA0
0x94C70F: mov     eax, [esp+370h+var_350]
0x94C713: movaps  xmm0, xmmword ptr [eax+50h]
0x94C717: movaps  xmm1, [esp+370h+var_2F0]
0x94C71F: mov     edx, [esp+370h+var_354]
0x94C723: movaps  xmm2, xmmword ptr [edx]
0x94C726: movaps  xmm3, xmm1
0x94C729: shufps  xmm3, xmm1, 0
0x94C72D: mulps   xmm3, xmm0
0x94C730: addps   xmm3, xmm2
0x94C733: mulps   xmm0, xmm3
0x94C736: movaps  xmm1, xmm0
0x94C739: shufps  xmm1, xmm0, 55h ; 'U'
0x94C73D: addss   xmm1, xmm0
0x94C741: movaps  xmm2, xmm0
0x94C744: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x94C748: addss   xmm2, xmm1
0x94C74C: lea     ecx, [esp+370h+var_358]
0x94C750: movss   dword ptr [ecx], xmm2
0x94C754: fld     [esp+370h+var_358]
0x94C758: fchs
0x94C75A: fstp    dword ptr [eax+5Ch]
0x94C75D: mov     eax, [esp+370h+var_350]
0x94C761: movaps  xmm0, xmmword ptr [eax+40h]
0x94C765: movaps  xmm1, xmmword ptr [eax+30h]
0x94C769: addps   xmm1, xmm0
0x94C76C: movaps  xmmword ptr [eax+60h], xmm1
0x94C770: mov     eax, [esp+370h+var_350]
0x94C774: movaps  xmm1, xmmword ptr [eax+60h]
0x94C778: movaps  xmm0, xmm1
0x94C77B: mulps   xmm0, xmm1
0x94C77E: movaps  xmm2, xmm0
0x94C781: shufps  xmm2, xmm0, 55h ; 'U'
0x94C785: addss   xmm2, xmm0
0x94C789: movaps  xmm3, xmm0
0x94C78C: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x94C790: movaps  xmm0, xmm3
0x94C793: movaps  xmm3, [esp+370h+var_2E0]
0x94C79B: addss   xmm0, xmm2
0x94C79F: movaps  [esp+370h+var_330], xmm0
0x94C7A4: rsqrtss xmm2, xmm0
0x94C7A8: movss   dword ptr [esp+370h+var_330], xmm2
0x94C7AE: movaps  xmm2, [esp+370h+var_330]
0x94C7B3: mulss   xmm0, xmm2
0x94C7B7: mulss   xmm0, xmm2
0x94C7BB: subss   xmm3, xmm0
0x94C7BF: movaps  xmm0, xmmword ptr [esp+370h+var_301+1]
0x94C7C4: mulss   xmm0, xmm2
0x94C7C8: mulss   xmm0, xmm3
0x94C7CC: movaps  xmm2, xmm0
0x94C7CF: shufps  xmm2, xmm0, 0
0x94C7D3: mulps   xmm2, xmm1
0x94C7D6: push    esi
0x94C7D7: lea     ecx, [esp+374h+var_2F0]
0x94C7DE: movaps  xmmword ptr [eax+60h], xmm2
0x94C7E2: call    sub_535AA0
0x94C7E7: mov     eax, [esp+370h+var_350]
0x94C7EB: movaps  xmm0, xmmword ptr [eax+60h]
0x94C7EF: movaps  xmm1, [esp+370h+var_2F0]
0x94C7F7: movaps  xmm2, xmmword ptr [edi]
0x94C7FA: movaps  xmm3, xmm1
0x94C7FD: shufps  xmm3, xmm1, 0
0x94C801: mulps   xmm3, xmm0
0x94C804: addps   xmm3, xmm2
0x94C807: mulps   xmm0, xmm3
0x94C80A: movaps  xmm1, xmm0
0x94C80D: shufps  xmm1, xmm0, 55h ; 'U'
0x94C811: addss   xmm1, xmm0
0x94C815: movaps  xmm2, xmm0
0x94C818: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x94C81C: addss   xmm2, xmm1
0x94C820: lea     edx, [esp+370h+var_358]
0x94C824: movss   dword ptr [edx], xmm2
0x94C828: fld     [esp+370h+var_358]
0x94C82C: fchs
0x94C82E: push    esi
0x94C82F: fstp    dword ptr [eax+6Ch]
0x94C832: mov     eax, [esp+374h+var_350]
0x94C836: movaps  xmm0, xmmword ptr [eax+20h]
0x94C83A: movaps  xmm1, xmmword ptr [eax+40h]
0x94C83E: addps   xmm1, xmm0
0x94C841: movaps  xmmword ptr [eax+70h], xmm1
0x94C845: mov     eax, [esp+374h+var_350]
0x94C849: movaps  xmm1, xmmword ptr [eax+70h]
0x94C84D: movaps  xmm0, xmm1
0x94C850: mulps   xmm0, xmm1
0x94C853: movaps  xmm2, xmm0
0x94C856: shufps  xmm2, xmm0, 55h ; 'U'
0x94C85A: addss   xmm2, xmm0
0x94C85E: movaps  xmm3, xmm0
0x94C861: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x94C865: movaps  xmm0, xmm3
0x94C868: addss   xmm0, xmm2
0x94C86C: movaps  [esp+374h+var_330], xmm0
0x94C871: rsqrtss xmm2, xmm0
0x94C875: movss   dword ptr [esp+374h+var_330], xmm2
0x94C87B: movaps  xmm2, [esp+374h+var_330]
0x94C880: mulss   xmm0, xmm2
0x94C884: mulss   xmm0, xmm2
0x94C888: movaps  xmm3, xmm0
0x94C88B: movaps  xmm0, [esp+374h+var_2E0]
0x94C893: subss   xmm0, xmm3
0x94C897: movaps  xmm3, xmm0
0x94C89A: movaps  xmm0, xmmword ptr [esp+374h+var_301+1]
0x94C89F: mulss   xmm0, xmm2
0x94C8A3: mulss   xmm0, xmm3
0x94C8A7: movaps  xmm2, xmm0
0x94C8AA: shufps  xmm2, xmm0, 0
0x94C8AE: mulps   xmm2, xmm1
0x94C8B1: lea     ecx, [esp+374h+var_2F0]
0x94C8B8: movaps  xmmword ptr [eax+70h], xmm2
0x94C8BC: call    sub_535AA0
0x94C8C1: movaps  xmm1, [esp+370h+var_2F0]
0x94C8C9: mov     eax, [esp+370h+var_350]
0x94C8CD: movaps  xmm0, xmmword ptr [eax+70h]
0x94C8D1: movaps  xmm2, xmmword ptr [ebx]
0x94C8D4: movaps  xmm3, xmm1
0x94C8D7: shufps  xmm3, xmm1, 0
0x94C8DB: mulps   xmm3, xmm0
0x94C8DE: addps   xmm3, xmm2
0x94C8E1: mulps   xmm0, xmm3
0x94C8E4: movaps  xmm1, xmm0
0x94C8E7: shufps  xmm1, xmm0, 55h ; 'U'
0x94C8EB: movaps  xmm2, xmm0
0x94C8EE: addss   xmm1, xmm0
0x94C8F2: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x94C8F6: lea     ecx, [esp+370h+var_358]
0x94C8FA: addss   xmm2, xmm1
0x94C8FE: movss   dword ptr [ecx], xmm2
0x94C902: fld     [esp+370h+var_358]
0x94C906: mov     edx, [ebp+arg_4]
0x94C909: fchs
0x94C90B: push    edx
0x94C90C: lea     ecx, [esp+374h+var_350]
0x94C910: fstp    dword ptr [eax+7Ch]
0x94C913: call    sub_94BC40
0x94C918: mov     esi, eax
0x94C91A: add     esp, 4
0x94C91D: test    esi, esi
0x94C91F: jz      short loc_94C949
0x94C921: mov     edi, [ebp+arg_8]
0x94C924: mov     eax, [edi+8]
0x94C927: mov     ecx, [edi+4]
0x94C92A: and     eax, 3FFFFFFFh
0x94C92F: cmp     ecx, eax
0x94C931: jnz     short loc_94C93E
0x94C933: push    4
0x94C935: push    edi
0x94C936: call    sub_8A6EE0
0x94C93B: add     esp, 8
0x94C93E: mov     ecx, [edi+4]
0x94C941: mov     edx, [edi]
0x94C943: mov     [edx+ecx*4], esi
0x94C946: inc     dword ptr [edi+4]
0x94C949: mov     eax, [esp+370h+var_350+8]
0x94C94D: test    eax, eax
0x94C94F: js      loc_94CBF1; jumptable 0094BE3A cases 4,8,11,17,19,23
0x94C955: mov     ecx, [esp+370h+var_308]
0x94C959: mov     ecx, [ecx+19Ch]
0x94C95F: test    ecx, ecx
0x94C961: jnz     short loc_94C969
0x94C963: mov     ecx, ds:0BA7D9Ch
0x94C969: mov     edx, [esp+370h+var_350]
0x94C96D: and     eax, 3FFFFFFFh
0x94C972: push    14h
0x94C974: shl     eax, 4
0x94C977: push    eax
0x94C978: push    edx
0x94C979: call    sub_8A75D0
0x94C97E: mov     ecx, [esp+370h+var_4]
0x94C985: call    @__security_check_cookie@4; __security_check_cookie(x)
0x94C98A: pop     edi
0x94C98B: pop     esi
0x94C98C: pop     ebx
0x94C98D: mov     esp, ebp
0x94C98F: pop     ebp
0x94C990: retn    0Ch
0x94C993: fld     dword ptr [edi+0Ch]; jumptable 0094BE3A case 9
0x94C996: fst     [esp+370h+var_354]
0x94C99A: fcomp   dword ptr [ebx+8]
0x94C99D: fnstsw  ax
0x94C99F: test    ah, 41h
0x94C9A2: jnz     loc_94CBF1; jumptable 0094BE3A cases 4,8,11,17,19,23
0x94C9A8: mov     ecx, edi
0x94C9AA: call    sub_916BC0
0x94C9AF: mov     esi, eax
0x94C9B1: mov     eax, edi
0x94C9B3: call    sub_94B8B0
0x94C9B8: fstp    [esp+370h+var_308]
0x94C9BC: xor     ebx, ebx
0x94C9BE: xor     ecx, ecx
0x94C9C0: mov     [esp+370h+var_350], ecx
0x94C9C4: mov     [esp+370h+var_350+4], ebx
0x94C9C8: mov     [esp+370h+var_350+8], 80000000h
0x94C9D0: mov     eax, [esi+4]
0x94C9D3: cmp     eax, ebx
0x94C9D5: jle     short loc_94CA1B
0x94C9D7: mov     ecx, ds:0BA9DE4h
0x94C9DD: mov     edx, large fs:2Ch
0x94C9E4: mov     ecx, [edx+ecx*4]
0x94C9E7: mov     ecx, [ecx+19Ch]
0x94C9ED: cmp     ecx, ebx
0x94C9EF: jnz     short loc_94C9F7
0x94C9F1: mov     ecx, ds:0BA7D9Ch
0x94C9F7: push    14h
0x94C9F9: shl     eax, 4
0x94C9FC: push    eax
0x94C9FD: call    sub_8A7560
0x94CA02: mov     edx, [esp+370h+var_350+8]
0x94CA06: mov     ecx, eax
0x94CA08: mov     [esp+370h+var_350], ecx
0x94CA0C: mov     eax, [esi+4]
0x94CA0F: and     edx, 40000000h
0x94CA15: or      edx, eax
0x94CA17: mov     [esp+370h+var_350+8], edx
0x94CA1B: mov     edx, [esi+4]
0x94CA1E: cmp     edx, ebx
0x94CA20: mov     [esp+370h+var_350+4], edx
0x94CA24: mov     eax, [esi]
0x94CA26: jle     short loc_94CA43
0x94CA28: jmp     short loc_94CA30
0x94CA2A: align 10h
0x94CA30: movaps  xmm0, xmmword ptr [eax]
0x94CA33: movaps  xmmword ptr [ecx], xmm0
0x94CA36: add     eax, 10h
0x94CA39: add     ecx, 10h
0x94CA3C: dec     edx
0x94CA3D: jnz     short loc_94CA30
0x94CA3F: mov     ecx, [esp+370h+var_350]
0x94CA43: fld     dword ptr ds:0A5ACC4h
0x94CA49: fsub    [esp+370h+var_354]
0x94CA4D: fcomp   [esp+370h+var_308]
0x94CA51: fnstsw  ax
0x94CA53: test    ah, 5
0x94CA56: jp      loc_94CAE2
0x94CA5C: mov     esi, [esi+4]
0x94CA5F: cmp     esi, 4
0x94CA62: jl      short loc_94CABA
0x94CA64: lea     edx, [esi-4]
0x94CA67: shr     edx, 2
0x94CA6A: xor     eax, eax
0x94CA6C: inc     edx
0x94CA6D: lea     ebx, ds:0[edx*4]
0x94CA74: fld     dword ptr [eax+ecx+0Ch]
0x94CA78: add     eax, 40h ; '@'
0x94CA7B: dec     edx
0x94CA7C: fsub    [esp+370h+var_354]
0x94CA80: fstp    dword ptr [eax+ecx-34h]
0x94CA84: mov     ecx, [esp+370h+var_350]
0x94CA88: fld     dword ptr [eax+ecx-24h]
0x94CA8C: fsub    [esp+370h+var_354]
0x94CA90: fstp    dword ptr [eax+ecx-24h]
0x94CA94: mov     ecx, [esp+370h+var_350]
0x94CA98: fld     dword ptr [eax+ecx-14h]
0x94CA9C: fsub    [esp+370h+var_354]
0x94CAA0: fstp    dword ptr [eax+ecx-14h]
0x94CAA4: mov     ecx, [esp+370h+var_350]
0x94CAA8: fld     dword ptr [eax+ecx-4]
0x94CAAC: fsub    [esp+370h+var_354]
0x94CAB0: fstp    dword ptr [eax+ecx-4]
0x94CAB4: mov     ecx, [esp+370h+var_350]
0x94CAB8: jnz     short loc_94CA74
0x94CABA: cmp     ebx, esi
0x94CABC: jge     short loc_94CAE2
0x94CABE: mov     eax, ebx
0x94CAC0: shl     eax, 4
0x94CAC3: sub     esi, ebx
0x94CAC5: jmp     short loc_94CAD0
0x94CAC7: mov     ecx, [esp+370h+var_350]
0x94CACB: jmp     short loc_94CAD0
0x94CACD: align 10h
0x94CAD0: fld     dword ptr [eax+ecx+0Ch]
0x94CAD4: add     eax, 10h
0x94CAD7: dec     esi
0x94CAD8: fsub    [esp+370h+var_354]
0x94CADC: fstp    dword ptr [eax+ecx-4]
0x94CAE0: jnz     short loc_94CAC7
0x94CAE2: mov     eax, [esp+370h+var_354]
0x94CAE6: push    eax
0x94CAE7: lea     esi, [esp+374h+var_350]
0x94CAEB: mov     ecx, edi
0x94CAED: call    sub_94B9B0
0x94CAF2: mov     ecx, [ebp+arg_4]
0x94CAF5: push    ecx
0x94CAF6: mov     ecx, esi
0x94CAF8: call    sub_94BC40
0x94CAFD: mov     edi, eax
0x94CAFF: add     esp, 8
0x94CB02: test    edi, edi
0x94CB04: jz      short loc_94CB2F
0x94CB06: mov     esi, [ebp+arg_8]
0x94CB09: mov     edx, [esi+8]
0x94CB0C: mov     eax, [esi+4]
0x94CB0F: and     edx, 3FFFFFFFh
0x94CB15: cmp     eax, edx
0x94CB17: jnz     short loc_94CB24
0x94CB19: push    4
0x94CB1B: push    esi
0x94CB1C: call    sub_8A6EE0
0x94CB21: add     esp, 8
0x94CB24: mov     eax, [esi+4]
0x94CB27: mov     ecx, [esi]
0x94CB29: mov     [ecx+eax*4], edi
0x94CB2C: inc     dword ptr [esi+4]
0x94CB2F: mov     eax, [esp+370h+var_350+8]
0x94CB33: test    eax, eax
0x94CB35: js      loc_94CBF1; jumptable 0094BE3A cases 4,8,11,17,19,23
0x94CB3B: mov     ecx, ds:0BA9DE4h
0x94CB41: mov     edx, large fs:2Ch
0x94CB48: mov     edx, [edx+ecx*4]
0x94CB4B: mov     ecx, [edx+19Ch]
0x94CB51: test    ecx, ecx
0x94CB53: jnz     short loc_94CB5B
0x94CB55: mov     ecx, ds:0BA7D9Ch
0x94CB5B: and     eax, 3FFFFFFFh
0x94CB60: push    14h
0x94CB62: shl     eax, 4
0x94CB65: push    eax
0x94CB66: mov     eax, [esp+378h+var_350]
0x94CB6A: push    eax
0x94CB6B: call    sub_8A75D0
0x94CB70: mov     ecx, [esp+370h+var_4]
0x94CB77: call    @__security_check_cookie@4; __security_check_cookie(x)
0x94CB7C: pop     edi
0x94CB7D: pop     esi
0x94CB7E: pop     ebx
0x94CB7F: mov     esp, ebp
0x94CB81: pop     ebp
0x94CB82: retn    0Ch
0x94CB85: mov     eax, ds:0BA9514h; jumptable 0094BE3A default case, cases 18,21
0x94CB8A: mov     ecx, [eax+0Ch]
0x94CB8D: test    ecx, ecx
0x94CB8F: mov     [esp+370h+var_354], 0
0x94CB97: jle     short loc_94CBF1; jumptable 0094BE3A cases 4,8,11,17,19,23
0x94CB99: lea     esp, [esp+0]
0x94CBA0: mov     ecx, [eax+8]
0x94CBA3: mov     edx, [esp+370h+var_354]
0x94CBA7: mov     eax, [edi]
0x94CBA9: lea     esi, [ecx+edx*8]
0x94CBAC: mov     ecx, edi
0x94CBAE: call    dword ptr [eax+8]
0x94CBB1: cmp     [esi+4], eax
0x94CBB4: jnz     short loc_94CBC5
0x94CBB6: mov     ecx, [ebp+arg_8]
0x94CBB9: mov     edx, [ebp+arg_4]
0x94CBBC: push    ebx
0x94CBBD: push    ecx
0x94CBBE: push    edx
0x94CBBF: push    edi
0x94CBC0: call    dword ptr [esi]
0x94CBC2: add     esp, 10h
0x94CBC5: mov     ecx, [esp+370h+var_354]
0x94CBC9: mov     eax, ds:0BA9514h
0x94CBCE: mov     edx, [eax+0Ch]
0x94CBD1: inc     ecx
0x94CBD2: cmp     ecx, edx
0x94CBD4: mov     [esp+370h+var_354], ecx
0x94CBD8: jl      short loc_94CBA0
0x94CBDA: mov     ecx, [esp+370h+var_4]
0x94CBE1: call    @__security_check_cookie@4; __security_check_cookie(x)
0x94CBE6: pop     edi
0x94CBE7: pop     esi
0x94CBE8: pop     ebx
0x94CBE9: mov     esp, ebp
0x94CBEB: pop     ebp
0x94CBEC: retn    0Ch
0x94CBEF: fstp    st
0x94CBF1: mov     ecx, [esp+370h+var_4]; jumptable 0094BE3A cases 4,8,11,17,19,23
0x94CBF8: call    @__security_check_cookie@4; __security_check_cookie(x)
0x94CBFD: pop     edi
0x94CBFE: pop     esi
0x94CBFF: pop     ebx
0x94CC00: mov     esp, ebp
0x94CC02: pop     ebp
0x94CC03: retn    0Ch
