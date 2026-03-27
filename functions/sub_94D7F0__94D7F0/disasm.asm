0x94D7F0: push    ebp
0x94D7F1: mov     ebp, esp
0x94D7F3: and     esp, 0FFFFFFF0h
0x94D7F6: sub     esp, 48h
0x94D7F9: push    esi
0x94D7FA: mov     esi, [ebp+arg_0]
0x94D7FD: mov     eax, [esi+8]
0x94D800: and     eax, 3FFFFFFFh
0x94D805: cmp     eax, 0Ch
0x94D808: push    edi
0x94D809: mov     edi, ecx
0x94D80B: jge     short loc_94D825
0x94D80D: add     eax, eax
0x94D80F: cmp     eax, 0Ch
0x94D812: jg      short loc_94D819
0x94D814: mov     eax, 0Ch
0x94D819: push    10h
0x94D81B: push    eax
0x94D81C: push    esi
0x94D81D: call    sub_8A6E40
0x94D822: add     esp, 0Ch
0x94D825: lea     eax, [esp+50h+var_40]
0x94D829: push    eax
0x94D82A: mov     ecx, edi
0x94D82C: mov     dword ptr [esi+4], 0Ch
0x94D833: call    sub_94D600
0x94D838: mov     ecx, [esi]
0x94D83A: movaps  xmm0, [esp+50h+var_40]
0x94D83F: movaps  xmm1, [esp+50h+var_30]
0x94D844: movaps  xmm2, [esp+50h+var_20]
0x94D849: movaps  xmmword ptr [ecx], xmm0
0x94D84C: mov     edx, [esi]
0x94D84E: movaps  xmm3, [esp+50h+var_10]
0x94D853: movaps  xmmword ptr [edx+10h], xmm1
0x94D857: mov     eax, [esi]
0x94D859: movaps  xmmword ptr [eax+20h], xmm1
0x94D85D: mov     ecx, [esi]
0x94D85F: movaps  xmmword ptr [ecx+30h], xmm2
0x94D863: mov     edx, [esi]
0x94D865: movaps  xmmword ptr [edx+40h], xmm2
0x94D869: mov     eax, [esi]
0x94D86B: movaps  xmmword ptr [eax+50h], xmm3
0x94D86F: mov     ecx, [esi]
0x94D871: movaps  xmmword ptr [ecx+60h], xmm3
0x94D875: mov     edx, [esi]
0x94D877: movaps  xmmword ptr [edx+70h], xmm0
0x94D87B: mov     eax, [esi]
0x94D87D: movaps  xmmword ptr [eax+80h], xmm0
0x94D884: mov     ecx, [esi]
0x94D886: movaps  xmmword ptr [ecx+90h], xmm2
0x94D88D: mov     edx, [esi]
0x94D88F: movaps  xmmword ptr [edx+0A0h], xmm1
0x94D896: mov     eax, [esi]
0x94D898: pop     edi
0x94D899: movaps  xmmword ptr [eax+0B0h], xmm3
0x94D8A0: pop     esi
0x94D8A1: mov     esp, ebp
0x94D8A3: pop     ebp
0x94D8A4: retn    4
