0x7857D0: push    ecx
0x7857D1: push    ebx
0x7857D2: push    ebp
0x7857D3: mov     ebp, [esp+0Ch+arg_8]
0x7857D7: push    esi
0x7857D8: mov     esi, ecx
0x7857DA: push    edi
0x7857DB: mov     edi, [esi+4]
0x7857DE: test    edi, edi
0x7857E0: jz      short loc_7857FC
0x7857E2: mov     ebx, [esi+8]
0x7857E5: mov     ecx, ebx
0x7857E7: sub     ecx, edi
0x7857E9: mov     eax, 2AAAAAABh
0x7857EE: imul    ecx
0x7857F0: sar     edx, 2
0x7857F3: mov     eax, edx
0x7857F5: shr     eax, 1Fh
0x7857F8: add     eax, edx
0x7857FA: jnz     short loc_785804
0x7857FC: mov     ebx, [esp+14h+arg_4]
0x785800: xor     edi, edi
0x785802: jmp     short loc_785833
0x785804: cmp     edi, ebx
0x785806: jbe     short loc_78580D
0x785808: call    __invalid_parameter_noinfo
0x78580D: mov     ebx, [esp+14h+arg_4]
0x785811: test    ebx, ebx
0x785813: jz      short loc_785819
0x785815: cmp     ebx, esi
0x785817: jz      short loc_78581E
0x785819: call    __invalid_parameter_noinfo
0x78581E: mov     ecx, ebp
0x785820: sub     ecx, edi
0x785822: mov     eax, 2AAAAAABh
0x785827: imul    ecx
0x785829: sar     edx, 2
0x78582C: mov     edi, edx
0x78582E: shr     edi, 1Fh
0x785831: add     edi, edx
0x785833: mov     ecx, [esp+14h+arg_C]
0x785837: push    ecx
0x785838: push    1
0x78583A: push    ebp
0x78583B: push    ebx
0x78583C: mov     ecx, esi
0x78583E: call    sub_785050
