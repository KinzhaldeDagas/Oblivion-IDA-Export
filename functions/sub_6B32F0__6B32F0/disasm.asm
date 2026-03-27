0x6B32F0: sub     esp, 8
0x6B32F3: mov     eax, ds:0B163F8h
0x6B32F8: push    esi
0x6B32F9: push    edi
0x6B32FA: mov     edi, [esp+10h+arg_0]
0x6B32FE: mov     [esp+10h+var_8], eax
0x6B3302: mov     eax, [edi+20h]
0x6B3305: xor     esi, esi
0x6B3307: test    eax, eax
0x6B3309: mov     [esp+10h+var_4], 1
0x6B3311: jnz     short loc_6B331E
0x6B3313: pop     edi
0x6B3314: mov     eax, 2
0x6B3319: pop     esi
0x6B331A: add     esp, 8
0x6B331D: retn
0x6B331E: cmp     [edi+24h], esi
0x6B3321: jnz     short loc_6B3337
0x6B3323: mov     ecx, [esp+10h+arg_8]
0x6B3327: mov     edx, [esp+10h+arg_4]
0x6B332B: mov     [ecx], esi
0x6B332D: pop     edi
0x6B332E: mov     [edx], esi
0x6B3330: xor     eax, eax
0x6B3332: pop     esi
0x6B3333: add     esp, 8
0x6B3336: retn
0x6B3337: push    ebx
0x6B3338: push    ebp
0x6B3339: lea     esp, [esp+0]
0x6B3340: cmp     byte ptr [eax+esi*2], 0
0x6B3344: mov     ebx, [esp+18h+arg_8]
0x6B3348: mov     ebp, [esp+18h+arg_4]
0x6B334C: jz      short loc_6B33A7
0x6B334E: mov     ecx, [esp+18h+arg_14]
0x6B3352: call    sub_6AF750
0x6B3357: test    eax, eax
0x6B3359: mov     eax, [edi+20h]
0x6B335C: jz      short loc_6B337C
0x6B335E: mov     cl, [eax+esi*2+1]
0x6B3362: cmp     cl, 0FAh ; 'ú'
0x6B3365: jb      short loc_6B3375
0x6B3367: movzx   ecx, cl
0x6B336A: add     esi, ecx
0x6B336C: mov     cl, [eax+esi*2+1]
0x6B3370: cmp     cl, 0FAh ; 'ú'
0x6B3373: jnb     short loc_6B3367
0x6B3375: movzx   edx, byte ptr [eax+esi*2+1]
0x6B337A: jmp     short loc_6B3395
0x6B337C: mov     cl, [eax+esi*2]
0x6B337F: cmp     cl, 0FAh ; 'ú'
0x6B3382: jb      short loc_6B3391
0x6B3384: movzx   ecx, cl
0x6B3387: add     esi, ecx
0x6B3389: mov     cl, [eax+esi*2]
0x6B338C: cmp     cl, 0FAh ; 'ú'
0x6B338F: jnb     short loc_6B3384
0x6B3391: movzx   edx, byte ptr [eax+esi*2]
0x6B3395: add     esi, edx
0x6B3397: shr     [esp+18h+var_8], 1
0x6B339B: jnz     short loc_6B3340
0x6B339D: cmp     esi, ds:0B17A2Ch
0x6B33A3: jb      short loc_6B3340
0x6B33A5: jmp     short loc_6B33CA
0x6B33A7: mov     eax, [edi+20h]
0x6B33AA: movzx   ecx, byte ptr [eax+esi*2+1]
0x6B33AF: shr     ecx, 4
0x6B33B2: mov     [ebp+0], ecx
0x6B33B5: mov     edx, [edi+20h]
0x6B33B8: movzx   eax, byte ptr [edx+esi*2+1]
0x6B33BD: and     eax, 0Fh
0x6B33C0: mov     [ebx], eax
0x6B33C2: mov     [esp+18h+var_4], 0
0x6B33CA: cmp     byte ptr [edi], 33h ; '3'
0x6B33CD: jnz     loc_6B3480
0x6B33D3: mov     al, [edi+1]
0x6B33D6: cmp     al, 32h ; '2'
0x6B33D8: jz      short loc_6B33E2
0x6B33DA: cmp     al, 33h ; '3'
0x6B33DC: jnz     loc_6B3480
0x6B33E2: mov     ecx, [ebx]
0x6B33E4: mov     esi, [esp+18h+arg_C]
0x6B33E8: mov     edi, [esp+18h+arg_10]
0x6B33EC: sar     ecx, 3
0x6B33EF: and     ecx, 1
0x6B33F2: mov     [esi], ecx
0x6B33F4: mov     edx, [ebx]
0x6B33F6: sar     edx, 2
0x6B33F9: and     edx, 1
0x6B33FC: mov     [edi], edx
0x6B33FE: mov     eax, [ebx]
0x6B3400: sar     eax, 1
0x6B3402: and     eax, 1
0x6B3405: mov     [ebp+0], eax
0x6B3408: and     dword ptr [ebx], 1
0x6B340B: cmp     dword ptr [esi], 0
0x6B340E: jz      short loc_6B3423
0x6B3410: mov     ecx, [esp+18h+arg_14]
0x6B3414: call    sub_6AF750
0x6B3419: test    eax, eax
0x6B341B: jz      short loc_6B3423
0x6B341D: mov     ecx, [esi]
0x6B341F: neg     ecx
0x6B3421: mov     [esi], ecx
0x6B3423: cmp     dword ptr [edi], 0
0x6B3426: mov     esi, [esp+18h+arg_14]
0x6B342A: jz      short loc_6B343D
0x6B342C: mov     ecx, esi
0x6B342E: call    sub_6AF750
0x6B3433: test    eax, eax
0x6B3435: jz      short loc_6B343D
0x6B3437: mov     edx, [edi]
0x6B3439: neg     edx
0x6B343B: mov     [edi], edx
0x6B343D: cmp     dword ptr [ebp+0], 0
0x6B3441: jz      short loc_6B3456
0x6B3443: mov     ecx, esi
0x6B3445: call    sub_6AF750
0x6B344A: test    eax, eax
0x6B344C: jz      short loc_6B3456
0x6B344E: mov     eax, [ebp+0]
0x6B3451: neg     eax
0x6B3453: mov     [ebp+0], eax
0x6B3456: cmp     dword ptr [ebx], 0
0x6B3459: jz      loc_6B34F1
0x6B345F: mov     ecx, esi
0x6B3461: call    sub_6AF750
0x6B3466: test    eax, eax
0x6B3468: jz      loc_6B34F1
0x6B346E: mov     ecx, [ebx]
0x6B3470: mov     eax, [esp+18h+var_4]
0x6B3474: pop     ebp
0x6B3475: neg     ecx
0x6B3477: mov     [ebx], ecx
0x6B3479: pop     ebx
0x6B347A: pop     edi
0x6B347B: pop     esi
0x6B347C: add     esp, 8
0x6B347F: retn
0x6B3480: mov     eax, [edi+0Ch]
0x6B3483: test    eax, eax
0x6B3485: jz      short loc_6B34A3
0x6B3487: mov     edx, [edi+4]
0x6B348A: sub     edx, 1
0x6B348D: cmp     edx, [ebp+0]
0x6B3490: jnz     short loc_6B34A3
0x6B3492: mov     esi, [esp+18h+arg_14]
0x6B3496: push    eax
0x6B3497: mov     ecx, esi
0x6B3499: call    sub_6AF6F0
0x6B349E: add     [ebp+0], eax
0x6B34A1: jmp     short loc_6B34A7
0x6B34A3: mov     esi, [esp+18h+arg_14]
0x6B34A7: cmp     dword ptr [ebp+0], 0
0x6B34AB: jz      short loc_6B34C0
0x6B34AD: mov     ecx, esi
0x6B34AF: call    sub_6AF750
0x6B34B4: test    eax, eax
0x6B34B6: jz      short loc_6B34C0
0x6B34B8: mov     eax, [ebp+0]
0x6B34BB: neg     eax
0x6B34BD: mov     [ebp+0], eax
0x6B34C0: mov     eax, [edi+0Ch]
0x6B34C3: test    eax, eax
0x6B34C5: jz      short loc_6B34DB
0x6B34C7: mov     ecx, [edi+8]
0x6B34CA: sub     ecx, 1
0x6B34CD: cmp     ecx, [ebx]
0x6B34CF: jnz     short loc_6B34DB
0x6B34D1: push    eax
0x6B34D2: mov     ecx, esi
0x6B34D4: call    sub_6AF6F0
0x6B34D9: add     [ebx], eax
0x6B34DB: cmp     dword ptr [ebx], 0
0x6B34DE: jz      short loc_6B34F1
0x6B34E0: mov     ecx, esi
0x6B34E2: call    sub_6AF750
0x6B34E7: test    eax, eax
0x6B34E9: jz      short loc_6B34F1
0x6B34EB: mov     edx, [ebx]
0x6B34ED: neg     edx
0x6B34EF: mov     [ebx], edx
0x6B34F1: mov     eax, [esp+18h+var_4]
0x6B34F5: pop     ebp
0x6B34F6: pop     ebx
0x6B34F7: pop     edi
0x6B34F8: pop     esi
0x6B34F9: add     esp, 8
0x6B34FC: retn
