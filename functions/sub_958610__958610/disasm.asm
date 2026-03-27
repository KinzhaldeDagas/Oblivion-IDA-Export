0x958610: push    ebp
0x958611: mov     ebp, esp
0x958613: and     esp, 0FFFFFFF0h
0x958616: sub     esp, 64h
0x958619: push    ebx
0x95861A: push    esi
0x95861B: push    edi
0x95861C: mov     esi, ecx
0x95861E: mov     eax, [ebp+arg_4]
0x958621: fld     [ebp+arg_8]
0x958624: movaps  xmm0, xmmword ptr [eax+10h]
0x958628: fchs
0x95862A: movaps  xmm2, xmmword ptr [eax]
0x95862D: mov     ebx, [ebp+arg_10]
0x958630: movaps  [esp+70h+var_20], xmm0
0x958635: movaps  xmm0, xmmword ptr [eax+20h]
0x958639: mov     eax, [ebp+arg_8]
0x95863C: mov     dword ptr [esp+70h+var_70+0Ch], eax
0x958640: movss   xmm1, dword ptr [esp+70h+var_70+0Ch]
0x958646: fstp    dword ptr [esp+70h+var_70+0Ch]
0x95864A: mov     eax, [ebp+arg_C]
0x95864D: mov     edi, [ebp+arg_0]
0x958650: movaps  xmm3, xmm1
0x958653: shufps  xmm3, xmm1, 0
0x958657: movaps  [esp+70h+var_10], xmm0
0x95865C: movaps  xmm0, xmmword ptr [edi]
0x95865F: movaps  [esp+70h+var_40], xmm1
0x958664: mulps   xmm3, xmm2
0x958667: movaps  xmm1, xmm0
0x95866A: subps   xmm1, xmm3
0x95866D: push    ebx
0x95866E: push    eax
0x95866F: movaps  [esp+78h+var_50], xmm1
0x958674: movss   xmm1, dword ptr [esp+78h+var_70+0Ch]
0x95867A: movaps  xmm3, xmm1
0x95867D: lea     eax, [esp+78h+var_60]
0x958681: mov     ecx, [esi]
0x958683: shufps  xmm3, xmm1, 0
0x958687: push    eax
0x958688: mulps   xmm3, xmm2
0x95868B: subps   xmm0, xmm3
0x95868E: lea     eax, [esp+7Ch+var_50]
0x958692: movaps  [esp+7Ch+var_60], xmm0
0x958697: mov     edx, [ecx]
0x958699: push    eax
0x95869A: movaps  [esp+80h+var_30], xmm1
0x95869F: call    dword ptr [edx+1Ch]
0x9586A2: movaps  xmm1, [esp+70h+var_40]
0x9586A7: movaps  xmm0, xmmword ptr [edi]
0x9586AA: mov     eax, [ebp+arg_C]
0x9586AD: mov     ecx, [esi]
0x9586AF: movaps  xmm2, xmm1
0x9586B2: shufps  xmm2, xmm1, 0
0x9586B6: movaps  xmm1, [esp+70h+var_20]
0x9586BB: push    ebx
0x9586BC: mulps   xmm2, xmm1
0x9586BF: movaps  xmm3, xmm0
0x9586C2: subps   xmm3, xmm2
0x9586C5: movaps  xmm2, [esp+74h+var_30]
0x9586CA: movaps  [esp+74h+var_50], xmm3
0x9586CF: push    eax
0x9586D0: movaps  xmm3, xmm2
0x9586D3: lea     eax, [esp+78h+var_60]
0x9586D7: shufps  xmm3, xmm2, 0
0x9586DB: push    eax
0x9586DC: mulps   xmm3, xmm1
0x9586DF: subps   xmm0, xmm3
0x9586E2: lea     eax, [esp+7Ch+var_50]
0x9586E6: movaps  [esp+7Ch+var_60], xmm0
0x9586EB: mov     edx, [ecx]
0x9586ED: push    eax
0x9586EE: call    dword ptr [edx+1Ch]
0x9586F1: movaps  xmm1, [esp+70h+var_40]
0x9586F6: movaps  xmm0, xmmword ptr [edi]
0x9586F9: movaps  xmm2, xmm1
0x9586FC: shufps  xmm2, xmm1, 0
0x958700: movaps  xmm1, [esp+70h+var_10]
0x958705: mulps   xmm2, xmm1
0x958708: movaps  xmm3, xmm0
0x95870B: subps   xmm3, xmm2
0x95870E: movaps  xmm2, [esp+70h+var_30]
0x958713: movaps  [esp+70h+var_50], xmm3
0x958718: movaps  xmm3, xmm2
0x95871B: shufps  xmm3, xmm2, 0
0x95871F: mulps   xmm3, xmm1
0x958722: mov     eax, [ebp+arg_C]
0x958725: mov     ecx, [esi]
0x958727: push    ebx
0x958728: push    eax
0x958729: lea     eax, [esp+78h+var_60]
0x95872D: push    eax
0x95872E: subps   xmm0, xmm3
0x958731: lea     eax, [esp+7Ch+var_50]
0x958735: movaps  [esp+7Ch+var_60], xmm0
0x95873A: mov     edx, [ecx]
0x95873C: push    eax
0x95873D: call    dword ptr [edx+1Ch]
0x958740: pop     edi
0x958741: pop     esi
0x958742: pop     ebx
0x958743: mov     esp, ebp
0x958745: pop     ebp
0x958746: retn    14h
