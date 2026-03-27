0x4822A0: mov     edx, [esp+arg_0]
0x4822A4: push    ebx
0x4822A5: push    ebp
0x4822A6: mov     ebp, [esp+8+arg_8]
0x4822AA: push    esi
0x4822AB: mov     esi, ecx
0x4822AD: mov     eax, [esi+0Ch]
0x4822B0: mov     ecx, [esi+10h]
0x4822B3: mov     ebx, eax
0x4822B5: imul    eax, ebp
0x4822B8: add     eax, [esp+0Ch+arg_C]
0x4822BC: imul    ebx, edx
0x4822BF: push    edi
0x4822C0: mov     edi, [esp+10h+arg_4]
0x4822C4: add     ebx, edi
0x4822C6: mov     ebx, [ecx+ebx*8]
0x4822C9: lea     eax, [ecx+eax*8]
0x4822CC: test    eax, eax
0x4822CE: jz      short loc_4822E2
0x4822D0: mov     ecx, [esi+0Ch]
0x4822D3: mov     eax, [eax]
0x4822D5: imul    ecx, edx
0x4822D8: mov     edx, [esi+10h]
0x4822DB: add     ecx, edi
0x4822DD: mov     [edx+ecx*8], eax
0x4822E0: jmp     short loc_4822ED
0x4822E2: mov     eax, [esi]
0x4822E4: push    edi
0x4822E5: push    edx
0x4822E6: mov     edx, [eax+1Ch]
0x4822E9: mov     ecx, esi
0x4822EB: call    edx
0x4822ED: mov     eax, [esi+0Ch]
0x4822F0: mov     ecx, [esi+10h]
0x4822F3: imul    eax, ebp
0x4822F6: add     eax, [esp+10h+arg_C]
0x4822FA: pop     edi
0x4822FB: pop     esi
0x4822FC: pop     ebp
0x4822FD: mov     [ecx+eax*8], ebx
0x482300: pop     ebx
0x482301: retn    10h
