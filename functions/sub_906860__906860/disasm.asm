0x906860: push    ebx
0x906861: push    esi
0x906862: push    edi
0x906863: mov     edi, [esp+0Ch+arg_0]
0x906867: mov     eax, [edi]
0x906869: mov     esi, ecx
0x90686B: push    esi
0x90686C: push    8
0x90686E: push    offset aBvtreeagt; "BvTreeAgt"
0x906873: mov     ecx, edi
0x906875: call    dword ptr [eax]
0x906877: mov     eax, [esi+14h]
0x90687A: test    eax, eax
0x90687C: js      short loc_9068A6
0x90687E: mov     edx, [edi]
0x906880: and     eax, 3FFFFFFFh
0x906885: lea     eax, [eax+eax*2]
0x906888: shl     eax, 2
0x90688B: push    eax
0x90688C: mov     eax, [esi+10h]
0x90688F: lea     ecx, [eax+eax*2]
0x906892: mov     eax, [esi+0Ch]
0x906895: shl     ecx, 2
0x906898: push    ecx
0x906899: push    eax
0x90689A: push    8
0x90689C: push    offset aAgentptrs; "AgentPtrs"
0x9068A1: mov     ecx, edi
0x9068A3: call    dword ptr [edx+4]
0x9068A6: mov     ebx, [esi+0Ch]
0x9068A9: mov     eax, [esi+10h]
0x9068AC: lea     ecx, [eax+eax*2]
0x9068AF: mov     edx, ebx
0x9068B1: lea     esi, [edx+ecx*4]
0x9068B4: cmp     ebx, esi
0x9068B6: jz      short loc_9068D5
0x9068B8: mov     eax, [ebx+8]
0x9068BB: test    eax, eax
0x9068BD: jz      short loc_9068CE
0x9068BF: mov     edx, [edi]
0x9068C1: push    eax
0x9068C2: push    8
0x9068C4: push    offset aAgent; "Agent"
0x9068C9: mov     ecx, edi
0x9068CB: call    dword ptr [edx+8]
0x9068CE: add     ebx, 0Ch
0x9068D1: cmp     ebx, esi
0x9068D3: jnz     short loc_9068B8
0x9068D5: pop     edi
0x9068D6: pop     esi
0x9068D7: pop     ebx
0x9068D8: retn    4
