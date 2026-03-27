0x90F8C0: push    ebx
0x90F8C1: push    esi
0x90F8C2: push    edi
0x90F8C3: mov     edi, [esp+0Ch+arg_0]
0x90F8C7: mov     eax, [edi]
0x90F8C9: mov     esi, ecx
0x90F8CB: push    esi
0x90F8CC: push    2
0x90F8CE: push    offset aCachngphantm; "CachngPhantm"
0x90F8D3: mov     ecx, edi
0x90F8D5: call    dword ptr [eax]
0x90F8D7: push    edi
0x90F8D8: mov     ecx, esi
0x90F8DA: call    sub_8DE790
0x90F8DF: mov     eax, [esi+128h]
0x90F8E5: test    eax, eax
0x90F8E7: js      short loc_90F911
0x90F8E9: mov     ecx, [esi+120h]
0x90F8EF: mov     edx, [edi]
0x90F8F1: and     eax, 3FFFFFFFh
0x90F8F6: shl     eax, 3
0x90F8F9: push    eax
0x90F8FA: mov     eax, [esi+124h]
0x90F900: shl     eax, 3
0x90F903: push    eax
0x90F904: push    ecx
0x90F905: push    8
0x90F907: push    offset aAgentptr; "AgentPtr"
0x90F90C: mov     ecx, edi
0x90F90E: call    dword ptr [edx+4]
0x90F911: mov     eax, [esi+124h]
0x90F917: xor     ebx, ebx
0x90F919: test    eax, eax
0x90F91B: jle     short loc_90F943
0x90F91D: lea     ecx, [ecx+0]
0x90F920: mov     eax, [esi+120h]
0x90F926: mov     ecx, [eax+ebx*8]
0x90F929: mov     edx, [edi]
0x90F92B: push    ecx
0x90F92C: push    8
0x90F92E: push    offset aAgent; "Agent"
0x90F933: mov     ecx, edi
0x90F935: call    dword ptr [edx+8]
0x90F938: mov     eax, [esi+124h]
0x90F93E: inc     ebx
0x90F93F: cmp     ebx, eax
0x90F941: jl      short loc_90F920
0x90F943: mov     edx, [edi]
0x90F945: mov     ecx, edi
0x90F947: call    dword ptr [edx+14h]
0x90F94A: pop     edi
0x90F94B: pop     esi
0x90F94C: pop     ebx
0x90F94D: retn    4
