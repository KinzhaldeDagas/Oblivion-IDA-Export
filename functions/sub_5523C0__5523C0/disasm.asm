0x5523C0: sub     esp, 14h
0x5523C3: push    ebx
0x5523C4: push    ebp
0x5523C5: mov     ebp, [esp+1Ch+arg_4]
0x5523C9: push    esi
0x5523CA: mov     esi, ecx
0x5523CC: mov     eax, [esi+4]
0x5523CF: push    edi
0x5523D0: xor     edi, edi
0x5523D2: cmp     eax, [ebp+0]
0x5523D5: mov     [esp+24h+var_14], edi
0x5523D9: jz      short loc_5523ED
0x5523DB: push    10Dh; int
0x5523E0: push    offset aENetworkprojec; "e:\\networkprojectspc\\oblivionse\\sdk"...
0x5523E5: call    sub_6ED6D0
0x5523EA: add     esp, 8
0x5523ED: mov     ecx, [ebp+4]
0x5523F0: mov     edx, [esi]
0x5523F2: mov     ebx, [esp+24h+arg_0]
0x5523F6: push    ecx
0x5523F7: push    edx
0x5523F8: mov     ecx, ebx
0x5523FA: call    sub_552240
0x5523FF: cmp     [esi], edi
0x552401: mov     [esp+24h+arg_4], edi
0x552405: jbe     loc_552516
0x55240B: jmp     short loc_552412
0x55240D: align 10h
0x552410: xor     edi, edi
0x552412: cmp     [ebp+4], edi
0x552415: mov     [esp+24h+arg_0], edi
0x552419: jbe     loc_552503
0x55241F: nop
0x552420: mov     eax, [ebx+0Ch]
0x552423: test    eax, eax
0x552425: jz      short loc_552431
0x552427: mov     ecx, [ebx+10h]
0x55242A: sub     ecx, eax
0x55242C: sar     ecx, 2
0x55242F: jnz     short loc_552436
0x552431: call    __invalid_parameter_noinfo
0x552436: mov     edx, [ebx+4]
0x552439: fldz
0x55243B: imul    edx, [esp+24h+arg_4]
0x552440: mov     eax, [ebx+0Ch]
0x552443: mov     ecx, [esp+24h+arg_0]
0x552447: lea     eax, [eax+edx*4]
0x55244A: xor     edi, edi
0x55244C: fstp    dword ptr [eax+ecx*4]
0x55244F: cmp     [esi+4], edi
0x552452: jbe     loc_5524EF
0x552458: mov     eax, [ebx+0Ch]
0x55245B: test    eax, eax
0x55245D: jz      short loc_552469
0x55245F: mov     edx, [ebx+10h]
0x552462: sub     edx, eax
0x552464: sar     edx, 2
0x552467: jnz     short loc_55246E
0x552469: call    __invalid_parameter_noinfo
0x55246E: mov     eax, [ebx+4]
0x552471: imul    eax, [esp+24h+arg_4]
0x552476: mov     ecx, [ebx+0Ch]
0x552479: lea     edx, [ecx+eax*4]
0x55247C: mov     eax, [esi+0Ch]
0x55247F: test    eax, eax
0x552481: mov     [esp+24h+var_8], edx
0x552485: jz      short loc_552491
0x552487: mov     ecx, [esi+10h]
0x55248A: sub     ecx, eax
0x55248C: sar     ecx, 2
0x55248F: jnz     short loc_552496
0x552491: call    __invalid_parameter_noinfo
0x552496: mov     edx, [esi+4]
0x552499: imul    edx, [esp+24h+arg_4]
0x55249E: mov     eax, [esi+0Ch]
0x5524A1: lea     ecx, [eax+edx*4]
0x5524A4: mov     eax, [ebp+0Ch]
0x5524A7: test    eax, eax
0x5524A9: mov     [esp+24h+var_10], ecx
0x5524AD: jz      short loc_5524B9
0x5524AF: mov     edx, [ebp+10h]
0x5524B2: sub     edx, eax
0x5524B4: sar     edx, 2
0x5524B7: jnz     short loc_5524BE
0x5524B9: call    __invalid_parameter_noinfo
0x5524BE: mov     eax, [ebp+4]
0x5524C1: mov     ecx, [ebp+0Ch]
0x5524C4: imul    eax, edi
0x5524C7: mov     edx, [esp+24h+var_10]
0x5524CB: lea     ecx, [ecx+eax*4]
0x5524CE: mov     eax, [esp+24h+arg_0]
0x5524D2: add     edi, 1
0x5524D5: fld     dword ptr [ecx+eax*4]
0x5524D8: mov     ecx, [esp+24h+var_8]
0x5524DC: fmul    dword ptr [edx+edi*4-4]
0x5524E0: fadd    dword ptr [ecx+eax*4]
0x5524E3: fstp    dword ptr [ecx+eax*4]
0x5524E6: cmp     edi, [esi+4]
0x5524E9: jb      loc_552458
0x5524EF: mov     eax, [esp+24h+arg_0]
0x5524F3: add     eax, 1
0x5524F6: cmp     eax, [ebp+4]
0x5524F9: mov     [esp+24h+arg_0], eax
0x5524FD: jb      loc_552420
0x552503: mov     eax, [esp+24h+arg_4]
0x552507: add     eax, 1
0x55250A: cmp     eax, [esi]
0x55250C: mov     [esp+24h+arg_4], eax
0x552510: jb      loc_552410
0x552516: pop     edi
0x552517: pop     esi
0x552518: pop     ebp
0x552519: mov     eax, ebx
0x55251B: pop     ebx
0x55251C: add     esp, 14h
0x55251F: retn    8
