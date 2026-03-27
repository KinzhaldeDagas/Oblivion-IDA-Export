0x9313E0: sub     esp, 1Ch
0x9313E3: push    ebx
0x9313E4: mov     ebx, [esp+20h+arg_1C]
0x9313E8: mov     ecx, [ebx+4]
0x9313EB: mov     eax, 1
0x9313F0: cmp     ecx, eax
0x9313F2: jnz     loc_93150E
0x9313F8: push    ebp
0x9313F9: mov     ebp, [esp+24h+arg_20]
0x9313FD: cmp     [ebp+4], eax
0x931400: jnz     loc_93150D
0x931406: mov     ecx, [esp+24h+arg_10]
0x93140A: mov     eax, [ecx+8]
0x93140D: test    eax, eax
0x93140F: push    edi
0x931410: mov     edi, [ecx]
0x931412: jz      short loc_93142B
0x931414: mov     dx, [esp+28h+arg_C]
0x931419: cmp     dx, 0FFFFh
0x93141E: jz      short loc_93142B
0x931420: mov     eax, [eax+4]
0x931423: cmp     [eax], dx
0x931426: jnz     short loc_93142B
0x931428: mov     edi, [ecx+4]
0x93142B: mov     edx, [ebx]
0x93142D: mov     ecx, [ebp+0]
0x931430: fld     dword ptr [edx+4]
0x931433: fsub    dword ptr [ecx+4]
0x931436: push    esi
0x931437: mov     esi, [esp+2Ch+arg_0]
0x93143B: fabs
0x93143D: fcomp   dword ptr [esi+0Ch]
0x931440: fnstsw  ax
0x931442: test    ah, 5
0x931445: jp      loc_93150B
0x93144B: mov     [esp+2Ch+var_18], 0
0x931453: mov     [esp+2Ch+var_14], 80000002h
0x93145B: lea     eax, [esp+2Ch+var_10]
0x93145F: mov     [esp+2Ch+var_1C], eax
0x931463: mov     eax, [ecx+4]
0x931466: mov     [esp+2Ch+arg_1C], eax
0x93146A: mov     eax, [edx]
0x93146C: mov     [esp+2Ch+var_10], eax
0x931470: mov     edx, [edx+4]
0x931473: mov     [esp+2Ch+var_C], edx
0x931477: mov     [esp+2Ch+var_18], 1
0x93147F: mov     eax, [ecx]
0x931481: mov     [esp+2Ch+var_8], eax
0x931485: mov     ecx, [ecx+4]
0x931488: mov     eax, [esp+2Ch+arg_18]
0x93148C: lea     edx, [esp+2Ch+var_1C]
0x931490: push    edx; int
0x931491: mov     edx, [esp+30h+arg_8]
0x931495: push    eax; int
0x931496: mov     eax, [esp+34h+arg_1C]
0x93149A: mov     [esp+34h+var_4], ecx
0x93149E: mov     ecx, [esp+34h+arg_14]
0x9314A2: push    ecx; int
0x9314A3: mov     ecx, [esp+38h+arg_4]
0x9314A7: push    edi; int
0x9314A8: push    edx; int
0x9314A9: push    eax; float
0x9314AA: push    esi; int
0x9314AB: push    ecx; int
0x9314AC: mov     [esp+4Ch+var_18], 2
0x9314B4: call    sub_92EC70
0x9314B9: mov     edx, [esp+4Ch+var_1C]
0x9314BD: mov     eax, [ebx]
0x9314BF: mov     ecx, [edx]
0x9314C1: mov     edx, [eax]
0x9314C3: add     esp, 20h
0x9314C6: cmp     ecx, edx
0x9314C8: jz      short loc_9314CD
0x9314CA: mov     eax, [ebp+0]
0x9314CD: fld     dword ptr [eax+4]
0x9314D0: fmul    dword ptr ds:0A3D65Ch
0x9314D6: fstp    dword ptr [eax+4]
0x9314D9: mov     eax, [esp+2Ch+var_14]
0x9314DD: test    eax, eax
0x9314DF: js      short loc_93150B
0x9314E1: mov     edx, [esp+2Ch+var_1C]
0x9314E5: mov     ecx, large fs:2Ch
0x9314EC: and     eax, 3FFFFFFFh
0x9314F1: push    14h
0x9314F3: shl     eax, 3
0x9314F6: push    eax
0x9314F7: mov     eax, ds:0BA9DE4h
0x9314FC: push    edx
0x9314FD: mov     edx, [ecx+eax*4]
0x931500: mov     ecx, [edx+19Ch]
0x931506: call    sub_8A75D0
0x93150B: pop     esi
0x93150C: pop     edi
0x93150D: pop     ebp
0x93150E: pop     ebx
0x93150F: add     esp, 1Ch
0x931512: retn
