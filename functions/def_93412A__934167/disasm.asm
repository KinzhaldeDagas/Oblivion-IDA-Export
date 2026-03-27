0x934167: cmp     esi, ebx; jumptable 0093412A default case
0x934169: jb      short loc_934120
0x93416B: mov     edx, large fs:2Ch
0x934172: mov     eax, ds:0BA9DE4h
0x934177: mov     ecx, [edx+eax*4]
0x93417A: mov     eax, [ecx+19Ch]
0x934180: mov     ecx, [eax+0A8h]
0x934186: cmp     ecx, [eax+30h]
0x934189: jge     short loc_93419C
0x93418B: mov     edx, [eax+64h]
0x93418E: inc     ecx
0x93418F: mov     [eax+0A8h], ecx
0x934195: mov     [edi], edx
0x934197: mov     [eax+64h], edi
0x93419A: jmp     short loc_9341AC
0x93419C: mov     ecx, ds:0BA7D98h
0x9341A2: mov     eax, [ecx]
0x9341A4: push    1Ch
0x9341A6: push    0Ch
0x9341A8: push    edi
0x9341A9: call    dword ptr [eax+1Ch]
0x9341AC: mov     eax, [esp+arg_C]
0x9341B0: mov     ecx, [ebp+0]
0x9341B3: mov     edi, [eax+ecx]
0x9341B6: mov     edx, [edi]
0x9341B8: add     eax, 4
0x9341BB: mov     [esp+arg_C], eax
0x9341BF: lea     ebx, [edx+edi+10h]
0x9341C3: jmp     loc_93411C
