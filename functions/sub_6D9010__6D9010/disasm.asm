0x6D9010: push    ebx
0x6D9011: push    ebp
0x6D9012: push    esi
0x6D9013: push    edi
0x6D9014: mov     edi, [esp+10h+arg_0]
0x6D9018: push    edi
0x6D9019: mov     esi, ecx
0x6D901B: call    nullsub_returnvVoid_1arg
0x6D9020: mov     eax, [edi+220h]
0x6D9026: mov     edx, [eax+8]
0x6D9029: push    1
0x6D902B: lea     ecx, [esp+14h+arg_0]
0x6D902F: push    ecx
0x6D9030: mov     ebp, 4
0x6D9035: push    ebp
0x6D9036: lea     ebx, [esi+8]
0x6D9039: push    ebx
0x6D903A: push    eax
0x6D903B: mov     [esp+24h+arg_0], ebp
0x6D903F: call    edx
0x6D9041: add     esp, 14h
0x6D9044: cmp     dword ptr [ebx], 0
0x6D9047: jbe     short loc_6D907D
0x6D9049: mov     eax, [edi+220h]
0x6D904F: mov     edx, [eax+8]
0x6D9052: push    1
0x6D9054: lea     ecx, [esp+14h+arg_0]
0x6D9058: push    ecx
0x6D9059: mov     [esp+18h+arg_0], ebp
0x6D905D: push    4
0x6D905F: lea     ebp, [esi+10h]
0x6D9062: push    ebp
0x6D9063: push    eax
0x6D9064: call    edx
0x6D9066: mov     ecx, [ebx]
0x6D9068: mov     edx, [esi+0Ch]
0x6D906B: mov     eax, [ebp+0]
0x6D906E: mov     eax, ds:0B3D5F0h[eax*4]
0x6D9075: push    ecx
0x6D9076: push    edx
0x6D9077: push    edi
0x6D9078: call    eax ; dword_B3D5F0
0x6D907A: add     esp, 20h
0x6D907D: pop     edi
0x6D907E: pop     esi
0x6D907F: pop     ebp
0x6D9080: pop     ebx
0x6D9081: retn    4
