0x751920: push    ecx
0x751921: push    ebx
0x751922: push    esi
0x751923: mov     esi, [esp+0Ch+arg_0]
0x751927: push    edi
0x751928: push    esi
0x751929: mov     edi, ecx
0x75192B: call    sub_752DC0
0x751930: mov     ecx, esi
0x751932: call    sub_712A20
0x751937: push    esi
0x751938: lea     ecx, [edi+1Ch]
0x75193B: call    sub_709430
0x751940: mov     eax, [esi+21Ch]
0x751946: push    1
0x751948: lea     ecx, [esp+14h+arg_0]
0x75194C: push    ecx
0x75194D: mov     ebx, 4
0x751952: push    ebx
0x751953: lea     edx, [edi+28h]
0x751956: push    edx
0x751957: push    eax
0x751958: mov     eax, [eax+4]
0x75195B: mov     [esp+24h+arg_0], ebx
0x75195F: call    eax
0x751961: mov     eax, [esi+21Ch]
0x751967: push    1
0x751969: lea     ecx, [esp+28h+arg_0]
0x75196D: push    ecx
0x75196E: push    ebx
0x75196F: lea     edx, [edi+2Ch]
0x751972: push    edx
0x751973: push    eax
0x751974: mov     eax, [eax+4]
0x751977: mov     [esp+38h+arg_0], ebx
0x75197B: call    eax
0x75197D: mov     eax, [esi+21Ch]
0x751983: push    1
0x751985: lea     ecx, [esp+3Ch+arg_0]
0x751989: push    ecx
0x75198A: push    ebx
0x75198B: lea     edx, [esp+44h+var_4]
0x75198F: push    edx
0x751990: push    eax
0x751991: mov     eax, [eax+4]
0x751994: mov     [esp+4Ch+arg_0], ebx
0x751998: call    eax
0x75199A: mov     ecx, [esp+4Ch+var_4]
0x75199E: add     esp, 3Ch
0x7519A1: mov     [edi+30h], ecx
0x7519A4: cmp     dword ptr [esi+0D8h], 0A00010Eh
0x7519AE: jb      short loc_7519EB
0x7519B0: mov     eax, [esi+21Ch]
0x7519B6: push    1
0x7519B8: lea     edx, [esp+14h+arg_0]
0x7519BC: push    edx
0x7519BD: mov     edx, [eax+4]
0x7519C0: push    ebx
0x7519C1: lea     ecx, [edi+34h]
0x7519C4: push    ecx
0x7519C5: push    eax
0x7519C6: mov     [esp+24h+arg_0], ebx
0x7519CA: call    edx
0x7519CC: mov     esi, [esi+21Ch]
0x7519D2: mov     ecx, [esi+4]
0x7519D5: push    1
0x7519D7: lea     eax, [esp+28h+arg_0]
0x7519DB: push    eax
0x7519DC: push    ebx
0x7519DD: add     edi, 38h ; '8'
0x7519E0: push    edi
0x7519E1: push    esi
0x7519E2: mov     [esp+38h+arg_0], ebx
0x7519E6: call    ecx
0x7519E8: add     esp, 28h
0x7519EB: pop     edi
0x7519EC: pop     esi
0x7519ED: pop     ebx
0x7519EE: pop     ecx
0x7519EF: retn    4
