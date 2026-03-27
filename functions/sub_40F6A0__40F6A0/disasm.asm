0x40F6A0: sub     esp, 0Ch
0x40F6A3: push    ebx
0x40F6A4: mov     ebx, [esp+10h+arg_14]
0x40F6A8: push    ebp
0x40F6A9: mov     ebp, [esp+14h+arg_10]
0x40F6AD: push    esi
0x40F6AE: mov     esi, [esp+18h+arg_0]
0x40F6B2: mov     eax, [esi]
0x40F6B4: mov     edx, [eax+5Ch]
0x40F6B7: push    edi
0x40F6B8: mov     edi, [esp+1Ch+arg_4]
0x40F6BC: push    0
0x40F6BE: lea     ecx, [esp+20h+var_C]
0x40F6C2: push    ecx
0x40F6C3: push    0
0x40F6C5: push    edi
0x40F6C6: push    200h
0x40F6CB: push    1
0x40F6CD: push    ebx
0x40F6CE: push    ebp
0x40F6CF: push    esi
0x40F6D0: mov     [esp+40h+var_C], 0
0x40F6D8: call    edx
0x40F6DA: test    eax, eax
0x40F6DC: jge     short loc_40F6FA
0x40F6DE: mov     eax, [esi]
0x40F6E0: mov     edx, [eax+5Ch]
0x40F6E3: push    0
0x40F6E5: lea     ecx, [esp+20h+var_C]
0x40F6E9: push    ecx
0x40F6EA: push    1
0x40F6EC: push    edi
0x40F6ED: push    0
0x40F6EF: push    1
0x40F6F1: push    ebx
0x40F6F2: push    ebp
0x40F6F3: push    esi
0x40F6F4: call    edx
0x40F6F6: test    eax, eax
0x40F6F8: jl      short loc_40F747
0x40F6FA: mov     eax, [esp+1Ch+var_C]
0x40F6FE: mov     ecx, [eax]
0x40F700: push    0
0x40F702: push    0
0x40F704: lea     edx, [esp+24h+var_8]
0x40F708: push    edx
0x40F709: push    0
0x40F70B: push    eax
0x40F70C: mov     eax, [ecx+4Ch]
0x40F70F: call    eax
0x40F711: test    eax, eax
0x40F713: jl      short loc_40F747
0x40F715: mov     edi, [esp+1Ch+arg_C]
0x40F719: mov     esi, [esp+1Ch+var_4]
0x40F71D: imul    edi, ebp
0x40F720: test    ebx, ebx
0x40F722: jbe     short loc_40F739
0x40F724: push    edi
0x40F725: push    0
0x40F727: push    esi
0x40F728: call    __memset
0x40F72D: add     esi, [esp+28h+var_8]
0x40F731: add     esp, 0Ch
0x40F734: sub     ebx, 1
0x40F737: jnz     short loc_40F724
0x40F739: mov     eax, [esp+1Ch+var_C]
0x40F73D: mov     ecx, [eax]
0x40F73F: mov     edx, [ecx+50h]
0x40F742: push    0
0x40F744: push    eax
0x40F745: call    edx
0x40F747: mov     eax, [esp+1Ch+var_C]
0x40F74B: pop     edi
0x40F74C: pop     esi
0x40F74D: pop     ebp
0x40F74E: pop     ebx
0x40F74F: add     esp, 0Ch
0x40F752: retn
