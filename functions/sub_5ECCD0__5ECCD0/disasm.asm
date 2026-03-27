0x5ECCD0: push    ebp
0x5ECCD1: mov     ebp, esp
0x5ECCD3: and     esp, 0FFFFFFF0h
0x5ECCD6: sub     esp, 0B4h
0x5ECCDC: mov     eax, ds:0B30AACh
0x5ECCE1: xor     eax, esp
0x5ECCE3: mov     [esp+0B4h+var_4], eax
0x5ECCEA: fldz
0x5ECCEC: mov     eax, [ebp+arg_0]
0x5ECCEF: push    ebx
0x5ECCF0: fst     [esp+0B8h+var_A8]
0x5ECCF4: push    esi
0x5ECCF5: fst     [esp+0BCh+var_98]
0x5ECCF9: fst     dword ptr [esp+0BCh+var_A0]
0x5ECCFD: push    edi
0x5ECCFE: mov     edi, [eax+0Ch]
0x5ECD01: fstp    [esp+0C0h+var_AC]
0x5ECD05: fld1
0x5ECD07: mov     esi, ecx
0x5ECD09: mov     ecx, [ebp+arg_4]
0x5ECD0C: fstp    [esp+0C0h+var_A4]
0x5ECD10: mov     [esp+0C0h+var_90], ecx
0x5ECD14: lea     ebx, [edi+44h]
0x5ECD17: mov     ecx, ebx
0x5ECD19: mov     [esp+0C0h+var_7C], eax
0x5ECD1D: mov     [esp+0C0h+var_B1], 0
0x5ECD22: call    ExtraDataList_GetExtraScript
0x5ECD27: mov     ecx, ds:0B333C4h
0x5ECD2D: cmp     esi, ecx
0x5ECD2F: mov     dword ptr [esp+0C0h+ArgList], eax
0x5ECD33: jnz     short loc_5ECD45
0x5ECD35: test    edi, edi
0x5ECD37: jz      short loc_5ECD45
0x5ECD39: cmp     edi, [ecx+578h]
0x5ECD3F: jz      loc_5ED587
0x5ECD45: test    eax, eax
0x5ECD47: jz      loc_5ECEBB
0x5ECD4D: mov     ecx, ebx; this
0x5ECD4F: call    ExtraDataList_GetExtraScriptEventList
0x5ECD54: mov     edi, eax
0x5ECD56: test    edi, edi
0x5ECD58: jz      loc_5ECEBB
0x5ECD5E: mov     ebx, dword ptr [esp+0C0h+ArgList]
0x5ECD62: lea     edx, [esp+0C0h+ArgList]
0x5ECD66: push    edx
0x5ECD67: push    offset aFtrapdamage; "fTrapDamage"
0x5ECD6C: mov     ecx, ebx
0x5ECD6E: call    sub_4FAA90
0x5ECD73: test    al, al
0x5ECD75: jz      short loc_5ECD89
0x5ECD77: mov     eax, dword ptr [esp+0C0h+ArgList]
0x5ECD7B: push    0; a3
0x5ECD7D: push    eax; ArgList
0x5ECD7E: mov     ecx, edi; this
0x5ECD80: call    sub_4FA110
0x5ECD85: fstp    [esp+0C0h+var_A8]
0x5ECD89: lea     ecx, [esp+0C0h+var_A0]
0x5ECD8D: push    ecx
0x5ECD8E: push    offset aFlevelleddamag; "fLevelledDamage"
0x5ECD93: mov     ecx, ebx
0x5ECD95: call    sub_4FAA90
0x5ECD9A: test    al, al
0x5ECD9C: jz      short loc_5ECDD6
0x5ECD9E: mov     edx, dword ptr [esp+0C0h+var_A0]
0x5ECDA2: push    0; a3
0x5ECDA4: push    edx; ArgList
0x5ECDA5: mov     ecx, edi; this
0x5ECDA7: call    sub_4FA110
0x5ECDAC: fstp    [esp+0C0h+var_78]
0x5ECDB0: fld     [esp+0C0h+var_78]
0x5ECDB4: mov     ecx, esi
0x5ECDB6: fstp    qword ptr [esp+0C0h+var_70]
0x5ECDBA: call    Actor_GetLevel
0x5ECDBF: movzx   eax, ax
0x5ECDC2: mov     [esp+0C0h+var_78], eax
0x5ECDC6: fild    [esp+0C0h+var_78]
0x5ECDCA: fmul    qword ptr [esp+0C0h+var_70]
0x5ECDCE: fadd    [esp+0C0h+var_A8]
0x5ECDD2: fstp    [esp+0C0h+var_A8]
0x5ECDD6: lea     ecx, [esp+0C0h+var_5C]
0x5ECDDA: push    ecx
0x5ECDDB: push    offset aFtrappushback; "fTrapPushBack"
0x5ECDE0: mov     ecx, ebx
0x5ECDE2: call    sub_4FAA90
0x5ECDE7: test    al, al
0x5ECDE9: jz      short loc_5ECDFD
0x5ECDEB: mov     edx, dword ptr [esp+0C0h+var_5C]
0x5ECDEF: push    0; a3
0x5ECDF1: push    edx; ArgList
0x5ECDF2: mov     ecx, edi; this
0x5ECDF4: call    sub_4FA110
0x5ECDF9: fstp    [esp+0C0h+var_98]
0x5ECDFD: lea     eax, [esp+0C0h+var_58]
0x5ECE01: push    eax
0x5ECE02: push    offset aFtrapminveloci; "fTrapMinVelocity"
0x5ECE07: mov     ecx, ebx
0x5ECE09: call    sub_4FAA90
0x5ECE0E: test    al, al
0x5ECE10: jz      short loc_5ECE43
0x5ECE12: mov     ecx, dword ptr [esp+0C0h+var_58]
0x5ECE16: push    0; a3
0x5ECE18: push    ecx; ArgList
0x5ECE19: mov     ecx, edi; this
0x5ECE1B: call    sub_4FA110
0x5ECE20: fstp    [esp+0C0h+var_AC]
0x5ECE24: fldz
0x5ECE26: fld     [esp+0C0h+var_AC]
0x5ECE2A: fcom    st(1)
0x5ECE2C: fnstsw  ax
0x5ECE2E: test    ah, 5
0x5ECE31: jp      short loc_5ECE37
0x5ECE33: fstp    st
0x5ECE35: jmp     short loc_5ECE3F
0x5ECE37: fstp    st(1)
0x5ECE39: fmul    qword ptr ds:0A39088h
0x5ECE3F: fstp    [esp+0C0h+var_AC]
0x5ECE43: lea     edx, [esp+0C0h+var_74]
0x5ECE47: push    edx
0x5ECE48: push    offset aBtrapcontinuou; "bTrapContinuous"
0x5ECE4D: mov     ecx, ebx
0x5ECE4F: call    sub_4FAA90
0x5ECE54: test    al, al
0x5ECE56: jz      short loc_5ECE7D
0x5ECE58: mov     eax, dword ptr [esp+0C0h+var_74]
0x5ECE5C: push    0; a3
0x5ECE5E: push    eax; ArgList
0x5ECE5F: mov     ecx, edi; this
0x5ECE61: call    sub_4FA110
0x5ECE66: fcomp   qword ptr ds:0A2FC68h
0x5ECE6C: mov     [esp+0C0h+var_B1], 1
0x5ECE71: fnstsw  ax
0x5ECE73: test    ah, 44h
0x5ECE76: jp      short loc_5ECE7D
0x5ECE78: mov     [esp+0C0h+var_B1], 0
0x5ECE7D: lea     ecx, [esp+0C0h+var_B0]
0x5ECE81: push    ecx
0x5ECE82: push    offset aFtrapdeathpush; "fTrapDeathPushBack"
0x5ECE87: mov     ecx, ebx
0x5ECE89: call    sub_4FAA90
0x5ECE8E: test    al, al
0x5ECE90: jz      short loc_5ECEA6
0x5ECE92: mov     edx, dword ptr [esp+0C0h+var_B0]
0x5ECE96: push    0; a3
0x5ECE98: push    edx; ArgList
0x5ECE99: mov     ecx, edi; this
0x5ECE9B: call    sub_4FA110
0x5ECEA0: fstp    dword ptr [esp+0C0h+var_A0]
0x5ECEA4: jmp     short loc_5ECEB4
0x5ECEA6: fld     [esp+0C0h+var_98]
0x5ECEAA: fdiv    qword ptr ds:0A3F3E8h
0x5ECEB0: fstp    dword ptr [esp+0C0h+var_A0]
0x5ECEB4: cmp     [esp+0C0h+var_B1], 0
0x5ECEB9: jnz     short loc_5ECECA
0x5ECEBB: mov     edi, [esp+0C0h+var_90]
0x5ECEBF: test    byte ptr [edi], 1
0x5ECEC2: jnz     loc_5ED587
0x5ECEC8: jmp     short loc_5ECECE
0x5ECECA: mov     edi, [esp+0C0h+var_90]
0x5ECECE: mov     ecx, esi; this
0x5ECED0: call    MobileObject_GetCharProxy
0x5ECED5: mov     ecx, eax
0x5ECED7: mov     eax, [esp+0C0h+var_7C]
0x5ECEDB: mov     eax, [eax+8]
0x5ECEDE: cmp     byte ptr [eax+18h], 1
0x5ECEE2: mov     dword ptr [esp+0C0h+var_74], ecx
0x5ECEE6: jnz     short loc_5ECF04
0x5ECEE8: mov     ebx, [eax+10h]
0x5ECEEB: add     ebx, eax
0x5ECEED: test    ebx, ebx
0x5ECEEF: mov     dword ptr [esp+0C0h+ArgList], ebx
0x5ECEF3: jz      short loc_5ECF10
0x5ECEF5: test    byte ptr [edi], 1
0x5ECEF8: jnz     short loc_5ECF22
0x5ECEFA: movaps  xmm1, xmmword ptr [edi+20h]
0x5ECEFE: movaps  xmm0, xmmword ptr [edi+10h]
0x5ECF02: jmp     short loc_5ECF30
0x5ECF04: mov     dword ptr [esp+0C0h+ArgList], 0
0x5ECF0C: mov     ebx, dword ptr [esp+0C0h+ArgList]
0x5ECF10: test    byte ptr [edi], 1
0x5ECF13: jnz     loc_5ED02E
0x5ECF19: movaps  xmm0, xmmword ptr [edi+10h]
0x5ECF1D: jmp     loc_5ED035
0x5ECF22: mov     eax, [ebx+50h]
0x5ECF25: movaps  xmm1, xmmword ptr [eax+0D0h]
0x5ECF2C: movaps  xmm0, xmmword ptr [eax+40h]
0x5ECF30: fldz
0x5ECF32: movaps  [esp+0C0h+var_20], xmm0
0x5ECF3A: fld     st
0x5ECF3C: movaps  xmmword ptr [esp+0C0h+var_34+4], xmm1
0x5ECF44: fld     [esp+0C0h+var_AC]
0x5ECF48: fucom   st(1)
0x5ECF4A: fnstsw  ax
0x5ECF4C: fstp    st(1)
0x5ECF4E: test    ah, 44h
0x5ECF51: jnp     short loc_5ECF91
0x5ECF53: movaps  xmm0, xmm1
0x5ECF56: mulps   xmm0, xmm1
0x5ECF59: movaps  xmm2, xmm0
0x5ECF5C: shufps  xmm2, xmm0, 55h ; 'U'
0x5ECF60: movaps  xmm3, xmm0
0x5ECF63: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x5ECF67: addss   xmm2, xmm0
0x5ECF6B: addss   xmm3, xmm2
0x5ECF6F: sqrtss  xmm3, xmm3
0x5ECF73: movss   [esp+0C0h+var_8C], xmm3
0x5ECF79: fld     [esp+0C0h+var_8C]
0x5ECF7D: fcomp   st(1)
0x5ECF7F: fnstsw  ax
0x5ECF81: test    ah, 1
0x5ECF84: jz      short loc_5ECF91
0x5ECF86: fstp    st
0x5ECF88: fstp    [esp+0C0h+var_A8]
0x5ECF8C: jmp     loc_5ED0C4
0x5ECF91: test    ecx, ecx
0x5ECF93: jz      loc_5ED0C0
0x5ECF99: mov     ecx, [ecx+8]
0x5ECF9C: test    ecx, ecx
0x5ECF9E: jz      loc_5ED027
0x5ECFA4: fstp    st
0x5ECFA6: fstp    st
0x5ECFA8: call    sub_8AC0A0
0x5ECFAD: fld     [esp+0C0h+var_AC]
0x5ECFB1: movaps  xmm1, xmmword ptr [esp+0C0h+var_34+4]
0x5ECFB9: fldz
0x5ECFBB: fxch    st(1)
0x5ECFBD: movaps  xmm0, xmmword ptr [eax]
0x5ECFC0: fucom   st(1)
0x5ECFC2: subps   xmm0, xmm1
0x5ECFC5: fnstsw  ax
0x5ECFC7: fstp    st(1)
0x5ECFC9: test    ah, 44h
0x5ECFCC: jp      short loc_5ECFD6
0x5ECFCE: fstp    st
0x5ECFD0: fld     dword ptr ds:0A31C80h
0x5ECFD6: mulps   xmm0, xmm0
0x5ECFD9: fstp    [esp+0C0h+var_A4]
0x5ECFDD: movaps  xmm1, xmm0
0x5ECFE0: shufps  xmm1, xmm0, 55h ; 'U'
0x5ECFE4: movaps  xmm2, xmm0
0x5ECFE7: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x5ECFEB: addss   xmm1, xmm0
0x5ECFEF: addss   xmm2, xmm1
0x5ECFF3: sqrtss  xmm2, xmm2
0x5ECFF7: movss   [esp+0C0h+var_8C], xmm2
0x5ECFFD: fld     [esp+0C0h+var_8C]
0x5ED001: fdiv    [esp+0C0h+var_A4]
0x5ED005: fstp    [esp+0C0h+var_A4]
0x5ED009: fld     dword ptr ds:0A379B4h
0x5ED00F: fcom    [esp+0C0h+var_A4]
0x5ED013: fnstsw  ax
0x5ED015: test    ah, 5
0x5ED018: jp      loc_5ED0C2
0x5ED01E: fstp    [esp+0C0h+var_A4]
0x5ED022: jmp     loc_5ED0C4
0x5ED027: mov     eax, offset stru_BA7A40
0x5ED02C: jmp     short loc_5ECFBD
0x5ED02E: mov     ecx, [eax+8]
0x5ED031: movaps  xmm0, xmmword ptr [ecx+30h]
0x5ED035: mov     edx, [esi]
0x5ED037: mov     eax, [edx+174h]
0x5ED03D: mov     ecx, esi
0x5ED03F: movaps  [esp+0C0h+var_20], xmm0
0x5ED047: call    eax
0x5ED049: fld     dword ptr [eax]
0x5ED04B: fld     qword ptr ds:0A39088h
0x5ED051: movaps  xmm0, [esp+0C0h+var_20]
0x5ED059: fmul    st(1), st
0x5ED05B: mov     ecx, esi
0x5ED05D: fxch    st(1)
0x5ED05F: fstp    dword ptr [esp+0C0h+var_34+4]
0x5ED066: fld     dword ptr [eax+4]
0x5ED069: fmul    st, st(1)
0x5ED06B: fstp    dword ptr [esp+0C0h+var_34+8]
0x5ED072: fmul    dword ptr [eax+8]
0x5ED075: fstp    dword ptr [esp+0C0h+var_34+0Ch]
0x5ED07C: movaps  xmm1, xmmword ptr [esp+0C0h+var_34+4]
0x5ED084: subps   xmm1, xmm0
0x5ED087: movaps  xmmword ptr [esp+0C0h+var_34+4], xmm1
0x5ED08F: call    sub_5E0660
0x5ED094: fmul    qword ptr ds:0A2FAA0h
0x5ED09A: fstp    dword ptr [esp+0C0h+var_B0]
0x5ED09E: fld     dword ptr [esp+0C0h+var_B0]
0x5ED0A2: fmul    qword ptr ds:0A39088h
0x5ED0A8: fstp    dword ptr [esp+0C0h+var_B0]
0x5ED0AC: fld     dword ptr [esp+0C0h+var_B0]
0x5ED0B0: fadd    dword ptr [esp+0C0h+var_34+0Ch]
0x5ED0B7: fstp    dword ptr [esp+0C0h+var_34+0Ch]
0x5ED0BE: jmp     short loc_5ED0C4
0x5ED0C0: fstp    st
0x5ED0C2: fstp    st
0x5ED0C4: mov     edx, [esi]
0x5ED0C6: mov     eax, [edx+198h]
0x5ED0CC: push    0
0x5ED0CE: mov     ecx, esi
0x5ED0D0: call    eax
0x5ED0D2: mov     ecx, [esp+0BCh+var_78]
0x5ED0D6: mov     edx, [ecx+8]
0x5ED0D9: mov     edi, [edx+1Ch]
0x5ED0DC: test    al, al
0x5ED0DE: mov     eax, [esi]
0x5ED0E0: mov     edx, [eax+288h]
0x5ED0E6: setz    byte ptr [esp+0BCh+var_90+3]
0x5ED0EB: and     edi, 3Fh
0x5ED0EE: cmp     edi, 10h
0x5ED0F1: mov     ecx, esi
0x5ED0F3: jnz     short loc_5ED12E
0x5ED0F5: push    43h ; 'C'
0x5ED0F7: call    edx
0x5ED0F9: fdiv    qword ptr ds:0A309F0h
0x5ED0FF: fstp    dword ptr [esp+0C0h+var_B0]
0x5ED103: fld1
0x5ED105: fld     dword ptr [esp+0C0h+var_B0]
0x5ED109: fcom    st(1)
0x5ED10B: fnstsw  ax
0x5ED10D: test    ah, 5
0x5ED110: jp      short loc_5ED116
0x5ED112: fstp    st(1)
0x5ED114: jmp     short loc_5ED118
0x5ED116: fstp    st
0x5ED118: fstp    [esp+0C0h+var_AC]
0x5ED11C: fld     [esp+0C0h+var_AC]
0x5ED120: fld1
0x5ED122: fsubrp  st(1), st
0x5ED124: fstp    dword ptr [esp+0C0h+var_B0]
0x5ED128: fld     dword ptr [esp+0C0h+var_B0]
0x5ED12C: jmp     short loc_5ED165
0x5ED12E: push    41h ; 'A'
0x5ED130: call    edx
0x5ED132: fdiv    qword ptr ds:0A309F0h
0x5ED138: fstp    dword ptr [esp+0C0h+var_B0]
0x5ED13C: fld1
0x5ED13E: fld     dword ptr [esp+0C0h+var_B0]
0x5ED142: fcom    st(1)
0x5ED144: fnstsw  ax
0x5ED146: test    ah, 5
0x5ED149: jp      short loc_5ED14F
0x5ED14B: fstp    st(1)
0x5ED14D: jmp     short loc_5ED151
0x5ED14F: fstp    st
0x5ED151: fstp    [esp+0C0h+var_AC]
0x5ED155: fld     [esp+0C0h+var_AC]
0x5ED159: fld1
0x5ED15B: fsubrp  st(1), st
0x5ED15D: fstp    dword ptr [esp+0C0h+var_B0]
0x5ED161: fld     dword ptr [esp+0C0h+var_B0]
0x5ED165: fmul    [esp+0C0h+var_A8]
0x5ED169: fstp    [esp+0C0h+var_A8]
0x5ED16D: fldz
0x5ED16F: fld     [esp+0C0h+var_A8]
0x5ED173: fcom    st(1)
0x5ED175: fnstsw  ax
0x5ED177: test    ah, 41h
0x5ED17A: jnz     loc_5ED57C
0x5ED180: cmp     [esp+0C0h+var_B1], 0
0x5ED185: jz      short loc_5ED19B
0x5ED187: fld     dword ptr ds:0B33E9Ch
0x5ED18D: fmul    [esp+0C0h+var_A4]
0x5ED191: fmulp   st(1), st
0x5ED193: fstp    [esp+0C0h+var_A8]
0x5ED197: fld     [esp+0C0h+var_A8]
0x5ED19B: mov     eax, [esi]
0x5ED19D: fxch    st(1)
0x5ED19F: mov     edx, [eax+220h]
0x5ED1A5: push    0
0x5ED1A7: sub     esp, 8
0x5ED1AA: fstp    [esp+0CCh+var_C8]
0x5ED1AE: mov     ecx, esi
0x5ED1B0: fstp    dword ptr [esp+0CCh+anonymous_0+4]; float
0x5ED1B3: call    edx
0x5ED1B5: mov     ecx, esi
0x5ED1B7: call    sub_5E0660
0x5ED1BC: fmul    qword ptr ds:0A2FAA0h
0x5ED1C2: mov     eax, [esi]
0x5ED1C4: mov     edx, [eax+154h]
0x5ED1CA: fstp    dword ptr [esp+0C0h+var_B0]
0x5ED1CE: mov     ecx, esi
0x5ED1D0: fld     dword ptr [esp+0C0h+var_B0]
0x5ED1D4: fld     st
0x5ED1D6: fmul    dword ptr ds:0B258E8h
0x5ED1DC: fstp    [esp+0C0h+var_70]
0x5ED1E0: fld     st
0x5ED1E2: fmul    dword ptr ds:0B258ECh
0x5ED1E8: fstp    [esp+0C0h+var_70+4]
0x5ED1EC: fmul    dword ptr ds:0B258F0h
0x5ED1F2: fstp    [esp+0C0h+var_68]
0x5ED1F6: call    edx
0x5ED1F8: fld     dword ptr [eax+88h]
0x5ED1FE: add     eax, 88h ; 'ˆ'
0x5ED203: fadd    [esp+0C0h+var_70]
0x5ED207: lea     ecx, [esp+0C0h+var_70]
0x5ED20B: fstp    [esp+0C0h+var_8C]
0x5ED20F: fld     dword ptr [eax+4]
0x5ED212: fadd    [esp+0C0h+var_70+4]
0x5ED216: fstp    [esp+0C0h+var_88]
0x5ED21A: fld     dword ptr [eax+8]
0x5ED21D: lea     eax, [esp+0C0h+var_20]
0x5ED224: fadd    [esp+0C0h+var_68]
0x5ED228: push    eax
0x5ED229: push    ecx; float
0x5ED22A: fstp    [esp+0C8h+var_84]
0x5ED22E: call    sub_43F3E0
0x5ED233: add     esp, 8
0x5ED236: cmp     edi, 10h
0x5ED239: jz      loc_5ED399
0x5ED23F: mov     edx, ds:0B3F9A8h
0x5ED245: fld     [esp+0C0h+var_A8]
0x5ED249: mov     ecx, ds:0B3F9ACh
0x5ED24F: fadd    st, st
0x5ED251: push    0; int
0x5ED253: sub     esp, 0Ch
0x5ED256: mov     eax, esp
0x5ED258: fstp    dword ptr [esp+0D0h+var_B0]
0x5ED25C: fld     dword ptr [esp+0D0h+var_B0]
0x5ED260: mov     [eax], edx
0x5ED262: mov     edx, ds:0B3F9B0h
0x5ED268: mov     [eax+4], ecx
0x5ED26B: mov     ecx, [esp+0D0h+var_8C]
0x5ED26F: mov     [eax+8], edx
0x5ED272: mov     edx, [esp+0D0h+var_88]
0x5ED276: sub     esp, 0Ch
0x5ED279: mov     eax, esp
0x5ED27B: mov     [eax], ecx
0x5ED27D: mov     ecx, [esp+0DCh+var_84]
0x5ED281: mov     [eax+4], edx
0x5ED284: mov     edx, [esp+0DCh+var_70]
0x5ED288: mov     [eax+8], ecx
0x5ED28B: mov     ecx, [esp+0DCh+var_70+4]
0x5ED28F: sub     esp, 0Ch
0x5ED292: mov     eax, esp
0x5ED294: mov     [eax], edx
0x5ED296: mov     edx, [esp+0E8h+var_68]
0x5ED29D: mov     [eax+4], ecx
0x5ED2A0: push    ecx
0x5ED2A1: mov     [eax+8], edx
0x5ED2A4: fstp    [esp+0ECh+var_EC]; float
0x5ED2A7: mov     ecx, esi
0x5ED2A9: call    sub_5EC400
0x5ED2AE: cmp     [esp+0C0h+var_B1], 0
0x5ED2B3: jnz     loc_5ED399
0x5ED2B9: test    ebx, ebx
0x5ED2BB: jz      loc_5ED399
0x5ED2C1: mov     eax, [esp+0C0h+var_90]
0x5ED2C5: mov     ebx, 1Fh
0x5ED2CA: cmp     [eax+30h], ebx
0x5ED2CD: jz      loc_5ED399
0x5ED2D3: lea     ecx, [esp+0C0h+var_20]
0x5ED2DA: push    ecx
0x5ED2DB: lea     edx, [esp+0C4h+var_8C]
0x5ED2DF: push    edx
0x5ED2E0: call    sub_43F3E0
0x5ED2E5: fld     dword ptr ds:0A3D65Ch
0x5ED2EB: mov     edx, [eax]
0x5ED2ED: movaps  xmm0, xmmword ptr [esp+0C8h+var_34+4]
0x5ED2F5: mov     ecx, dword ptr [esp+0C8h+ArgList]
0x5ED2F9: mov     ecx, [ecx+0Ch]
0x5ED2FC: mulps   xmm0, xmm0
0x5ED2FF: mov     [esp+0C8h+var_8C], edx
0x5ED303: mov     edi, [eax+4]
0x5ED306: movaps  xmm1, xmm0
0x5ED309: shufps  xmm1, xmm0, 55h ; 'U'
0x5ED30D: movaps  xmm2, xmm0
0x5ED310: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x5ED314: addss   xmm1, xmm0
0x5ED318: movss   xmm0, dword ptr ds:0A46C30h
0x5ED320: mov     [esp+0C8h+var_88], edi
0x5ED324: mov     eax, [eax+8]
0x5ED327: fstp    dword ptr [esp+0C8h+var_44]
0x5ED32E: addss   xmm2, xmm1
0x5ED332: mov     byte ptr [esp+0C8h+var_44+4], bl
0x5ED339: mov     ebx, [esp+0C8h+var_90]
0x5ED33D: mov     bl, [ebx+30h]
0x5ED340: sqrtss  xmm2, xmm2
0x5ED344: mov     [esp+0C8h+var_84], eax
0x5ED348: mov     [esp+0C8h+var_4C], eax
0x5ED34C: mulss   xmm2, xmm0
0x5ED350: mov     [esp+0C8h+var_54], edx
0x5ED354: movss   [esp+0C8h+var_70], xmm2
0x5ED35A: fld     [esp+0C8h+var_70]
0x5ED35E: lea     eax, [esp+0C8h+var_54]
0x5ED362: fstp    [esp+0C8h+var_48]
0x5ED369: lea     edx, [esi+ecx]
0x5ED36C: push    eax
0x5ED36D: mov     dword ptr [esp+0CCh+var_44+0Ch], 0
0x5ED378: mov     dword ptr [esp+0CCh+var_34], ecx
0x5ED37F: mov     byte ptr [esp+0CCh+var_44+5], bl
0x5ED386: mov     [esp+0CCh+var_50], edi
0x5ED38A: mov     dword ptr [esp+0CCh+var_44+8], edx
0x5ED391: call    sub_6B0C70
0x5ED396: add     esp, 0Ch
0x5ED399: push    1
0x5ED39B: push    1
0x5ED39D: mov     ecx, esi
0x5ED39F: call    Actor_PlayPainFX
0x5ED3A4: cmp     [esp+0C0h+var_91], 0
0x5ED3A9: jz      short loc_5ED3C1
0x5ED3AB: mov     edx, [esi]
0x5ED3AD: mov     eax, [edx+198h]
0x5ED3B3: push    0
0x5ED3B5: mov     ecx, esi
0x5ED3B7: call    eax
0x5ED3B9: test    al, al
0x5ED3BB: jz      short loc_5ED3C1
0x5ED3BD: mov     cl, 1
0x5ED3BF: jmp     short loc_5ED3C3
0x5ED3C1: xor     cl, cl
0x5ED3C3: fldz
0x5ED3C5: fld     [esp+0C0h+var_98]
0x5ED3C9: fcom    st(1)
0x5ED3CB: fnstsw  ax
0x5ED3CD: fstp    st(1)
0x5ED3CF: test    ah, 41h
0x5ED3D2: jnz     loc_5ED57E
0x5ED3D8: fld     dword ptr [esp+0C0h+var_A0]
0x5ED3DC: fcomp   qword ptr ds:0A37478h
0x5ED3E2: fnstsw  ax
0x5ED3E4: test    ah, 41h
0x5ED3E7: jnz     short loc_5ED3F3
0x5ED3E9: fld     dword ptr ds:0A57EF8h
0x5ED3EF: fstp    dword ptr [esp+0C0h+var_A0]
0x5ED3F3: test    cl, cl
0x5ED3F5: jz      loc_5ED4E5
0x5ED3FB: cmp     esi, ds:0B333C4h
0x5ED401: jz      loc_5ED4E5
0x5ED407: mov     edx, [esi]
0x5ED409: fstp    st
0x5ED40B: mov     eax, [edx+154h]
0x5ED411: push    0; a4
0x5ED413: push    1; a3
0x5ED415: push    1; a2
0x5ED417: mov     ecx, esi
0x5ED419: call    eax
0x5ED41B: push    eax; a1
0x5ED41C: call    sub_88D070
0x5ED421: mov     edx, [esi]
0x5ED423: mov     eax, [edx+154h]
0x5ED429: add     esp, 10h
0x5ED42C: mov     ecx, esi
0x5ED42E: call    eax
0x5ED430: push    eax
0x5ED431: call    sub_8B8700
0x5ED436: fld     dword ptr [esp+0C4h+var_A0]
0x5ED43A: movaps  xmm2, xmmword ptr [esp+0C4h+var_34+4]
0x5ED442: fstp    [esp+0C4h+var_C4]; float
0x5ED445: movss   xmm3, dword ptr ds:0A46C30h
0x5ED44D: movss   xmm4, dword ptr ds:0A3D65Ch
0x5ED455: mov     edx, [esi]
0x5ED457: mov     eax, [edx+154h]
0x5ED45D: movaps  xmm0, xmm2
0x5ED460: mulps   xmm0, xmm2
0x5ED463: movaps  xmm1, xmm0
0x5ED466: shufps  xmm1, xmm0, 55h ; 'U'
0x5ED46A: addss   xmm1, xmm0
0x5ED46E: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x5ED472: addss   xmm0, xmm1
0x5ED476: movaps  xmm1, xmm0
0x5ED479: rsqrtss xmm1, xmm1
0x5ED47D: mulss   xmm0, xmm1
0x5ED481: mulss   xmm0, xmm1
0x5ED485: subss   xmm3, xmm0
0x5ED489: xorps   xmm0, xmm0
0x5ED48C: movss   xmm0, xmm4
0x5ED490: mulss   xmm0, xmm1
0x5ED494: mulss   xmm0, xmm3
0x5ED498: shufps  xmm0, xmm0, 0
0x5ED49C: mulps   xmm0, xmm2
0x5ED49F: movss   xmm2, dword ptr ds:0A3F514h
0x5ED4A7: xorps   xmm1, xmm1
0x5ED4AA: movss   xmm1, xmm2
0x5ED4AE: movaps  xmm2, xmm1
0x5ED4B1: shufps  xmm2, xmm1, 0
0x5ED4B5: mulps   xmm2, xmm0
0x5ED4B8: movaps  xmm0, [esp+0C4h+var_20]
0x5ED4C0: lea     ecx, [esp+0C4h+var_20]
0x5ED4C7: push    ecx; int
0x5ED4C8: subps   xmm0, xmm2
0x5ED4CB: mov     ecx, esi
0x5ED4CD: movaps  [esp+0C8h+var_20], xmm0
0x5ED4D5: call    eax
0x5ED4D7: push    eax; int
0x5ED4D8: call    sub_5364B0
0x5ED4DD: add     esp, 0Ch
0x5ED4E0: jmp     loc_5ED580
0x5ED4E5: mov     esi, dword ptr [esp+0C0h+var_74]
0x5ED4E9: test    esi, esi
0x5ED4EB: jz      loc_5ED57E
0x5ED4F1: fcom    qword ptr ds:0A2FC70h
0x5ED4F7: fnstsw  ax
0x5ED4F9: test    ah, 41h
0x5ED4FC: jnz     short loc_5ED50E
0x5ED4FE: fstp    st
0x5ED500: fld     dword ptr ds:0A342A4h
0x5ED506: fstp    [esp+0C0h+var_98]
0x5ED50A: fld     [esp+0C0h+var_98]
0x5ED50E: cmp     [esp+0C0h+var_B1], 0
0x5ED513: jz      short loc_5ED527
0x5ED515: fld     dword ptr ds:0B33E9Ch
0x5ED51B: fmul    [esp+0C0h+var_A4]
0x5ED51F: fmulp   st(1), st
0x5ED521: fstp    [esp+0C0h+var_98]
0x5ED525: jmp     short loc_5ED529
0x5ED527: fstp    st
0x5ED529: mov     ecx, [esp+0C0h+var_7C]
0x5ED52D: cmp     dword ptr [ecx+8], 0
0x5ED531: jz      short loc_5ED580
0x5ED533: lea     edx, [esp+0C0h+var_34+4]
0x5ED53A: push    edx
0x5ED53B: lea     eax, [esp+0C4h+var_8C]
0x5ED53F: push    eax
0x5ED540: call    sub_43F3E0
0x5ED545: add     esp, 8
0x5ED548: lea     ecx, [esp+0C0h+var_8C]
0x5ED54C: call    sub_43F350
0x5ED551: fstp    st
0x5ED553: fld     [esp+0C0h+var_98]
0x5ED557: push    ecx
0x5ED558: lea     ecx, [esp+0C4h+var_8C]
0x5ED55C: fstp    [esp+0C4h+var_C4]; float
0x5ED55F: call    NiPoint3__MutliplyByValue
0x5ED564: fld     dword ptr ds:0A3D65Ch
0x5ED56A: push    ecx
0x5ED56B: lea     ecx, [esp+0C4h+var_8C]
0x5ED56F: fstp    [esp+0C4h+var_C4]; float
0x5ED572: push    ecx; int
0x5ED573: mov     ecx, esi
0x5ED575: call    sub_8907A0
0x5ED57A: jmp     short loc_5ED580
0x5ED57C: fstp    st
0x5ED57E: fstp    st
0x5ED580: mov     eax, [esp+0C0h+var_90]
0x5ED584: or      dword ptr [eax], 1
0x5ED587: mov     ecx, [esp+0C0h+var_4]
0x5ED58E: pop     edi
0x5ED58F: pop     esi
0x5ED590: pop     ebx
0x5ED591: xor     ecx, esp
0x5ED593: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5ED598: mov     esp, ebp
0x5ED59A: pop     ebp
0x5ED59B: retn    8
