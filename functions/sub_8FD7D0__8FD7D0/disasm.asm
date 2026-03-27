0x8FD7D0: push    ebp
0x8FD7D1: mov     ebp, esp
0x8FD7D3: and     esp, 0FFFFFFF0h
0x8FD7D6: sub     esp, 154h
0x8FD7DC: mov     ecx, large fs:2Ch
0x8FD7E3: mov     edx, ds:0BA9DE4h
0x8FD7E9: mov     eax, [ecx+edx*4]
0x8FD7EC: push    ebx
0x8FD7ED: push    esi
0x8FD7EE: mov     esi, [eax+1A4h]
0x8FD7F4: push    edi
0x8FD7F5: cmp     esi, [eax+1A8h]
0x8FD7FB: jnb     short loc_8FD821
0x8FD7FD: mov     esi, eax
0x8FD7FF: mov     ecx, [esi+1A4h]
0x8FD805: mov     dword ptr [ecx], offset aTtboxbox3; "TtBoxBox3"
0x8FD80B: rdtsc
0x8FD80D: mov     [esp+160h+var_154], eax
0x8FD811: mov     eax, [esp+160h+var_154]
0x8FD815: mov     [ecx+4], eax
0x8FD818: add     ecx, 0Ch
0x8FD81B: mov     [esi+1A4h], ecx
0x8FD821: mov     eax, [ebp+arg_0]
0x8FD824: mov     ecx, [eax]
0x8FD826: mov     edx, [ecx]
0x8FD828: mov     edi, [edx+0Ch]
0x8FD82B: movaps  xmm1, xmmword ptr [edx+10h]
0x8FD82F: mov     ebx, [ecx+8]
0x8FD832: mov     esi, [eax+4]
0x8FD835: mov     esi, [esi]
0x8FD837: mov     edx, [esi+0Ch]
0x8FD83A: movaps  xmm2, xmmword ptr [esi+10h]
0x8FD83E: mov     esi, [eax+4]
0x8FD841: mov     [esp+160h+var_154], edi
0x8FD845: mov     edi, [esi+8]
0x8FD848: movss   xmm0, [esp+160h+var_154]
0x8FD84E: shufps  xmm0, xmm0, 0
0x8FD852: addps   xmm1, xmm0
0x8FD855: mov     [esp+160h+var_154], edx
0x8FD859: mov     edx, [eax+8]
0x8FD85C: fld     dword ptr [edx+8]
0x8FD85F: movss   xmm0, [esp+160h+var_154]
0x8FD865: shufps  xmm0, xmm0, 0
0x8FD869: fst     [esp+160h+var_80]
0x8FD870: addps   xmm2, xmm0
0x8FD873: fstp    [esp+160h+var_154]
0x8FD877: movaps  xmm0, xmmword ptr [eax+10h]
0x8FD87B: movaps  [esp+160h+var_110], xmm0
0x8FD880: movaps  xmm0, xmmword ptr [eax+20h]
0x8FD884: mov     [esp+160h+var_130], ecx
0x8FD888: mov     ecx, [eax+0Ch]
0x8FD88B: movaps  [esp+160h+var_100], xmm0
0x8FD890: movaps  xmm0, xmmword ptr [eax+30h]
0x8FD894: movaps  [esp+160h+var_150], xmm1
0x8FD899: mov     [esp+160h+var_124], ecx
0x8FD89D: mov     ecx, dword ptr [esp+160h+var_150+4]
0x8FD8A1: movaps  [esp+160h+var_F0], xmm0
0x8FD8A6: movaps  xmm0, xmmword ptr [eax+40h]
0x8FD8AA: mov     eax, dword ptr [esp+160h+var_150]
0x8FD8AE: movaps  [esp+160h+var_140], xmm2
0x8FD8B3: mov     [esp+160h+var_128], edx
0x8FD8B7: mov     edx, [ebp+arg_10]
0x8FD8BA: mov     dword ptr [esp+160h+var_D0+4], ecx
0x8FD8C1: mov     ecx, dword ptr [esp+160h+var_140]
0x8FD8C5: mov     [esp+160h+var_120], edx
0x8FD8C9: mov     edx, dword ptr [esp+160h+var_150+8]
0x8FD8CD: movaps  [esp+160h+var_E0], xmm0
0x8FD8D5: movss   xmm0, [esp+160h+var_154]
0x8FD8DB: mov     dword ptr [esp+160h+var_D0], eax
0x8FD8E2: mov     eax, dword ptr [esp+160h+var_150+0Ch]
0x8FD8E6: mov     dword ptr [esp+160h+var_C0], ecx
0x8FD8ED: mov     ecx, dword ptr [esp+160h+var_140+0Ch]
0x8FD8F1: shufps  xmm0, xmm0, 0
0x8FD8F5: mov     [esp+160h+var_12C], esi
0x8FD8F9: mov     esi, [ebp+arg_8]
0x8FD8FC: mov     [esp+160h+var_C8], edx
0x8FD903: mov     edx, dword ptr [esp+160h+var_140+4]
0x8FD907: mov     [esp+160h+var_C4], eax
0x8FD90E: mov     eax, dword ptr [esp+160h+var_140+8]
0x8FD912: movaps  xmm3, xmm0
0x8FD915: mov     [esp+160h+var_B4], ecx
0x8FD91C: movaps  [esp+160h+var_B0], xmm0
0x8FD924: addps   xmm3, xmm1
0x8FD927: addps   xmm0, xmm2
0x8FD92A: push    esi
0x8FD92B: lea     ecx, [esp+164h+var_130]
0x8FD92F: mov     [esp+164h+var_11C], ebx
0x8FD933: mov     [esp+164h+var_118], edi
0x8FD937: mov     dword ptr [esp+164h+var_C0+4], edx
0x8FD93E: mov     [esp+164h+var_B8], eax
0x8FD945: mov     [esp+164h+var_7C], 3C23D70Ah
0x8FD950: movaps  [esp+164h+var_A0], xmm3
0x8FD958: movaps  [esp+164h+var_90], xmm0
0x8FD960: call    sub_9386C0
0x8FD965: mov     dl, [esi+21h]
0x8FD968: mov     eax, [ebp+arg_4]
0x8FD96B: mov     ecx, large fs:2Ch
0x8FD972: mov     [eax+2], dl
0x8FD975: mov     edx, ds:0BA9DE4h
0x8FD97B: mov     eax, [ecx+edx*4]
0x8FD97E: mov     edi, [eax+1A4h]
0x8FD984: cmp     edi, [eax+1A8h]
0x8FD98A: jnb     short loc_8FD9B0
0x8FD98C: mov     edi, eax
0x8FD98E: mov     ecx, [edi+1A4h]
0x8FD994: mov     dword ptr [ecx], offset aEt; "Et"
0x8FD99A: rdtsc
0x8FD99C: mov     [esp+160h+var_154], eax
0x8FD9A0: mov     edx, [esp+160h+var_154]
0x8FD9A4: mov     [ecx+4], edx
0x8FD9A7: add     ecx, 0Ch
0x8FD9AA: mov     [edi+1A4h], ecx
0x8FD9B0: pop     edi
0x8FD9B1: lea     eax, [esi+50h]
0x8FD9B4: pop     esi
0x8FD9B5: pop     ebx
0x8FD9B6: mov     esp, ebp
0x8FD9B8: pop     ebp
0x8FD9B9: retn
