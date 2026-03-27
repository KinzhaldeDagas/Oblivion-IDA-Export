0x96E250: push    esi
0x96E251: push    edi
0x96E252: mov     edi, [esp+8+arg_0]
0x96E256: push    edi
0x96E257: mov     esi, ecx
0x96E259: call    sub_711D00
0x96E25E: lea     eax, [esi+24h]
0x96E261: push    eax
0x96E262: push    edi
0x96E263: call    sub_96DE80
0x96E268: lea     ecx, [esi+28h]
0x96E26B: push    ecx
0x96E26C: push    edi
0x96E26D: call    sub_96DE80
0x96E272: add     esp, 10h
0x96E275: cmp     dword ptr [esi+2Ch], 0
0x96E279: jz      short loc_96E29E
0x96E27B: lea     edx, [esp+8+arg_0]
0x96E27F: push    edx
0x96E280: push    edi
0x96E281: mov     byte ptr [esp+10h+arg_0], 1
0x96E286: call    sub_7127E0
0x96E28B: mov     ecx, [esi+2Ch]
0x96E28E: mov     eax, [ecx]
0x96E290: mov     edx, [eax+4]
0x96E293: add     esp, 8
0x96E296: push    edi
0x96E297: call    edx
0x96E299: pop     edi
0x96E29A: pop     esi
0x96E29B: retn    4
0x96E29E: lea     eax, [esp+8+arg_0]
0x96E2A2: push    eax
0x96E2A3: push    edi
0x96E2A4: mov     byte ptr [esp+10h+arg_0], 0
0x96E2A9: call    sub_7127E0
0x96E2AE: add     esp, 8
0x96E2B1: pop     edi
0x96E2B2: pop     esi
0x96E2B3: retn    4
