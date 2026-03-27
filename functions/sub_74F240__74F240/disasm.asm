0x74F240: push    ebx
0x74F241: push    esi
0x74F242: push    edi
0x74F243: mov     edi, [esp+0Ch+arg_0]
0x74F247: push    edi
0x74F248: mov     esi, ecx
0x74F24A: call    sub_752DC0
0x74F24F: mov     eax, [edi+21Ch]
0x74F255: push    1
0x74F257: lea     ecx, [esp+10h+arg_0]
0x74F25B: push    ecx
0x74F25C: mov     ebx, 4
0x74F261: push    ebx
0x74F262: lea     edx, [esi+18h]
0x74F265: push    edx
0x74F266: push    eax
0x74F267: mov     eax, [eax+4]
0x74F26A: mov     [esp+20h+arg_0], ebx
0x74F26E: call    eax
0x74F270: mov     eax, [edi+21Ch]
0x74F276: push    1
0x74F278: lea     ecx, [esp+24h+arg_0]
0x74F27C: push    ecx
0x74F27D: push    ebx
0x74F27E: lea     edx, [esi+1Ch]
0x74F281: push    edx
0x74F282: push    eax
0x74F283: mov     eax, [eax+4]
0x74F286: mov     [esp+34h+arg_0], ebx
0x74F28A: call    eax
0x74F28C: mov     eax, [edi+21Ch]
0x74F292: push    1
0x74F294: lea     ecx, [esp+38h+arg_0]
0x74F298: push    ecx
0x74F299: push    ebx
0x74F29A: lea     edx, [esi+20h]
0x74F29D: push    edx
0x74F29E: push    eax
0x74F29F: mov     eax, [eax+4]
0x74F2A2: mov     [esp+48h+arg_0], ebx
0x74F2A6: call    eax
0x74F2A8: mov     eax, [edi+21Ch]
0x74F2AE: push    1
0x74F2B0: lea     ecx, [esp+4Ch+arg_0]
0x74F2B4: push    ecx
0x74F2B5: push    ebx
0x74F2B6: lea     edx, [esi+24h]
0x74F2B9: push    edx
0x74F2BA: push    eax
0x74F2BB: mov     eax, [eax+4]
0x74F2BE: mov     [esp+5Ch+arg_0], ebx
0x74F2C2: call    eax
0x74F2C4: mov     eax, [edi+21Ch]
0x74F2CA: add     esp, 50h
0x74F2CD: push    1
0x74F2CF: lea     ecx, [esp+10h+arg_0]
0x74F2D3: push    ecx
0x74F2D4: push    ebx
0x74F2D5: lea     edx, [esi+28h]
0x74F2D8: push    edx
0x74F2D9: push    eax
0x74F2DA: mov     eax, [eax+4]
0x74F2DD: mov     [esp+20h+arg_0], ebx
0x74F2E1: call    eax
0x74F2E3: mov     eax, [edi+21Ch]
0x74F2E9: push    1
0x74F2EB: lea     ecx, [esp+24h+arg_0]
0x74F2EF: push    ecx
0x74F2F0: push    ebx
0x74F2F1: lea     edx, [esi+2Ch]
0x74F2F4: push    edx
0x74F2F5: push    eax
0x74F2F6: mov     eax, [eax+4]
0x74F2F9: mov     [esp+34h+arg_0], ebx
0x74F2FD: call    eax
0x74F2FF: add     esp, 28h
0x74F302: push    edi
0x74F303: lea     ecx, [esi+30h]
0x74F306: call    sub_715420
0x74F30B: mov     eax, [edi+21Ch]
0x74F311: mov     [esp+0Ch+arg_0], ebx
0x74F315: push    1
0x74F317: lea     ecx, [esp+10h+arg_0]
0x74F31B: push    ecx
0x74F31C: push    ebx
0x74F31D: lea     edx, [esi+40h]
0x74F320: push    edx
0x74F321: push    eax
0x74F322: mov     eax, [eax+4]
0x74F325: call    eax
0x74F327: add     esp, 14h
0x74F32A: cmp     dword ptr [edi+0D8h], 0A030002h
0x74F334: jb      short loc_74F355
0x74F336: mov     eax, [edi+21Ch]
0x74F33C: push    1
0x74F33E: lea     ecx, [esp+10h+arg_0]
0x74F342: push    ecx
0x74F343: push    ebx
0x74F344: lea     edx, [esi+44h]
0x74F347: push    edx
0x74F348: push    eax
0x74F349: mov     eax, [eax+4]
0x74F34C: mov     [esp+20h+arg_0], ebx
0x74F350: call    eax
0x74F352: add     esp, 14h
0x74F355: mov     eax, [edi+21Ch]
0x74F35B: push    1
0x74F35D: lea     ecx, [esp+10h+arg_0]
0x74F361: push    ecx
0x74F362: push    ebx
0x74F363: lea     edx, [esi+48h]
0x74F366: push    edx
0x74F367: push    eax
0x74F368: mov     eax, [eax+4]
0x74F36B: mov     [esp+20h+arg_0], ebx
0x74F36F: call    eax
0x74F371: mov     edi, [edi+21Ch]
0x74F377: mov     edx, [edi+4]
0x74F37A: push    1
0x74F37C: lea     ecx, [esp+24h+arg_0]
0x74F380: push    ecx
0x74F381: push    ebx
0x74F382: add     esi, 4Ch ; 'L'
0x74F385: push    esi
0x74F386: push    edi
0x74F387: mov     [esp+34h+arg_0], ebx
0x74F38B: call    edx
0x74F38D: add     esp, 28h
0x74F390: pop     edi
0x74F391: pop     esi
0x74F392: pop     ebx
0x74F393: retn    4
