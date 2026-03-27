0x6D3210: push    0FFFFFFFFh
0x6D3212: push    offset SEH_6D3210
0x6D3217: mov     eax, large fs:0
0x6D321D: push    eax
0x6D321E: sub     esp, 2Ch
0x6D3221: push    ebx
0x6D3222: push    ebp
0x6D3223: push    esi
0x6D3224: push    edi
0x6D3225: mov     eax, ds:0B30AACh
0x6D322A: xor     eax, esp
0x6D322C: push    eax
0x6D322D: lea     eax, [esp+4Ch+var_C]
0x6D3231: mov     large fs:0, eax
0x6D3237: mov     esi, [esp+4Ch+arg_4]
0x6D323B: cmp     esi, 4
0x6D323E: jnz     loc_6D3329
0x6D3244: mov     esi, [esp+4Ch+arg_8]
0x6D3248: xor     ebx, ebx
0x6D324A: fld     [esp+4Ch+arg_14]
0x6D324E: lea     edi, [esp+ebx*4+4Ch+var_24]
0x6D3252: push    edi; int
0x6D3253: lea     edi, [esp+ebx*4+50h+var_18]
0x6D3257: push    edi; int
0x6D3258: sub     esp, 8
0x6D325B: fstp    [esp+5Ch+var_58]; float
0x6D325F: movzx   eax, bl
0x6D3262: mov     edx, [esi+eax*4+14h]
0x6D3266: fld     [esp+5Ch+arg_10]
0x6D326A: mov     ecx, [esi+eax*4+30h]
0x6D326E: fstp    [esp+5Ch+var_5C]; float
0x6D3271: mov     eax, [esi+eax*4+20h]
0x6D3275: push    edx; int
0x6D3276: push    ecx; int
0x6D3277: push    eax; int
0x6D3278: push    0; int
0x6D327A: mov     dword ptr [esp+ebx*4+6Ch+var_38], eax
0x6D327E: call    sub_6D3210
0x6D3283: add     ebx, 1
0x6D3286: add     esp, 20h
0x6D3289: cmp     ebx, 3
0x6D328C: jl      short loc_6D324A
0x6D328E: push    4Ch ; 'L'; Size
0x6D3290: call    FormHeapAlloc
0x6D3295: add     esp, 4
0x6D3298: mov     [esp+4Ch+arg_4], eax
0x6D329C: test    eax, eax
0x6D329E: mov     [esp+4Ch+var_4], 0
0x6D32A6: jz      short loc_6D32C7
0x6D32A8: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6D32AD: push    offset sub_6BE430; a4
0x6D32B2: push    1; size
0x6D32B4: lea     esi, [eax+4]
0x6D32B7: push    48h ; 'H'; a2
0x6D32B9: push    esi; a1
0x6D32BA: mov     dword ptr [eax], 1
0x6D32C0: call    ArrayConstructor
0x6D32C5: jmp     short loc_6D32C9
0x6D32C7: xor     esi, esi
0x6D32C9: mov     eax, [esp+4Ch+arg_18]
0x6D32CD: mov     ecx, [esp+4Ch+arg_1C]
0x6D32D1: mov     edx, [esp+4Ch+var_30]
0x6D32D5: push    edx
0x6D32D6: mov     edx, [esp+50h+var_10]
0x6D32DA: mov     [eax], esi
0x6D32DC: mov     dword ptr [ecx], 1
0x6D32E2: mov     ecx, [esp+50h+var_1C]
0x6D32E6: push    ecx
0x6D32E7: mov     ecx, dword ptr [esp+54h+var_38+4]
0x6D32EB: push    edx
0x6D32EC: mov     edx, [esp+58h+var_20]
0x6D32F0: push    ecx
0x6D32F1: mov     ecx, [esp+5Ch+var_14]
0x6D32F5: push    edx
0x6D32F6: mov     edx, dword ptr [esp+60h+var_38]
0x6D32FA: push    ecx
0x6D32FB: mov     ecx, [esp+64h+var_24]
0x6D32FF: push    edx
0x6D3300: mov     edx, [esp+68h+var_18]
0x6D3304: push    ecx
0x6D3305: mov     ecx, [eax]
0x6D3307: push    edx
0x6D3308: mov     [esp+70h+var_4], 0FFFFFFFFh
0x6D3310: call    sub_6D3100
0x6D3315: mov     ecx, [esp+4Ch+var_C]
0x6D3319: mov     large fs:0, ecx
0x6D3320: pop     ecx
0x6D3321: pop     edi
0x6D3322: pop     esi
0x6D3323: pop     ebp
0x6D3324: pop     ebx
0x6D3325: add     esp, 38h
0x6D3328: retn
0x6D3329: mov     eax, [esp+4Ch+arg_0]
0x6D332D: fld     [esp+4Ch+arg_14]
0x6D3331: mov     edi, [esp+4Ch+arg_1C]
0x6D3335: fld     [esp+4Ch+arg_10]
0x6D3339: mov     ebp, [esp+4Ch+arg_C]
0x6D333D: lea     eax, [eax+eax*2]
0x6D3340: lea     esi, [esi+eax*2]
0x6D3343: mov     dword ptr [edi], 0
0x6D3349: mov     al, ds:byte_B3D3E8[esi]
0x6D334F: xor     edx, edx
0x6D3351: cmp     ebp, 4
0x6D3354: mov     [esp+4Ch+var_28], esi
0x6D3358: mov     byte ptr [esp+4Ch+arg_4], al
0x6D335C: jl      loc_6D3424
0x6D3362: mov     ebx, [esp+4Ch+arg_8]
0x6D3366: fld     st
0x6D3368: movzx   eax, al
0x6D336B: lea     esi, [ebx+eax*2]
0x6D336E: mov     dword ptr [esp+4Ch+var_38], ebx
0x6D3372: lea     ebx, [ebx+eax*2]
0x6D3375: mov     [esp+4Ch+var_2C], ebx
0x6D3379: mov     ebx, [esp+4Ch+arg_8]
0x6D337D: add     esi, eax
0x6D337F: lea     ecx, ds:0[eax*4]
0x6D3386: add     ebx, eax
0x6D3388: mov     eax, dword ptr [esp+4Ch+var_38]
0x6D338C: fld     dword ptr [eax]
0x6D338E: fcom    st(1)
0x6D3390: fnstsw  ax
0x6D3392: test    ah, 5
0x6D3395: jnp     short loc_6D33A9
0x6D3397: fcomp   st(3)
0x6D3399: fnstsw  ax
0x6D339B: test    ah, 41h
0x6D339E: jz      loc_6D345E
0x6D33A4: add     dword ptr [edi], 1
0x6D33A7: jmp     short loc_6D33AB
0x6D33A9: fstp    st
0x6D33AB: fld     dword ptr [ebx]
0x6D33AD: fcom    st(1)
0x6D33AF: fnstsw  ax
0x6D33B1: test    ah, 5
0x6D33B4: jnp     short loc_6D33C8
0x6D33B6: fcomp   st(3)
0x6D33B8: fnstsw  ax
0x6D33BA: test    ah, 41h
0x6D33BD: jz      loc_6D345E
0x6D33C3: add     dword ptr [edi], 1
0x6D33C6: jmp     short loc_6D33CA
0x6D33C8: fstp    st
0x6D33CA: mov     eax, [esp+4Ch+var_2C]
0x6D33CE: fld     dword ptr [eax]
0x6D33D0: fcom    st(1)
0x6D33D2: fnstsw  ax
0x6D33D4: test    ah, 5
0x6D33D7: jnp     short loc_6D33E7
0x6D33D9: fcomp   st(3)
0x6D33DB: fnstsw  ax
0x6D33DD: test    ah, 41h
0x6D33E0: jz      short loc_6D345E
0x6D33E2: add     dword ptr [edi], 1
0x6D33E5: jmp     short loc_6D33E9
0x6D33E7: fstp    st
0x6D33E9: fld     dword ptr [esi]
0x6D33EB: fcom    st(1)
0x6D33ED: fnstsw  ax
0x6D33EF: test    ah, 5
0x6D33F2: jnp     short loc_6D3402
0x6D33F4: fcomp   st(3)
0x6D33F6: fnstsw  ax
0x6D33F8: test    ah, 41h
0x6D33FB: jz      short loc_6D345E
0x6D33FD: add     dword ptr [edi], 1
0x6D3400: jmp     short loc_6D3404
0x6D3402: fstp    st
0x6D3404: add     dword ptr [esp+4Ch+var_38], ecx
0x6D3408: add     [esp+4Ch+var_2C], ecx
0x6D340C: add     edx, 4
0x6D340F: lea     eax, [ebp-3]
0x6D3412: add     ebx, ecx
0x6D3414: add     esi, ecx
0x6D3416: cmp     edx, eax
0x6D3418: jb      loc_6D3388
0x6D341E: mov     esi, [esp+4Ch+var_28]
0x6D3422: fstp    st
0x6D3424: cmp     edx, ebp
0x6D3426: jnb     short loc_6D3464
0x6D3428: movzx   ebx, byte ptr [esp+4Ch+arg_4]
0x6D342D: mov     ecx, ebx
0x6D342F: imul    ecx, edx
0x6D3432: add     ecx, [esp+4Ch+arg_8]
0x6D3436: fld     dword ptr [ecx]
0x6D3438: fcom    st(1)
0x6D343A: fnstsw  ax
0x6D343C: test    ah, 5
0x6D343F: jnp     short loc_6D344F
0x6D3441: fcomp   st(2)
0x6D3443: fnstsw  ax
0x6D3445: test    ah, 41h
0x6D3448: jz      short loc_6D345A
0x6D344A: add     dword ptr [edi], 1
0x6D344D: jmp     short loc_6D3451
0x6D344F: fstp    st
0x6D3451: add     edx, 1
0x6D3454: add     ecx, ebx
0x6D3456: cmp     edx, ebp
0x6D3458: jb      short loc_6D3436
0x6D345A: fstp    st
0x6D345C: jmp     short loc_6D3466
0x6D345E: mov     esi, [esp+4Ch+var_28]
0x6D3462: fstp    st
0x6D3464: fstp    st(1)
0x6D3466: mov     ecx, [edi]
0x6D3468: fstp    st
0x6D346A: test    ecx, ecx
0x6D346C: jz      loc_6D3521
0x6D3472: mov     eax, ds:0B3D358h[esi*4]
0x6D3479: push    ecx
0x6D347A: call    eax ; dword_B3D358
0x6D347C: mov     ecx, [esp+50h+arg_18]
0x6D3480: mov     [ecx], eax
0x6D3482: mov     edx, ds:0B3D530h[esi*4]
0x6D3489: add     esp, 4
0x6D348C: test    ebp, ebp
0x6D348E: mov     [esp+4Ch+var_2C], edx
0x6D3492: mov     [esp+4Ch+var_28], 0
0x6D349A: mov     dword ptr [edi], 0
0x6D34A0: jbe     loc_6D352B
0x6D34A6: fld     [esp+4Ch+arg_10]
0x6D34AA: movzx   ebp, byte ptr [esp+4Ch+arg_4]
0x6D34AF: mov     ebx, [esp+4Ch+arg_8]
0x6D34B3: fst     [esp+4Ch+var_38]
0x6D34B7: fld     dword ptr [ebx]
0x6D34B9: fcom    st(1)
0x6D34BB: fnstsw  ax
0x6D34BD: test    ah, 5
0x6D34C0: jnp     short loc_6D34F6
0x6D34C2: fstp    st(1)
0x6D34C4: fld     [esp+4Ch+arg_14]
0x6D34C8: fcompp
0x6D34CA: fnstsw  ax
0x6D34CC: test    ah, 5
0x6D34CF: jnp     short loc_6D352B
0x6D34D1: mov     esi, [edi]
0x6D34D3: mov     eax, [esp+4Ch+arg_18]
0x6D34D7: imul    esi, ebp
0x6D34DA: add     esi, [eax]
0x6D34DC: push    ebx
0x6D34DD: push    esi
0x6D34DE: call    [esp+54h+var_2C]
0x6D34E2: add     esp, 8
0x6D34E5: fld     dword ptr [ebx]
0x6D34E7: fld     [esp+4Ch+var_38]
0x6D34EB: fsub    st(1), st
0x6D34ED: fxch    st(1)
0x6D34EF: fstp    dword ptr [esi]
0x6D34F1: add     dword ptr [edi], 1
0x6D34F4: jmp     short loc_6D34F8
0x6D34F6: fstp    st
0x6D34F8: mov     eax, [esp+4Ch+var_28]
0x6D34FC: add     eax, 1
0x6D34FF: add     ebx, ebp
0x6D3501: cmp     eax, [esp+4Ch+arg_C]
0x6D3505: mov     [esp+4Ch+var_28], eax
0x6D3509: jb      short loc_6D34B7
0x6D350B: fstp    st
0x6D350D: mov     ecx, [esp+4Ch+var_C]
0x6D3511: mov     large fs:0, ecx
0x6D3518: pop     ecx
0x6D3519: pop     edi
0x6D351A: pop     esi
0x6D351B: pop     ebp
0x6D351C: pop     ebx
0x6D351D: add     esp, 38h
0x6D3520: retn
0x6D3521: mov     ecx, [esp+4Ch+arg_18]
0x6D3525: mov     dword ptr [ecx], 0
0x6D352B: mov     ecx, [esp+4Ch+var_C]
0x6D352F: mov     large fs:0, ecx
0x6D3536: pop     ecx
0x6D3537: pop     edi
0x6D3538: pop     esi
0x6D3539: pop     ebp
0x6D353A: pop     ebx
0x6D353B: add     esp, 38h
0x6D353E: retn
