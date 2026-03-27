0x8E84B0: push    ebp
0x8E84B1: mov     ebp, esp
0x8E84B3: and     esp, 0FFFFFFF0h
0x8E84B6: sub     esp, 34h
0x8E84B9: mov     ecx, ds:0BA7D98h
0x8E84BF: mov     eax, [ecx]
0x8E84C1: mov     edx, [eax+10h]
0x8E84C4: push    ebx
0x8E84C5: push    esi
0x8E84C6: mov     esi, [ebp+arg_0]
0x8E84C9: push    edi
0x8E84CA: mov     edi, [ebp+arg_4]
0x8E84CD: push    25h ; '%'
0x8E84CF: push    30h ; '0'
0x8E84D1: call    edx
0x8E84D3: mov     word ptr [eax+4], 30h ; '0'
0x8E84D9: mov     word ptr [eax+6], 1
0x8E84DF: mov     dword ptr [eax], offset ??_7hkMoppCode@@6B@; const hkMoppCode::`vftable'
0x8E84E5: push    1
0x8E84E7: mov     dword ptr [eax+28h], 80000000h
0x8E84EE: xor     ebx, ebx
0x8E84F0: mov     [eax+20h], ebx
0x8E84F3: mov     [eax+24h], ebx
0x8E84F6: lea     ecx, [esp+44h+var_24]
0x8E84FA: push    ecx
0x8E84FB: xorps   xmm0, xmm0
0x8E84FE: movaps  xmmword ptr [eax+10h], xmm0
0x8E8502: mov     [edi], eax
0x8E8504: mov     eax, [esi+21Ch]
0x8E850A: push    4
0x8E850C: lea     edx, [esp+4Ch+var_28]
0x8E8510: push    edx
0x8E8511: mov     [esp+50h+var_28], ebx
0x8E8515: push    eax
0x8E8516: mov     eax, [eax+4]
0x8E8519: mov     [esp+54h+var_24], 4
0x8E8521: call    eax
0x8E8523: mov     ecx, [edi]
0x8E8525: mov     eax, [esi+21Ch]
0x8E852B: mov     edx, [eax+4]
0x8E852E: push    ebx
0x8E852F: push    ebx
0x8E8530: push    10h
0x8E8532: add     ecx, 10h
0x8E8535: push    ecx
0x8E8536: push    eax
0x8E8537: call    edx
0x8E8539: add     esp, 28h
0x8E853C: cmp     dword ptr [esi+4], 6
0x8E8540: jnb     short loc_8E857A
0x8E8542: mov     eax, [esp+40h+var_28]
0x8E8546: cmp     eax, ebx
0x8E8548: jz      loc_8E85D5
0x8E854E: push    1
0x8E8550: lea     ecx, [esp+44h+var_24]
0x8E8554: push    ecx
0x8E8555: sub     eax, 30h ; '0'
0x8E8558: mov     [esp+48h+var_28], eax
0x8E855C: mov     eax, [esi+21Ch]
0x8E8562: push    20h ; ' '
0x8E8564: lea     edx, [esp+4Ch+var_20]
0x8E8568: push    edx
0x8E8569: push    eax
0x8E856A: mov     eax, [eax+4]
0x8E856D: mov     [esp+54h+var_24], 4
0x8E8575: call    eax
0x8E8577: add     esp, 14h
0x8E857A: mov     eax, [esp+40h+var_28]
0x8E857E: cmp     eax, ebx
0x8E8580: jz      short loc_8E85D5
0x8E8582: mov     ebx, [edi]
0x8E8584: mov     ecx, [ebx+28h]
0x8E8587: add     ebx, 20h ; ' '
0x8E858A: and     ecx, 3FFFFFFFh
0x8E8590: cmp     ecx, eax
0x8E8592: mov     [esp+40h+var_24], eax
0x8E8596: jge     short loc_8E85AC
0x8E8598: add     ecx, ecx
0x8E859A: cmp     eax, ecx
0x8E859C: jge     short loc_8E85A0
0x8E859E: mov     eax, ecx
0x8E85A0: push    1
0x8E85A2: push    eax
0x8E85A3: push    ebx
0x8E85A4: call    sub_8A6E40
0x8E85A9: add     esp, 0Ch
0x8E85AC: mov     ecx, [esp+40h+var_24]
0x8E85B0: mov     [ebx+4], ecx
0x8E85B3: mov     edx, [esp+40h+var_28]
0x8E85B7: mov     eax, [edi]
0x8E85B9: mov     ecx, [eax+20h]
0x8E85BC: mov     esi, [esi+21Ch]
0x8E85C2: push    0
0x8E85C4: push    0
0x8E85C6: push    edx
0x8E85C7: mov     edx, [esi+4]
0x8E85CA: push    ecx
0x8E85CB: push    esi
0x8E85CC: call    edx
0x8E85CE: mov     eax, [esp+54h+var_28]
0x8E85D2: add     esp, 14h
0x8E85D5: pop     edi
0x8E85D6: pop     esi
0x8E85D7: pop     ebx
0x8E85D8: mov     esp, ebp
0x8E85DA: pop     ebp
0x8E85DB: retn
