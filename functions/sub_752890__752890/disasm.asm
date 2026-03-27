0x752890: push    ebx
0x752891: push    esi
0x752892: push    edi
0x752893: mov     edi, [esp+0Ch+arg_0]
0x752897: push    edi
0x752898: mov     esi, ecx
0x75289A: call    sub_752E40
0x75289F: mov     eax, [edi+220h]
0x7528A5: push    1
0x7528A7: lea     ecx, [esp+10h+arg_0]
0x7528AB: push    ecx
0x7528AC: push    2
0x7528AE: lea     edx, [esi+18h]
0x7528B1: push    edx
0x7528B2: push    eax
0x7528B3: mov     eax, [eax+8]
0x7528B6: mov     [esp+20h+arg_0], 2
0x7528BE: call    eax
0x7528C0: mov     eax, [edi+220h]
0x7528C6: push    1
0x7528C8: lea     ecx, [esp+24h+arg_0]
0x7528CC: push    ecx
0x7528CD: mov     ebx, 4
0x7528D2: push    ebx
0x7528D3: lea     edx, [esi+1Ch]
0x7528D6: push    edx
0x7528D7: push    eax
0x7528D8: mov     eax, [eax+8]
0x7528DB: mov     [esp+34h+arg_0], ebx
0x7528DF: call    eax
0x7528E1: mov     eax, [edi+220h]
0x7528E7: push    1
0x7528E9: lea     ecx, [esp+38h+arg_0]
0x7528ED: push    ecx
0x7528EE: push    2
0x7528F0: lea     edx, [esi+20h]
0x7528F3: push    edx
0x7528F4: push    eax
0x7528F5: mov     eax, [eax+8]
0x7528F8: mov     [esp+48h+arg_0], 2
0x752900: call    eax
0x752902: mov     eax, [edi+220h]
0x752908: push    1
0x75290A: lea     ecx, [esp+4Ch+arg_0]
0x75290E: push    ecx
0x75290F: push    2
0x752911: lea     edx, [esi+22h]
0x752914: push    edx
0x752915: push    eax
0x752916: mov     eax, [eax+8]
0x752919: mov     [esp+5Ch+arg_0], 2
0x752921: call    eax
0x752923: mov     eax, [edi+220h]
0x752929: add     esp, 50h
0x75292C: push    1
0x75292E: lea     ecx, [esp+10h+arg_0]
0x752932: push    ecx
0x752933: push    ebx
0x752934: lea     edx, [esi+24h]
0x752937: push    edx
0x752938: push    eax
0x752939: mov     eax, [eax+8]
0x75293C: mov     [esp+20h+arg_0], ebx
0x752940: call    eax
0x752942: mov     eax, [edi+220h]
0x752948: push    1
0x75294A: lea     ecx, [esp+24h+arg_0]
0x75294E: push    ecx
0x75294F: push    ebx
0x752950: lea     edx, [esi+28h]
0x752953: push    edx
0x752954: push    eax
0x752955: mov     eax, [eax+8]
0x752958: mov     [esp+34h+arg_0], ebx
0x75295C: call    eax
0x75295E: mov     eax, [edi+220h]
0x752964: push    1
0x752966: lea     ecx, [esp+38h+arg_0]
0x75296A: push    ecx
0x75296B: mov     [esp+3Ch+arg_0], ebx
0x75296F: push    ebx
0x752970: lea     edx, [esi+2Ch]
0x752973: push    edx
0x752974: push    eax
0x752975: mov     eax, [eax+8]
0x752978: call    eax
0x75297A: mov     edi, [edi+220h]
0x752980: mov     edx, [edi+8]
0x752983: push    1
0x752985: lea     ecx, [esp+4Ch+arg_0]
0x752989: push    ecx
0x75298A: push    ebx
0x75298B: add     esi, 30h ; '0'
0x75298E: push    esi
0x75298F: push    edi
0x752990: mov     [esp+5Ch+arg_0], ebx
0x752994: call    edx
0x752996: add     esp, 50h
0x752999: pop     edi
0x75299A: pop     esi
0x75299B: pop     ebx
0x75299C: retn    4
