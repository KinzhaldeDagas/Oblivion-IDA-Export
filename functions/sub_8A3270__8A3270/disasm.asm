0x8A3270: push    ebp
0x8A3271: mov     ebp, esp
0x8A3273: and     esp, 0FFFFFFF0h
0x8A3276: sub     esp, 68h
0x8A3279: mov     eax, ds:0B30AACh
0x8A327E: xor     eax, esp
0x8A3280: mov     [esp+68h+var_4], eax
0x8A3284: push    esi
0x8A3285: mov     esi, [ebp+arg_0]
0x8A3288: mov     eax, [esi]
0x8A328A: push    edi
0x8A328B: mov     edi, ecx
0x8A328D: mov     [edi], eax
0x8A328F: mov     [edi+20h], eax
0x8A3292: mov     eax, [esi+4]
0x8A3295: mov     [edi+4], eax
0x8A3298: mov     [edi+24h], eax
0x8A329B: fld     dword ptr [esi+20h]
0x8A329E: fstp    dword ptr [esp+70h+var_60]
0x8A32A2: lea     eax, [esp+70h+var_40]
0x8A32A6: fld     dword ptr [esi+24h]
0x8A32A9: push    eax
0x8A32AA: fstp    dword ptr [esp+74h+var_60+4]
0x8A32AE: lea     ecx, [esi+60h]
0x8A32B1: fld     dword ptr [esi+28h]
0x8A32B4: fstp    dword ptr [esp+74h+var_60+8]
0x8A32B8: fld     dword ptr [esi+2Ch]
0x8A32BB: fstp    dword ptr [esp+74h+var_60+0Ch]
0x8A32BF: movaps  xmm0, [esp+74h+var_60]
0x8A32C4: movaps  xmmword ptr [edi+30h], xmm0
0x8A32C8: fld     dword ptr [esi+30h]
0x8A32CB: fstp    dword ptr [esp+74h+var_50]
0x8A32CF: fld     dword ptr [esi+34h]
0x8A32D2: fstp    dword ptr [esp+74h+var_50+4]
0x8A32D6: fld     dword ptr [esi+38h]
0x8A32D9: fstp    dword ptr [esp+74h+var_50+8]
0x8A32DD: fld     dword ptr [esi+3Ch]
0x8A32E0: fstp    dword ptr [esp+74h+var_50+0Ch]
0x8A32E4: movaps  xmm0, [esp+74h+var_50]
0x8A32E9: movaps  xmmword ptr [edi+40h], xmm0
0x8A32ED: fld     dword ptr [esi+40h]
0x8A32F0: fstp    dword ptr [esp+74h+var_60]
0x8A32F4: fld     dword ptr [esi+44h]
0x8A32F7: fstp    dword ptr [esp+74h+var_60+4]
0x8A32FB: fld     dword ptr [esi+48h]
0x8A32FE: fstp    dword ptr [esp+74h+var_60+8]
0x8A3302: fld     dword ptr [esi+4Ch]
0x8A3305: fstp    dword ptr [esp+74h+var_60+0Ch]
0x8A3309: movaps  xmm0, [esp+74h+var_60]
0x8A330E: movaps  xmmword ptr [edi+50h], xmm0
0x8A3312: fld     dword ptr [esi+50h]
0x8A3315: fstp    dword ptr [esp+74h+var_60]
0x8A3319: fld     dword ptr [esi+54h]
0x8A331C: fstp    dword ptr [esp+74h+var_60+4]
0x8A3320: fld     dword ptr [esi+58h]
0x8A3323: fstp    dword ptr [esp+74h+var_60+8]
0x8A3327: fld     dword ptr [esi+5Ch]
0x8A332A: fstp    dword ptr [esp+74h+var_60+0Ch]
0x8A332E: movaps  xmm0, [esp+74h+var_60]
0x8A3333: movaps  xmmword ptr [edi+60h], xmm0
0x8A3337: call    sub_8A1FB0
0x8A333C: movaps  xmm0, xmmword ptr [eax]
0x8A333F: movaps  xmmword ptr [edi+70h], xmm0
0x8A3343: movaps  xmm0, xmmword ptr [eax+10h]
0x8A3347: movaps  xmmword ptr [edi+80h], xmm0
0x8A334E: movaps  xmm0, xmmword ptr [eax+20h]
0x8A3352: movaps  xmmword ptr [edi+90h], xmm0
0x8A3359: fld     dword ptr [esi+90h]
0x8A335F: fstp    dword ptr [esp+70h+var_60]
0x8A3363: fld     dword ptr [esi+94h]
0x8A3369: fstp    dword ptr [esp+70h+var_60+4]
0x8A336D: fld     dword ptr [esi+98h]
0x8A3373: fstp    dword ptr [esp+70h+var_60+8]
0x8A3377: fld     dword ptr [esi+9Ch]
0x8A337D: fstp    dword ptr [esp+70h+var_60+0Ch]
0x8A3381: movaps  xmm0, [esp+70h+var_60]
0x8A3386: movaps  xmmword ptr [edi+0A0h], xmm0
0x8A338D: fld     dword ptr [esi+0A0h]
0x8A3393: fstp    dword ptr [edi+0B0h]
0x8A3399: fld     dword ptr [esi+0A4h]
0x8A339F: fstp    dword ptr [edi+0B4h]
0x8A33A5: fld     dword ptr [esi+0A8h]
0x8A33AB: fstp    dword ptr [edi+0B8h]
0x8A33B1: fld     dword ptr [esi+0ACh]
0x8A33B7: fstp    dword ptr [edi+0BCh]
0x8A33BD: fld     dword ptr [esi+0B0h]
0x8A33C3: fstp    dword ptr [edi+0C0h]
0x8A33C9: mov     cl, [esi+0B4h]
0x8A33CF: fld     dword ptr [edi+0C4h]
0x8A33D5: mov     [edi+0D0h], cl
0x8A33DB: fcomp   qword ptr ds:0A529C0h
0x8A33E1: mov     dl, [esi+0B5h]
0x8A33E7: mov     [edi+0D1h], dl
0x8A33ED: fnstsw  ax
0x8A33EF: test    ah, 41h
0x8A33F2: mov     eax, edi
0x8A33F4: jnz     short loc_8A3402
0x8A33F6: fld     dword ptr ds:0A2FE78h
0x8A33FC: fstp    dword ptr [edi+0C4h]
0x8A3402: mov     ecx, [esp+70h+var_4]
0x8A3406: pop     edi
0x8A3407: pop     esi
0x8A3408: xor     ecx, esp
0x8A340A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8A340F: mov     esp, ebp
0x8A3411: pop     ebp
0x8A3412: retn    4
