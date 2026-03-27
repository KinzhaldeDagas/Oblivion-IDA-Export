0x912280: push    ebp
0x912281: mov     ebp, esp
0x912283: and     esp, 0FFFFFFF0h
0x912286: sub     esp, 64h
0x912289: push    ebx
0x91228A: mov     ebx, [ebp+arg_10]
0x91228D: push    esi
0x91228E: mov     esi, [ebp+arg_C]
0x912291: movaps  xmm0, xmmword ptr [esi+50h]
0x912295: push    edi
0x912296: mov     edi, [ebp+arg_14]
0x912299: movaps  [esp+70h+var_30], xmm0
0x91229E: movaps  xmm0, xmmword ptr [esi+90h]
0x9122A5: push    edi
0x9122A6: lea     eax, [esp+74h+var_30]
0x9122AA: movaps  [esp+74h+var_10], xmm0
0x9122AF: movaps  xmm0, xmmword ptr [esi+70h]
0x9122B3: push    ebx
0x9122B4: push    eax
0x9122B5: movaps  [esp+7Ch+var_20], xmm0
0x9122BA: call    sub_8F1310
0x9122BF: movaps  xmm0, xmmword ptr [esi+60h]
0x9122C3: movaps  [esp+7Ch+var_60], xmm0
0x9122C8: movaps  xmm0, xmmword ptr [esi+0A0h]
0x9122CF: push    edi
0x9122D0: lea     ecx, [esp+80h+var_60]
0x9122D4: movaps  [esp+80h+var_40], xmm0
0x9122D9: movaps  xmm0, [esp+80h+var_30]
0x9122DE: push    ebx
0x9122DF: push    ecx
0x9122E0: movaps  [esp+88h+var_50], xmm0
0x9122E5: call    sub_8F1310
0x9122EA: movaps  xmm0, xmmword ptr [esi+80h]
0x9122F1: movaps  [esp+88h+var_40], xmm0
0x9122F6: movaps  xmm0, [esp+88h+var_60]
0x9122FB: push    edi
0x9122FC: lea     edx, [esp+8Ch+var_60]
0x912300: movaps  [esp+8Ch+var_50], xmm0
0x912305: movaps  xmm0, [esp+8Ch+var_20]
0x91230A: push    ebx
0x91230B: push    edx
0x91230C: movaps  [esp+94h+var_60], xmm0
0x912311: call    sub_8F1310
0x912316: mov     eax, [esi+0B8h]
0x91231C: add     esp, 24h
0x91231F: add     eax, 3
0x912322: pop     edi
0x912323: mov     [esi+0B8h], eax
0x912329: pop     esi
0x91232A: pop     ebx
0x91232B: mov     esp, ebp
0x91232D: pop     ebp
0x91232E: retn    18h
