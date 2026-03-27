0x6E7740: push    ebx
0x6E7741: push    esi
0x6E7742: push    edi
0x6E7743: mov     edi, [esp+0Ch+arg_0]
0x6E7747: push    edi
0x6E7748: mov     esi, ecx
0x6E774A: call    nullsub_returnvVoid_1arg
0x6E774F: mov     eax, [edi+220h]
0x6E7755: mov     edx, [eax+8]
0x6E7758: push    1
0x6E775A: lea     ecx, [esp+10h+arg_0]
0x6E775E: push    ecx
0x6E775F: push    4
0x6E7761: lea     ebx, [esi+10h]
0x6E7764: push    ebx
0x6E7765: push    eax
0x6E7766: mov     [esp+20h+arg_0], 4
0x6E776E: call    edx
0x6E7770: mov     ebx, [ebx]
0x6E7772: add     esp, 14h
0x6E7775: test    ebx, ebx
0x6E7777: jz      short loc_6E77A3
0x6E7779: mov     eax, [edi+220h]
0x6E777F: push    1
0x6E7781: lea     ecx, [esp+10h+arg_0]
0x6E7785: push    ecx
0x6E7786: mov     ecx, [esi+8]
0x6E7789: lea     edx, ds:0[ebx*4]
0x6E7790: push    edx
0x6E7791: mov     edx, [eax+8]
0x6E7794: push    ecx
0x6E7795: push    eax
0x6E7796: mov     [esp+20h+arg_0], 4
0x6E779E: call    edx
0x6E77A0: add     esp, 14h
0x6E77A3: mov     eax, [edi+220h]
0x6E77A9: mov     edx, [eax+8]
0x6E77AC: push    1
0x6E77AE: lea     ecx, [esp+10h+arg_0]
0x6E77B2: push    ecx
0x6E77B3: push    4
0x6E77B5: lea     ebx, [esi+14h]
0x6E77B8: push    ebx
0x6E77B9: push    eax
0x6E77BA: mov     [esp+20h+arg_0], 4
0x6E77C2: call    edx
0x6E77C4: mov     ebx, [ebx]
0x6E77C6: add     esp, 14h
0x6E77C9: test    ebx, ebx
0x6E77CB: jz      short loc_6E77F3
0x6E77CD: mov     edx, [esi+0Ch]
0x6E77D0: mov     edi, [edi+220h]
0x6E77D6: push    1
0x6E77D8: lea     eax, [esp+10h+arg_0]
0x6E77DC: push    eax
0x6E77DD: mov     eax, [edi+8]
0x6E77E0: lea     ecx, [ebx+ebx]
0x6E77E3: push    ecx
0x6E77E4: push    edx
0x6E77E5: push    edi
0x6E77E6: mov     [esp+20h+arg_0], 2
0x6E77EE: call    eax
0x6E77F0: add     esp, 14h
0x6E77F3: pop     edi
0x6E77F4: pop     esi
0x6E77F5: pop     ebx
0x6E77F6: retn    4
