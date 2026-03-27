0x9523F0: push    ebp
0x9523F1: mov     ebp, esp
0x9523F3: and     esp, 0FFFFFFF0h
0x9523F6: sub     esp, 4Ch
0x9523F9: push    esi
0x9523FA: mov     esi, ecx
0x9523FC: mov     edx, [esi+68h]
0x9523FF: lea     eax, [esp+50h+var_44]
0x952403: push    eax
0x952404: mov     eax, [ebp+arg_0]
0x952407: lea     ecx, [esp+54h+var_40]
0x95240B: push    ecx
0x95240C: push    edx
0x95240D: push    eax
0x95240E: mov     ecx, esi
0x952410: call    sub_951DF0
0x952415: fld     [esp+50h+var_44]
0x952419: fcomp   dword ptr [esi+40h]
0x95241C: fnstsw  ax
0x95241E: test    ah, 5
0x952421: jp      short loc_95242F
0x952423: mov     eax, 1
0x952428: pop     esi
0x952429: mov     esp, ebp
0x95242B: pop     ebp
0x95242C: retn    4
0x95242F: mov     ecx, [esi+6Ch]
0x952432: mov     edx, [ecx]
0x952434: mov     eax, [esi+68h]
0x952437: movaps  xmm0, [esp+50h+var_40]
0x95243C: shl     edx, 4
0x95243F: movaps  xmmword ptr [edx+eax], xmm0
0x952443: movaps  xmm0, [esp+50h+var_30]
0x952448: add     edx, eax
0x95244A: mov     eax, [esi+6Ch]
0x95244D: mov     ecx, [eax]
0x95244F: mov     eax, [esi+60h]
0x952452: shl     ecx, 4
0x952455: add     ecx, eax
0x952457: movaps  xmmword ptr [ecx], xmm0
0x95245A: mov     edx, [esi+6Ch]
0x95245D: mov     eax, [edx]
0x95245F: mov     ecx, [esi+64h]
0x952462: movaps  xmm0, [esp+50h+var_20]
0x952467: shl     eax, 4
0x95246A: add     eax, ecx
0x95246C: movaps  xmmword ptr [eax], xmm0
0x95246F: mov     esi, [esi+6Ch]
0x952472: inc     dword ptr [esi]
0x952474: xor     eax, eax
0x952476: pop     esi
0x952477: mov     esp, ebp
0x952479: pop     ebp
0x95247A: retn    4
