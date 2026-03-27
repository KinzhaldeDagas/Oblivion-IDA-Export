0x8FB320: push    ebp
0x8FB321: mov     ebp, esp
0x8FB323: and     esp, 0FFFFFFF0h
0x8FB326: sub     esp, 24h
0x8FB329: mov     ecx, large fs:2Ch
0x8FB330: mov     edx, ds:0BA9DE4h
0x8FB336: mov     eax, [ecx+edx*4]
0x8FB339: push    ebx
0x8FB33A: push    esi
0x8FB33B: mov     esi, [eax+1A4h]
0x8FB341: push    edi
0x8FB342: cmp     esi, [eax+1A8h]
0x8FB348: jnb     short loc_8FB36E
0x8FB34A: mov     esi, eax
0x8FB34C: mov     ecx, [esi+1A4h]
0x8FB352: mov     dword ptr [ecx], offset aTtspherebox; "TtSphereBox"
0x8FB358: rdtsc
0x8FB35A: mov     [esp+30h+var_18], eax
0x8FB35E: mov     eax, [esp+30h+var_18]
0x8FB362: mov     [ecx+4], eax
0x8FB365: add     ecx, 0Ch
0x8FB368: mov     [esi+1A4h], ecx
0x8FB36E: mov     eax, [ebp+arg_0]
0x8FB371: mov     esi, [eax+8]
0x8FB374: mov     ecx, [eax]
0x8FB376: mov     edi, [ebp+arg_4]
0x8FB379: mov     edx, [edi+8]
0x8FB37C: mov     ebx, [edi]
0x8FB37E: add     esi, 30h ; '0'
0x8FB381: push    esi
0x8FB382: mov     [esp+34h+var_18], ecx
0x8FB386: push    edx
0x8FB387: lea     ecx, [esp+38h+var_10]
0x8FB38B: call    sub_88FD10
0x8FB390: fld     dword ptr [ebx+0Ch]
0x8FB393: movaps  xmm0, [esp+30h+var_10]
0x8FB398: movaps  xmm1, xmmword ptr ds:0A965C0h
0x8FB39F: movaps  xmm3, xmmword ptr ds:0A372D0h
0x8FB3A6: mov     eax, [edi+8]
0x8FB3A9: movaps  xmm4, xmmword ptr [eax+20h]
0x8FB3AD: mov     ecx, [esp+30h+var_18]
0x8FB3B1: fadd    dword ptr [ecx+0Ch]
0x8FB3B4: movaps  xmm2, xmm0
0x8FB3B7: andps   xmm2, xmm1
0x8FB3BA: movaps  xmm1, xmmword ptr [ebx+10h]
0x8FB3BE: andps   xmm0, xmm3
0x8FB3C1: fld     st
0x8FB3C3: minps   xmm0, xmm1
0x8FB3C6: fmul    st, st(1)
0x8FB3C8: movaps  xmm1, xmmword ptr [esi]
0x8FB3CB: xorps   xmm0, xmm2
0x8FB3CE: movaps  xmm2, xmmword ptr [eax+30h]
0x8FB3D2: movaps  xmm3, xmm0
0x8FB3D5: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8FB3D9: mulps   xmm4, xmm3
0x8FB3DC: movaps  xmm3, xmmword ptr [eax+10h]
0x8FB3E0: addps   xmm4, xmm2
0x8FB3E3: movaps  xmm2, xmm0
0x8FB3E6: shufps  xmm2, xmm0, 55h ; 'U'
0x8FB3EA: mulps   xmm3, xmm2
0x8FB3ED: movaps  xmm2, xmm0
0x8FB3F0: shufps  xmm2, xmm0, 0
0x8FB3F4: movaps  xmm0, xmmword ptr [eax]
0x8FB3F7: mulps   xmm0, xmm2
0x8FB3FA: addps   xmm0, xmm3
0x8FB3FD: addps   xmm0, xmm4
0x8FB400: subps   xmm0, xmm1
0x8FB403: mulps   xmm0, xmm0
0x8FB406: movaps  xmm1, xmm0
0x8FB409: shufps  xmm1, xmm0, 55h ; 'U'
0x8FB40D: movaps  xmm2, xmm0
0x8FB410: lea     eax, [esp+30h+var_14]
0x8FB414: addss   xmm1, xmm0
0x8FB418: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8FB41C: addss   xmm2, xmm1
0x8FB420: movss   dword ptr [eax], xmm2
0x8FB424: fld     [esp+30h+var_14]
0x8FB428: fcompp
0x8FB42A: fnstsw  ax
0x8FB42C: fstp    st
0x8FB42E: test    ah, 5
0x8FB431: jp      short loc_8FB440
0x8FB433: mov     ecx, [ebp+arg_C]
0x8FB436: mov     eax, [ebp+arg_0]
0x8FB439: mov     edx, [ecx]
0x8FB43B: push    edi
0x8FB43C: push    eax
0x8FB43D: call    dword ptr [edx+4]
0x8FB440: mov     ecx, large fs:2Ch
0x8FB447: mov     edx, ds:0BA9DE4h
0x8FB44D: mov     eax, [ecx+edx*4]
0x8FB450: mov     esi, [eax+1A4h]
0x8FB456: cmp     esi, [eax+1A8h]
0x8FB45C: jnb     short loc_8FB482
0x8FB45E: mov     esi, eax
0x8FB460: mov     ecx, [esi+1A4h]
0x8FB466: mov     dword ptr [ecx], offset aEt; "Et"
0x8FB46C: rdtsc
0x8FB46E: mov     [esp+30h+var_14], eax
0x8FB472: mov     edx, [esp+30h+var_14]
0x8FB476: mov     [ecx+4], edx
0x8FB479: add     ecx, 0Ch
0x8FB47C: mov     [esi+1A4h], ecx
0x8FB482: pop     edi
0x8FB483: pop     esi
0x8FB484: pop     ebx
0x8FB485: mov     esp, ebp
0x8FB487: pop     ebp
0x8FB488: retn
