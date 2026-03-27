0x4C3030: sub     esp, 3Ch
0x4C3033: push    ebx
0x4C3034: mov     ebx, ecx
0x4C3036: mov     eax, [ebx+24h]
0x4C3039: push    esi
0x4C303A: xor     esi, esi
0x4C303C: cmp     eax, esi
0x4C303E: mov     [esp+44h+var_34], ebx
0x4C3042: jz      short loc_4C3050
0x4C3044: mov     eax, [eax+98h]
0x4C304A: mov     [esp+44h+var_3C], eax
0x4C304E: jmp     short loc_4C3066
0x4C3050: mov     ecx, [ebx+20h]; this
0x4C3053: cmp     ecx, esi
0x4C3055: jz      short loc_4C3062
0x4C3057: call    TESObjectCELL_GetXCoordinate
0x4C305C: mov     [esp+44h+var_3C], eax
0x4C3060: jmp     short loc_4C3066
0x4C3062: mov     [esp+44h+var_3C], esi
0x4C3066: fild    [esp+44h+var_3C]
0x4C306A: mov     eax, [ebx+24h]
0x4C306D: cmp     eax, esi
0x4C306F: fld     qword ptr ds:0A37650h
0x4C3075: fmul    st(1), st
0x4C3077: fxch    st(1)
0x4C3079: fstp    [esp+44h+var_30]
0x4C307D: jz      short loc_4C308B
0x4C307F: mov     ecx, [eax+9Ch]
0x4C3085: mov     [esp+44h+var_3C], ecx
0x4C3089: jmp     short loc_4C30A9
0x4C308B: mov     ecx, [ebx+20h]; this
0x4C308E: cmp     ecx, esi
0x4C3090: jz      short loc_4C30A5
0x4C3092: fstp    st
0x4C3094: call    TESObjectCELL_GetYCoordinate
0x4C3099: fld     qword ptr ds:0A37650h
0x4C309F: mov     [esp+44h+var_3C], eax
0x4C30A3: jmp     short loc_4C30A9
0x4C30A5: mov     [esp+44h+var_3C], esi
0x4C30A9: fild    [esp+44h+var_3C]
0x4C30AD: mov     eax, [ebx+24h]
0x4C30B0: cmp     eax, esi
0x4C30B2: fmul    st, st(1)
0x4C30B4: fstp    [esp+44h+var_3C]
0x4C30B8: jz      loc_4C3531
0x4C30BE: cmp     [eax+4], esi
0x4C30C1: jnz     short loc_4C30CB
0x4C30C3: cmp     [eax], esi
0x4C30C5: jz      loc_4C3531
0x4C30CB: push    edi
0x4C30CC: mov     edi, [esp+48h+arg_4]
0x4C30D0: fld     dword ptr [edi]
0x4C30D2: fld     [esp+48h+var_30]
0x4C30D6: fcom    st(1)
0x4C30D8: fnstsw  ax
0x4C30DA: fstp    st(1)
0x4C30DC: test    ah, 41h
0x4C30DF: jz      loc_4C3522
0x4C30E5: fld     dword ptr [edi]
0x4C30E7: fld     st(1)
0x4C30E9: fadd    st, st(3)
0x4C30EB: fstp    [esp+48h+arg_4]
0x4C30EF: fld     [esp+48h+arg_4]
0x4C30F3: fcompp
0x4C30F5: fnstsw  ax
0x4C30F7: test    ah, 5
0x4C30FA: jnp     loc_4C3522
0x4C3100: fld     dword ptr [edi+4]
0x4C3103: fld     [esp+48h+var_3C]
0x4C3107: fcom    st(1)
0x4C3109: fnstsw  ax
0x4C310B: fstp    st(1)
0x4C310D: test    ah, 41h
0x4C3110: jz      loc_4C3520
0x4C3116: fld     dword ptr [edi+4]
0x4C3119: fld     st(1)
0x4C311B: faddp   st(4), st
0x4C311D: fxch    st(3)
0x4C311F: fstp    [esp+48h+arg_4]
0x4C3123: fld     [esp+48h+arg_4]
0x4C3127: fcomp   st(3)
0x4C3129: fnstsw  ax
0x4C312B: fstp    st(2)
0x4C312D: test    ah, 5
0x4C3130: jnp     loc_4C3522
0x4C3136: fld     dword ptr [edi]
0x4C3138: mov     esi, [esp+48h+arg_0]
0x4C313C: fsub    st, st(1)
0x4C313E: push    ebp
0x4C313F: fstp    dword ptr [esi]
0x4C3141: fld     dword ptr [edi+4]
0x4C3144: fsub    st, st(2)
0x4C3146: fstp    dword ptr [esi+4]
0x4C3149: fld     dword ptr [esi]
0x4C314B: fld     qword ptr ds:0A3F408h
0x4C3151: fmul    st(1), st
0x4C3153: fxch    st(1)
0x4C3155: call    Double_To_SInt32
0x4C315A: fld     dword ptr [esi]
0x4C315C: mov     ebp, eax
0x4C315E: mov     [esi+10h], ebp
0x4C3161: call    Double_To_SInt32
0x4C3166: mov     edx, eax
0x4C3168: and     edx, 800007FFh
0x4C316E: jns     short loc_4C3178
0x4C3170: dec     edx
0x4C3171: or      edx, 0FFFFF800h
0x4C3177: inc     edx
0x4C3178: jnz     short loc_4C3184
0x4C317A: test    eax, eax
0x4C317C: jz      short loc_4C3184
0x4C317E: add     ebp, 0FFFFFFFFh
0x4C3181: mov     [esi+10h], ebp
0x4C3184: fmul    dword ptr [esi+4]
0x4C3187: call    Double_To_SInt32
0x4C318C: fld     dword ptr [esi+4]
0x4C318F: mov     ebp, eax
0x4C3191: mov     [esi+14h], ebp
0x4C3194: call    Double_To_SInt32
0x4C3199: mov     ecx, eax
0x4C319B: and     ecx, 800007FFh
0x4C31A1: jns     short loc_4C31AB
0x4C31A3: dec     ecx
0x4C31A4: or      ecx, 0FFFFF800h
0x4C31AA: inc     ecx
0x4C31AB: jnz     short loc_4C31B7
0x4C31AD: test    eax, eax
0x4C31AF: jz      short loc_4C31B7
0x4C31B1: add     ebp, 0FFFFFFFFh
0x4C31B4: mov     [esi+14h], ebp
0x4C31B7: mov     eax, [esi+14h]
0x4C31BA: mov     ecx, [esi+10h]
0x4C31BD: lea     edx, [ecx+eax*2]
0x4C31C0: shl     ecx, 0Bh
0x4C31C3: mov     [esp+4Ch+arg_4], ecx
0x4C31C7: fiadd   [esp+4Ch+arg_4]
0x4C31CB: shl     eax, 0Bh
0x4C31CE: mov     [esp+4Ch+arg_0], eax
0x4C31D2: mov     [esi+18h], edx
0x4C31D5: mov     ecx, ebx
0x4C31D7: fstp    [esp+4Ch+arg_4]
0x4C31DB: fiadd   [esp+4Ch+arg_0]
0x4C31DF: fstp    [esp+4Ch+arg_0]
0x4C31E3: fld     dword ptr [edi]
0x4C31E5: fsub    [esp+4Ch+arg_4]
0x4C31E9: fstp    dword ptr [esi+8]
0x4C31EC: fld     dword ptr [edi+4]
0x4C31EF: fsub    [esp+4Ch+arg_0]
0x4C31F3: fstp    dword ptr [esi+0Ch]
0x4C31F6: call    sub_4BF060
0x4C31FB: fadd    qword ptr ds:0A30F70h
0x4C3201: mov     ecx, ebx
0x4C3203: fstp    [esp+4Ch+var_18]
0x4C3207: call    sub_4BF0A0
0x4C320C: fadd    qword ptr ds:0A30F70h
0x4C3212: fstp    [esp+4Ch+var_14]
0x4C3216: fld     dword ptr [esi+8]
0x4C3219: fld     qword ptr ds:0A46050h
0x4C321F: fmul    st(1), st
0x4C3221: fxch    st(1)
0x4C3223: call    Double_To_SInt32
0x4C3228: fld     dword ptr [esi+8]
0x4C322B: mov     ebp, eax
0x4C322D: mov     [esi+24h], ebp
0x4C3230: call    Double_To_SInt32
0x4C3235: mov     ecx, eax
0x4C3237: and     ecx, 8000007Fh
0x4C323D: mov     [esp+4Ch+var_24], eax
0x4C3241: jns     short loc_4C3248
0x4C3243: dec     ecx
0x4C3244: or      ecx, 0FFFFFF80h
0x4C3247: inc     ecx
0x4C3248: jnz     short loc_4C3254
0x4C324A: test    eax, eax
0x4C324C: jz      short loc_4C3254
0x4C324E: add     ebp, 0FFFFFFFFh
0x4C3251: mov     [esi+24h], ebp
0x4C3254: fmul    dword ptr [esi+0Ch]
0x4C3257: call    Double_To_SInt32
0x4C325C: fld     dword ptr [esi+0Ch]
0x4C325F: mov     ebp, eax
0x4C3261: mov     [esi+28h], ebp
0x4C3264: call    Double_To_SInt32
0x4C3269: mov     edx, eax
0x4C326B: and     edx, 8000007Fh
0x4C3271: mov     [esp+4Ch+var_3C], eax
0x4C3275: jns     short loc_4C327C
0x4C3277: dec     edx
0x4C3278: or      edx, 0FFFFFF80h
0x4C327B: inc     edx
0x4C327C: jnz     short loc_4C3288
0x4C327E: test    eax, eax
0x4C3280: jz      short loc_4C3288
0x4C3282: add     ebp, 0FFFFFFFFh
0x4C3285: mov     [esi+28h], ebp
0x4C3288: mov     ecx, [esi+24h]
0x4C328B: fld     dword ptr [edi]
0x4C328D: mov     eax, ecx
0x4C328F: shl     eax, 7
0x4C3292: mov     [esp+4Ch+var_30], eax
0x4C3296: fild    [esp+4Ch+var_30]
0x4C329A: mov     eax, [esi+28h]
0x4C329D: mov     edx, eax
0x4C329F: fadd    [esp+4Ch+arg_4]
0x4C32A3: shl     edx, 7
0x4C32A6: fstp    [esp+4Ch+arg_4]
0x4C32AA: fsub    [esp+4Ch+arg_4]
0x4C32AE: mov     [esp+4Ch+arg_4], edx
0x4C32B2: mov     edx, [esi+18h]
0x4C32B5: fstp    dword ptr [esi+1Ch]
0x4C32B8: fld     dword ptr [edi+4]
0x4C32BB: mov     [esi+2Ch], edx
0x4C32BE: fild    [esp+4Ch+arg_4]
0x4C32C2: lea     edx, [eax+ecx]
0x4C32C5: and     edx, 80000001h
0x4C32CB: fadd    [esp+4Ch+arg_0]
0x4C32CF: fstp    [esp+4Ch+arg_4]
0x4C32D3: fsub    [esp+4Ch+arg_4]
0x4C32D7: fstp    dword ptr [esi+20h]
0x4C32DA: jns     short loc_4C32E1
0x4C32DC: dec     edx
0x4C32DD: or      edx, 0FFFFFFFEh
0x4C32E0: inc     edx
0x4C32E1: fld     dword ptr [esi+1Ch]
0x4C32E4: mov     edx, eax
0x4C32E6: lea     ebp, [esi+40h]
0x4C32E9: jnz     loc_4C33A0
0x4C32EF: fld     dword ptr [esi+20h]
0x4C32F2: shl     edx, 4
0x4C32F5: add     edx, ecx
0x4C32F7: fcompp
0x4C32F9: lea     ecx, [eax+edx]
0x4C32FC: lea     eax, [ecx+12h]
0x4C32FF: mov     [esi+48h], eax
0x4C3302: fnstsw  ax
0x4C3304: mov     byte ptr [esi+4Ch], 0
0x4C3308: mov     [esi+44h], ecx
0x4C330B: test    ah, 5
0x4C330E: jp      loc_4C3394
0x4C3314: add     ecx, 1
0x4C3317: mov     byte ptr [esi+4Dh], 0
0x4C331B: mov     [ebp+0], ecx
0x4C331E: fld     dword ptr [edi]
0x4C3320: call    Double_To_SInt32
0x4C3325: and     eax, 8000007Fh
0x4C332A: jns     short loc_4C3331
0x4C332C: dec     eax
0x4C332D: or      eax, 0FFFFFF80h
0x4C3330: inc     eax
0x4C3331: jnz     loc_4C33D8
0x4C3337: fld     dword ptr [edi+4]
0x4C333A: call    Double_To_SInt32
0x4C333F: and     eax, 8000007Fh
0x4C3344: jns     short loc_4C334B
0x4C3346: dec     eax
0x4C3347: or      eax, 0FFFFFF80h
0x4C334A: inc     eax
0x4C334B: jnz     loc_4C33D8
0x4C3351: mov     eax, [esp+4Ch+var_3C]
0x4C3355: cdq
0x4C3356: and     edx, 7Fh
0x4C3359: add     eax, edx
0x4C335B: sar     eax, 7
0x4C335E: mov     ecx, eax
0x4C3360: shl     ecx, 4
0x4C3363: add     ecx, eax
0x4C3365: mov     eax, [esp+4Ch+var_24]
0x4C3369: cdq
0x4C336A: and     edx, 7Fh
0x4C336D: add     eax, edx
0x4C336F: sar     eax, 7
0x4C3372: add     ecx, eax
0x4C3374: mov     [esp+4Ch+arg_4], ecx
0x4C3378: fild    [esp+4Ch+arg_4]
0x4C337C: fstp    [esp+4Ch+arg_0]
0x4C3380: fld     [esp+4Ch+arg_0]
0x4C3384: fistp   [esp+4Ch+arg_4]
0x4C3388: mov     edx, [esp+4Ch+arg_4]
0x4C338C: mov     [esi+3Ch], edx
0x4C338F: jmp     loc_4C34A8
0x4C3394: add     ecx, 11h
0x4C3397: mov     byte ptr [esi+4Dh], 1
0x4C339B: jmp     loc_4C331B
0x4C33A0: fadd    dword ptr [esi+20h]
0x4C33A3: shl     edx, 4
0x4C33A6: add     edx, ecx
0x4C33A8: lea     ecx, [eax+edx]
0x4C33AB: fcomp   qword ptr ds:0A3F428h
0x4C33B1: lea     eax, [ecx+1]
0x4C33B4: mov     [esi+44h], eax
0x4C33B7: lea     edx, [ecx+11h]
0x4C33BA: mov     byte ptr [esi+4Ch], 1
0x4C33BE: fnstsw  ax
0x4C33C0: mov     [esi+48h], edx
0x4C33C3: test    ah, 41h
0x4C33C6: jnz     loc_4C3317
0x4C33CC: add     ecx, 12h
0x4C33CF: mov     byte ptr [esi+4Dh], 1
0x4C33D3: jmp     loc_4C331B
0x4C33D8: fldz
0x4C33DA: xor     ebx, ebx
0x4C33DC: fstp    [esp+4Ch+arg_4]
0x4C33E0: fld     dword ptr [edi]
0x4C33E2: fstp    [esp+4Ch+var_3C]
0x4C33E6: fld     dword ptr [edi+4]
0x4C33E9: fstp    [esp+4Ch+var_38]
0x4C33ED: xor     edi, edi
0x4C33EF: nop
0x4C33F0: mov     ecx, [ebp+0]
0x4C33F3: lea     eax, [esp+4Ch+var_C]
0x4C33F7: push    eax
0x4C33F8: mov     eax, [esi+18h]
0x4C33FB: push    ecx
0x4C33FC: mov     ecx, [esp+54h+var_34]
0x4C3400: push    eax
0x4C3401: call    sub_4C1DD0
0x4C3406: fld     [esp+4Ch+var_18]
0x4C340A: fadd    [esp+4Ch+var_C]
0x4C340E: fstp    [esp+4Ch+var_30]
0x4C3412: mov     edx, [esp+4Ch+var_30]
0x4C3416: fld     [esp+4Ch+var_14]
0x4C341A: mov     [esp+4Ch+var_24], edx
0x4C341E: fadd    [esp+4Ch+var_8]
0x4C3422: fstp    [esp+4Ch+var_2C]
0x4C3426: mov     eax, [esp+4Ch+var_2C]
0x4C342A: fld     [esp+4Ch+var_30]
0x4C342E: mov     [esp+4Ch+var_20], eax
0x4C3432: fsub    [esp+4Ch+var_3C]
0x4C3436: fstp    [esp+4Ch+var_24]
0x4C343A: fld     [esp+4Ch+var_20]
0x4C343E: fsub    [esp+4Ch+var_38]
0x4C3442: fstp    [esp+4Ch+var_20]
0x4C3446: fld     [esp+4Ch+var_20]
0x4C344A: fld     [esp+4Ch+var_24]
0x4C344E: fld     st(1)
0x4C3450: fmulp   st(2), st
0x4C3452: fmul    st, st
0x4C3454: faddp   st(1), st
0x4C3456: fstp    [esp+4Ch+arg_0]
0x4C345A: fld     [esp+4Ch+arg_0]
0x4C345E: call    __CIsqrt
0x4C3463: fstp    [esp+4Ch+arg_0]
0x4C3467: test    edi, edi
0x4C3469: fld     [esp+4Ch+arg_0]
0x4C346D: fstp    [esp+4Ch+arg_0]
0x4C3471: fld     [esp+4Ch+arg_0]
0x4C3475: jz      short loc_4C3484
0x4C3477: fld     [esp+4Ch+arg_4]
0x4C347B: fcomp   st(1)
0x4C347D: fnstsw  ax
0x4C347F: test    ah, 41h
0x4C3482: jnz     short loc_4C348C
0x4C3484: fstp    [esp+4Ch+arg_4]
0x4C3488: mov     ebx, edi
0x4C348A: jmp     short loc_4C348E
0x4C348C: fstp    st
0x4C348E: add     edi, 1
0x4C3491: add     ebp, 4
0x4C3494: cmp     edi, 3
0x4C3497: jl      loc_4C33F0
0x4C349D: mov     ecx, [esi+ebx*4+40h]
0x4C34A1: mov     ebx, [esp+4Ch+var_34]
0x4C34A5: mov     [esi+3Ch], ecx
0x4C34A8: mov     eax, [esi+3Ch]
0x4C34AB: mov     ecx, [esi+18h]
0x4C34AE: lea     edx, [esp+4Ch+var_30]
0x4C34B2: push    edx
0x4C34B3: push    eax
0x4C34B4: push    ecx
0x4C34B5: mov     ecx, ebx
0x4C34B7: call    sub_4C1DD0
0x4C34BC: fld     [esp+4Ch+var_30]
0x4C34C0: cmp     [esp+4Ch+arg_8], 0
0x4C34C5: fadd    [esp+4Ch+var_18]
0x4C34C9: lea     eax, [esi+30h]
0x4C34CC: pop     ebp
0x4C34CD: fstp    [esp+48h+var_24]
0x4C34D1: mov     edx, [esp+48h+var_24]
0x4C34D5: fld     [esp+48h+var_2C]
0x4C34D9: mov     [eax], edx
0x4C34DB: fadd    [esp+48h+var_14]
0x4C34DF: fstp    [esp+48h+var_20]
0x4C34E3: mov     ecx, [esp+48h+var_20]
0x4C34E7: fld     [esp+48h+var_28]
0x4C34EB: mov     [eax+4], ecx
0x4C34EE: fadd    qword ptr ds:0A2FC68h
0x4C34F4: fstp    [esp+48h+var_1C]
0x4C34F8: mov     edx, [esp+48h+var_1C]
0x4C34FC: mov     [eax+8], edx
0x4C34FF: jz      short loc_4C3515
0x4C3501: push    0
0x4C3503: push    eax
0x4C3504: push    esi
0x4C3505: mov     ecx, ebx
0x4C3507: call    sub_4C3030
0x4C350C: pop     edi
0x4C350D: pop     esi
0x4C350E: pop     ebx
0x4C350F: add     esp, 3Ch
0x4C3512: retn    0Ch
0x4C3515: pop     edi
0x4C3516: pop     esi
0x4C3517: mov     al, 1
0x4C3519: pop     ebx
0x4C351A: add     esp, 3Ch
0x4C351D: retn    0Ch
0x4C3520: fstp    st(2)
0x4C3522: pop     edi
0x4C3523: fstp    st(1)
0x4C3525: pop     esi
0x4C3526: fstp    st
0x4C3528: xor     al, al
0x4C352A: pop     ebx
0x4C352B: add     esp, 3Ch
0x4C352E: retn    0Ch
0x4C3531: pop     esi
0x4C3532: fstp    st
0x4C3534: xor     al, al
0x4C3536: pop     ebx
0x4C3537: add     esp, 3Ch
0x4C353A: retn    0Ch
