0x74E390: sub     esp, 8
0x74E393: push    ebx
0x74E394: push    esi
0x74E395: push    edi
0x74E396: mov     edi, [esp+14h+arg_0]
0x74E39A: push    edi
0x74E39B: mov     esi, ecx
0x74E39D: call    sub_752DC0
0x74E3A2: mov     eax, [edi+21Ch]
0x74E3A8: push    1
0x74E3AA: lea     ecx, [esp+18h+arg_0]
0x74E3AE: push    ecx
0x74E3AF: mov     ebx, 4
0x74E3B4: push    ebx
0x74E3B5: lea     edx, [esi+18h]
0x74E3B8: push    edx
0x74E3B9: push    eax
0x74E3BA: mov     eax, [eax+4]
0x74E3BD: mov     [esp+28h+arg_0], ebx
0x74E3C1: call    eax
0x74E3C3: add     esp, 14h
0x74E3C6: cmp     dword ptr [edi+0D8h], 14000002h
0x74E3D0: jb      loc_74E45A
0x74E3D6: mov     eax, [edi+21Ch]
0x74E3DC: push    1
0x74E3DE: lea     ecx, [esp+18h+var_4]
0x74E3E2: push    ecx
0x74E3E3: push    ebx
0x74E3E4: lea     edx, [esi+1Ch]
0x74E3E7: push    edx
0x74E3E8: push    eax
0x74E3E9: mov     eax, [eax+4]
0x74E3EC: mov     [esp+28h+var_4], ebx
0x74E3F0: call    eax
0x74E3F2: mov     eax, [edi+21Ch]
0x74E3F8: push    1
0x74E3FA: lea     ecx, [esp+2Ch+var_4]
0x74E3FE: push    ecx
0x74E3FF: push    ebx
0x74E400: lea     edx, [esi+20h]
0x74E403: push    edx
0x74E404: push    eax
0x74E405: mov     eax, [eax+4]
0x74E408: mov     [esp+3Ch+var_4], ebx
0x74E40C: call    eax
0x74E40E: mov     eax, [edi+21Ch]
0x74E414: push    1
0x74E416: lea     ecx, [esp+40h+var_4]
0x74E41A: push    ecx
0x74E41B: push    ebx
0x74E41C: lea     edx, [esi+24h]
0x74E41F: push    edx
0x74E420: push    eax
0x74E421: mov     eax, [eax+4]
0x74E424: mov     [esp+50h+var_4], ebx
0x74E428: call    eax
0x74E42A: mov     eax, [edi+21Ch]
0x74E430: push    1
0x74E432: lea     ecx, [esp+54h+var_4]
0x74E436: push    ecx
0x74E437: push    1
0x74E439: lea     edx, [esp+5Ch+arg_0]
0x74E43D: push    edx
0x74E43E: push    eax
0x74E43F: mov     eax, [eax+4]
0x74E442: mov     [esp+64h+var_4], 1
0x74E44A: call    eax
0x74E44C: add     esp, 50h
0x74E44F: cmp     byte ptr [esp+14h+arg_0], 0
0x74E454: setnz   cl
0x74E457: mov     [esi+35h], cl
0x74E45A: mov     eax, [edi+21Ch]
0x74E460: push    1
0x74E462: lea     edx, [esp+18h+arg_0]
0x74E466: push    edx
0x74E467: mov     edx, [eax+4]
0x74E46A: push    1
0x74E46C: lea     ecx, [esp+20h+var_5]
0x74E470: push    ecx
0x74E471: push    eax
0x74E472: mov     [esp+28h+arg_0], 1
0x74E47A: call    edx
0x74E47C: add     esp, 14h
0x74E47F: cmp     [esp+14h+var_5], 0
0x74E484: push    edi
0x74E485: setnz   al
0x74E488: lea     ecx, [esi+28h]
0x74E48B: mov     [esi+34h], al
0x74E48E: call    sub_709430
0x74E493: pop     edi
0x74E494: pop     esi
0x74E495: pop     ebx
0x74E496: add     esp, 8
0x74E499: retn    4
