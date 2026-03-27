0x945880: push    ebp
0x945881: mov     ebp, esp
0x945883: and     esp, 0FFFFFFF0h
0x945886: sub     esp, 4Ch
0x945889: mov     eax, [ebp+arg_4]
0x94588C: fld     dword ptr ds:0A2F948h
0x945892: push    esi
0x945893: mov     esi, ecx
0x945895: mov     ecx, [ebp+arg_10]
0x945898: mov     [esi+64h], eax
0x94589B: mov     eax, [ebp+arg_8]
0x94589E: mov     [esi+10h], eax
0x9458A1: mov     [esi+58h], ecx
0x9458A4: mov     dword ptr [esi+54h], 3F800000h
0x9458AB: mov     ecx, [eax+20h]
0x9458AE: xorps   xmm0, xmm0
0x9458B1: movaps  [esp+50h+var_40], xmm0
0x9458B6: fdiv    dword ptr [eax+1Ch]
0x9458B9: fstp    dword ptr [esi+14h]
0x9458BC: fld     dword ptr [eax+1Ch]
0x9458BF: movaps  xmm0, xmmword ptr [eax+10h]
0x9458C3: fmul    dword ptr ds:0AA1EC0h
0x9458C9: mov     eax, [ebp+arg_C]
0x9458CC: movaps  xmm3, xmmword ptr [eax]
0x9458CF: movaps  xmm2, xmmword ptr [eax+10h]
0x9458D3: subps   xmm2, xmm0
0x9458D6: fst     [esp+50h+var_2C]
0x9458DA: movaps  xmm1, xmm3
0x9458DD: subps   xmm1, xmm0
0x9458E0: fstp    [esp+50h+var_44]
0x9458E4: movss   xmm0, [esp+50h+var_44]
0x9458EA: movaps  xmm4, xmm0
0x9458ED: shufps  xmm4, xmm0, 0
0x9458F1: mulps   xmm4, xmm1
0x9458F4: movaps  xmmword ptr [esi+20h], xmm3
0x9458F8: movaps  xmm1, xmm0
0x9458FB: shufps  xmm1, xmm0, 0
0x9458FF: movaps  xmm0, xmmword ptr [eax+10h]
0x945903: movaps  xmmword ptr [esi+30h], xmm0
0x945907: mov     edx, [eax+20h]
0x94590A: mov     [esi+40h], edx
0x94590D: mov     eax, [eax+24h]
0x945910: mov     [esi+44h], eax
0x945913: xor     eax, eax
0x945915: lea     edx, [esp+50h+var_20]
0x945919: push    edx
0x94591A: mov     [esi+50h], al
0x94591D: mov     [esp+54h+var_28], eax
0x945921: mov     [esp+54h+var_30], eax
0x945925: mov     [esp+54h+var_24], eax
0x945929: push    ecx
0x94592A: lea     eax, [esp+58h+var_40]
0x94592E: mulps   xmm1, xmm2
0x945931: push    eax
0x945932: mov     ecx, esi
0x945934: movaps  [esp+5Ch+var_20], xmm4
0x945939: movaps  [esp+5Ch+var_10], xmm1
0x94593E: call    sub_944AC0
0x945943: mov     cl, [esi+50h]
0x945946: mov     eax, [ebp+arg_0]
0x945949: mov     [eax], cl
0x94594B: pop     esi
0x94594C: mov     esp, ebp
0x94594E: pop     ebp
0x94594F: retn    14h
