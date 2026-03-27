0x9121D0: push    ebp
0x9121D1: mov     ebp, esp
0x9121D3: and     esp, 0FFFFFFF0h
0x9121D6: sub     esp, 34h
0x9121D9: mov     eax, [ebp+arg_0]
0x9121DC: push    ebx
0x9121DD: mov     ebx, [ebp+arg_10]
0x9121E0: push    esi
0x9121E1: mov     esi, [ebp+arg_C]
0x9121E4: push    edi
0x9121E5: mov     edi, [eax]
0x9121E7: add     edi, 4
0x9121EA: mov     [eax], edi
0x9121EC: mov     eax, edi
0x9121EE: mov     eax, [eax]
0x9121F0: mov     ecx, ds:0B2FF9Ch[eax*4]
0x9121F7: mov     edx, ds:0B2FFA0h[eax*4]
0x9121FE: mov     edi, [ebp+arg_14]
0x912201: add     ecx, 5
0x912204: shl     ecx, 4
0x912207: movaps  xmm0, xmmword ptr [ecx+esi]
0x91220B: add     edx, 5
0x91220E: add     eax, 8
0x912211: movaps  [esp+40h+var_20], xmm0
0x912216: shl     edx, 4
0x912219: movaps  xmm0, xmmword ptr [edx+esi]
0x91221D: shl     eax, 4
0x912220: movaps  [esp+40h+var_30], xmm0
0x912225: movaps  xmm0, xmmword ptr [eax+esi]
0x912229: push    edi
0x91222A: lea     eax, [esp+44h+var_30]
0x91222E: push    ebx
0x91222F: push    eax
0x912230: movaps  [esp+4Ch+var_10], xmm0
0x912235: call    sub_8F1310
0x91223A: movaps  xmm1, xmmword ptr ds:0A965C0h
0x912241: movaps  xmm0, [esp+4Ch+var_20]
0x912246: push    edi
0x912247: xorps   xmm0, xmm1
0x91224A: movaps  xmm1, [esp+50h+var_30]
0x91224F: lea     ecx, [esp+50h+var_30]
0x912253: push    ebx
0x912254: push    ecx
0x912255: movaps  [esp+58h+var_20], xmm1
0x91225A: movaps  [esp+58h+var_30], xmm0
0x91225F: call    sub_8F1310
0x912264: mov     eax, [esi+0B8h]
0x91226A: add     esp, 18h
0x91226D: add     eax, 2
0x912270: pop     edi
0x912271: mov     [esi+0B8h], eax
0x912277: pop     esi
0x912278: pop     ebx
0x912279: mov     esp, ebp
0x91227B: pop     ebp
0x91227C: retn    18h
