0x9023F0: sub     esp, 3Ch
0x9023F3: push    ebp
0x9023F4: mov     ebp, ds:0BA9DE4h
0x9023FA: push    esi
0x9023FB: push    edi
0x9023FC: mov     edi, large fs:2Ch
0x902403: mov     eax, [edi+ebp*4]
0x902406: mov     ecx, [eax+1A4h]
0x90240C: cmp     ecx, [eax+1A8h]
0x902412: jnb     short loc_90243F
0x902414: mov     esi, eax
0x902416: mov     ecx, [esi+1A4h]
0x90241C: mov     dword ptr [ecx], offset aLtcvxlist; "LtCvxList"
0x902422: mov     dword ptr [ecx+0Ch], offset aCheckhull; "checkHull"
0x902429: rdtsc
0x90242B: mov     [esp+48h+var_3C], eax
0x90242F: mov     edx, [esp+48h+var_3C]
0x902433: mov     [ecx+4], edx
0x902436: add     ecx, 10h
0x902439: mov     [esi+1A4h], ecx
0x90243F: mov     esi, [esp+48h+arg_4]
0x902443: mov     eax, [esi+8]
0x902446: mov     ecx, ds:0B2FFE4h
0x90244C: mov     [esp+48h+var_20], eax
0x902450: mov     eax, [esi]
0x902452: mov     [esp+48h+var_C], ecx
0x902456: mov     [esp+48h+var_1C], esi
0x90245A: mov     [esp+48h+var_12], 1
0x902461: mov     [esp+48h+var_10], 0
0x902469: mov     [esp+48h+var_18], offset off_A9BB94
0x902471: mov     ecx, [eax+10h]
0x902474: mov     edx, [ecx]
0x902476: fld     dword ptr [edx+0Ch]
0x902479: mov     edx, [esi+4]
0x90247C: mov     [esp+48h+var_8], ecx
0x902480: mov     eax, [eax+14h]
0x902483: fstp    [esp+48h+var_C]
0x902487: mov     [esp+48h+var_4], eax
0x90248B: lea     ecx, [esp+48h+var_18]
0x90248F: lea     eax, [esp+48h+var_3C]
0x902493: push    eax
0x902494: mov     eax, [esp+4Ch+arg_0]
0x902498: mov     [esp+4Ch+var_28], ecx
0x90249C: mov     ecx, [esp+4Ch+arg_8]
0x9024A0: mov     [esp+4Ch+var_24], edx
0x9024A4: push    ecx
0x9024A5: lea     edx, [esp+50h+var_28]
0x9024A9: push    edx
0x9024AA: push    eax
0x9024AB: mov     [esp+58h+var_3C], offset off_A9BB84
0x9024B3: mov     [esp+58h+var_38], 0
0x9024B8: call    sub_93F800
0x9024BD: mov     al, [esp+58h+var_38]
0x9024C1: add     esp, 10h
0x9024C4: test    al, al
0x9024C6: jz      short loc_90252C
0x9024C8: mov     eax, [edi+ebp*4]
0x9024CB: mov     ecx, [eax+1A4h]
0x9024D1: cmp     ecx, [eax+1A8h]
0x9024D7: jnb     short loc_9024FF
0x9024D9: push    ebx
0x9024DA: mov     ebx, eax
0x9024DC: mov     ecx, [ebx+1A4h]
0x9024E2: mov     dword ptr [ecx], offset aStchildren; "Stchildren"
0x9024E8: rdtsc
0x9024EA: mov     [esp+4Ch+arg_4], eax
0x9024EE: mov     edx, [esp+4Ch+arg_4]
0x9024F2: mov     [ecx+4], edx
0x9024F5: add     ecx, 0Ch
0x9024F8: mov     [ebx+1A4h], ecx
0x9024FE: pop     ebx
0x9024FF: mov     eax, [esp+48h+arg_C]
0x902503: mov     edx, [esp+48h+arg_8]
0x902507: lea     ecx, [esp+48h+var_34]
0x90250B: push    ecx
0x90250C: mov     [esp+4Ch+var_2C], eax
0x902510: mov     eax, [esp+4Ch+arg_0]
0x902514: push    edx
0x902515: push    eax
0x902516: push    esi
0x902517: mov     [esp+58h+var_30], 0
0x90251C: mov     [esp+58h+var_34], offset off_A9B4F0
0x902524: call    sub_905630
0x902529: add     esp, 10h
0x90252C: mov     eax, [edi+ebp*4]
0x90252F: mov     ecx, [eax+1A4h]
0x902535: cmp     ecx, [eax+1A8h]
0x90253B: jnb     short loc_902561
0x90253D: mov     edi, eax
0x90253F: mov     ecx, [edi+1A4h]
0x902545: mov     dword ptr [ecx], offset aLt_0; "lt"
0x90254B: rdtsc
0x90254D: mov     [esp+48h+arg_4], eax
0x902551: mov     edx, [esp+48h+arg_4]
0x902555: mov     [ecx+4], edx
0x902558: add     ecx, 0Ch
0x90255B: mov     [edi+1A4h], ecx
0x902561: pop     edi
0x902562: pop     esi
0x902563: pop     ebp
0x902564: add     esp, 3Ch
0x902567: retn
