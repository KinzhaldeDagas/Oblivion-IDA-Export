0x8BA2C0: push    ebp
0x8BA2C1: mov     ebp, esp
0x8BA2C3: and     esp, 0FFFFFFF0h
0x8BA2C6: sub     esp, 34h
0x8BA2C9: push    ebx
0x8BA2CA: push    esi
0x8BA2CB: push    edi
0x8BA2CC: mov     edi, large fs:2Ch
0x8BA2D3: mov     [esp+40h+var_28], ecx
0x8BA2D7: mov     ecx, ds:0BA9DE4h
0x8BA2DD: mov     eax, [edi+ecx*4]
0x8BA2E0: mov     edx, [eax+1A4h]
0x8BA2E6: cmp     edx, [eax+1A8h]
0x8BA2EC: jnb     short loc_8BA312
0x8BA2EE: mov     esi, eax
0x8BA2F0: mov     ecx, [esi+1A4h]
0x8BA2F6: mov     dword ptr [ecx], offset aTtraycastgroup; "TtRayCastGroup"
0x8BA2FC: rdtsc
0x8BA2FE: mov     [esp+40h+var_2C], eax
0x8BA302: mov     eax, [esp+40h+var_2C]
0x8BA306: mov     [ecx+4], eax
0x8BA309: add     ecx, 0Ch
0x8BA30C: mov     [esi+1A4h], ecx
0x8BA312: mov     esi, [ebp+arg_4]
0x8BA315: movaps  xmm3, xmmword ptr [esi]
0x8BA318: movaps  xmm1, xmmword ptr [esi+10h]
0x8BA31C: mov     ecx, [ebp+arg_8]
0x8BA31F: add     ecx, 0FFFFFFFEh
0x8BA322: movaps  xmm0, xmm3
0x8BA325: minps   xmm0, xmm1
0x8BA328: maxps   xmm3, xmm1
0x8BA32B: movaps  [esp+40h+var_20], xmm0
0x8BA330: movaps  [esp+40h+var_10], xmm3
0x8BA335: lea     eax, [esi+30h]
0x8BA338: js      short loc_8BA363
0x8BA33A: inc     ecx
0x8BA33B: jmp     short loc_8BA340
0x8BA33D: align 10h
0x8BA340: movaps  xmm1, xmmword ptr [eax]
0x8BA343: movaps  xmm2, xmmword ptr [eax+10h]
0x8BA347: add     eax, 30h ; '0'
0x8BA34A: dec     ecx
0x8BA34B: minps   xmm0, xmm2
0x8BA34E: maxps   xmm3, xmm2
0x8BA351: minps   xmm0, xmm1
0x8BA354: maxps   xmm3, xmm1
0x8BA357: jnz     short loc_8BA340
0x8BA359: movaps  [esp+40h+var_10], xmm3
0x8BA35E: movaps  [esp+40h+var_20], xmm0
0x8BA363: mov     ebx, [ebp+arg_0]
0x8BA366: mov     edx, [ebx]
0x8BA368: mov     ecx, ebx
0x8BA36A: call    dword ptr [edx+3Ch]
0x8BA36D: mov     ecx, ds:0BA9DE4h
0x8BA373: mov     ecx, [edi+ecx*4]
0x8BA376: mov     [esp+40h+var_24], ecx
0x8BA37A: mov     ecx, [ecx+19Ch]
0x8BA380: test    ecx, ecx
0x8BA382: jnz     short loc_8BA38A
0x8BA384: mov     ecx, ds:0BA7D9Ch
0x8BA38A: mov     edx, [ecx+20h]
0x8BA38D: add     eax, 10h
0x8BA390: and     eax, 0FFFFFFF0h
0x8BA393: lea     edi, [edx+eax]
0x8BA396: cmp     edi, [ecx+2Ch]
0x8BA399: ja      short loc_8BA3A4
0x8BA39B: mov     [ecx+20h], edi
0x8BA39E: mov     [esp+40h+var_30], edx
0x8BA3A2: jmp     short loc_8BA3AE
0x8BA3A4: mov     edx, [ecx]
0x8BA3A6: push    eax
0x8BA3A7: call    dword ptr [edx+0Ch]
0x8BA3AA: mov     [esp+40h+var_30], eax
0x8BA3AE: mov     ecx, [esp+40h+var_30]
0x8BA3B2: mov     eax, [ebx]
0x8BA3B4: push    ecx
0x8BA3B5: lea     edx, [esp+44h+var_20]
0x8BA3B9: push    edx
0x8BA3BA: mov     ecx, ebx
0x8BA3BC: call    dword ptr [eax+40h]
0x8BA3BF: mov     eax, [ebp+arg_8]
0x8BA3C2: dec     eax
0x8BA3C3: mov     edi, [ebp+arg_10]
0x8BA3C6: js      short loc_8BA3F8
0x8BA3C8: inc     eax
0x8BA3C9: mov     [esp+40h+var_2C], eax
0x8BA3CD: lea     ecx, [ecx+0]
0x8BA3D0: mov     eax, [esp+40h+var_30]
0x8BA3D4: mov     ecx, [ebp+arg_C]
0x8BA3D7: push    edi
0x8BA3D8: push    eax
0x8BA3D9: push    ecx
0x8BA3DA: mov     ecx, [esp+4Ch+var_28]
0x8BA3DE: push    esi
0x8BA3DF: push    ebx
0x8BA3E0: call    sub_8BA1B0
0x8BA3E5: mov     ecx, [ebp+arg_14]
0x8BA3E8: mov     eax, [esp+40h+var_2C]
0x8BA3EC: add     esi, 30h ; '0'
0x8BA3EF: add     edi, ecx
0x8BA3F1: dec     eax
0x8BA3F2: mov     [esp+40h+var_2C], eax
0x8BA3F6: jnz     short loc_8BA3D0
0x8BA3F8: mov     esi, [esp+40h+var_24]
0x8BA3FC: mov     ecx, [esi+19Ch]
0x8BA402: test    ecx, ecx
0x8BA404: jnz     short loc_8BA40C
0x8BA406: mov     ecx, ds:0BA7D9Ch
0x8BA40C: mov     eax, [esp+40h+var_30]
0x8BA410: cmp     eax, [ecx+28h]
0x8BA413: mov     [ecx+20h], eax
0x8BA416: jnz     short loc_8BA41E
0x8BA418: mov     edx, [ecx]
0x8BA41A: push    eax
0x8BA41B: call    dword ptr [edx+10h]
0x8BA41E: mov     ecx, ds:0BA9DE4h
0x8BA424: mov     eax, large fs:2Ch
0x8BA42A: mov     eax, [eax+ecx*4]
0x8BA42D: mov     edx, [eax+1A4h]
0x8BA433: cmp     edx, [eax+1A8h]
0x8BA439: jnb     short loc_8BA45D
0x8BA43B: mov     ecx, [esi+1A4h]
0x8BA441: mov     dword ptr [ecx], offset aEt; "Et"
0x8BA447: rdtsc
0x8BA449: mov     [esp+40h+var_24], eax
0x8BA44D: mov     eax, [esp+40h+var_24]
0x8BA451: mov     [ecx+4], eax
0x8BA454: add     ecx, 0Ch
0x8BA457: mov     [esi+1A4h], ecx
0x8BA45D: pop     edi
0x8BA45E: pop     esi
0x8BA45F: pop     ebx
0x8BA460: mov     esp, ebp
0x8BA462: pop     ebp
0x8BA463: retn    18h
