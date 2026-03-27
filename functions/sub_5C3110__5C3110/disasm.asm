0x5C3110: push    0FFFFFFFFh
0x5C3112: push    offset SEH_5C3110
0x5C3117: mov     eax, large fs:0
0x5C311D: push    eax
0x5C311E: push    esi
0x5C311F: push    edi
0x5C3120: mov     eax, ds:0B30AACh
0x5C3125: xor     eax, esp
0x5C3127: push    eax
0x5C3128: lea     eax, [esp+18h+var_C]
0x5C312C: mov     large fs:0, eax
0x5C3132: mov     esi, ecx
0x5C3134: mov     edi, [esp+18h+arg_0]
0x5C3138: mov     eax, ds:0B38F70h
0x5C313D: push    edi; unsigned __int8 *
0x5C313E: push    eax; unsigned __int8 *
0x5C313F: call    __mbscmp
0x5C3144: add     esp, 8
0x5C3147: test    eax, eax
0x5C3149: jnz     short loc_5C316D
0x5C314B: mov     esi, [esi+40h]
0x5C314E: push    edi
0x5C314F: call    FormHeapFree
0x5C3154: add     esp, 4
0x5C3157: mov     eax, esi
0x5C3159: mov     ecx, [esp+18h+var_C]
0x5C315D: mov     large fs:0, ecx
0x5C3164: pop     ecx
0x5C3165: pop     edi
0x5C3166: pop     esi
0x5C3167: add     esp, 0Ch
0x5C316A: retn    8
0x5C316D: mov     ecx, ds:0B38F78h
0x5C3173: push    ecx; unsigned __int8 *
0x5C3174: push    edi; unsigned __int8 *
0x5C3175: call    __mbscmp
0x5C317A: add     esp, 8
0x5C317D: test    eax, eax
0x5C317F: jnz     short loc_5C31A3
0x5C3181: mov     esi, [esi+44h]
0x5C3184: push    edi
0x5C3185: call    FormHeapFree
0x5C318A: add     esp, 4
0x5C318D: mov     eax, esi
0x5C318F: mov     ecx, [esp+18h+var_C]
0x5C3193: mov     large fs:0, ecx
0x5C319A: pop     ecx
0x5C319B: pop     edi
0x5C319C: pop     esi
0x5C319D: add     esp, 0Ch
0x5C31A0: retn    8
0x5C31A3: mov     edx, ds:0B38F88h
0x5C31A9: push    edx; unsigned __int8 *
0x5C31AA: push    edi; unsigned __int8 *
0x5C31AB: call    __mbscmp
0x5C31B0: add     esp, 8
0x5C31B3: test    eax, eax
0x5C31B5: jnz     short loc_5C31D9
0x5C31B7: mov     esi, [esi+48h]
0x5C31BA: push    edi
0x5C31BB: call    FormHeapFree
0x5C31C0: add     esp, 4
0x5C31C3: mov     eax, esi
0x5C31C5: mov     ecx, [esp+18h+var_C]
0x5C31C9: mov     large fs:0, ecx
0x5C31D0: pop     ecx
0x5C31D1: pop     edi
0x5C31D2: pop     esi
0x5C31D3: add     esp, 0Ch
0x5C31D6: retn    8
0x5C31D9: mov     eax, ds:0B38F80h
0x5C31DE: push    eax; unsigned __int8 *
0x5C31DF: push    edi; unsigned __int8 *
0x5C31E0: call    __mbscmp
0x5C31E5: add     esp, 8
0x5C31E8: test    eax, eax
0x5C31EA: jnz     short loc_5C320E
0x5C31EC: mov     esi, [esi+4Ch]
0x5C31EF: push    edi
0x5C31F0: call    FormHeapFree
0x5C31F5: add     esp, 4
0x5C31F8: mov     eax, esi
0x5C31FA: mov     ecx, [esp+18h+var_C]
0x5C31FE: mov     large fs:0, ecx
0x5C3205: pop     ecx
0x5C3206: pop     edi
0x5C3207: pop     esi
0x5C3208: add     esp, 0Ch
0x5C320B: retn    8
0x5C320E: mov     ecx, ds:0B38FE0h
0x5C3214: push    ecx; unsigned __int8 *
0x5C3215: push    edi; unsigned __int8 *
0x5C3216: call    __mbscmp
0x5C321B: add     esp, 8
0x5C321E: test    eax, eax
0x5C3220: jnz     short loc_5C324C
0x5C3222: mov     esi, [esi+50h]
0x5C3225: mov     [esp+18h+var_4], 0FFFFFFFFh
0x5C322D: lea     ecx, [esp+18h+arg_0]; void *
0x5C3231: call    BSStringT_Clear
0x5C3236: mov     eax, esi
0x5C3238: mov     ecx, [esp+18h+var_C]
0x5C323C: mov     large fs:0, ecx
0x5C3243: pop     ecx
0x5C3244: pop     edi
0x5C3245: pop     esi
0x5C3246: add     esp, 0Ch
0x5C3249: retn    8
0x5C324C: mov     edx, ds:0B38FE8h
0x5C3252: push    edx; unsigned __int8 *
0x5C3253: push    edi; unsigned __int8 *
0x5C3254: call    __mbscmp
0x5C3259: add     esp, 8
0x5C325C: test    eax, eax
0x5C325E: jnz     short loc_5C3265
0x5C3260: mov     esi, [esi+54h]
0x5C3263: jmp     short loc_5C3225
0x5C3265: mov     eax, ds:0B39000h
0x5C326A: push    eax; unsigned __int8 *
0x5C326B: push    edi; unsigned __int8 *
0x5C326C: call    __mbscmp
0x5C3271: add     esp, 8
0x5C3274: test    eax, eax
0x5C3276: jnz     short loc_5C327D
0x5C3278: mov     esi, [esi+58h]
0x5C327B: jmp     short loc_5C3225
0x5C327D: mov     ecx, ds:0B39008h
0x5C3283: push    ecx; unsigned __int8 *
0x5C3284: push    edi; unsigned __int8 *
0x5C3285: call    __mbscmp
0x5C328A: add     esp, 8
0x5C328D: test    eax, eax
0x5C328F: jnz     short loc_5C3296
0x5C3291: mov     esi, [esi+5Ch]
0x5C3294: jmp     short loc_5C3225
0x5C3296: mov     edx, ds:0B39010h
0x5C329C: push    edx; unsigned __int8 *
0x5C329D: push    edi; unsigned __int8 *
0x5C329E: call    __mbscmp
0x5C32A3: add     esp, 8
0x5C32A6: test    eax, eax
0x5C32A8: jnz     short loc_5C32B2
0x5C32AA: mov     esi, [esi+60h]
0x5C32AD: jmp     loc_5C3225
0x5C32B2: mov     eax, ds:0B39018h
0x5C32B7: push    eax; unsigned __int8 *
0x5C32B8: push    edi; unsigned __int8 *
0x5C32B9: call    __mbscmp
0x5C32BE: add     esp, 8
0x5C32C1: test    eax, eax
0x5C32C3: jnz     short loc_5C32CD
0x5C32C5: mov     esi, [esi+64h]
0x5C32C8: jmp     loc_5C3225
0x5C32CD: mov     ecx, ds:0B38F90h
0x5C32D3: push    ecx; unsigned __int8 *
0x5C32D4: push    edi; unsigned __int8 *
0x5C32D5: call    __mbscmp
0x5C32DA: add     esp, 8
0x5C32DD: test    eax, eax
0x5C32DF: jnz     short loc_5C32E9
0x5C32E1: mov     esi, [esi+68h]
0x5C32E4: jmp     loc_5C3225
0x5C32E9: mov     edx, ds:0B39020h
0x5C32EF: push    edx; unsigned __int8 *
0x5C32F0: push    edi; unsigned __int8 *
0x5C32F1: call    __mbscmp
0x5C32F6: add     esp, 8
0x5C32F9: test    eax, eax
0x5C32FB: jnz     short loc_5C3305
0x5C32FD: mov     esi, [esi+6Ch]
0x5C3300: jmp     loc_5C3225
0x5C3305: mov     eax, ds:0B39028h
0x5C330A: push    eax; unsigned __int8 *
0x5C330B: push    edi; unsigned __int8 *
0x5C330C: call    __mbscmp
0x5C3311: add     esp, 8
0x5C3314: test    eax, eax
0x5C3316: jnz     short loc_5C3320
0x5C3318: mov     esi, [esi+70h]
0x5C331B: jmp     loc_5C3225
0x5C3320: mov     ecx, ds:0B39030h
0x5C3326: push    ecx; unsigned __int8 *
0x5C3327: push    edi; unsigned __int8 *
0x5C3328: call    __mbscmp
0x5C332D: add     esp, 8
0x5C3330: test    eax, eax
0x5C3332: jnz     short loc_5C333C
0x5C3334: mov     esi, [esi+74h]
0x5C3337: jmp     loc_5C3225
0x5C333C: mov     edx, ds:0B39038h
0x5C3342: push    edx; unsigned __int8 *
0x5C3343: push    edi; unsigned __int8 *
0x5C3344: call    __mbscmp
0x5C3349: add     esp, 8
0x5C334C: test    eax, eax
0x5C334E: jnz     short loc_5C3358
0x5C3350: mov     esi, [esi+78h]
0x5C3353: jmp     loc_5C3225
0x5C3358: mov     eax, ds:0B39040h
0x5C335D: push    eax; unsigned __int8 *
0x5C335E: push    edi; unsigned __int8 *
0x5C335F: call    __mbscmp
0x5C3364: add     esp, 8
0x5C3367: test    eax, eax
0x5C3369: jnz     short loc_5C3373
0x5C336B: mov     esi, [esi+7Ch]
0x5C336E: jmp     loc_5C3225
0x5C3373: mov     ecx, ds:0B39050h
0x5C3379: push    ecx; unsigned __int8 *
0x5C337A: push    edi; unsigned __int8 *
0x5C337B: call    __mbscmp
0x5C3380: add     esp, 8
0x5C3383: test    eax, eax
0x5C3385: jnz     short loc_5C3392
0x5C3387: mov     esi, [esi+80h]
0x5C338D: jmp     loc_5C3225
0x5C3392: mov     edx, ds:0B39320h
0x5C3398: push    edx; unsigned __int8 *
0x5C3399: push    edi; unsigned __int8 *
0x5C339A: call    __mbscmp
0x5C339F: add     esp, 8
0x5C33A2: test    eax, eax
0x5C33A4: jnz     short loc_5C33B1
0x5C33A6: mov     esi, [esi+84h]
0x5C33AC: jmp     loc_5C3225
0x5C33B1: mov     eax, ds:0B39058h
0x5C33B6: push    eax; unsigned __int8 *
0x5C33B7: push    edi; unsigned __int8 *
0x5C33B8: call    __mbscmp
0x5C33BD: add     esp, 8
0x5C33C0: test    eax, eax
0x5C33C2: jnz     short loc_5C33CF
0x5C33C4: mov     esi, [esi+88h]
0x5C33CA: jmp     loc_5C3225
0x5C33CF: mov     ecx, ds:0B39060h
0x5C33D5: push    ecx; unsigned __int8 *
0x5C33D6: push    edi; unsigned __int8 *
0x5C33D7: call    __mbscmp
0x5C33DC: add     esp, 8
0x5C33DF: test    eax, eax
0x5C33E1: jnz     short loc_5C33EE
0x5C33E3: mov     esi, [esi+8Ch]
0x5C33E9: jmp     loc_5C3225
0x5C33EE: mov     edx, ds:0B39328h
0x5C33F4: push    edx; unsigned __int8 *
0x5C33F5: push    edi; unsigned __int8 *
0x5C33F6: call    __mbscmp
0x5C33FB: add     esp, 8
0x5C33FE: test    eax, eax
0x5C3400: mov     [esp+18h+var_4], 0FFFFFFFFh
0x5C3408: lea     ecx, [esp+18h+arg_0]; void *
0x5C340C: jnz     short loc_5C3419
0x5C340E: mov     esi, [esi+90h]
0x5C3414: jmp     loc_5C3231
0x5C3419: call    BSStringT_Clear
0x5C341E: xor     eax, eax
0x5C3420: mov     ecx, [esp+18h+var_C]
0x5C3424: mov     large fs:0, ecx
0x5C342B: pop     ecx
0x5C342C: pop     edi
0x5C342D: pop     esi
0x5C342E: add     esp, 0Ch
0x5C3431: retn    8
