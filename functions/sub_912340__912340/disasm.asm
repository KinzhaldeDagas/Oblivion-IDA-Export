0x912340: push    ebp
0x912341: mov     ebp, esp
0x912343: and     esp, 0FFFFFFF0h
0x912346: sub     esp, 4Ch
0x912349: mov     eax, [ebp+arg_0]
0x91234C: mov     ecx, [eax]
0x91234E: add     ecx, 4
0x912351: mov     [eax], ecx
0x912353: mov     eax, ecx
0x912355: mov     eax, [eax]
0x912357: mov     ecx, [ebp+arg_4]
0x91235A: add     eax, 2
0x91235D: push    esi
0x91235E: mov     esi, [ebp+arg_C]
0x912361: shl     eax, 4
0x912364: movaps  xmm0, xmmword ptr [eax+esi]
0x912368: mov     eax, [ecx]
0x91236A: movaps  [esp+50h+var_20], xmm0
0x91236F: movaps  xmm0, xmmword ptr [esi]
0x912372: movaps  [esp+50h+var_40], xmm0
0x912377: movaps  xmm0, xmmword ptr [esi+10h]
0x91237B: lea     edx, [eax+10h]
0x91237E: mov     [ecx], edx
0x912380: movaps  [esp+50h+var_30], xmm0
0x912385: mov     ecx, [eax]
0x912387: mov     [esp+50h+var_10], ecx
0x91238B: mov     edx, [eax+4]
0x91238E: mov     eax, [ebp+arg_14]
0x912391: mov     ecx, [ebp+arg_10]
0x912394: push    eax
0x912395: mov     [esp+54h+var_C], edx
0x912399: push    ecx
0x91239A: lea     edx, [esp+58h+var_40]
0x91239E: push    edx
0x91239F: call    sub_8F1970
0x9123A4: mov     eax, [esi+0B8h]
0x9123AA: add     esp, 0Ch
0x9123AD: inc     eax
0x9123AE: mov     [esi+0B8h], eax
0x9123B4: pop     esi
0x9123B5: mov     esp, ebp
0x9123B7: pop     ebp
0x9123B8: retn    18h
