0x90B4B0: sub     esp, 10h
0x90B4B3: mov     eax, [esp+10h+arg_0]
0x90B4B7: push    ebx
0x90B4B8: mov     ebx, [esp+14h+arg_8]
0x90B4BC: push    ebp
0x90B4BD: mov     ebp, [esp+18h+arg_4]
0x90B4C1: push    esi
0x90B4C2: push    edi
0x90B4C3: mov     edi, [eax]
0x90B4C5: mov     esi, ecx
0x90B4C7: mov     ecx, [eax+8]
0x90B4CA: mov     [esp+20h+var_8], ecx
0x90B4CE: mov     [esp+20h+var_4], eax
0x90B4D2: mov     edx, [eax+4]
0x90B4D5: mov     ecx, [edi+0Ch]
0x90B4D8: push    ebx
0x90B4D9: mov     [esp+24h+var_C], edx
0x90B4DD: mov     [esp+24h+var_10], ecx
0x90B4E1: mov     ecx, [esi+0Ch]
0x90B4E4: mov     eax, [ecx]
0x90B4E6: push    ebp
0x90B4E7: lea     edx, [esp+28h+var_10]
0x90B4EB: push    edx
0x90B4EC: call    dword ptr [eax+1Ch]
0x90B4EF: mov     eax, [esi+10h]
0x90B4F2: test    eax, eax
0x90B4F4: jz      short loc_90B517
0x90B4F6: mov     eax, [esp+20h+var_4]
0x90B4FA: mov     ecx, [eax+4]
0x90B4FD: mov     edi, [edi+10h]
0x90B500: push    ebx
0x90B501: mov     [esp+24h+var_C], ecx
0x90B505: mov     ecx, [esi+10h]
0x90B508: push    ebp
0x90B509: lea     eax, [esp+28h+var_10]
0x90B50D: mov     [esp+28h+var_10], edi
0x90B511: mov     edx, [ecx]
0x90B513: push    eax
0x90B514: call    dword ptr [edx+1Ch]
0x90B517: pop     edi
0x90B518: pop     esi
0x90B519: pop     ebp
0x90B51A: pop     ebx
0x90B51B: add     esp, 10h
0x90B51E: retn    0Ch
