0x906390: mov     eax, [esp+arg_0]
0x906394: mov     ecx, [eax]
0x906396: mov     edx, [ecx+10h]
0x906399: mov     eax, [esp+arg_4]
0x90639D: mov     ecx, [eax]
0x90639F: mov     eax, [ecx+10h]
0x9063A2: mov     ecx, [edx+24h]
0x9063A5: mov     edx, [eax+24h]
0x9063A8: push    esi
0x9063A9: cmp     ecx, edx
0x9063AB: mov     ecx, ds:0BA7D98h
0x9063B1: mov     edx, [ecx]
0x9063B3: push    1Ch
0x9063B5: push    40h ; '@'
0x9063B7: jge     short loc_9063DA
0x9063B9: call    dword ptr [edx+10h]
0x9063BC: mov     esi, eax
0x9063BE: mov     eax, [esp+4+arg_C]
0x9063C2: push    eax
0x9063C3: mov     ecx, esi
0x9063C5: mov     word ptr [esi+4], 40h ; '@'
0x9063CB: call    sub_906730
0x9063D0: mov     dword ptr [esi], offset off_A9BE50
0x9063D6: mov     eax, esi
0x9063D8: pop     esi
0x9063D9: retn
0x9063DA: call    dword ptr [edx+10h]
0x9063DD: mov     esi, eax
0x9063DF: mov     eax, [esp+4+arg_C]
0x9063E3: push    eax
0x9063E4: mov     ecx, esi
0x9063E6: mov     word ptr [esi+4], 40h ; '@'
0x9063EC: call    sub_906730
0x9063F1: mov     dword ptr [esi], offset off_A9BEAC
0x9063F7: mov     eax, esi
0x9063F9: pop     esi
0x9063FA: retn
