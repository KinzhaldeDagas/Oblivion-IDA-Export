0x728180: push    ebx
0x728181: mov     ebx, [esp+4+arg_0]
0x728185: push    esi
0x728186: push    edi
0x728187: push    ebx
0x728188: mov     esi, ecx
0x72818A: call    sub_6FE000
0x72818F: mov     eax, [ebx+220h]
0x728195: mov     edx, [eax+8]
0x728198: push    1
0x72819A: lea     ecx, [esp+10h+arg_0]
0x72819E: push    ecx
0x72819F: push    4
0x7281A1: lea     edi, [esi+10h]
0x7281A4: push    edi
0x7281A5: push    eax
0x7281A6: mov     [esp+20h+arg_0], 4
0x7281AE: call    edx
0x7281B0: mov     edi, [edi]
0x7281B2: add     esp, 14h
0x7281B5: test    edi, edi
0x7281B7: jbe     short loc_7281DC
0x7281B9: mov     ecx, [esi+0Ch]
0x7281BC: mov     ebx, [ebx+220h]
0x7281C2: mov     edx, [ebx+8]
0x7281C5: push    1
0x7281C7: lea     eax, [esp+10h+arg_0]
0x7281CB: push    eax
0x7281CC: push    edi
0x7281CD: push    ecx
0x7281CE: push    ebx
0x7281CF: mov     [esp+20h+arg_0], 1
0x7281D7: call    edx
0x7281D9: add     esp, 14h
0x7281DC: pop     edi
0x7281DD: pop     esi
0x7281DE: pop     ebx
0x7281DF: retn    4
