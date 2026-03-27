0x948910: push    ebp
0x948911: mov     ebp, esp
0x948913: and     esp, 0FFFFFFF0h
0x948916: sub     esp, 74h
0x948919: push    ebx
0x94891A: push    esi
0x94891B: push    edi
0x94891C: mov     edi, [ebp+arg_0]
0x94891F: mov     ebx, [edi+54h]
0x948922: push    ebx
0x948923: mov     esi, ecx
0x948925: call    sub_9181B0
0x94892A: lea     eax, [ebx-1]; switch 9 cases
0x94892D: cmp     eax, 8
0x948930: ja      def_948936
0x948936: jmp     ds:jpt_948936[eax*4]; switch jump
0x94893D: lea     eax, [edi+10h]; jumptable 00948936 case 6
0x948940: push    eax
0x948941: mov     ecx, esi
0x948943: call    sub_948810
0x948948: mov     ecx, [edi+50h]
0x94894B: push    ecx
0x94894C: mov     ecx, esi
0x94894E: call    sub_948880
0x948953: pop     edi
0x948954: pop     esi
0x948955: pop     ebx
0x948956: mov     esp, ebp
0x948958: pop     ebp
0x948959: retn    4
0x94895C: lea     edx, [edi+10h]; jumptable 00948936 case 1
0x94895F: push    edx
0x948960: mov     ecx, esi
0x948962: call    sub_948810
0x948967: lea     eax, [esp+80h+var_70]
0x94896B: push    eax
0x94896C: mov     ecx, edi
0x94896E: call    sub_94D240
0x948973: mov     ecx, [eax+0Ch]
0x948976: push    ecx
0x948977: mov     ecx, esi
0x948979: call    sub_918440
0x94897E: lea     edx, [esp+80h+var_60]
0x948982: push    edx
0x948983: mov     ecx, edi
0x948985: call    sub_94D240
0x94898A: push    3
0x94898C: push    eax
0x94898D: mov     ecx, esi
0x94898F: call    sub_918480
0x948994: mov     eax, [edi+70h]
0x948997: push    eax
0x948998: mov     ecx, esi
0x94899A: call    sub_918440
0x94899F: mov     ecx, [edi+74h]
0x9489A2: push    ecx
0x9489A3: mov     ecx, esi
0x9489A5: call    sub_918440
0x9489AA: pop     edi
0x9489AB: pop     esi
0x9489AC: pop     ebx
0x9489AD: mov     esp, ebp
0x9489AF: pop     ebp
0x9489B0: retn    4
0x9489B3: lea     edx, [edi+10h]; jumptable 00948936 cases 8,9
0x9489B6: push    edx
0x9489B7: mov     ecx, esi
0x9489B9: call    sub_948810
0x9489BE: mov     eax, [edi+80h]
0x9489C4: push    eax
0x9489C5: mov     ecx, esi
0x9489C7: call    sub_918440
0x9489CC: push    3
0x9489CE: lea     ecx, [edi+60h]
0x9489D1: push    ecx
0x9489D2: mov     ecx, esi
0x9489D4: call    sub_918480
0x9489D9: push    3
0x9489DB: lea     edx, [edi+70h]
0x9489DE: push    edx
0x9489DF: mov     ecx, esi
0x9489E1: call    sub_918480
0x9489E6: mov     eax, [edi+84h]
0x9489EC: push    eax
0x9489ED: mov     ecx, esi
0x9489EF: call    sub_918440
0x9489F4: mov     ecx, [edi+88h]
0x9489FA: push    ecx
0x9489FB: mov     ecx, esi
0x9489FD: call    sub_918440
0x948A02: pop     edi
0x948A03: pop     esi
0x948A04: pop     ebx
0x948A05: mov     esp, ebp
0x948A07: pop     ebp
0x948A08: retn    4
0x948A0B: lea     edx, [edi+10h]; jumptable 00948936 case 2
0x948A0E: push    edx
0x948A0F: mov     ecx, esi
0x948A11: call    sub_948810
0x948A16: push    3
0x948A18: add     edi, 60h ; '`'
0x948A1B: push    edi
0x948A1C: mov     ecx, esi
0x948A1E: call    sub_918480
0x948A23: pop     edi
0x948A24: pop     esi
0x948A25: pop     ebx
0x948A26: mov     esp, ebp
0x948A28: pop     ebp
0x948A29: retn    4
0x948A2C: mov     ecx, edi; jumptable 00948936 case 3
0x948A2E: call    sub_94D5D0
0x948A33: push    3
0x948A35: push    eax
0x948A36: mov     ecx, esi
0x948A38: call    sub_918480
0x948A3D: mov     ecx, edi
0x948A3F: call    sub_9492D0
0x948A44: push    3
0x948A46: push    eax
0x948A47: mov     ecx, esi
0x948A49: call    sub_918480
0x948A4E: pop     edi
0x948A4F: pop     esi
0x948A50: pop     ebx
0x948A51: mov     esp, ebp
0x948A53: pop     ebp
0x948A54: retn    4
0x948A57: lea     eax, [esp+80h+var_50]; jumptable 00948936 case 4
0x948A5B: push    eax
0x948A5C: mov     ecx, edi
0x948A5E: call    sub_94D240
0x948A63: push    3
0x948A65: push    eax
0x948A66: mov     ecx, esi
0x948A68: call    sub_918480
0x948A6D: lea     ecx, [esp+80h+var_40]
0x948A71: push    ecx
0x948A72: mov     ecx, edi
0x948A74: call    sub_94DAD0
0x948A79: push    3
0x948A7B: push    eax
0x948A7C: mov     ecx, esi
0x948A7E: call    sub_918480
0x948A83: mov     ecx, edi
0x948A85: call    sub_94DA70
0x948A8A: push    ecx
0x948A8B: mov     ecx, esi
0x948A8D: fstp    [esp+84h+var_84]
0x948A90: call    sub_918440
0x948A95: mov     ecx, edi
0x948A97: call    sub_94DA60
0x948A9C: push    ecx
0x948A9D: mov     ecx, esi
0x948A9F: fstp    [esp+84h+var_84]
0x948AA2: call    sub_918440
0x948AA7: mov     ecx, edi
0x948AA9: call    sub_94DA80
0x948AAE: push    eax
0x948AAF: mov     ecx, esi
0x948AB1: call    sub_918440
0x948AB6: pop     edi
0x948AB7: pop     esi
0x948AB8: pop     ebx
0x948AB9: mov     esp, ebp
0x948ABB: pop     ebp
0x948ABC: retn    4
0x948ABF: lea     edx, [esp+80h+var_30]; jumptable 00948936 case 5
0x948AC3: push    edx
0x948AC4: mov     ecx, edi
0x948AC6: call    sub_94D250
0x948ACB: push    3
0x948ACD: push    eax
0x948ACE: mov     ecx, esi
0x948AD0: call    sub_918480
0x948AD5: lea     eax, [esp+80h+var_20]
0x948AD9: push    eax
0x948ADA: mov     ecx, edi
0x948ADC: call    sub_94D240
0x948AE1: push    3
0x948AE3: push    eax
0x948AE4: mov     ecx, esi
0x948AE6: call    sub_918480
0x948AEB: lea     ecx, [esp+80h+var_10]
0x948AEF: push    ecx
0x948AF0: mov     ecx, edi
0x948AF2: call    sub_94DAD0
0x948AF7: push    3
0x948AF9: push    eax
0x948AFA: mov     ecx, esi
0x948AFC: call    sub_918480
0x948B01: mov     ecx, edi
0x948B03: call    sub_94D1D0
0x948B08: push    ecx
0x948B09: mov     ecx, esi
0x948B0B: fstp    [esp+84h+var_84]
0x948B0E: call    sub_918440
0x948B13: mov     ecx, edi
0x948B15: call    sub_94D1B0
0x948B1A: push    ecx
0x948B1B: mov     ecx, esi
0x948B1D: fstp    [esp+84h+var_84]
0x948B20: call    sub_918440
0x948B25: mov     ecx, edi
0x948B27: call    sub_94D1C0
0x948B2C: push    ecx
0x948B2D: mov     ecx, esi
0x948B2F: fstp    [esp+84h+var_84]
0x948B32: call    sub_918440
0x948B37: mov     ecx, edi; this
0x948B39: call    ?GetProxy@InternalContextBase@details@Concurrency@@UAEPAUIThreadProxy@3@XZ_0; Concurrency::details::InternalContextBase::GetProxy(void)
0x948B3E: push    eax
0x948B3F: mov     ecx, esi
0x948B41: call    sub_918440
0x948B46: pop     edi
0x948B47: pop     esi
0x948B48: pop     ebx
0x948B49: mov     esp, ebp
0x948B4B: pop     ebp
0x948B4C: retn    4
0x948B4F: mov     ecx, edi; jumptable 00948936 case 7
0x948B51: call    sub_9492D0
0x948B56: push    3
0x948B58: push    eax
0x948B59: mov     ecx, esi
0x948B5B: call    sub_918480
0x948B60: mov     ecx, edi
0x948B62: call    sub_94D5D0
0x948B67: push    3
0x948B69: push    eax
0x948B6A: mov     ecx, esi
0x948B6C: call    sub_918480
0x948B71: mov     ecx, edi
0x948B73: call    sub_94D5E0
0x948B78: push    3
0x948B7A: push    eax
0x948B7B: mov     ecx, esi
0x948B7D: call    sub_918480
0x948B82: mov     ecx, edi
0x948B84: call    sub_94D5F0
0x948B89: mov     edx, [eax]
0x948B8B: push    edx
0x948B8C: mov     ecx, esi
0x948B8E: call    sub_918440
