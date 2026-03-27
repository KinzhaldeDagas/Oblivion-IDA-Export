0x8F56D0: push    ebp
0x8F56D1: mov     ebp, esp
0x8F56D3: and     esp, 0FFFFFFF0h
0x8F56D6: sub     esp, 2Ch
0x8F56D9: mov     edx, [ecx]
0x8F56DB: push    esi
0x8F56DC: mov     esi, [ebp+arg_8]
0x8F56DF: mov     eax, [esi+4]
0x8F56E2: mov     [esp+30h+var_C], eax
0x8F56E6: lea     eax, [esp+30h+var_2C+0Ch]
0x8F56EA: push    eax
0x8F56EB: mov     eax, [ebp+arg_0]
0x8F56EE: push    eax
0x8F56EF: lea     eax, [esp+38h+var_2C+0Bh]
0x8F56F3: push    eax
0x8F56F4: call    dword ptr [edx+14h]
0x8F56F7: cmp     byte ptr [eax], 0
0x8F56FA: jz      short loc_8F5747
0x8F56FC: movaps  xmm0, xmmword ptr [esp+30h+var_2C+0Ch]
0x8F5701: mov     ecx, [ebp+arg_4]
0x8F5704: mov     eax, [ecx+8]
0x8F5707: movaps  xmm2, xmmword ptr [eax+20h]
0x8F570B: movaps  xmm3, xmmword ptr [eax+10h]
0x8F570F: mov     edx, [esi]
0x8F5711: movaps  xmm1, xmm0
0x8F5714: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8F5718: mulps   xmm2, xmm1
0x8F571B: movaps  xmm1, xmm0
0x8F571E: shufps  xmm1, xmm0, 55h ; 'U'
0x8F5722: mulps   xmm3, xmm1
0x8F5725: movaps  xmm1, xmm0
0x8F5728: shufps  xmm1, xmm0, 0
0x8F572C: movaps  xmm0, xmmword ptr [eax]
0x8F572F: lea     eax, [esp+30h+var_2C+0Ch]
0x8F5733: mulps   xmm0, xmm1
0x8F5736: push    eax
0x8F5737: addps   xmm0, xmm3
0x8F573A: push    ecx
0x8F573B: addps   xmm0, xmm2
0x8F573E: mov     ecx, esi
0x8F5740: movaps  xmmword ptr [esp+38h+var_2C+0Ch], xmm0
0x8F5745: call    dword ptr [edx]
0x8F5747: pop     esi
0x8F5748: mov     esp, ebp
0x8F574A: pop     ebp
0x8F574B: retn    0Ch
