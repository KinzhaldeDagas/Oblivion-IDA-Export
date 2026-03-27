0x945960: push    ebp
0x945961: mov     ebp, esp
0x945963: and     esp, 0FFFFFFF0h
0x945966: sub     esp, 48h
0x945969: mov     eax, [ebp+arg_0]
0x94596C: fld     dword ptr ds:0A2F948h
0x945972: mov     [ecx+64h], eax
0x945975: mov     eax, [ebp+arg_C]
0x945978: mov     [ecx+60h], eax
0x94597B: mov     eax, [ebp+arg_10]
0x94597E: mov     [ecx+5Ch], eax
0x945981: xor     edx, edx
0x945983: mov     [ecx+58h], edx
0x945986: mov     eax, [eax+4]
0x945989: mov     [ecx+54h], eax
0x94598C: mov     eax, [ebp+arg_4]
0x94598F: mov     [ecx+10h], eax
0x945992: push    esi
0x945993: mov     esi, [eax+20h]
0x945996: xorps   xmm0, xmm0
0x945999: movaps  [esp+4Ch+var_40], xmm0
0x94599E: fdiv    dword ptr [eax+1Ch]
0x9459A1: push    edi
0x9459A2: fstp    dword ptr [ecx+14h]
0x9459A5: fld     dword ptr [eax+1Ch]
0x9459A8: movaps  xmm0, xmmword ptr [eax+10h]
0x9459AC: fmul    dword ptr ds:0AA1EC0h
0x9459B2: mov     eax, [ebp+arg_8]
0x9459B5: movaps  xmm3, xmmword ptr [eax]
0x9459B8: movaps  xmm2, xmmword ptr [eax+10h]
0x9459BC: subps   xmm2, xmm0
0x9459BF: fst     [esp+50h+var_2C]
0x9459C3: movaps  xmm1, xmm3
0x9459C6: subps   xmm1, xmm0
0x9459C9: fstp    [esp+50h+var_44]
0x9459CD: movss   xmm0, [esp+50h+var_44]
0x9459D3: movaps  xmm4, xmm0
0x9459D6: shufps  xmm4, xmm0, 0
0x9459DA: mulps   xmm4, xmm1
0x9459DD: movaps  xmmword ptr [ecx+20h], xmm3
0x9459E1: movaps  xmm1, xmm0
0x9459E4: shufps  xmm1, xmm0, 0
0x9459E8: movaps  xmm0, xmmword ptr [eax+10h]
0x9459EC: movaps  xmmword ptr [ecx+30h], xmm0
0x9459F0: mov     edi, [eax+20h]
0x9459F3: mov     [ecx+40h], edi
0x9459F6: mov     eax, [eax+24h]
0x9459F9: mov     [ecx+44h], eax
0x9459FC: mov     [ecx+50h], dl
0x9459FF: mov     [esp+50h+var_28], edx
0x945A03: mov     [esp+50h+var_30], edx
0x945A07: mov     [esp+50h+var_24], edx
0x945A0B: lea     edx, [esp+50h+var_20]
0x945A0F: push    edx
0x945A10: push    esi
0x945A11: lea     eax, [esp+58h+var_40]
0x945A15: mulps   xmm1, xmm2
0x945A18: push    eax
0x945A19: movaps  [esp+5Ch+var_20], xmm4
0x945A1E: movaps  [esp+5Ch+var_10], xmm1
0x945A23: call    sub_944AC0
0x945A28: pop     edi
0x945A29: pop     esi
0x945A2A: mov     esp, ebp
0x945A2C: pop     ebp
0x945A2D: retn    14h
