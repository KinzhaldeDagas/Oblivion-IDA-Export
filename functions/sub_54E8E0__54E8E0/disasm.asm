0x54E8E0: push    ebx
0x54E8E1: push    esi
0x54E8E2: push    edi
0x54E8E3: mov     edi, [esp+0Ch+arg_0]
0x54E8E7: mov     eax, [edi]
0x54E8E9: mov     edx, [eax+4]
0x54E8EC: mov     esi, ecx
0x54E8EE: mov     ecx, edi
0x54E8F0: call    edx
0x54E8F2: mov     ebx, eax
0x54E8F4: mov     eax, [esi]
0x54E8F6: mov     edx, [eax+4]
0x54E8F9: mov     ecx, esi
0x54E8FB: call    edx
0x54E8FD: cmp     eax, ebx
0x54E8FF: jnz     short loc_54E95C
0x54E901: mov     eax, [edi]
0x54E903: mov     ebx, [esi]
0x54E905: mov     edx, [eax+0Ch]
0x54E908: mov     ecx, edi
0x54E90A: add     ebx, 10h
0x54E90D: call    edx
0x54E90F: mov     eax, [ebx]
0x54E911: push    ecx
0x54E912: mov     ecx, esi
0x54E914: fstp    [esp+10h+var_10]
0x54E917: call    eax
0x54E919: mov     edx, [edi]
0x54E91B: mov     ebx, [esi]
0x54E91D: mov     eax, [edx+50h]
0x54E920: push    1
0x54E922: mov     ecx, edi
0x54E924: add     ebx, 58h ; 'X'
0x54E927: call    eax
0x54E929: mov     edx, [ebx]
0x54E92B: push    eax
0x54E92C: mov     ecx, esi
0x54E92E: call    edx
0x54E930: xor     ebx, ebx
0x54E932: cmp     [esi+10h], ebx
0x54E935: jbe     short loc_54E95C
0x54E937: push    ebp
0x54E938: mov     eax, [edi]
0x54E93A: mov     ebp, [esi]
0x54E93C: mov     edx, [eax+48h]
0x54E93F: push    ebx
0x54E940: mov     ecx, edi
0x54E942: add     ebp, 4Ch ; 'L'
0x54E945: call    edx
0x54E947: mov     eax, [ebp+0]
0x54E94A: push    ecx
0x54E94B: fstp    [esp+14h+var_14]
0x54E94E: push    ebx
0x54E94F: mov     ecx, esi
0x54E951: call    eax
0x54E953: add     ebx, 1
0x54E956: cmp     ebx, [esi+10h]
0x54E959: jb      short loc_54E938
0x54E95B: pop     ebp
0x54E95C: pop     edi
0x54E95D: mov     eax, esi
0x54E95F: pop     esi
0x54E960: pop     ebx
0x54E961: retn    4
