0x8FFC70: push    ebp
0x8FFC71: mov     ebp, esp
0x8FFC73: and     esp, 0FFFFFFF0h
0x8FFC76: sub     esp, 374h
0x8FFC7C: mov     eax, ds:0B30AACh
0x8FFC81: push    ebx
0x8FFC82: push    esi
0x8FFC83: push    edi
0x8FFC84: mov     edi, large fs:2Ch
0x8FFC8B: mov     esi, ecx
0x8FFC8D: mov     ecx, ds:0BA9DE4h
0x8FFC93: mov     [esp+380h+var_4], eax
0x8FFC9A: mov     eax, [edi+ecx*4]
0x8FFC9D: mov     edx, [eax+1A4h]
0x8FFCA3: cmp     edx, [eax+1A8h]
0x8FFCA9: jnb     short loc_8FFCD7
0x8FFCAB: mov     ebx, [eax+1A4h]
0x8FFCB1: mov     dword ptr [ebx], offset aLtpredgskf; "LtPredGskf"
0x8FFCB7: mov     dword ptr [ebx+0Ch], offset aInit; "init"
0x8FFCBE: rdtsc
0x8FFCC0: mov     dword ptr [esp+380h+var_378+0Ch], eax
0x8FFCC4: mov     eax, dword ptr [esp+380h+var_378+0Ch]
0x8FFCC8: mov     [ebx+4], eax
0x8FFCCB: mov     eax, [edi+ecx*4]
0x8FFCCE: add     ebx, 10h
0x8FFCD1: mov     [eax+1A4h], ebx
0x8FFCD7: mov     ebx, [ebp+arg_8]
0x8FFCDA: fld     dword ptr [ebx+10h]
0x8FFCDD: fld     dword ptr [esi+18h]
0x8FFCE0: fucompp
0x8FFCE2: fnstsw  ax
0x8FFCE4: test    ah, 44h
0x8FFCE7: jnp     loc_8FFF62
0x8FFCED: mov     edx, [ebx+28h]
0x8FFCF0: mov     al, [edx+10h]
0x8FFCF3: test    al, al
0x8FFCF5: jnz     loc_8FFDA2
0x8FFCFB: mov     eax, [ebx+14h]
0x8FFCFE: mov     [esi+18h], eax
0x8FFD01: mov     eax, [edi+ecx*4]
0x8FFD04: mov     edx, [eax+1A4h]
0x8FFD0A: cmp     edx, [eax+1A8h]
0x8FFD10: jnb     short loc_8FFD3E
0x8FFD12: mov     ecx, eax
0x8FFD14: mov     dword ptr [esp+380h+var_378+0Ch], ecx
0x8FFD18: mov     ecx, [ecx+1A4h]
0x8FFD1E: mov     dword ptr [ecx], offset aStprocess; "Stprocess"
0x8FFD24: rdtsc
0x8FFD26: mov     [esp+380h+var_364], eax
0x8FFD2A: mov     eax, [esp+380h+var_364]
0x8FFD2E: mov     edx, dword ptr [esp+380h+var_378+0Ch]
0x8FFD32: mov     [ecx+4], eax
0x8FFD35: add     ecx, 0Ch
0x8FFD38: mov     [edx+1A4h], ecx
0x8FFD3E: mov     eax, [ebp+arg_C]
0x8FFD41: mov     ecx, [ebp+arg_4]
0x8FFD44: mov     edx, [ebp+arg_0]
0x8FFD47: push    eax
0x8FFD48: push    ebx
0x8FFD49: push    ecx
0x8FFD4A: push    edx
0x8FFD4B: mov     ecx, esi
0x8FFD4D: call    sub_939450
0x8FFD52: mov     ecx, ds:0BA9DE4h
0x8FFD58: mov     eax, [edi+ecx*4]
0x8FFD5B: mov     edx, [eax+1A4h]
0x8FFD61: cmp     edx, [eax+1A8h]
0x8FFD67: jnb     short loc_8FFD8D
0x8FFD69: mov     edi, eax
0x8FFD6B: mov     esi, [edi+1A4h]
0x8FFD71: mov     dword ptr [esi], offset aLt_0; "lt"
0x8FFD77: rdtsc
0x8FFD79: mov     [esp+380h+var_364], eax
0x8FFD7D: mov     eax, [esp+380h+var_364]
0x8FFD81: mov     [esi+4], eax
0x8FFD84: add     esi, 0Ch
0x8FFD87: mov     [edi+1A4h], esi
0x8FFD8D: mov     ecx, [esp+380h+var_4]
0x8FFD94: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8FFD99: pop     edi
0x8FFD9A: pop     esi
0x8FFD9B: pop     ebx
0x8FFD9C: mov     esp, ebp
0x8FFD9E: pop     ebp
0x8FFD9F: retn    10h
0x8FFDA2: mov     eax, [edi+ecx*4]
0x8FFDA5: mov     edx, [eax+1A4h]
0x8FFDAB: cmp     edx, [eax+1A8h]
0x8FFDB1: jnb     short loc_8FFDD7
0x8FFDB3: mov     edi, eax
0x8FFDB5: mov     ecx, [edi+1A4h]
0x8FFDBB: mov     dword ptr [ecx], offset aTtrecalct0; "TtrecalcT0"
0x8FFDC1: rdtsc
0x8FFDC3: mov     dword ptr [esp+380h+var_378+0Ch], eax
0x8FFDC7: mov     eax, dword ptr [esp+380h+var_378+0Ch]
0x8FFDCB: mov     [ecx+4], eax
0x8FFDCE: add     ecx, 0Ch
0x8FFDD1: mov     [edi+1A4h], ecx
0x8FFDD7: mov     eax, [ebp+arg_0]
0x8FFDDA: mov     edx, [eax]
0x8FFDDC: mov     edi, [ebp+arg_4]
0x8FFDDF: lea     ecx, [esp+380h+var_2D0]
0x8FFDE6: mov     [esp+380h+var_358], ecx
0x8FFDEA: mov     ecx, [eax+4]
0x8FFDED: mov     [esp+380h+var_360], edx
0x8FFDF1: mov     [esp+380h+var_35C], ecx
0x8FFDF5: mov     ecx, [edi]
0x8FFDF7: lea     edx, [esp+380h+var_340]
0x8FFDFB: mov     [esp+380h+var_348], edx
0x8FFDFF: mov     edx, [edi+4]
0x8FFE02: mov     [esp+380h+var_350], ecx
0x8FFE06: mov     [esp+380h+var_354], eax
0x8FFE0A: mov     eax, [eax+8]
0x8FFE0D: lea     ecx, [esp+380h+var_2D0]
0x8FFE14: mov     [esp+380h+var_34C], edx
0x8FFE18: mov     edx, [ebx+10h]
0x8FFE1B: push    ecx; int
0x8FFE1C: push    edx; float
0x8FFE1D: add     eax, 40h ; '@'
0x8FFE20: push    eax; int
0x8FFE21: mov     [esp+38Ch+var_344], edi
0x8FFE25: call    sub_8DD150
0x8FFE2A: mov     edx, [ebx+10h]
0x8FFE2D: mov     eax, [edi+8]
0x8FFE30: lea     ecx, [esp+38Ch+var_340]
0x8FFE34: push    ecx; int
0x8FFE35: push    edx; float
0x8FFE36: add     eax, 40h ; '@'
0x8FFE39: push    eax; int
0x8FFE3A: call    sub_8DD150
0x8FFE3F: mov     edx, [edi]
0x8FFE41: movsx   eax, byte ptr [esi+14h]
0x8FFE45: mov     ecx, [ebp+arg_0]
0x8FFE48: mov     ecx, [ecx]
0x8FFE4A: lea     edi, [esi+0Ch]
0x8FFE4D: mov     dword ptr [esp+398h+var_378+0Ch], edx
0x8FFE51: movsx   edx, byte ptr [edi+9]
0x8FFE55: mov     [esp+398h+var_28C], edx
0x8FFE5C: movsx   edx, byte ptr [edi+0Bh]
0x8FFE60: mov     [esp+398h+var_284], edx
0x8FFE67: add     esp, 18h
0x8FFE6A: mov     [esp+380h+var_290], eax
0x8FFE71: movsx   eax, byte ptr [edi+0Ah]
0x8FFE75: lea     edx, [esp+380h+var_270]
0x8FFE7C: push    edx
0x8FFE7D: mov     edx, [esp+384h+var_290]
0x8FFE84: push    edx
0x8FFE85: mov     [esp+388h+var_280], 0
0x8FFE8D: mov     [esp+388h+var_288], eax
0x8FFE94: mov     [esp+388h+var_27C], 0
0x8FFE9F: mov     eax, [ecx]
0x8FFEA1: push    edi
0x8FFEA2: call    dword ptr [eax+28h]
0x8FFEA5: mov     ecx, dword ptr [esp+380h+var_378+0Ch]
0x8FFEA9: mov     eax, [ecx]
0x8FFEAB: lea     edx, [esp+380h+var_1B0]
0x8FFEB2: push    edx
0x8FFEB3: mov     edx, [esp+384h+var_28C]
0x8FFEBA: push    edx
0x8FFEBB: mov     edx, [esp+388h+var_290]
0x8FFEC2: lea     edx, [edi+edx*2]
0x8FFEC5: push    edx
0x8FFEC6: call    dword ptr [eax+28h]
0x8FFEC9: mov     edx, [ebx+28h]
0x8FFECC: lea     eax, [esi+20h]
0x8FFECF: push    eax
0x8FFED0: mov     eax, [edx]
0x8FFED2: lea     ecx, [esp+384h+var_290]
0x8FFED9: push    ecx
0x8FFEDA: push    eax
0x8FFEDB: lea     ecx, [esp+38Ch+var_350]
0x8FFEDF: push    ecx
0x8FFEE0: lea     edx, [esp+390h+var_360]
0x8FFEE4: push    edx
0x8FFEE5: call    sub_93F1C0
0x8FFEEA: mov     eax, [esp+394h+var_27C]
0x8FFEF1: add     esp, 14h
0x8FFEF4: test    eax, eax
0x8FFEF6: jz      short loc_8FFF05
0x8FFEF8: push    edi
0x8FFEF9: lea     ecx, [esp+384h+var_290]
0x8FFF00: call    sub_93B660
0x8FFF05: mov     ecx, ds:0BA9DE4h
0x8FFF0B: mov     eax, large fs:2Ch
0x8FFF11: mov     eax, [eax+ecx*4]
0x8FFF14: mov     ecx, [eax+1A8h]
0x8FFF1A: mov     edx, [eax+1A4h]
0x8FFF20: cmp     edx, ecx
0x8FFF22: mov     ecx, ds:0BA9DE4h
0x8FFF28: jnb     short loc_8FFF5B
0x8FFF2A: mov     eax, large fs:2Ch
0x8FFF30: mov     edi, [eax+ecx*4]
0x8FFF33: mov     ecx, [edi+1A4h]
0x8FFF39: mov     dword ptr [ecx], offset aEt; "Et"
0x8FFF3F: rdtsc
0x8FFF41: mov     dword ptr [esp+380h+var_378+0Ch], eax
0x8FFF45: mov     edx, dword ptr [esp+380h+var_378+0Ch]
0x8FFF49: mov     [ecx+4], edx
0x8FFF4C: add     ecx, 0Ch
0x8FFF4F: mov     [edi+1A4h], ecx
0x8FFF55: mov     ecx, ds:0BA9DE4h
0x8FFF5B: mov     edi, large fs:2Ch
0x8FFF62: mov     eax, [ebx+14h]
0x8FFF65: mov     edx, [ebp+arg_0]
0x8FFF68: mov     [esi+18h], eax
0x8FFF6B: fld     dword ptr [ebx+18h]
0x8FFF6E: mov     eax, [edx+8]
0x8FFF71: fld     st
0x8FFF73: fmul    dword ptr [eax+5Ch]
0x8FFF76: mov     edx, [ebp+arg_4]
0x8FFF79: mov     edx, [edx+8]
0x8FFF7C: fxch    st(1)
0x8FFF7E: fmul    dword ptr [edx+5Ch]
0x8FFF81: movaps  xmm2, xmmword ptr [edx+40h]
0x8FFF85: movaps  xmm3, xmmword ptr [edx+50h]
0x8FFF89: fld     st(1)
0x8FFF8B: fstp    dword ptr [esp+380h+var_378+0Ch]
0x8FFF8F: movss   xmm0, dword ptr [esp+380h+var_378+0Ch]
0x8FFF95: subps   xmm3, xmm2
0x8FFF98: fst     dword ptr [esp+380h+var_378+0Ch]
0x8FFF9C: movss   xmm1, dword ptr [esp+380h+var_378+0Ch]
0x8FFFA2: fld     dword ptr [edx+0A0h]
0x8FFFA8: movaps  xmm2, xmm1
0x8FFFAB: fmul    dword ptr [edx+9Ch]
0x8FFFB1: shufps  xmm2, xmm1, 0
0x8FFFB5: movaps  xmm1, xmmword ptr [eax+50h]
0x8FFFB9: mulps   xmm2, xmm3
0x8FFFBC: movaps  xmm3, xmmword ptr [eax+40h]
0x8FFFC0: fmul    st, st(1)
0x8FFFC2: fld     dword ptr [eax+0A0h]
0x8FFFC8: subps   xmm3, xmm1
0x8FFFCB: fmul    dword ptr [eax+9Ch]
0x8FFFD1: mov     edx, [ebx+28h]
0x8FFFD4: movaps  xmm1, xmm0
0x8FFFD7: shufps  xmm1, xmm0, 0
0x8FFFDB: fmul    st, st(3)
0x8FFFDD: mulps   xmm1, xmm3
0x8FFFE0: addps   xmm1, xmm2
0x8FFFE3: movaps  xmm2, xmmword ptr [esi+20h]
0x8FFFE7: faddp   st(1), st
0x8FFFE9: movaps  xmmword ptr [esp+380h+var_360], xmm1
0x8FFFEE: lea     eax, [esp+380h+var_378+0Ch]
0x8FFFF2: fstp    [esp+380h+var_354]
0x8FFFF6: movaps  xmm1, xmmword ptr [esp+380h+var_360]
0x8FFFFB: movaps  xmm0, xmm1
0x8FFFFE: fstp    st
0x900000: mulps   xmm0, xmm2
0x900003: fstp    st
0x900005: movaps  xmm2, xmm0
0x900008: fld     dword ptr [esi+2Ch]
0x90000B: shufps  xmm2, xmm0, 55h ; 'U'
0x90000F: movaps  xmm3, xmm0
0x900012: addss   xmm2, xmm0
0x900016: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x90001A: addss   xmm3, xmm2
0x90001E: movss   dword ptr [eax], xmm3
0x900022: fsub    dword ptr [esp+380h+var_378+0Ch]
0x900026: fsub    [esp+380h+var_354]
0x90002A: fstp    [esp+380h+var_368]
0x90002E: fld     [esp+380h+var_368]
0x900032: fcomp   dword ptr [edx]
0x900034: fnstsw  ax
0x900036: test    ah, 41h
0x900039: jnz     short loc_9000AC
0x90003B: fld     dword ptr [esi+1Ch]
0x90003E: fmul    dword ptr ds:0A3D65Ch
0x900044: fcomp   [esp+380h+var_368]
0x900048: fnstsw  ax
0x90004A: test    ah, 5
0x90004D: jp      short loc_9000AC
0x90004F: mov     eax, [edi+ecx*4]
0x900052: mov     edx, [eax+1A4h]
0x900058: cmp     edx, [eax+1A8h]
0x90005E: jnb     short loc_900085
0x900060: mov     ebx, [eax+1A4h]
0x900066: mov     dword ptr [ebx], offset aSttim; "Sttim"
0x90006C: rdtsc
0x90006E: mov     dword ptr [esp+380h+var_378+0Ch], eax
0x900072: mov     eax, dword ptr [esp+380h+var_378+0Ch]
0x900076: mov     [ebx+4], eax
0x900079: mov     eax, [edi+ecx*4]
0x90007C: add     ebx, 0Ch
0x90007F: mov     [eax+1A4h], ebx
0x900085: mov     edx, [esp+380h+var_368]
0x900089: mov     [esi+2Ch], edx
0x90008C: mov     al, [esi+32h]
0x90008F: test    al, al
0x900091: jz      loc_8FFD58
0x900097: mov     eax, [esi+8]
0x90009A: push    eax
0x90009B: add     esi, 30h ; '0'
0x90009E: push    esi
0x90009F: call    sub_939B60
0x9000A4: add     esp, 8
0x9000A7: jmp     loc_8FFD52
0x9000AC: mov     al, [edx+10h]
0x9000AF: test    al, al
0x9000B1: jz      loc_9001C0
0x9000B7: mov     eax, [edi+ecx*4]
0x9000BA: mov     edx, [eax+1A4h]
0x9000C0: cmp     edx, [eax+1A8h]
0x9000C6: jnb     short loc_9000F5
0x9000C8: mov     eax, [eax+1A4h]
0x9000CE: mov     [esp+380h+var_364], eax
0x9000D2: mov     dword ptr [eax], offset aSttoi; "Sttoi"
0x9000D8: rdtsc
0x9000DA: mov     dword ptr [esp+380h+var_378+0Ch], eax
0x9000DE: mov     eax, [esp+380h+var_364]
0x9000E2: mov     edx, dword ptr [esp+380h+var_378+0Ch]
0x9000E6: mov     [eax+4], edx
0x9000E9: lea     edx, [eax+0Ch]
0x9000EC: mov     eax, [edi+ecx*4]
0x9000EF: mov     [eax+1A4h], edx
0x9000F5: mov     edx, [ebp+arg_4]
0x9000F8: fld     dword ptr [esi+2Ch]
0x9000FB: mov     eax, [ebp+arg_0]
0x9000FE: mov     [esp+380h+var_33C], edx
0x900102: mov     edx, [esp+380h+var_368]
0x900106: mov     [esp+380h+var_340], eax
0x90010A: mov     eax, [esi+8]
0x90010D: mov     [esp+380h+var_2F8+8], edx
0x900114: mov     edx, [ebx+28h]
0x900117: mov     [esp+380h+var_334], eax
0x90011B: mov     [esp+380h+var_338], ebx
0x90011F: movaps  [esp+380h+var_2E0], xmm1
0x900127: fld     dword ptr [edx+18h]
0x90012A: fmul    dword ptr [esi+1Ch]
0x90012D: fadd    st, st(1)
0x90012F: fld     dword ptr [edx+14h]
0x900132: fmul    dword ptr [esi+1Ch]
0x900135: fst     [esp+380h+var_364]
0x900139: fcomp   st(1)
0x90013B: fnstsw  ax
0x90013D: test    ah, 5
0x900140: jp      short loc_90014E
0x900142: mov     eax, [esp+380h+var_364]
0x900146: fstp    st
0x900148: mov     dword ptr [esp+380h+var_378+0Ch], eax
0x90014C: jmp     short loc_900152
0x90014E: fstp    dword ptr [esp+380h+var_378+0Ch]
0x900152: fld     [esp+380h+var_368]
0x900156: fcomp   dword ptr [esp+380h+var_378+0Ch]
0x90015A: fnstsw  ax
0x90015C: test    ah, 1
0x90015F: jz      short loc_9001BE
0x900161: fld     dword ptr [edx+28h]
0x900164: fmul    dword ptr [esi+1Ch]
0x900167: faddp   st(1), st
0x900169: fld     dword ptr [edx+24h]
0x90016C: fmul    dword ptr [esi+1Ch]
0x90016F: fst     [esp+380h+var_364]
0x900173: fcomp   st(1)
0x900175: fnstsw  ax
0x900177: test    ah, 5
0x90017A: jp      short loc_900188
0x90017C: mov     ecx, [esp+380h+var_364]
0x900180: fstp    st
0x900182: mov     [esp+380h+var_368], ecx
0x900186: jmp     short loc_90018C
0x900188: fstp    [esp+380h+var_368]
0x90018C: mov     edx, [ebp+arg_C]
0x90018F: mov     ecx, [esp+380h+var_368]
0x900193: push    edx; int
0x900194: mov     edx, dword ptr [esp+384h+var_378+0Ch]
0x900198: lea     eax, [esi+20h]
0x90019B: push    eax; int
0x90019C: lea     eax, [esi+0Ch]
0x90019F: push    eax; int
0x9001A0: mov     eax, [esi+1Ch]
0x9001A3: push    ecx; int
0x9001A4: push    edx; int
0x9001A5: push    eax; float
0x9001A6: lea     ecx, [esp+398h+var_340]
0x9001AA: push    ecx; int
0x9001AB: call    sub_93DE40
0x9001B0: mov     ecx, ds:0BA9DE4h
0x9001B6: add     esp, 1Ch
0x9001B9: jmp     loc_8FFD01
0x9001BE: fstp    st
0x9001C0: fld     [esp+380h+var_368]
0x9001C4: fcomp   dword ptr [edx+0Ch]
0x9001C7: fnstsw  ax
0x9001C9: test    ah, 41h
0x9001CC: jnz     loc_8FFD01
0x9001D2: mov     eax, [edi+ecx*4]
0x9001D5: mov     edx, [eax+1A4h]
0x9001DB: cmp     edx, [eax+1A8h]
0x9001E1: jnb     short loc_900207
0x9001E3: mov     edi, eax
0x9001E5: mov     ecx, [edi+1A4h]
0x9001EB: mov     dword ptr [ecx], offset aStgetpoints; "StgetPoints"
0x9001F1: rdtsc
0x9001F3: mov     [esp+380h+var_364], eax
0x9001F7: mov     eax, [esp+380h+var_364]
0x9001FB: mov     [ecx+4], eax
0x9001FE: add     ecx, 0Ch
0x900201: mov     [edi+1A4h], ecx
0x900207: mov     ecx, [esp+380h+var_368]
0x90020B: mov     eax, [ebp+arg_0]
0x90020E: mov     [esi+2Ch], ecx
0x900211: mov     edx, [ebx+8]
0x900214: mov     eax, [eax]
0x900216: mov     ecx, [ebp+arg_4]
0x900219: mov     ebx, [ecx]
0x90021B: movaps  xmm0, xmmword ptr [esi+20h]
0x90021F: mov     [esp+380h+var_178], edx
0x900226: mov     edx, [eax+0Ch]
0x900229: mov     [esp+380h+var_180], edx
0x900230: mov     ecx, [ebx+0Ch]
0x900233: mov     [esp+380h+var_17C], ecx
0x90023A: fld     [esp+380h+var_17C]
0x900241: fadd    [esp+380h+var_180]
0x900248: mov     cl, [esi+32h]
0x90024B: test    cl, cl
0x90024D: lea     edi, [esi+30h]
0x900250: fadd    [esp+380h+var_178]
0x900257: movaps  [esp+380h+var_190], xmm0
0x90025F: fld     st
0x900261: fmul    st, st(1)
0x900263: fstp    [esp+380h+var_174]
0x90026A: fstp    st
0x90026C: jz      loc_90038E
0x900272: movzx   edx, cl
0x900275: lea     ecx, [edi+edx*8+4]
0x900279: mov     edx, [eax]
0x90027B: mov     [esp+380h+var_368], ecx
0x90027F: lea     ecx, [esp+380h+var_290]
0x900286: push    ecx
0x900287: movzx   ecx, byte ptr [edi]
0x90028A: push    ecx
0x90028B: mov     ecx, [esp+388h+var_368]
0x90028F: push    ecx
0x900290: mov     ecx, eax
0x900292: call    dword ptr [edx+28h]
0x900295: mov     edx, [ebp+arg_0]
0x900298: mov     eax, [edx+8]
0x90029B: movzx   edx, byte ptr [edi]
0x90029E: movaps  xmm1, xmmword ptr [eax]
0x9002A1: movaps  xmm2, xmmword ptr [eax+10h]
0x9002A5: movaps  xmm3, xmmword ptr [eax+20h]
0x9002A9: movaps  xmm4, xmmword ptr [eax+30h]
0x9002AD: mov     dword ptr [esp+380h+var_378+0Ch], edx
0x9002B1: lea     ecx, [esp+380h+var_290]
0x9002B8: jmp     short loc_9002C0
0x9002BA: align 10h
0x9002C0: movaps  xmm0, xmmword ptr [ecx]
0x9002C3: mov     eax, dword ptr [esp+380h+var_378+0Ch]
0x9002C7: movaps  xmm5, xmm0
0x9002CA: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x9002CE: movaps  xmm6, xmm3
0x9002D1: mulps   xmm6, xmm5
0x9002D4: movaps  xmm5, xmm0
0x9002D7: shufps  xmm5, xmm0, 55h ; 'U'
0x9002DB: movaps  xmm7, xmm2
0x9002DE: mulps   xmm7, xmm5
0x9002E1: movaps  xmm5, xmm0
0x9002E4: shufps  xmm5, xmm0, 0
0x9002E8: movaps  xmm0, xmm1
0x9002EB: mulps   xmm0, xmm5
0x9002EE: addps   xmm6, xmm4
0x9002F1: addps   xmm0, xmm7
0x9002F4: addps   xmm0, xmm6
0x9002F7: movaps  xmmword ptr [ecx], xmm0
0x9002FA: add     ecx, 10h
0x9002FD: dec     eax
0x9002FE: test    eax, eax
0x900300: mov     dword ptr [esp+380h+var_378+0Ch], eax
0x900304: jg      short loc_9002C0
0x900306: mov     ecx, [ebx]
0x900308: mov     eax, edx
0x90030A: shl     eax, 4
0x90030D: lea     eax, [esp+eax+380h+var_290]
0x900314: push    eax
0x900315: mov     dword ptr [esp+384h+var_378+0Ch], eax
0x900319: movzx   eax, byte ptr [edi+1]
0x90031D: push    eax
0x90031E: mov     eax, [esp+388h+var_368]
0x900322: lea     edx, [eax+edx*2]
0x900325: mov     eax, ecx
0x900327: push    edx
0x900328: mov     ecx, ebx
0x90032A: call    dword ptr [eax+28h]
0x90032D: mov     eax, [ebp+arg_4]
0x900330: mov     eax, [eax+8]
0x900333: movzx   edx, byte ptr [edi+1]
0x900337: mov     ecx, dword ptr [esp+380h+var_378+0Ch]
0x90033B: movaps  xmm1, xmmword ptr [eax]
0x90033E: movaps  xmm2, xmmword ptr [eax+10h]
0x900342: movaps  xmm3, xmmword ptr [eax+20h]
0x900346: movaps  xmm4, xmmword ptr [eax+30h]
0x90034A: lea     ebx, [ebx+0]
0x900350: movaps  xmm0, xmmword ptr [ecx]
0x900353: movaps  xmm5, xmm0
0x900356: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x90035A: movaps  xmm6, xmm3
0x90035D: mulps   xmm6, xmm5
0x900360: movaps  xmm5, xmm0
0x900363: shufps  xmm5, xmm0, 55h ; 'U'
0x900367: movaps  xmm7, xmm2
0x90036A: mulps   xmm7, xmm5
0x90036D: movaps  xmm5, xmm0
0x900370: shufps  xmm5, xmm0, 0
0x900374: movaps  xmm0, xmm1
0x900377: mulps   xmm0, xmm5
0x90037A: addps   xmm6, xmm4
0x90037D: addps   xmm0, xmm7
0x900380: addps   xmm0, xmm6
0x900383: movaps  xmmword ptr [ecx], xmm0
0x900386: add     ecx, 10h
0x900389: dec     edx
0x90038A: test    edx, edx
0x90038C: jg      short loc_900350
0x90038E: mov     ecx, [esi+8]
0x900391: mov     edx, [ebp+arg_C]
0x900394: push    ecx
0x900395: push    edx
0x900396: push    0
0x900398: lea     eax, [esp+38Ch+var_290]
0x90039F: push    eax
0x9003A0: push    edi
0x9003A1: call    sub_939BB0
0x9003A6: mov     edi, large fs:2Ch
0x9003AD: add     esp, 14h
0x9003B0: jmp     loc_8FFD52
