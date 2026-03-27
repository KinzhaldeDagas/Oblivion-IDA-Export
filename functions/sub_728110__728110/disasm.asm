0x728110: push    ebx
0x728111: mov     ebx, [esp+4+Size]
0x728115: push    esi
0x728116: push    edi
0x728117: push    ebx; Size
0x728118: mov     esi, ecx
0x72811A: call    sub_721610
0x72811F: mov     eax, [ebx+21Ch]
0x728125: mov     edx, [eax+4]
0x728128: push    1
0x72812A: lea     ecx, [esp+10h+Size]
0x72812E: push    ecx
0x72812F: push    4
0x728131: lea     edi, [esi+10h]
0x728134: push    edi
0x728135: push    eax
0x728136: mov     [esp+20h+Size], 4
0x72813E: call    edx
0x728140: mov     eax, [edi]
0x728142: add     esp, 14h
0x728145: test    eax, eax
0x728147: jbe     short loc_728174
0x728149: push    eax; Size
0x72814A: call    FormHeapAlloc
0x72814F: push    1
0x728151: lea     edx, [esp+14h+Size]
0x728155: push    edx
0x728156: mov     edx, [edi]
0x728158: push    edx
0x728159: mov     [esi+0Ch], eax
0x72815C: mov     ecx, [ebx+21Ch]
0x728162: push    eax
0x728163: mov     eax, [ecx+4]
0x728166: push    ecx
0x728167: mov     [esp+24h+Size], 1
0x72816F: call    eax
0x728171: add     esp, 18h
0x728174: pop     edi
0x728175: pop     esi
0x728176: pop     ebx
0x728177: retn    4
