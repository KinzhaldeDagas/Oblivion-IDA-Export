0x93D670: push    ebp
0x93D671: mov     ebp, esp
0x93D673: and     esp, 0FFFFFFF0h
0x93D676: sub     esp, 34h
0x93D679: fld     [ebp+arg_4]
0x93D67C: push    ebx
0x93D67D: push    esi
0x93D67E: mov     esi, [ebp+arg_8]
0x93D681: push    edi
0x93D682: mov     edi, [ebp+arg_0]
0x93D685: mov     ebx, [edi+40h]
0x93D688: fmul    dword ptr [ebx+8]
0x93D68B: mov     ecx, [ebx]
0x93D68D: mov     edx, [edi]
0x93D68F: push    esi; int
0x93D690: fstp    [esp+44h+var_34]
0x93D694: add     edx, 40h ; '@'
0x93D697: mov     eax, [esp+44h+var_34]
0x93D69B: push    eax; float
0x93D69C: push    ecx; float
0x93D69D: push    edx; int
0x93D69E: call    sub_8DD340
0x93D6A3: mov     ecx, [ebx]
0x93D6A5: mov     edx, [edi+4]
0x93D6A8: lea     eax, [esi+40h]
0x93D6AB: push    eax; int
0x93D6AC: mov     eax, [esp+54h+var_34]
0x93D6B0: push    eax; float
0x93D6B1: push    ecx; float
0x93D6B2: add     edx, 40h ; '@'
0x93D6B5: push    edx; int
0x93D6B6: call    sub_8DD340
0x93D6BB: add     esp, 20h
0x93D6BE: lea     eax, [esi+40h]
0x93D6C1: push    eax
0x93D6C2: lea     ebx, [esi+80h]
0x93D6C8: push    esi
0x93D6C9: mov     ecx, ebx
0x93D6CB: call    sub_8B1FF0
0x93D6D0: lea     eax, [edi+20h]
0x93D6D3: push    eax
0x93D6D4: push    ebx
0x93D6D5: lea     ecx, [esi+0C0h]
0x93D6DB: call    sub_88FE00
0x93D6E0: lea     ecx, [edi+30h]
0x93D6E3: push    ecx
0x93D6E4: push    ebx
0x93D6E5: lea     ecx, [esi+0D0h]
0x93D6EB: call    sub_88FCC0
0x93D6F0: fld     dword ptr [edi+14h]
0x93D6F3: fchs
0x93D6F5: lea     ecx, [esp+40h+var_20]
0x93D6F9: fstp    dword ptr [esi+0CCh]
0x93D6FF: movaps  xmm2, xmmword ptr [esi+20h]
0x93D703: movaps  xmm1, xmmword ptr [esi]
0x93D706: movaps  xmm3, xmmword ptr [esi+10h]
0x93D70A: mov     eax, [edi]
0x93D70C: movaps  xmm0, xmm1
0x93D70F: shufps  xmm0, xmm3, 44h ; 'D'
0x93D713: shufps  xmm1, xmm3, 0EEh ; 'î'
0x93D717: add     eax, 80h ; '€'
0x93D71C: movaps  xmm3, xmm2
0x93D71F: shufps  xmm3, xmm2, 44h ; 'D'
0x93D723: movaps  xmm4, xmm0
0x93D726: shufps  xmm4, xmm3, 88h ; 'ˆ'
0x93D72A: shufps  xmm0, xmm3, 0DDh ; 'Ý'
0x93D72E: movaps  xmm3, xmm2
0x93D731: mov     [esp+40h+var_34], eax
0x93D735: shufps  xmm3, xmm2, 0EEh ; 'î'
0x93D739: lea     eax, [edi+60h]
0x93D73C: shufps  xmm1, xmm3, 88h ; 'ˆ'
0x93D740: movaps  xmm2, xmm1
0x93D743: sub     ecx, eax
0x93D745: mov     edx, 2
0x93D74A: lea     ebx, [ebx+0]
0x93D750: movaps  xmm1, xmmword ptr [eax]
0x93D753: movaps  xmm3, xmm1
0x93D756: shufps  xmm3, xmm1, 0AAh ; 'ª'
0x93D75A: movaps  xmm5, xmm2
0x93D75D: mulps   xmm5, xmm3
0x93D760: movaps  xmm3, xmm1
0x93D763: shufps  xmm3, xmm1, 55h ; 'U'
0x93D767: movaps  xmm6, xmm0
0x93D76A: mulps   xmm6, xmm3
0x93D76D: movaps  xmm3, xmm1
0x93D770: shufps  xmm3, xmm1, 0
0x93D774: movaps  xmm1, xmm4
0x93D777: mulps   xmm1, xmm3
0x93D77A: addps   xmm1, xmm6
0x93D77D: addps   xmm1, xmm5
0x93D780: movaps  xmmword ptr [ecx+eax], xmm1
0x93D784: add     eax, 10h
0x93D787: dec     edx
0x93D788: jnz     short loc_93D750
0x93D78A: movaps  xmm0, [esp+40h+var_10]
0x93D78F: subps   xmm0, [esp+40h+var_20]
0x93D794: movaps  xmmword ptr [esi+0F0h], xmm0
0x93D79B: mov     edx, [edi+4]
0x93D79E: add     edx, 80h ; '€'
0x93D7A4: push    edx
0x93D7A5: lea     ecx, [esi+100h]
0x93D7AB: push    ebx
0x93D7AC: call    sub_88FCC0
0x93D7B1: mov     eax, [esp+40h+var_34]
0x93D7B5: movaps  xmm1, xmmword ptr [eax]
0x93D7B8: movaps  xmm0, xmmword ptr [esi+100h]
0x93D7BF: add     edi, 50h ; 'P'
0x93D7C2: push    edi
0x93D7C3: lea     ebx, [esi+0E0h]
0x93D7C9: subps   xmm0, xmm1
0x93D7CC: push    esi
0x93D7CD: mov     ecx, ebx
0x93D7CF: movaps  [esp+48h+var_30], xmm0
0x93D7D4: call    sub_88FD90
0x93D7D9: movaps  xmm0, [esp+40h+var_20]
0x93D7DE: movaps  xmm1, xmm0
0x93D7E1: shufps  xmm1, xmm0, 0C9h ; 'É'
0x93D7E5: movaps  xmm2, xmm1
0x93D7E8: movaps  xmm1, [esp+40h+var_30]
0x93D7ED: movaps  xmm3, xmm1
0x93D7F0: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x93D7F4: mulps   xmm3, xmm2
0x93D7F7: movaps  xmm2, xmm0
0x93D7FA: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x93D7FE: movaps  xmm0, xmm1
0x93D801: shufps  xmm0, xmm1, 0C9h ; 'É'
0x93D805: movaps  xmm1, xmmword ptr [ebx]
0x93D808: pop     edi
0x93D809: mulps   xmm0, xmm2
0x93D80C: subps   xmm0, xmm3
0x93D80F: subps   xmm1, xmm0
0x93D812: pop     esi
0x93D813: movaps  xmmword ptr [ebx], xmm1
0x93D816: pop     ebx
0x93D817: mov     esp, ebp
0x93D819: pop     ebp
0x93D81A: retn
