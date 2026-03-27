0x8E2F20: push    ebp
0x8E2F21: mov     ebp, esp
0x8E2F23: and     esp, 0FFFFFFF0h
0x8E2F26: sub     esp, 104h
0x8E2F2C: push    ebx
0x8E2F2D: push    esi
0x8E2F2E: push    edi
0x8E2F2F: mov     edi, ecx
0x8E2F31: mov     [esp+110h+var_9C], edi
0x8E2F35: movaps  xmm6, xmmword ptr ds:0B2FC70h
0x8E2F3C: movaps  xmm5, xmmword ptr ds:0A9A660h
0x8E2F43: movaps  xmm4, xmmword ptr ds:0A9A650h
0x8E2F4A: mov     ebx, [ebp+arg_0]
0x8E2F4D: movaps  xmm2, xmmword ptr [ebx+20h]
0x8E2F51: movaps  xmm1, xmmword ptr [ebx]
0x8E2F54: movaps  xmm0, xmm1
0x8E2F57: subps   xmm0, xmm2
0x8E2F5A: addps   xmm1, xmm2
0x8E2F5D: movaps  [esp+110h+var_50], xmm0
0x8E2F65: movaps  xmm3, xmmword ptr [edi+10h]
0x8E2F69: movaps  xmm2, xmmword ptr [edi+30h]
0x8E2F6D: addps   xmm0, xmm3
0x8E2F70: mulps   xmm0, xmm2
0x8E2F73: minps   xmm0, xmm6
0x8E2F76: maxps   xmm0, xmm5
0x8E2F79: addps   xmm0, xmm4
0x8E2F7C: movaps  [esp+110h+var_B0], xmm0
0x8E2F81: mov     eax, dword ptr [esp+110h+var_B0]
0x8E2F85: mov     esi, dword ptr [esp+110h+var_B0+0Ch]
0x8E2F89: mov     ecx, dword ptr [esp+110h+var_B0+4]
0x8E2F8D: mov     edx, dword ptr [esp+110h+var_B0+8]
0x8E2F91: shr     eax, 7
0x8E2F94: movzx   eax, ax
0x8E2F97: shr     esi, 7
0x8E2F9A: movaps  xmmword ptr [esp+110h+var_34+4], xmm1
0x8E2FA2: mov     [esp+110h+var_D0], eax
0x8E2FA6: shr     ecx, 7
0x8E2FA9: movzx   eax, si
0x8E2FAC: addps   xmm1, xmm3
0x8E2FAF: mulps   xmm1, xmm2
0x8E2FB2: movzx   ecx, cx
0x8E2FB5: shr     edx, 7
0x8E2FB8: mov     [esp+110h+var_C4], eax
0x8E2FBC: minps   xmm1, xmm6
0x8E2FBF: maxps   xmm1, xmm5
0x8E2FC2: movzx   edx, dx
0x8E2FC5: addps   xmm1, xmm4
0x8E2FC8: movaps  [esp+110h+var_B0], xmm1
0x8E2FCD: mov     eax, dword ptr [esp+110h+var_B0]
0x8E2FD1: mov     [esp+110h+var_CC], ecx
0x8E2FD5: mov     ecx, dword ptr [esp+110h+var_B0+4]
0x8E2FD9: shr     eax, 7
0x8E2FDC: mov     [esp+110h+var_EA], si
0x8E2FE1: mov     esi, dword ptr [esp+110h+var_B0+0Ch]
0x8E2FE5: movzx   eax, ax
0x8E2FE8: mov     [esp+110h+var_C8], edx
0x8E2FEC: mov     edx, dword ptr [esp+110h+var_B0+8]
0x8E2FF0: shr     ecx, 7
0x8E2FF3: shr     esi, 7
0x8E2FF6: movzx   ecx, cx
0x8E2FF9: shr     edx, 7
0x8E2FFC: mov     [esp+110h+var_E0], eax
0x8E3000: movzx   eax, si
0x8E3003: movzx   edx, dx
0x8E3006: mov     [esp+110h+var_EA], si
0x8E300B: mov     esi, ds:0BA9DE4h
0x8E3011: mov     [esp+110h+var_DC], ecx
0x8E3015: mov     ecx, large fs:2Ch
0x8E301C: mov     [esp+110h+var_D4], eax
0x8E3020: mov     eax, [ecx+esi*4]
0x8E3023: mov     [esp+110h+var_D8], edx
0x8E3027: mov     edx, [eax+1A4h]
0x8E302D: cmp     edx, [eax+1A8h]
0x8E3033: jnb     short loc_8E3064
0x8E3035: mov     ebx, [eax+1A4h]
0x8E303B: mov     dword ptr [ebx], offset aLthk3axissweep; "Lthk3AxisSweep"
0x8E3041: mov     dword ptr [ebx+0Ch], offset aBitfield; "bitfield"
0x8E3048: rdtsc
0x8E304A: mov     [esp+110h+var_F0], eax
0x8E304E: mov     eax, [esp+110h+var_F0]
0x8E3052: mov     [ebx+4], eax
0x8E3055: mov     eax, [ecx+esi*4]
0x8E3058: add     ebx, 10h
0x8E305B: mov     [eax+1A4h], ebx
0x8E3061: mov     ebx, [ebp+arg_0]
0x8E3064: mov     ecx, [ecx+esi*4]
0x8E3067: mov     eax, [edi+44h]
0x8E306A: mov     [esp+110h+var_B4], ecx
0x8E306E: mov     ecx, [ecx+19Ch]
0x8E3074: mov     esi, [ecx+20h]
0x8E3077: add     eax, 20h ; ' '
0x8E307A: and     eax, 0FFFFFFF0h
0x8E307D: lea     edx, [esi+eax]
0x8E3080: cmp     edx, [ecx+2Ch]
0x8E3083: ja      short loc_8E308A
0x8E3085: mov     [ecx+20h], edx
0x8E3088: jmp     short loc_8E3092
0x8E308A: mov     edx, [ecx]
0x8E308C: push    eax
0x8E308D: call    dword ptr [edx+0Ch]
0x8E3090: mov     esi, eax
0x8E3092: mov     eax, [edi+44h]
0x8E3095: sar     eax, 4
0x8E3098: test    eax, eax
0x8E309A: xorps   xmm0, xmm0
0x8E309D: mov     ecx, esi
0x8E309F: jl      short loc_8E30AD
0x8E30A1: inc     eax
0x8E30A2: mov     edx, ecx
0x8E30A4: add     ecx, 10h
0x8E30A7: dec     eax
0x8E30A8: movaps  xmmword ptr [edx], xmm0
0x8E30AB: jnz     short loc_8E30A2
0x8E30AD: mov     ebx, [ebx+30h]
0x8E30B0: test    ebx, ebx
0x8E30B2: jz      short loc_8E30B8
0x8E30B4: mov     edi, ebx
0x8E30B6: jmp     short loc_8E30BB
0x8E30B8: add     edi, 4Ch ; 'L'
0x8E30BB: xor     ebx, ebx
0x8E30BD: mov     ecx, 1
0x8E30C2: mov     [esp+110h+var_E8], edi
0x8E30C6: mov     [esp+110h+var_F4], ebx
0x8E30CA: lea     ebx, [ebx+0]
0x8E30D0: mov     eax, [esp+110h+var_E8]
0x8E30D4: mov     edx, [eax+4]
0x8E30D7: mov     eax, [eax]
0x8E30D9: mov     ebx, [esp+ebx+110h+var_D0]
0x8E30DD: mov     edi, edx
0x8E30DF: sar     edi, 1
0x8E30E1: movzx   edi, word ptr [eax+edi*4]
0x8E30E5: cmp     ebx, edi
0x8E30E7: mov     [esp+110h+var_F8], ebx
0x8E30EB: jnb     loc_8E3191
0x8E30F1: lea     edi, [eax+edx*4-10h]
0x8E30F5: add     eax, 4
0x8E30F8: cmp     eax, edi
0x8E30FA: jnb     short loc_8E3133
0x8E30FC: lea     esp, [esp+0]
0x8E3100: movzx   edx, word ptr [eax+0Ch]
0x8E3104: cmp     edx, ebx
0x8E3106: ja      short loc_8E3133
0x8E3108: movzx   edx, word ptr [eax+2]
0x8E310C: xor     [edx+esi], cl
0x8E310F: add     edx, esi
0x8E3111: movzx   edx, word ptr [eax+6]
0x8E3115: xor     [edx+esi], cl
0x8E3118: add     edx, esi
0x8E311A: movzx   edx, word ptr [eax+0Ah]
0x8E311E: xor     [edx+esi], cl
0x8E3121: add     edx, esi
0x8E3123: movzx   edx, word ptr [eax+0Eh]
0x8E3127: xor     [edx+esi], cl
0x8E312A: add     edx, esi
0x8E312C: add     eax, 10h
0x8E312F: cmp     eax, edi
0x8E3131: jb      short loc_8E3100
0x8E3133: movzx   edx, word ptr [eax]
0x8E3136: mov     edi, [esp+110h+var_F8]
0x8E313A: cmp     edx, edi
0x8E313C: mov     ebx, [esp+110h+var_F4]
0x8E3140: ja      short loc_8E3156
0x8E3142: movzx   edx, word ptr [eax+2]
0x8E3146: xor     [edx+esi], cl
0x8E3149: add     edx, esi
0x8E314B: movzx   edx, word ptr [eax+4]
0x8E314F: add     eax, 4
0x8E3152: cmp     edx, edi
0x8E3154: jbe     short loc_8E3142
0x8E3156: movzx   edi, word ptr [eax]
0x8E3159: mov     edx, [esp+ebx+110h+var_E0]
0x8E315D: cmp     edi, edx
0x8E315F: mov     [esp+ebx+110h+var_8C], eax
0x8E3166: ja      short loc_8E3188
0x8E3168: movzx   edi, word ptr [eax+2]
0x8E316C: mov     bl, [eax]
0x8E316E: add     edi, esi
0x8E3170: and     bl, 1
0x8E3173: dec     bl
0x8E3175: and     bl, cl
0x8E3177: xor     [edi], bl
0x8E3179: movzx   edi, word ptr [eax+4]
0x8E317D: add     eax, 4
0x8E3180: cmp     edi, edx
0x8E3182: jbe     short loc_8E3168
0x8E3184: mov     ebx, [esp+110h+var_F4]
0x8E3188: mov     [esp+ebx+110h+var_98], eax
0x8E318C: jmp     loc_8E323B
0x8E3191: lea     edi, [eax+10h]
0x8E3194: lea     eax, [eax+edx*4-8]
0x8E3198: cmp     eax, edi
0x8E319A: jb      short loc_8E31D7
0x8E319C: mov     edx, [esp+110h+var_F4]
0x8E31A0: mov     ebx, [esp+edx+110h+var_E0]
0x8E31A4: movzx   edx, word ptr [eax-0Ch]
0x8E31A8: cmp     edx, ebx
0x8E31AA: jbe     short loc_8E31D7
0x8E31AC: movzx   edx, word ptr [eax+2]
0x8E31B0: xor     [edx+esi], cl
0x8E31B3: add     edx, esi
0x8E31B5: movzx   edx, word ptr [eax-2]
0x8E31B9: xor     [edx+esi], cl
0x8E31BC: add     edx, esi
0x8E31BE: movzx   edx, word ptr [eax-6]
0x8E31C2: xor     [edx+esi], cl
0x8E31C5: add     edx, esi
0x8E31C7: movzx   edx, word ptr [eax-0Ah]
0x8E31CB: xor     [edx+esi], cl
0x8E31CE: add     edx, esi
0x8E31D0: sub     eax, 10h
0x8E31D3: cmp     eax, edi
0x8E31D5: jnb     short loc_8E31A4
0x8E31D7: mov     ebx, [esp+110h+var_F4]
0x8E31DB: movzx   edx, word ptr [eax]
0x8E31DE: mov     edi, [esp+ebx+110h+var_E0]
0x8E31E2: cmp     edx, edi
0x8E31E4: jbe     short loc_8E31FA
0x8E31E6: movzx   edx, word ptr [eax+2]
0x8E31EA: xor     [edx+esi], cl
0x8E31ED: add     edx, esi
0x8E31EF: movzx   edx, word ptr [eax-4]
0x8E31F3: sub     eax, 4
0x8E31F6: cmp     edx, edi
0x8E31F8: ja      short loc_8E31E6
0x8E31FA: mov     edi, [esp+110h+var_F8]
0x8E31FE: lea     edx, [eax+4]
0x8E3201: mov     [esp+ebx+110h+var_98], edx
0x8E3205: movzx   edx, word ptr [eax]
0x8E3208: cmp     edx, edi
0x8E320A: jbe     short loc_8E3231
0x8E320C: lea     esp, [esp+0]
0x8E3210: movzx   edx, word ptr [eax+2]
0x8E3214: lea     edi, [edx+esi]
0x8E3217: mov     dl, [eax]
0x8E3219: and     dl, 1
0x8E321C: neg     dl
0x8E321E: and     dl, cl
0x8E3220: xor     [edi], dl
0x8E3222: movzx   edx, word ptr [eax-4]
0x8E3226: mov     edi, [esp+110h+var_F8]
0x8E322A: sub     eax, 4
0x8E322D: cmp     edx, edi
0x8E322F: ja      short loc_8E3210
0x8E3231: add     eax, 4
0x8E3234: mov     [esp+ebx+110h+var_8C], eax
0x8E323B: mov     edi, [esp+110h+var_E8]
0x8E323F: add     ebx, 4
0x8E3242: add     edi, 0Ch
0x8E3245: shl     ecx, 1
0x8E3247: cmp     ebx, 0Ch
0x8E324A: mov     [esp+110h+var_E8], edi
0x8E324E: mov     [esp+110h+var_F4], ebx
0x8E3252: jl      loc_8E30D0
0x8E3258: mov     ecx, ds:0BA9DE4h
0x8E325E: mov     eax, large fs:2Ch
0x8E3264: mov     eax, [eax+ecx*4]
0x8E3267: mov     edx, [eax+1A4h]
0x8E326D: cmp     edx, [eax+1A8h]
0x8E3273: jnb     short loc_8E329B
0x8E3275: mov     edi, [esp+110h+var_B4]
0x8E3279: mov     ecx, [edi+1A4h]
0x8E327F: mov     dword ptr [ecx], offset aStstartoverlap; "StStartOverlaps"
0x8E3285: rdtsc
0x8E3287: mov     [esp+110h+var_F0], eax
0x8E328B: mov     eax, [esp+110h+var_F0]
0x8E328F: mov     [ecx+4], eax
0x8E3292: add     ecx, 0Ch
0x8E3295: mov     [edi+1A4h], ecx
0x8E329B: mov     eax, [esp+110h+var_9C]
0x8E329F: mov     edx, [eax+44h]
0x8E32A2: mov     ecx, [eax+40h]
0x8E32A5: mov     edi, [ebp+arg_4]
0x8E32A8: sar     edx, 2
0x8E32AB: lea     eax, [esi+edx*4+4]
0x8E32AF: cmp     esi, eax
0x8E32B1: mov     [esp+110h+var_F4], 3F800000h
0x8E32B9: mov     ebx, esi
0x8E32BB: mov     [esp+110h+var_F0], eax
0x8E32BF: jnb     loc_8E33BA
0x8E32C5: add     ecx, 1Ch
0x8E32C8: mov     [esp+110h+var_F8], ecx
0x8E32CC: lea     esp, [esp+0]
0x8E32D0: mov     eax, [ebx]
0x8E32D2: add     eax, 1010101h
0x8E32D7: test    eax, 8080808h
0x8E32DC: jz      loc_8E33A0
0x8E32E2: cmp     byte ptr [ebx], 7
0x8E32E5: jnz     short loc_8E3311
0x8E32E7: mov     ecx, [esp+110h+var_F8]
0x8E32EB: mov     eax, [ecx-10h]
0x8E32EE: test    al, 1
0x8E32F0: jnz     short loc_8E3311
0x8E32F2: mov     edx, [edi]
0x8E32F4: push    0
0x8E32F6: push    eax
0x8E32F7: mov     ecx, edi
0x8E32F9: call    dword ptr [edx+4]
0x8E32FC: fld     [esp+110h+var_F4]
0x8E3300: fcomp   st(1)
0x8E3302: fnstsw  ax
0x8E3304: test    ah, 5
0x8E3307: jnp     short loc_8E330F
0x8E3309: fstp    [esp+110h+var_F4]
0x8E330D: jmp     short loc_8E3311
0x8E330F: fstp    st
0x8E3311: cmp     byte ptr [ebx+1], 7
0x8E3315: jnz     short loc_8E3340
0x8E3317: mov     eax, [esp+110h+var_F8]
0x8E331B: mov     eax, [eax]
0x8E331D: test    al, 1
0x8E331F: jnz     short loc_8E3340
0x8E3321: mov     edx, [edi]
0x8E3323: push    0
0x8E3325: push    eax
0x8E3326: mov     ecx, edi
0x8E3328: call    dword ptr [edx+4]
0x8E332B: fld     [esp+110h+var_F4]
0x8E332F: fcomp   st(1)
0x8E3331: fnstsw  ax
0x8E3333: test    ah, 5
0x8E3336: jnp     short loc_8E333E
0x8E3338: fstp    [esp+110h+var_F4]
0x8E333C: jmp     short loc_8E3340
0x8E333E: fstp    st
0x8E3340: cmp     byte ptr [ebx+2], 7
0x8E3344: jnz     short loc_8E3370
0x8E3346: mov     eax, [esp+110h+var_F8]
0x8E334A: mov     eax, [eax+10h]
0x8E334D: test    al, 1
0x8E334F: jnz     short loc_8E3370
0x8E3351: mov     edx, [edi]
0x8E3353: push    0
0x8E3355: push    eax
0x8E3356: mov     ecx, edi
0x8E3358: call    dword ptr [edx+4]
0x8E335B: fld     [esp+110h+var_F4]
0x8E335F: fcomp   st(1)
0x8E3361: fnstsw  ax
0x8E3363: test    ah, 5
0x8E3366: jnp     short loc_8E336E
0x8E3368: fstp    [esp+110h+var_F4]
0x8E336C: jmp     short loc_8E3370
0x8E336E: fstp    st
0x8E3370: cmp     byte ptr [ebx+3], 7
0x8E3374: jnz     short loc_8E33A0
0x8E3376: mov     eax, [esp+110h+var_F8]
0x8E337A: mov     eax, [eax+20h]
0x8E337D: test    al, 1
0x8E337F: jnz     short loc_8E33A0
0x8E3381: mov     edx, [edi]
0x8E3383: push    0
0x8E3385: push    eax
0x8E3386: mov     ecx, edi
0x8E3388: call    dword ptr [edx+4]
0x8E338B: fld     [esp+110h+var_F4]
0x8E338F: fcomp   st(1)
0x8E3391: fnstsw  ax
0x8E3393: test    ah, 5
0x8E3396: jnp     short loc_8E339E
0x8E3398: fstp    [esp+110h+var_F4]
0x8E339C: jmp     short loc_8E33A0
0x8E339E: fstp    st
0x8E33A0: mov     edx, [esp+110h+var_F8]
0x8E33A4: mov     eax, [esp+110h+var_F0]
0x8E33A8: add     edx, 40h ; '@'
0x8E33AB: add     ebx, 4
0x8E33AE: cmp     ebx, eax
0x8E33B0: mov     [esp+110h+var_F8], edx
0x8E33B4: jb      loc_8E32D0
0x8E33BA: mov     ecx, ds:0BA9DE4h
0x8E33C0: mov     eax, large fs:2Ch
0x8E33C6: mov     eax, [eax+ecx*4]
0x8E33C9: mov     edx, [eax+1A4h]
0x8E33CF: cmp     edx, [eax+1A8h]
0x8E33D5: jnb     short loc_8E33FD
0x8E33D7: mov     edi, [esp+110h+var_B4]
0x8E33DB: mov     ecx, [edi+1A4h]
0x8E33E1: mov     dword ptr [ecx], offset aStwalk; "StWalk"
0x8E33E7: rdtsc
0x8E33E9: mov     [esp+110h+var_F0], eax
0x8E33ED: mov     eax, [esp+110h+var_F0]
0x8E33F1: mov     [ecx+4], eax
0x8E33F4: add     ecx, 0Ch
0x8E33F7: mov     [edi+1A4h], ecx
0x8E33FD: mov     eax, [ebp+arg_0]
0x8E3400: mov     edi, [esp+110h+var_9C]
0x8E3404: movaps  xmm0, xmmword ptr [eax]
0x8E3407: movaps  xmm1, xmmword ptr [eax+10h]
0x8E340B: sub     eax, edi
0x8E340D: subps   xmm1, xmm0
0x8E3410: movaps  [esp+110h+var_10], xmm1
0x8E3418: lea     edx, [edi+30h]
0x8E341B: mov     [esp+110h+var_F0], eax
0x8E341F: xor     ecx, ecx
0x8E3421: mov     ebx, 0FFFFFFFCh
0x8E3426: jmp     short loc_8E3430
0x8E3428: align 10h
0x8E3430: fld     dword ptr [esp+ecx+110h+var_10]
0x8E3437: fmul    dword ptr [edx]
0x8E3439: fst     [esp+110h+var_E8]
0x8E343D: fabs
0x8E343F: fld     [esp+110h+var_E8]
0x8E3443: fcomp   dword ptr ds:0A2FAA8h
0x8E3449: fnstsw  ax
0x8E344B: test    ah, 41h
0x8E344E: jnz     short loc_8E3473
0x8E3450: mov     [esp+ecx+110h+var_5C], 4
0x8E345B: mov     [esp+ecx+110h+var_3C], 0
0x8E3466: mov     [esp+ecx+110h+var_1C], 1
0x8E3471: jmp     short loc_8E34EB
0x8E3473: mov     eax, [esp+ecx+110h+var_8C]
0x8E347A: fld     dword ptr [esp+ecx+110h+var_50]
0x8E3481: mov     [esp+ecx+110h+var_5C], ebx
0x8E3488: mov     ebx, [esp+ecx+110h+var_98]
0x8E348C: mov     [esp+ecx+110h+var_98], eax
0x8E3490: mov     eax, dword ptr [esp+ecx+110h+var_34+4]
0x8E3497: fstp    dword ptr [esp+ecx+110h+var_34+4]
0x8E349E: mov     dword ptr [esp+ecx+110h+var_50], eax
0x8E34A5: mov     eax, [esp+ecx+110h+var_D0]
0x8E34A9: mov     [esp+ecx+110h+var_8C], ebx
0x8E34B0: mov     ebx, [esp+ecx+110h+var_E0]
0x8E34B4: mov     [esp+ecx+110h+var_E0], eax
0x8E34B8: mov     eax, [esp+ecx+110h+var_8C]
0x8E34BF: mov     [esp+ecx+110h+var_D0], ebx
0x8E34C3: mov     ebx, 0FFFFFFFCh
0x8E34C8: add     eax, ebx
0x8E34CA: mov     [esp+ecx+110h+var_8C], eax
0x8E34D1: add     [esp+ecx+110h+var_98], ebx
0x8E34D5: mov     [esp+ecx+110h+var_3C], 1
0x8E34E0: mov     [esp+ecx+110h+var_1C], 0
0x8E34EB: fld     dword ptr [edx-20h]
0x8E34EE: fadd    dword ptr [esp+ecx+110h+var_50]
0x8E34F5: fmul    dword ptr [edx]
0x8E34F7: fmul    dword ptr ds:0A9A648h
0x8E34FD: fld     st(1)
0x8E34FF: fcompp
0x8E3501: fnstsw  ax
0x8E3503: test    ah, 5
0x8E3506: jnp     short loc_8E3568
0x8E3508: mov     eax, [esp+110h+var_F0]
0x8E350C: fld     dword ptr [edx+eax-20h]
0x8E3510: fadd    dword ptr [edx-20h]
0x8E3513: fmul    dword ptr [edx]
0x8E3515: fmul    dword ptr ds:0A9A648h
0x8E351B: fxch    st(1)
0x8E351D: fcompp
0x8E351F: fnstsw  ax
0x8E3521: test    ah, 5
0x8E3524: jnp     short loc_8E356A
0x8E3526: fld     dword ptr ds:0A2F948h
0x8E352C: fdiv    [esp+110h+var_E8]
0x8E3530: fst     [esp+ecx+110h+var_80]
0x8E3537: fld     dword ptr [edx-20h]
0x8E353A: fadd    dword ptr [esp+ecx+110h+var_50]
0x8E3541: fmul    dword ptr [edx]
0x8E3543: fsub    dword ptr [edi+7Ch]
0x8E3546: fmul    st, st(1)
0x8E3548: fstp    dword ptr [esp+ecx+110h+var_B0]
0x8E354C: fld     dword ptr [esp+ecx+110h+var_34+4]
0x8E3553: fadd    dword ptr [edx-20h]
0x8E3556: fmul    dword ptr [edx]
0x8E3558: fsub    dword ptr [edi+7Ch]
0x8E355B: fmul    st, st(1)
0x8E355D: fstp    [esp+ecx+110h+var_70]
0x8E3564: fstp    st
0x8E3566: jmp     short loc_8E3585
0x8E3568: fstp    st
0x8E356A: mov     eax, 0C0000000h
0x8E356F: mov     [esp+ecx+110h+var_80], 0
0x8E357A: mov     dword ptr [esp+ecx+110h+var_B0], eax
0x8E357E: mov     [esp+ecx+110h+var_70], eax
0x8E3585: add     ecx, 4
0x8E3588: add     edx, 4
0x8E358B: cmp     ecx, 0Ch
0x8E358E: jl      loc_8E3430
0x8E3594: mov     ecx, [esp+110h+var_8C]
0x8E359B: movzx   edx, word ptr [ecx]
0x8E359E: mov     eax, [esp+110h+var_88]
0x8E35A5: movzx   ecx, word ptr [eax]
0x8E35A8: mov     [esp+110h+var_F0], edx
0x8E35AC: mov     edx, [esp+110h+var_84]
0x8E35B3: fild    [esp+110h+var_F0]
0x8E35B7: movzx   eax, word ptr [edx]
0x8E35BA: fmul    [esp+110h+var_80]
0x8E35C1: mov     [esp+110h+var_F0], ecx
0x8E35C5: mov     ecx, [esp+110h+var_98]
0x8E35C9: movzx   edx, word ptr [ecx]
0x8E35CC: fsub    dword ptr [esp+110h+var_B0]
0x8E35D0: fstp    [esp+110h+var_E0]
0x8E35D4: fild    [esp+110h+var_F0]
0x8E35D8: mov     [esp+110h+var_F0], eax
0x8E35DC: mov     eax, [esp+110h+var_94]
0x8E35E0: movzx   ecx, word ptr [eax]
0x8E35E3: fmul    [esp+110h+var_7C]
0x8E35EA: fsub    dword ptr [esp+110h+var_B0+4]
0x8E35EE: fstp    [esp+110h+var_DC]
0x8E35F2: fild    [esp+110h+var_F0]
0x8E35F6: mov     [esp+110h+var_F0], edx
0x8E35FA: mov     edx, [esp+110h+var_90]
0x8E3601: movzx   eax, word ptr [edx]
0x8E3604: fmul    [esp+110h+var_78]
0x8E360B: mov     byte ptr [esi], 8
0x8E360E: fsub    dword ptr [esp+110h+var_B0+8]
0x8E3612: fstp    [esp+110h+var_D8]
0x8E3616: fild    [esp+110h+var_F0]
0x8E361A: mov     [esp+110h+var_F0], ecx
0x8E361E: mov     ecx, 2
0x8E3623: fmul    [esp+110h+var_80]
0x8E362A: fsub    [esp+110h+var_70]
0x8E3631: fstp    [esp+110h+var_D0]
0x8E3635: fild    [esp+110h+var_F0]
0x8E3639: mov     [esp+110h+var_F0], eax
0x8E363D: fmul    [esp+110h+var_7C]
0x8E3644: fsub    [esp+110h+var_6C]
0x8E364B: fstp    [esp+110h+var_CC]
0x8E364F: fild    [esp+110h+var_F0]
0x8E3653: fmul    [esp+110h+var_78]
0x8E365A: fsub    [esp+110h+var_68]
0x8E3661: fstp    [esp+110h+var_C8]
0x8E3665: fld     [esp+110h+var_E0]
0x8E3669: fcomp   [esp+110h+var_DC]
0x8E366D: fnstsw  ax
0x8E366F: test    ah, 5
0x8E3672: jp      short loc_8E368D
0x8E3674: fld     [esp+110h+var_E0]
0x8E3678: fcomp   [esp+110h+var_D8]
0x8E367C: fnstsw  ax
0x8E367E: test    ah, 5
0x8E3681: jp      short loc_8E36A4
0x8E3683: mov     [esp+110h+var_F8], 0
0x8E368B: jmp     short loc_8E36A8
0x8E368D: fld     [esp+110h+var_DC]
0x8E3691: mov     [esp+110h+var_F8], 1
0x8E3699: fcomp   [esp+110h+var_D8]
0x8E369D: fnstsw  ax
0x8E369F: test    ah, 5
0x8E36A2: jnp     short loc_8E36A8
0x8E36A4: mov     [esp+110h+var_F8], ecx
0x8E36A8: fld     [esp+110h+var_D0]
0x8E36AC: fcomp   [esp+110h+var_CC]
0x8E36B0: fnstsw  ax
0x8E36B2: test    ah, 5
0x8E36B5: jp      short loc_8E36CA
0x8E36B7: fld     [esp+110h+var_D0]
0x8E36BB: fcomp   [esp+110h+var_C8]
0x8E36BF: fnstsw  ax
0x8E36C1: test    ah, 5
0x8E36C4: jp      short loc_8E36DE
0x8E36C6: xor     ebx, ebx
0x8E36C8: jmp     short loc_8E36E3
0x8E36CA: fld     [esp+110h+var_CC]
0x8E36CE: mov     ebx, 1
0x8E36D3: fcomp   [esp+110h+var_C8]
0x8E36D7: fnstsw  ax
0x8E36D9: test    ah, 5
0x8E36DC: jnp     short loc_8E36E3
0x8E36DE: mov     ebx, 2
0x8E36E3: mov     edi, [esp+110h+var_F8]
0x8E36E7: fld     [esp+ebx*4+110h+var_D0]
0x8E36EB: fcomp   [esp+edi*4+110h+var_E0]
0x8E36EF: lea     ecx, [esp+ebx*4+110h+var_D0]
0x8E36F3: lea     edx, [esp+edi*4+110h+var_E0]
0x8E36F7: mov     [esp+110h+var_E8], ecx
0x8E36FB: mov     [esp+110h+var_F0], edx
0x8E36FF: fnstsw  ax
0x8E3701: test    ah, 5
0x8E3704: jp      loc_8E3808
0x8E370A: fld     dword ptr [ecx]
0x8E370C: fcomp   [esp+110h+var_F4]
0x8E3710: fnstsw  ax
0x8E3712: test    ah, 41h
0x8E3715: jz      loc_8E38F5
0x8E371B: jmp     short loc_8E3720
0x8E371D: align 10h
0x8E3720: mov     edi, [esp+ebx*4+110h+var_98]
0x8E3724: mov     dl, [edi]
0x8E3726: mov     cl, byte ptr [esp+ebx*4+110h+var_1C]
0x8E372D: movzx   eax, word ptr [edi+2]
0x8E3731: and     dl, 1
0x8E3734: xor     dl, cl
0x8E3736: mov     ecx, ebx
0x8E3738: shl     dl, cl
0x8E373A: mov     cl, [esi+eax]
0x8E373D: xor     cl, dl
0x8E373F: cmp     cl, 7
0x8E3742: mov     [esi+eax], cl
0x8E3745: jb      short loc_8E3782
0x8E3747: test    eax, eax
0x8E3749: jz      loc_8E37DF
0x8E374F: mov     ecx, [esp+110h+var_9C]
0x8E3753: mov     edx, [ecx+40h]
0x8E3756: shl     eax, 4
0x8E3759: add     eax, edx
0x8E375B: mov     eax, [eax+0Ch]
0x8E375E: test    al, 1
0x8E3760: jnz     short loc_8E3782
0x8E3762: mov     ecx, [ebp+arg_4]
0x8E3765: mov     edx, [ecx]
0x8E3767: push    0
0x8E3769: push    eax
0x8E376A: call    dword ptr [edx+4]
0x8E376D: fld     [esp+110h+var_F4]
0x8E3771: fcomp   st(1)
0x8E3773: fnstsw  ax
0x8E3775: test    ah, 5
0x8E3778: jnp     short loc_8E3780
0x8E377A: fstp    [esp+110h+var_F4]
0x8E377E: jmp     short loc_8E3782
0x8E3780: fstp    st
0x8E3782: mov     eax, [esp+ebx*4+110h+var_5C]
0x8E3789: mov     cx, [edi]
0x8E378C: add     eax, edi
0x8E378E: cmp     cx, [eax]
0x8E3791: mov     [esp+ebx*4+110h+var_98], eax
0x8E3795: jz      short loc_8E3720
0x8E3797: movzx   edx, word ptr [eax]
0x8E379A: mov     eax, [esp+110h+var_E8]
0x8E379E: mov     [esp+110h+var_F0], edx
0x8E37A2: fild    [esp+110h+var_F0]
0x8E37A6: fmul    [esp+ebx*4+110h+var_80]
0x8E37AD: fsub    [esp+ebx*4+110h+var_70]
0x8E37B4: fstp    dword ptr [eax]
0x8E37B6: fld     [esp+110h+var_D0]
0x8E37BA: fcomp   [esp+110h+var_CC]
0x8E37BE: fnstsw  ax
0x8E37C0: test    ah, 5
0x8E37C3: jp      short loc_8E37EB
0x8E37C5: fld     [esp+110h+var_D0]
0x8E37C9: fcomp   [esp+110h+var_C8]
0x8E37CD: fnstsw  ax
0x8E37CF: test    ah, 5
0x8E37D2: jp      loc_8E36DE
0x8E37D8: xor     ebx, ebx
0x8E37DA: jmp     loc_8E36E3
0x8E37DF: mov     ecx, [esp+110h+var_E8]
0x8E37E3: mov     dword ptr [ecx], 40000000h
0x8E37E9: jmp     short loc_8E37B6
0x8E37EB: fld     [esp+110h+var_CC]
0x8E37EF: fcomp   [esp+110h+var_C8]
0x8E37F3: fnstsw  ax
0x8E37F5: test    ah, 5
0x8E37F8: jp      loc_8E36DE
0x8E37FE: mov     ebx, 1
0x8E3803: jmp     loc_8E36E3
0x8E3808: fld     dword ptr [edx]
0x8E380A: fcomp   [esp+110h+var_F4]
0x8E380E: fnstsw  ax
0x8E3810: test    ah, 41h
0x8E3813: jz      loc_8E38F5
0x8E3819: mov     cl, byte ptr [esp+edi*4+110h+var_3C]
0x8E3820: mov     byte ptr [esp+110h+var_E4+3], cl
0x8E3824: jmp     short loc_8E3830
0x8E3826: align 10h
0x8E3830: mov     edx, [esp+110h+var_F8]
0x8E3834: mov     eax, [esp+edx*4+110h+var_8C]
0x8E383B: mov     dl, [eax]
0x8E383D: mov     cl, byte ptr [esp+110h+var_E4+3]
0x8E3841: movzx   edi, word ptr [eax+2]
0x8E3845: and     dl, 1
0x8E3848: xor     dl, cl
0x8E384A: mov     ecx, [esp+110h+var_F8]
0x8E384E: shl     dl, cl
0x8E3850: mov     cl, [esi+edi]
0x8E3853: xor     cl, dl
0x8E3855: cmp     cl, 8
0x8E3858: mov     [esi+edi], cl
0x8E385B: ja      short loc_8E3897
0x8E385D: mov     ecx, [esp+110h+var_F8]
0x8E3861: mov     dx, [eax]
0x8E3864: mov     edi, [esp+ecx*4+110h+var_5C]
0x8E386B: add     eax, edi
0x8E386D: cmp     dx, [eax]
0x8E3870: mov     [esp+ecx*4+110h+var_8C], eax
0x8E3877: jz      short loc_8E3830
0x8E3879: movzx   edx, word ptr [eax]
0x8E387C: mov     eax, [esp+110h+var_F0]
0x8E3880: mov     [esp+110h+var_E8], edx
0x8E3884: fild    [esp+110h+var_E8]
0x8E3888: fmul    [esp+ecx*4+110h+var_80]
0x8E388F: fsub    dword ptr [esp+ecx*4+110h+var_B0]
0x8E3893: fstp    dword ptr [eax]
0x8E3895: jmp     short loc_8E38A1
0x8E3897: mov     eax, [esp+110h+var_F0]
0x8E389B: mov     dword ptr [eax], 40000000h
0x8E38A1: fld     [esp+110h+var_E0]
0x8E38A5: fcomp   [esp+110h+var_DC]
0x8E38A9: fnstsw  ax
0x8E38AB: test    ah, 5
0x8E38AE: jp      short loc_8E38D9
0x8E38B0: fld     [esp+110h+var_E0]
0x8E38B4: fcomp   [esp+110h+var_D8]
0x8E38B8: fnstsw  ax
0x8E38BA: test    ah, 5
0x8E38BD: jp      short loc_8E38CC
0x8E38BF: mov     [esp+110h+var_F8], 0
0x8E38C7: jmp     loc_8E36E3
0x8E38CC: mov     [esp+110h+var_F8], 2
0x8E38D4: jmp     loc_8E36E3
0x8E38D9: fld     [esp+110h+var_DC]
0x8E38DD: fcomp   [esp+110h+var_D8]
0x8E38E1: fnstsw  ax
0x8E38E3: test    ah, 5
0x8E38E6: jp      short loc_8E38CC
0x8E38E8: mov     [esp+110h+var_F8], 1
0x8E38F0: jmp     loc_8E36E3
0x8E38F5: mov     ecx, large fs:2Ch
0x8E38FC: mov     edx, ds:0BA9DE4h
0x8E3902: mov     eax, [ecx+edx*4]
0x8E3905: mov     ecx, [eax+1A4h]
0x8E390B: cmp     ecx, [eax+1A8h]
0x8E3911: mov     edi, [esp+110h+var_B4]
0x8E3915: jnb     short loc_8E3939
0x8E3917: mov     ecx, [edi+1A4h]
0x8E391D: mov     dword ptr [ecx], offset aLt_0; "lt"
0x8E3923: rdtsc
0x8E3925: mov     [esp+110h+var_F0], eax
0x8E3929: mov     edx, [esp+110h+var_F0]
0x8E392D: mov     [ecx+4], edx
0x8E3930: add     ecx, 0Ch
0x8E3933: mov     [edi+1A4h], ecx
0x8E3939: mov     ecx, [edi+19Ch]
0x8E393F: cmp     esi, [ecx+28h]
0x8E3942: mov     [ecx+20h], esi
0x8E3945: jnz     short loc_8E394D
0x8E3947: mov     eax, [ecx]
0x8E3949: push    esi
0x8E394A: call    dword ptr [eax+10h]
0x8E394D: pop     edi
0x8E394E: pop     esi
0x8E394F: pop     ebx
0x8E3950: mov     esp, ebp
0x8E3952: pop     ebp
0x8E3953: retn    8
