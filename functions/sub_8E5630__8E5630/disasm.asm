0x8E5630: push    ebp
0x8E5631: mov     ebp, esp
0x8E5633: and     esp, 0FFFFFFF0h
0x8E5636: sub     esp, 24h
0x8E5639: mov     eax, [ebp+arg_0]
0x8E563C: mov     edx, ds:0BA9DE4h
0x8E5642: push    ebx
0x8E5643: mov     ebx, ecx
0x8E5645: mov     ecx, [eax+4]
0x8E5648: mov     eax, [ebx+44h]
0x8E564B: mov     [esp+28h+var_20], ecx
0x8E564F: mov     ecx, large fs:2Ch
0x8E5656: mov     ecx, [ecx+edx*4]
0x8E5659: push    esi
0x8E565A: push    edi
0x8E565B: mov     edi, eax
0x8E565D: mov     [esp+30h+var_14], eax
0x8E5661: sar     eax, 5
0x8E5664: mov     [esp+30h+var_C], ecx
0x8E5668: mov     ecx, [ecx+19Ch]
0x8E566E: mov     esi, [ecx+20h]
0x8E5671: lea     eax, ds:30h[eax*4]
0x8E5678: and     eax, 0FFFFFFF0h
0x8E567B: lea     edx, [esi+eax]
0x8E567E: sar     edi, 3
0x8E5681: cmp     edx, [ecx+2Ch]
0x8E5684: mov     [esp+30h+var_10], ebx
0x8E5688: ja      short loc_8E568F
0x8E568A: mov     [ecx+20h], edx
0x8E568D: jmp     short loc_8E5697
0x8E568F: mov     edx, [ecx]
0x8E5691: push    eax
0x8E5692: call    dword ptr [edx+0Ch]
0x8E5695: mov     esi, eax
0x8E5697: sar     edi, 4
0x8E569A: test    edi, edi
0x8E569C: xorps   xmm0, xmm0
0x8E569F: mov     eax, esi
0x8E56A1: jl      short loc_8E56B1
0x8E56A3: lea     edx, [edi+1]
0x8E56A6: mov     ecx, eax
0x8E56A8: add     eax, 10h
0x8E56AB: dec     edx
0x8E56AC: movaps  xmmword ptr [ecx], xmm0
0x8E56AF: jnz     short loc_8E56A6
0x8E56B1: mov     eax, [esp+30h+var_20]
0x8E56B5: xor     edx, edx
0x8E56B7: test    eax, eax
0x8E56B9: jle     short loc_8E56E5
0x8E56BB: jmp     short loc_8E56C0
0x8E56BD: align 10h
0x8E56C0: mov     eax, [ebp+arg_0]
0x8E56C3: mov     ecx, [eax]
0x8E56C5: mov     eax, [ecx+edx*4]
0x8E56C8: mov     ecx, [eax]
0x8E56CA: mov     eax, ecx
0x8E56CC: and     ecx, 1Fh
0x8E56CF: sar     eax, 5
0x8E56D2: mov     edi, 1
0x8E56D7: shl     edi, cl
0x8E56D9: xor     [esi+eax*4], edi
0x8E56DC: mov     eax, [esp+30h+var_20]
0x8E56E0: inc     edx
0x8E56E1: cmp     edx, eax
0x8E56E3: jl      short loc_8E56C0
0x8E56E5: push    ecx
0x8E56E6: mov     ecx, [ebp+arg_4]
0x8E56E9: mov     eax, esp
0x8E56EB: push    ecx
0x8E56EC: push    esi
0x8E56ED: mov     ecx, ebx
0x8E56EF: mov     byte ptr [eax], 0
0x8E56F2: call    sub_8E4BC0
0x8E56F7: mov     edx, [esp+30h+var_C]
0x8E56FB: mov     ecx, [edx+19Ch]
0x8E5701: cmp     esi, [ecx+28h]
0x8E5704: mov     [ecx+20h], esi
0x8E5707: jnz     short loc_8E570F
0x8E5709: mov     eax, [ecx]
0x8E570B: push    esi
0x8E570C: call    dword ptr [eax+10h]
0x8E570F: mov     ecx, [esp+30h+var_20]
0x8E5713: xor     eax, eax
0x8E5715: cmp     ecx, eax
0x8E5717: mov     [esp+30h+var_1C], eax
0x8E571B: jle     short loc_8E574C
0x8E571D: lea     ecx, [ecx+0]
0x8E5720: mov     ecx, [ebp+arg_0]
0x8E5723: mov     edx, [ecx]
0x8E5725: mov     edx, [edx+eax*4]
0x8E5728: mov     edx, [edx]
0x8E572A: mov     esi, [ebx+40h]
0x8E572D: shl     edx, 4
0x8E5730: lea     edi, [esp+30h+var_1C]
0x8E5734: mov     [edx+esi+0Ch], edi
0x8E5738: mov     ecx, [ecx]
0x8E573A: mov     edx, [ecx+eax*4]
0x8E573D: mov     ecx, [esp+30h+var_20]
0x8E5741: inc     eax
0x8E5742: cmp     eax, ecx
0x8E5744: mov     dword ptr [edx], 0
0x8E574A: jl      short loc_8E5720
0x8E574C: mov     eax, [esp+30h+var_C]
0x8E5750: mov     ecx, [eax+19Ch]
0x8E5756: mov     esi, [esp+30h+var_14]
0x8E575A: mov     edi, [ecx+20h]
0x8E575D: lea     eax, ds:10h[esi*4]
0x8E5764: and     eax, 0FFFFFFF0h
0x8E5767: lea     edx, [edi+eax]
0x8E576A: cmp     edx, [ecx+2Ch]
0x8E576D: ja      short loc_8E5774
0x8E576F: mov     [ecx+20h], edx
0x8E5772: jmp     short loc_8E577C
0x8E5774: mov     edx, [ecx]
0x8E5776: push    eax
0x8E5777: call    dword ptr [edx+0Ch]
0x8E577A: mov     edi, eax
0x8E577C: lea     edx, [esi-1]
0x8E577F: xor     ecx, ecx
0x8E5781: cmp     edx, ecx
0x8E5783: mov     [esp+30h+var_18], edi
0x8E5787: mov     [esp+30h+var_8], edi
0x8E578B: jl      loc_8E584D
0x8E5791: mov     esi, edx
0x8E5793: shl     esi, 4
0x8E5796: mov     [esp+30h+var_24], esi
0x8E579A: mov     [esp+30h+var_14], ecx
0x8E579E: jmp     short loc_8E57A4
0x8E57A0: mov     esi, [esp+30h+var_24]
0x8E57A4: mov     eax, [ebx+40h]
0x8E57A7: add     eax, esi
0x8E57A9: lea     esi, [esp+30h+var_1C]
0x8E57AD: cmp     [eax+0Ch], esi
0x8E57B0: jnz     short loc_8E57C7
0x8E57B2: mov     eax, [esp+30h+var_24]
0x8E57B6: mov     dword ptr [edi+edx*4], 0FFFFFFFFh
0x8E57BD: dec     edx
0x8E57BE: sub     eax, 10h
0x8E57C1: mov     [esp+30h+var_24], eax
0x8E57C5: jmp     short loc_8E5845
0x8E57C7: mov     edi, [esp+30h+var_14]
0x8E57CB: mov     esi, [ebx+40h]
0x8E57CE: add     esi, edi
0x8E57D0: lea     edi, [esp+30h+var_1C]
0x8E57D4: cmp     [esi+0Ch], edi
0x8E57D7: jnz     short loc_8E5832
0x8E57D9: mov     ebx, [eax]
0x8E57DB: mov     edi, esi
0x8E57DD: mov     [edi], ebx
0x8E57DF: mov     ebx, [eax+4]
0x8E57E2: mov     [edi+4], ebx
0x8E57E5: mov     ebx, [eax+8]
0x8E57E8: mov     [edi+8], ebx
0x8E57EB: mov     eax, [eax+0Ch]
0x8E57EE: mov     ebx, [esp+30h+var_10]
0x8E57F2: mov     [edi+0Ch], eax
0x8E57F5: mov     edi, [esp+30h+var_18]
0x8E57F9: mov     [edi+edx*4], ecx
0x8E57FC: mov     dword ptr [edi+ecx*4], 0FFFFFFFFh
0x8E5803: mov     eax, [esi+0Ch]
0x8E5806: test    al, 1
0x8E5808: jnz     short loc_8E581A
0x8E580A: mov     [eax], ecx
0x8E580C: mov     eax, [esp+30h+var_24]
0x8E5810: dec     edx
0x8E5811: sub     eax, 10h
0x8E5814: mov     [esp+30h+var_24], eax
0x8E5818: jmp     short loc_8E5839
0x8E581A: mov     esi, [ebx+78h]
0x8E581D: and     eax, 0FFFFFFFEh
0x8E5820: mov     [eax+esi], cx
0x8E5824: mov     eax, [esp+30h+var_24]
0x8E5828: dec     edx
0x8E5829: sub     eax, 10h
0x8E582C: mov     [esp+30h+var_24], eax
0x8E5830: jmp     short loc_8E5839
0x8E5832: mov     edi, [esp+30h+var_18]
0x8E5836: mov     [edi+ecx*4], ecx
0x8E5839: mov     eax, [esp+30h+var_14]
0x8E583D: inc     ecx
0x8E583E: add     eax, 10h
0x8E5841: mov     [esp+30h+var_14], eax
0x8E5845: cmp     ecx, edx
0x8E5847: jle     loc_8E57A0
0x8E584D: mov     eax, [ebx+48h]
0x8E5850: lea     esi, [ebx+40h]
0x8E5853: inc     edx
0x8E5854: and     eax, 3FFFFFFFh
0x8E5859: cmp     eax, edx
0x8E585B: mov     [esp+30h+var_14], edx
0x8E585F: jge     short loc_8E5879
0x8E5861: add     eax, eax
0x8E5863: cmp     edx, eax
0x8E5865: jl      short loc_8E5869
0x8E5867: mov     eax, edx
0x8E5869: push    10h
0x8E586B: push    eax
0x8E586C: push    esi
0x8E586D: call    sub_8A6E40
0x8E5872: mov     edx, [esp+3Ch+var_14]
0x8E5876: add     esp, 0Ch
0x8E5879: lea     ecx, [esp+30h+var_8]
0x8E587D: push    ecx
0x8E587E: mov     [esi+4], edx
0x8E5881: mov     edx, [esi]
0x8E5883: push    0
0x8E5885: push    edx
0x8E5886: lea     ecx, [ebx+4Ch]
0x8E5889: call    sub_8E13A0
0x8E588E: mov     ecx, [esi]
0x8E5890: lea     eax, [esp+30h+var_8]
0x8E5894: push    eax
0x8E5895: push    1
0x8E5897: push    ecx
0x8E5898: lea     ecx, [ebx+58h]
0x8E589B: call    sub_8E13A0
0x8E58A0: mov     eax, [esi]
0x8E58A2: lea     edx, [esp+30h+var_8]
0x8E58A6: push    edx
0x8E58A7: push    2
0x8E58A9: push    eax
0x8E58AA: lea     ecx, [ebx+64h]
0x8E58AD: call    sub_8E13A0
0x8E58B2: mov     eax, [ebx+70h]
0x8E58B5: xor     ecx, ecx
0x8E58B7: cmp     eax, ecx
0x8E58B9: jz      short loc_8E592A
0x8E58BB: mov     edx, [esp+30h+var_20]
0x8E58BF: add     edx, edx
0x8E58C1: cmp     eax, ecx
0x8E58C3: mov     [esp+30h+var_20], edx
0x8E58C7: mov     [esp+30h+var_18], ecx
0x8E58CB: jle     short loc_8E592A
0x8E58CD: mov     [esp+30h+var_14], ecx
0x8E58D1: mov     ecx, [ebx+78h]
0x8E58D4: add     ecx, [esp+30h+var_14]
0x8E58D8: movzx   eax, word ptr [ecx]
0x8E58DB: shl     eax, 4
0x8E58DE: add     eax, [esi]
0x8E58E0: sub     [eax+4], dx
0x8E58E4: sub     [eax+6], dx
0x8E58E8: xor     eax, eax
0x8E58EA: cmp     [ecx+8], eax
0x8E58ED: jle     short loc_8E5911
0x8E58EF: nop
0x8E58F0: mov     edx, [ecx+4]
0x8E58F3: movzx   ebx, word ptr [edx+eax*2]
0x8E58F7: mov     bx, [edi+ebx*4]
0x8E58FB: lea     edx, [edx+eax*2]
0x8E58FE: mov     [edx], bx
0x8E5901: mov     edx, [ecx+8]
0x8E5904: inc     eax
0x8E5905: cmp     eax, edx
0x8E5907: jl      short loc_8E58F0
0x8E5909: mov     ebx, [esp+30h+var_10]
0x8E590D: mov     edx, [esp+30h+var_20]
0x8E5911: mov     ecx, [esp+30h+var_14]
0x8E5915: mov     eax, [esp+30h+var_18]
0x8E5919: add     ecx, 10h
0x8E591C: inc     eax
0x8E591D: mov     [esp+30h+var_14], ecx
0x8E5921: cmp     eax, [ebx+70h]
0x8E5924: mov     [esp+30h+var_18], eax
0x8E5928: jl      short loc_8E58D1
0x8E592A: mov     eax, [esp+30h+var_C]
0x8E592E: mov     ecx, [eax+19Ch]
0x8E5934: cmp     edi, [ecx+28h]
0x8E5937: mov     [ecx+20h], edi
0x8E593A: jnz     short loc_8E5942
0x8E593C: mov     edx, [ecx]
0x8E593E: push    edi
0x8E593F: call    dword ptr [edx+10h]
0x8E5942: pop     edi
0x8E5943: pop     esi
0x8E5944: pop     ebx
0x8E5945: mov     esp, ebp
0x8E5947: pop     ebp
0x8E5948: retn    8
