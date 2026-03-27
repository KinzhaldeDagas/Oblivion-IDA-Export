0x8FD4A0: push    ebp
0x8FD4A1: mov     ebp, esp
0x8FD4A3: and     esp, 0FFFFFFF0h
0x8FD4A6: push    ecx
0x8FD4A7: push    ebx
0x8FD4A8: mov     ebx, ds:0BA9DE4h
0x8FD4AE: push    esi
0x8FD4AF: push    edi
0x8FD4B0: mov     edi, large fs:2Ch
0x8FD4B7: mov     eax, [edi+ebx*4]
0x8FD4BA: mov     ecx, [eax+1A4h]
0x8FD4C0: cmp     ecx, [eax+1A8h]
0x8FD4C6: jnb     short loc_8FD4EC
0x8FD4C8: mov     esi, eax
0x8FD4CA: mov     ecx, [esi+1A4h]
0x8FD4D0: mov     dword ptr [ecx], offset aTtspheresphere; "TtSphereSphere"
0x8FD4D6: rdtsc
0x8FD4D8: mov     [esp+10h+var_4], eax
0x8FD4DC: mov     edx, [esp+10h+var_4]
0x8FD4E0: mov     [ecx+4], edx
0x8FD4E3: add     ecx, 0Ch
0x8FD4E6: mov     [esi+1A4h], ecx
0x8FD4EC: mov     edx, [ebp+arg_0]
0x8FD4EF: mov     esi, [ebp+arg_4]
0x8FD4F2: mov     eax, [edx+8]
0x8FD4F5: movaps  xmm1, xmmword ptr [eax+30h]
0x8FD4F9: mov     ecx, [esi+8]
0x8FD4FC: movaps  xmm0, xmmword ptr [ecx+30h]
0x8FD500: mov     ecx, [edx]
0x8FD502: fld     dword ptr [ecx+0Ch]
0x8FD505: subps   xmm0, xmm1
0x8FD508: mulps   xmm0, xmm0
0x8FD50B: movaps  xmm1, xmm0
0x8FD50E: shufps  xmm1, xmm0, 55h ; 'U'
0x8FD512: movaps  xmm2, xmm0
0x8FD515: lea     eax, [esp+10h+var_4]
0x8FD519: addss   xmm1, xmm0
0x8FD51D: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8FD521: addss   xmm2, xmm1
0x8FD525: movss   dword ptr [eax], xmm2
0x8FD529: mov     eax, [esi]
0x8FD52B: fadd    dword ptr [eax+0Ch]
0x8FD52E: fld     st
0x8FD530: fmul    st, st(1)
0x8FD532: fld     [esp+10h+var_4]
0x8FD536: fcompp
0x8FD538: fnstsw  ax
0x8FD53A: fstp    st
0x8FD53C: test    ah, 5
0x8FD53F: jp      short loc_8FD54B
0x8FD541: mov     ecx, [ebp+arg_C]
0x8FD544: mov     eax, [ecx]
0x8FD546: push    esi
0x8FD547: push    edx
0x8FD548: call    dword ptr [eax+4]
0x8FD54B: mov     eax, [edi+ebx*4]
0x8FD54E: mov     ecx, [eax+1A4h]
0x8FD554: cmp     ecx, [eax+1A8h]
0x8FD55A: jnb     short loc_8FD580
0x8FD55C: mov     esi, eax
0x8FD55E: mov     ecx, [esi+1A4h]
0x8FD564: mov     dword ptr [ecx], offset aEt; "Et"
0x8FD56A: rdtsc
0x8FD56C: mov     [esp+10h+var_4], eax
0x8FD570: mov     edx, [esp+10h+var_4]
0x8FD574: mov     [ecx+4], edx
0x8FD577: add     ecx, 0Ch
0x8FD57A: mov     [esi+1A4h], ecx
0x8FD580: pop     edi
0x8FD581: pop     esi
0x8FD582: pop     ebx
0x8FD583: mov     esp, ebp
0x8FD585: pop     ebp
0x8FD586: retn    10h
