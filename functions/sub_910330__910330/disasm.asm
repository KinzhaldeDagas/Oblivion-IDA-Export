0x910330: push    ebp
0x910331: mov     ebp, esp
0x910333: and     esp, 0FFFFFFF0h
0x910336: sub     esp, 54h
0x910339: push    ebx
0x91033A: push    esi
0x91033B: push    edi
0x91033C: mov     edi, ecx
0x91033E: mov     al, [edi+38h]
0x910341: test    al, al
0x910343: jz      loc_910404
0x910349: mov     esi, [edi+18h]
0x91034C: mov     eax, [esi+50h]
0x91034F: lea     ebx, [eax+10h]
0x910352: add     eax, 0E0h ; 'à'
0x910357: push    eax
0x910358: push    ebx
0x910359: lea     ecx, [esp+68h+var_40]
0x91035D: call    sub_88FD90
0x910362: fld     dword ptr [edi+30h]
0x910365: movaps  xmm1, xmmword ptr [edi+20h]
0x910369: movaps  xmm2, [esp+60h+var_40]
0x91036E: movaps  xmm0, xmm1
0x910371: mulps   xmm0, xmm2
0x910374: movaps  xmm2, xmm0
0x910377: shufps  xmm2, xmm0, 55h ; 'U'
0x91037B: addss   xmm2, xmm0
0x91037F: movaps  xmm3, xmm0
0x910382: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x910386: addss   xmm3, xmm2
0x91038A: lea     eax, [esp+60h+var_54]
0x91038E: movss   dword ptr [eax], xmm3
0x910392: fsub    [esp+60h+var_54]
0x910396: lea     eax, [esp+60h+var_30]
0x91039A: push    eax
0x91039B: fmul    dword ptr [edi+34h]
0x91039E: fstp    [esp+64h+var_54]
0x9103A2: movss   xmm0, [esp+64h+var_54]
0x9103A8: movaps  xmm2, xmm0
0x9103AB: shufps  xmm2, xmm0, 0
0x9103AF: mulps   xmm2, xmm1
0x9103B2: movaps  [esp+64h+var_50], xmm2
0x9103B7: mov     ecx, [esi+50h]
0x9103BA: mov     edx, [ecx]
0x9103BC: call    dword ptr [edx+28h]
0x9103BF: lea     ecx, [esp+60h+var_50]
0x9103C3: push    ecx
0x9103C4: lea     edx, [esp+64h+var_30]
0x9103C8: push    edx
0x9103C9: lea     ecx, [esp+68h+var_50]
0x9103CD: call    sub_88FE00
0x9103D2: lea     eax, [esp+60h+var_50]
0x9103D6: push    eax
0x9103D7: push    ebx
0x9103D8: lea     ecx, [esp+68h+var_50]
0x9103DC: call    sub_88FE00
0x9103E1: mov     ecx, [ebp+arg_0]
0x9103E4: mov     edx, [ecx+8]
0x9103E7: mov     ecx, esi
0x9103E9: mov     [esp+60h+var_54], edx
0x9103ED: call    sub_8A6410
0x9103F2: mov     ecx, [esi+50h]
0x9103F5: mov     eax, [ecx]
0x9103F7: lea     edx, [esp+60h+var_50]
0x9103FB: push    edx
0x9103FC: mov     edx, [esp+64h+var_54]
0x910400: push    edx
0x910401: call    dword ptr [eax+70h]
0x910404: pop     edi
0x910405: pop     esi
0x910406: pop     ebx
0x910407: mov     esp, ebp
0x910409: pop     ebp
0x91040A: retn    4
