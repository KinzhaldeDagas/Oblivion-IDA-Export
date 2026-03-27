0x75E920: push    ecx
0x75E921: push    ebx
0x75E922: push    esi
0x75E923: push    edi
0x75E924: mov     edi, [esp+10h+arg_0]
0x75E928: push    edi
0x75E929: mov     esi, ecx
0x75E92B: call    sub_752DC0
0x75E930: mov     ecx, edi
0x75E932: call    sub_712A20
0x75E937: mov     eax, [edi+21Ch]
0x75E93D: push    1
0x75E93F: lea     ecx, [esp+14h+var_4]
0x75E943: push    ecx
0x75E944: push    4
0x75E946: lea     edx, [esi+1Ch]
0x75E949: push    edx
0x75E94A: push    eax
0x75E94B: mov     eax, [eax+4]
0x75E94E: mov     [esp+24h+var_4], 4
0x75E956: call    eax
0x75E958: mov     eax, [edi+21Ch]
0x75E95E: push    1
0x75E960: lea     ecx, [esp+28h+var_4]
0x75E964: push    ecx
0x75E965: push    4
0x75E967: lea     edx, [esi+20h]
0x75E96A: push    edx
0x75E96B: push    eax
0x75E96C: mov     eax, [eax+4]
0x75E96F: mov     [esp+38h+var_4], 4
0x75E977: call    eax
0x75E979: mov     eax, [edi+21Ch]
0x75E97F: push    1
0x75E981: lea     ecx, [esp+3Ch+var_4]
0x75E985: push    ecx
0x75E986: push    1
0x75E988: lea     edx, [esp+44h+arg_0]
0x75E98C: push    edx
0x75E98D: push    eax
0x75E98E: mov     eax, [eax+4]
0x75E991: mov     [esp+4Ch+var_4], 1
0x75E999: call    eax
0x75E99B: cmp     byte ptr [esp+4Ch+arg_0], 0
0x75E9A0: push    1
0x75E9A2: lea     edx, [esp+50h+var_4]
0x75E9A6: push    edx
0x75E9A7: setnz   cl
0x75E9AA: mov     [esi+24h], cl
0x75E9AD: mov     edi, [edi+21Ch]
0x75E9B3: mov     eax, [edi+4]
0x75E9B6: push    4
0x75E9B8: lea     ebx, [esi+28h]
0x75E9BB: push    ebx
0x75E9BC: push    edi
0x75E9BD: mov     [esp+60h+var_4], 4
0x75E9C5: call    eax
0x75E9C7: fld     dword ptr [ebx]
0x75E9C9: add     esp, 50h
0x75E9CC: fmul    st, st
0x75E9CE: pop     edi
0x75E9CF: fstp    dword ptr [esi+2Ch]
0x75E9D2: pop     esi
0x75E9D3: pop     ebx
0x75E9D4: pop     ecx
0x75E9D5: retn    4
