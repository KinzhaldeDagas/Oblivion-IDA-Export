0x6A3060: push    ebx
0x6A3061: push    ebp
0x6A3062: push    esi
0x6A3063: push    edi
0x6A3064: mov     ebp, ecx
0x6A3066: push    0; a2
0x6A3068: mov     ecx, offset ActorProcessManager_ptr; this
0x6A306D: call    sub_673A50
0x6A3072: test    eax, eax
0x6A3074: jz      loc_6A3123
0x6A307A: mov     ecx, eax; this
0x6A307C: call    sub_7616D0
0x6A3081: mov     ebx, eax
0x6A3083: test    ebx, ebx
0x6A3085: jz      loc_6A3123
0x6A308B: jmp     short loc_6A3090
0x6A308D: align 10h
0x6A3090: mov     esi, [ebx]
0x6A3092: test    esi, esi
0x6A3094: jz      short loc_6A30AA
0x6A3096: mov     eax, [esi]
0x6A3098: mov     edx, [eax+190h]
0x6A309E: mov     ecx, esi
0x6A30A0: call    edx
0x6A30A2: test    al, al
0x6A30A4: jz      short loc_6A30AA
0x6A30A6: mov     edi, esi
0x6A30A8: jmp     short loc_6A30AC
0x6A30AA: xor     edi, edi
0x6A30AC: test    esi, esi
0x6A30AE: jz      short loc_6A30D9
0x6A30B0: mov     eax, [esi]
0x6A30B2: mov     edx, [eax+0E8h]
0x6A30B8: mov     ecx, esi
0x6A30BA: call    edx
0x6A30BC: test    al, al
0x6A30BE: jz      short loc_6A30D9
0x6A30C0: push    0; int
0x6A30C2: push    offset ??_R0?AVMagicProjectile@@@8; struct TypeDescriptor *
0x6A30C7: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x6A30CC: push    0; int
0x6A30CE: push    esi; void *
0x6A30CF: call    OblivionDynamicCast
0x6A30D4: add     esp, 14h
0x6A30D7: jmp     short loc_6A30DB
0x6A30D9: xor     eax, eax
0x6A30DB: test    edi, edi
0x6A30DD: jz      short loc_6A30FC
0x6A30DF: test    ebp, ebp
0x6A30E1: jz      short loc_6A30F0
0x6A30E3: lea     eax, [ebp+0Ch]
0x6A30E6: push    eax
0x6A30E7: mov     ecx, edi
0x6A30E9: call    sub_5E69E0
0x6A30EE: jmp     short loc_6A3118
0x6A30F0: xor     eax, eax
0x6A30F2: push    eax
0x6A30F3: mov     ecx, edi
0x6A30F5: call    sub_5E69E0
0x6A30FA: jmp     short loc_6A3118
0x6A30FC: test    eax, eax
0x6A30FE: jz      short loc_6A3118
0x6A3100: test    ebp, ebp
0x6A3102: jz      short loc_6A3109
0x6A3104: lea     ecx, [ebp+0Ch]
0x6A3107: jmp     short loc_6A310B
0x6A3109: xor     ecx, ecx
0x6A310B: mov     edx, [eax]
0x6A310D: push    ecx
0x6A310E: mov     ecx, eax
0x6A3110: mov     eax, [edx+218h]
0x6A3116: call    eax
0x6A3118: mov     ebx, [ebx+4]
0x6A311B: test    ebx, ebx
0x6A311D: jnz     loc_6A3090
0x6A3123: push    1; a2
0x6A3125: mov     ecx, offset ActorProcessManager_ptr; this
0x6A312A: call    sub_673A50
0x6A312F: test    eax, eax
0x6A3131: jz      loc_6A31DB
0x6A3137: mov     ecx, eax; this
0x6A3139: call    sub_7616D0
0x6A313E: mov     ebx, eax
0x6A3140: test    ebx, ebx
0x6A3142: jz      loc_6A31DB
0x6A3148: mov     esi, [ebx]
0x6A314A: test    esi, esi
0x6A314C: jz      short loc_6A3162
0x6A314E: mov     edx, [esi]
0x6A3150: mov     eax, [edx+190h]
0x6A3156: mov     ecx, esi
0x6A3158: call    eax
0x6A315A: test    al, al
0x6A315C: jz      short loc_6A3162
0x6A315E: mov     edi, esi
0x6A3160: jmp     short loc_6A3164
0x6A3162: xor     edi, edi
0x6A3164: test    esi, esi
0x6A3166: jz      short loc_6A3191
0x6A3168: mov     edx, [esi]
0x6A316A: mov     eax, [edx+0E8h]
0x6A3170: mov     ecx, esi
0x6A3172: call    eax
0x6A3174: test    al, al
0x6A3176: jz      short loc_6A3191
0x6A3178: push    0; int
0x6A317A: push    offset ??_R0?AVMagicProjectile@@@8; struct TypeDescriptor *
0x6A317F: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x6A3184: push    0; int
0x6A3186: push    esi; void *
0x6A3187: call    OblivionDynamicCast
0x6A318C: add     esp, 14h
0x6A318F: jmp     short loc_6A3193
0x6A3191: xor     eax, eax
0x6A3193: test    edi, edi
0x6A3195: jz      short loc_6A31B4
0x6A3197: test    ebp, ebp
0x6A3199: jz      short loc_6A31A8
0x6A319B: lea     eax, [ebp+0Ch]
0x6A319E: push    eax
0x6A319F: mov     ecx, edi
0x6A31A1: call    sub_5E69E0
0x6A31A6: jmp     short loc_6A31D0
0x6A31A8: xor     eax, eax
0x6A31AA: push    eax
0x6A31AB: mov     ecx, edi
0x6A31AD: call    sub_5E69E0
0x6A31B2: jmp     short loc_6A31D0
0x6A31B4: test    eax, eax
0x6A31B6: jz      short loc_6A31D0
0x6A31B8: test    ebp, ebp
0x6A31BA: jz      short loc_6A31C1
0x6A31BC: lea     ecx, [ebp+0Ch]
0x6A31BF: jmp     short loc_6A31C3
0x6A31C1: xor     ecx, ecx
0x6A31C3: mov     edx, [eax]
0x6A31C5: push    ecx
0x6A31C6: mov     ecx, eax
0x6A31C8: mov     eax, [edx+218h]
0x6A31CE: call    eax
0x6A31D0: mov     ebx, [ebx+4]
0x6A31D3: test    ebx, ebx
0x6A31D5: jnz     loc_6A3148
0x6A31DB: mov     ecx, ds:0B333C4h
0x6A31E1: test    ecx, ecx
0x6A31E3: jz      short loc_6A31FF
0x6A31E5: test    ebp, ebp
0x6A31E7: jz      short loc_6A31F7
0x6A31E9: lea     eax, [ebp+0Ch]
0x6A31EC: push    eax
0x6A31ED: call    sub_5E69E0
0x6A31F2: pop     edi
0x6A31F3: pop     esi
0x6A31F4: pop     ebp
0x6A31F5: pop     ebx
0x6A31F6: retn
0x6A31F7: xor     eax, eax
0x6A31F9: push    eax
0x6A31FA: call    sub_5E69E0
0x6A31FF: pop     edi
0x6A3200: pop     esi
0x6A3201: pop     ebp
0x6A3202: pop     ebx
0x6A3203: retn
