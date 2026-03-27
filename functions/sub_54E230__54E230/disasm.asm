0x54E230: sub     esp, 18h
0x54E233: mov     eax, [esp+18h+arg_4]
0x54E237: mov     edx, [eax+4]
0x54E23A: push    esi
0x54E23B: mov     esi, ecx
0x54E23D: mov     ecx, [eax]
0x54E23F: push    edi
0x54E240: mov     edi, [esi+8]
0x54E243: cmp     [esi+4], edi
0x54E246: mov     [esp+20h+var_10], ecx
0x54E24A: mov     ecx, [eax+8]
0x54E24D: mov     [esp+20h+var_C], edx
0x54E251: mov     edx, [eax+0Ch]
0x54E254: mov     [esp+20h+var_8], ecx
0x54E258: mov     [esp+20h+var_4], edx
0x54E25C: jbe     short loc_54E263
0x54E25E: call    __invalid_parameter_noinfo
0x54E263: push    ebx
0x54E264: mov     ebx, [esi+4]
0x54E267: cmp     ebx, [esi+8]
0x54E26A: jbe     short loc_54E271
0x54E26C: call    __invalid_parameter_noinfo
0x54E271: push    edi
0x54E272: push    esi
0x54E273: push    ebx
0x54E274: push    esi
0x54E275: lea     eax, [esp+34h+var_18]
0x54E279: push    eax
0x54E27A: mov     ecx, esi
0x54E27C: call    sub_6F14D0
0x54E281: mov     edi, [esi+4]
0x54E284: cmp     edi, [esi+8]
0x54E287: pop     ebx
0x54E288: jbe     short loc_54E28F
0x54E28A: call    __invalid_parameter_noinfo
0x54E28F: mov     edx, [esp+20h+arg_0]
0x54E293: lea     ecx, [esp+20h+var_10]
0x54E297: push    ecx
0x54E298: push    edx
0x54E299: push    edi
0x54E29A: push    esi
0x54E29B: mov     ecx, esi
0x54E29D: call    sub_54DFD0
0x54E2A2: pop     edi
0x54E2A3: pop     esi
0x54E2A4: add     esp, 18h
0x54E2A7: retn    8
