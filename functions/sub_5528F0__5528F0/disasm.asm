0x5528F0: push    ecx
0x5528F1: push    edi
0x5528F2: mov     edi, [esp+8+arg_0]
0x5528F6: test    edi, edi
0x5528F8: jz      loc_552989
0x5528FE: mov     eax, [esp+8+arg_4]
0x552902: test    eax, eax
0x552904: jz      loc_552989
0x55290A: push    ebx
0x55290B: mov     ebx, edi
0x55290D: push    ebp
0x55290E: sub     ebx, eax
0x552910: push    esi
0x552911: mov     [esp+14h+var_4], ebx
0x552915: lea     esi, [eax+4]
0x552918: mov     [esp+14h+arg_0], 2
0x552920: mov     ebp, 2
0x552925: mov     eax, [edi]
0x552927: fldz
0x552929: test    eax, eax
0x55292B: jz      short loc_552959
0x55292D: mov     ecx, [ebx+esi]
0x552930: test    ecx, ecx
0x552932: jz      short loc_552959
0x552934: lea     ebx, [esi-4]
0x552937: mov     [ebx], eax
0x552939: imul    eax, ecx
0x55293C: push    ecx
0x55293D: mov     [esi], ecx
0x55293F: lea     ecx, [esi+4]; int
0x552942: fstp    [esp+18h+var_18]; int
0x552945: push    eax; int
0x552946: call    sub_527160
0x55294B: push    edi
0x55294C: mov     ecx, ebx
0x55294E: call    sub_5520E0
0x552953: mov     ebx, [esp+14h+var_4]
0x552957: jmp     short loc_552974
0x552959: push    ecx
0x55295A: fstp    [esp+18h+var_18]; int
0x55295D: push    0; int
0x55295F: lea     ecx, [esi+4]; int
0x552962: mov     dword ptr [esi-4], 0
0x552969: mov     dword ptr [esi], 0
0x55296F: call    sub_527160
0x552974: add     edi, 18h
0x552977: add     esi, 18h
0x55297A: sub     ebp, 1
0x55297D: jnz     short loc_552925
0x55297F: sub     [esp+14h+arg_0], 1
0x552984: jnz     short loc_552920
0x552986: pop     esi
0x552987: pop     ebp
0x552988: pop     ebx
0x552989: pop     edi
0x55298A: pop     ecx
0x55298B: retn
