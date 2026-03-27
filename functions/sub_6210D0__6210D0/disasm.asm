0x6210D0: push    ebx
0x6210D1: mov     bl, [esp+4+arg_4]
0x6210D5: test    bl, bl
0x6210D7: push    esi
0x6210D8: mov     esi, ecx
0x6210DA: jnz     short loc_62111D
0x6210DC: push    edi
0x6210DD: mov     edi, [esi+40h]
0x6210E0: test    edi, edi
0x6210E2: jz      short loc_621100
0x6210E4: mov     eax, [edi]
0x6210E6: test    eax, eax
0x6210E8: jz      short loc_621100
0x6210EA: lea     ebx, [ebx+0]
0x6210F0: mov     eax, [eax]
0x6210F2: push    eax
0x6210F3: mov     ecx, esi
0x6210F5: call    sub_6162D0
0x6210FA: mov     eax, [edi]
0x6210FC: test    eax, eax
0x6210FE: jnz     short loc_6210F0
0x621100: fldz
0x621102: mov     ecx, [esp+0Ch+arg_0]
0x621106: sub     esp, 8
0x621109: fst     [esp+14h+var_10]; float
0x62110D: fstp    [esp+14h+var_14]; float
0x621110: push    0; float
0x621112: push    0; char
0x621114: push    ecx; int
0x621115: mov     ecx, esi
0x621117: call    sub_616190
0x62111C: pop     edi
0x62111D: cmp     dword ptr [esi+6Ch], 7
0x621121: jnz     short loc_621149
0x621123: mov     edx, [esi+3Ch]
0x621126: mov     ecx, [edx+58h]
0x621129: mov     eax, [ecx]
0x62112B: mov     edx, [eax+174h]
0x621131: call    edx
0x621133: cmp     eax, esi
0x621135: jz      short loc_621149
0x621137: mov     eax, [esi+3Ch]
0x62113A: mov     ecx, [eax+58h]
0x62113D: mov     edx, [ecx]
0x62113F: mov     eax, [edx+178h]
0x621145: push    0
0x621147: call    eax
0x621149: neg     bl
0x62114B: mov     ecx, esi
0x62114D: sbb     ebx, ebx
0x62114F: and     ebx, 5
0x621152: add     ebx, 7
0x621155: push    ebx
0x621156: call    sub_612DE0
0x62115B: push    0
0x62115D: mov     ecx, esi
0x62115F: call    sub_619920
0x621164: mov     ecx, esi
0x621166: call    sub_620E80
0x62116B: pop     esi
0x62116C: pop     ebx
0x62116D: retn    8
