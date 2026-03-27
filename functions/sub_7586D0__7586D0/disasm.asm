0x7586D0: push    ecx
0x7586D1: push    ebx
0x7586D2: push    ebp
0x7586D3: push    esi
0x7586D4: push    edi
0x7586D5: mov     edi, [esp+14h+arg_0]
0x7586D9: push    edi
0x7586DA: mov     esi, ecx
0x7586DC: call    nullsub_returnvVoid_1arg
0x7586E1: mov     eax, [edi+220h]
0x7586E7: mov     edx, [eax+8]
0x7586EA: push    1
0x7586EC: lea     ecx, [esp+18h+arg_0]
0x7586F0: push    ecx
0x7586F1: mov     ebp, 4
0x7586F6: push    ebp
0x7586F7: lea     ebx, [esi+8]
0x7586FA: push    ebx
0x7586FB: push    eax
0x7586FC: mov     [esp+28h+arg_0], ebp
0x758700: call    edx
0x758702: add     esp, 14h
0x758705: cmp     dword ptr [ebx], 0
0x758708: jbe     short loc_758743
0x75870A: mov     eax, [edi+220h]
0x758710: mov     edx, [eax+8]
0x758713: push    1
0x758715: lea     ecx, [esp+18h+arg_0]
0x758719: push    ecx
0x75871A: mov     [esp+1Ch+arg_0], ebp
0x75871E: push    4
0x758720: lea     ebp, [esi+10h]
0x758723: push    ebp
0x758724: push    eax
0x758725: call    edx
0x758727: mov     ecx, [ebx]
0x758729: mov     edx, [esi+0Ch]
0x75872C: mov     eax, [ebp+0]
0x75872F: mov     eax, ds:0B3D5C0h[eax*4]
0x758736: push    ecx
0x758737: push    edx
0x758738: push    edi
0x758739: call    eax ; dword_B3D5C0
0x75873B: add     esp, 20h
0x75873E: mov     ebp, 4
0x758743: mov     eax, [edi+220h]
0x758749: mov     edx, [eax+8]
0x75874C: push    1
0x75874E: lea     ecx, [esp+18h+arg_0]
0x758752: push    ecx
0x758753: push    ebp
0x758754: lea     ebx, [esi+18h]
0x758757: push    ebx
0x758758: push    eax
0x758759: mov     [esp+28h+arg_0], ebp
0x75875D: call    edx
0x75875F: mov     eax, [ebx]
0x758761: add     esp, 14h
0x758764: test    eax, eax
0x758766: mov     [esp+14h+arg_0], 0
0x75876E: jbe     short loc_7587BE
0x758770: test    eax, eax
0x758772: jbe     short loc_7587AD
0x758774: mov     eax, [edi+220h]
0x75877A: mov     edx, [eax+8]
0x75877D: push    1
0x75877F: lea     ecx, [esp+18h+var_4]
0x758783: push    ecx
0x758784: mov     [esp+1Ch+var_4], ebp
0x758788: push    4
0x75878A: lea     ebp, [esi+20h]
0x75878D: push    ebp
0x75878E: push    eax
0x75878F: call    edx
0x758791: mov     ecx, [ebx]
0x758793: mov     edx, [esi+1Ch]
0x758796: mov     eax, [ebp+0]
0x758799: mov     eax, ds:0B3D638h[eax*4]
0x7587A0: push    ecx
0x7587A1: push    edx
0x7587A2: push    edi
0x7587A3: call    eax ; dword_B3D638
0x7587A5: add     esp, 20h
0x7587A8: mov     ebp, 4
0x7587AD: mov     ecx, [esp+14h+arg_0]
0x7587B1: mov     eax, [ebx]
0x7587B3: add     ecx, 1
0x7587B6: cmp     ecx, eax
0x7587B8: mov     [esp+14h+arg_0], ecx
0x7587BC: jb      short loc_758770
0x7587BE: pop     edi
0x7587BF: pop     esi
0x7587C0: pop     ebp
0x7587C1: pop     ebx
0x7587C2: pop     ecx
0x7587C3: retn    4
