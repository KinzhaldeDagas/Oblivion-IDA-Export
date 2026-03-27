0x9097D0: push    ebp
0x9097D1: mov     ebp, esp
0x9097D3: and     esp, 0FFFFFFF0h
0x9097D6: sub     esp, 0D4h
0x9097DC: mov     edx, ds:0BA9DE4h
0x9097E2: push    ebx
0x9097E3: push    esi
0x9097E4: push    edi
0x9097E5: mov     edi, ecx
0x9097E7: mov     ecx, large fs:2Ch
0x9097EE: mov     eax, [ecx+edx*4]
0x9097F1: mov     esi, [eax+1A4h]
0x9097F7: cmp     esi, [eax+1A8h]
0x9097FD: jnb     short loc_909823
0x9097FF: mov     esi, eax
0x909801: mov     ecx, [esi+1A4h]
0x909807: mov     dword ptr [ecx], offset aTtmultisphere; "TtMultiSphere"
0x90980D: rdtsc
0x90980F: mov     [esp+0E0h+var_D4], eax
0x909813: mov     eax, [esp+0E0h+var_D4]
0x909817: mov     [ecx+4], eax
0x90981A: add     ecx, 0Ch
0x90981D: mov     [esi+1A4h], ecx
0x909823: mov     ebx, [ebp+arg_0]
0x909826: mov     ecx, [ebx]
0x909828: mov     edx, [ebx+8]
0x90982B: mov     [esp+0E0h+var_D4], ecx
0x90982F: push    edx
0x909830: lea     ecx, [esp+0E4h+var_B0]
0x909834: call    sub_903FA0
0x909839: push    0
0x90983B: lea     ecx, [esp+0E4h+var_C0]
0x90983F: call    sub_8ED410
0x909844: mov     esi, [edi+0Ch]
0x909847: mov     edi, [edi+10h]
0x90984A: dec     edi
0x90984B: lea     eax, [esp+0E0h+var_B0]
0x90984F: mov     [esp+0E0h+var_C4], ebx
0x909853: mov     [esp+0E0h+var_C8], eax
0x909857: js      loc_9098E8
0x90985D: lea     ecx, [ecx+0]
0x909860: mov     eax, [esi]
0x909862: mov     edx, [esp+0E0h+var_D4]
0x909866: movaps  xmm2, [esp+0E0h+var_90]
0x90986B: movaps  xmm3, [esp+0E0h+var_A0]
0x909870: mov     ecx, [ebx+8]
0x909873: inc     eax
0x909874: shl     eax, 4
0x909877: movaps  xmm0, xmmword ptr [eax+edx]
0x90987B: add     eax, edx
0x90987D: movaps  xmm1, xmm0
0x909880: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x909884: mulps   xmm2, xmm1
0x909887: movaps  xmm1, xmm0
0x90988A: shufps  xmm1, xmm0, 55h ; 'U'
0x90988E: mulps   xmm3, xmm1
0x909891: movaps  xmm1, xmm0
0x909894: shufps  xmm1, xmm0, 0
0x909898: movaps  xmm0, [esp+0E0h+var_B0]
0x90989D: mulps   xmm0, xmm1
0x9098A0: movaps  xmm1, xmmword ptr [ecx+30h]
0x9098A4: addps   xmm0, xmm3
0x9098A7: addps   xmm0, xmm2
0x9098AA: addps   xmm1, xmm0
0x9098AD: movaps  [esp+0E0h+var_80], xmm1
0x9098B2: mov     edx, [eax+0Ch]
0x9098B5: lea     eax, [esp+0E0h+var_C0]
0x9098B9: mov     [esp+0E0h+var_D0], eax
0x9098BD: mov     eax, [ebp+arg_C]
0x9098C0: push    eax
0x9098C1: mov     eax, [ebp+arg_8]
0x9098C4: push    eax
0x9098C5: mov     eax, [ebp+arg_4]
0x9098C8: mov     [esp+0E8h+var_B4], edx
0x9098CC: mov     [esp+0E8h+var_CC], edi
0x9098D0: mov     ecx, [esi+4]
0x9098D3: mov     edx, [ecx]
0x9098D5: push    eax
0x9098D6: lea     eax, [esp+0ECh+var_D0]
0x9098DA: push    eax
0x9098DB: call    dword ptr [edx+0Ch]
0x9098DE: add     esi, 8
0x9098E1: dec     edi
0x9098E2: jns     loc_909860
0x9098E8: mov     ecx, large fs:2Ch
0x9098EF: mov     edx, ds:0BA9DE4h
0x9098F5: mov     eax, [ecx+edx*4]
0x9098F8: mov     esi, [eax+1A4h]
0x9098FE: cmp     esi, [eax+1A8h]
0x909904: jnb     short loc_90992A
0x909906: mov     esi, eax
0x909908: mov     ecx, [esi+1A4h]
0x90990E: mov     dword ptr [ecx], offset aEt; "Et"
0x909914: rdtsc
0x909916: mov     [esp+0E0h+var_D4], eax
0x90991A: mov     edx, [esp+0E0h+var_D4]
0x90991E: mov     [ecx+4], edx
0x909921: add     ecx, 0Ch
0x909924: mov     [esi+1A4h], ecx
0x90992A: pop     edi
0x90992B: pop     esi
0x90992C: pop     ebx
0x90992D: mov     esp, ebp
0x90992F: pop     ebp
0x909930: retn    10h
