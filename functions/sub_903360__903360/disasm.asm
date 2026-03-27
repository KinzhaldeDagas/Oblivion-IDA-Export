0x903360: mov     edx, ds:0BA9DE4h
0x903366: sub     esp, 14h
0x903369: push    ebx
0x90336A: push    ebp
0x90336B: push    esi
0x90336C: push    edi
0x90336D: mov     edi, ecx
0x90336F: mov     ecx, large fs:2Ch
0x903376: mov     eax, [ecx+edx*4]
0x903379: mov     esi, [eax+1A4h]
0x90337F: cmp     esi, [eax+1A8h]
0x903385: jnb     short loc_9033AB
0x903387: mov     ebx, eax
0x903389: mov     esi, [ebx+1A4h]
0x90338F: mov     dword ptr [esi], offset aTtlistagent; "TtListAgent"
0x903395: rdtsc
0x903397: mov     [esp+24h+var_14], eax
0x90339B: mov     eax, [esp+24h+var_14]
0x90339F: mov     [esi+4], eax
0x9033A2: add     esi, 0Ch
0x9033A5: mov     [ebx+1A4h], esi
0x9033AB: mov     eax, [esp+24h+arg_0]
0x9033AF: mov     ebx, [edi+10h]
0x9033B2: mov     edx, [eax+8]
0x9033B5: mov     ebp, [eax]
0x9033B7: mov     edi, [edi+0Ch]
0x9033BA: xor     esi, esi
0x9033BC: test    ebx, ebx
0x9033BE: mov     [esp+24h+var_4], eax
0x9033C2: mov     [esp+24h+var_8], edx
0x9033C6: jle     short loc_903408
0x9033C8: jmp     short loc_9033D0
0x9033CA: align 10h
0x9033D0: mov     eax, [ebp+10h]
0x9033D3: mov     ecx, [eax+esi*8]
0x9033D6: mov     eax, [esp+24h+arg_C]
0x9033DA: push    eax
0x9033DB: mov     eax, [esp+28h+arg_8]
0x9033DF: push    eax
0x9033E0: mov     eax, [esp+2Ch+arg_4]
0x9033E4: mov     [esp+2Ch+var_10], ecx
0x9033E8: mov     [esp+2Ch+var_C], esi
0x9033EC: mov     ecx, [edi]
0x9033EE: mov     edx, [ecx]
0x9033F0: push    eax
0x9033F1: lea     eax, [esp+30h+var_10]
0x9033F5: push    eax
0x9033F6: call    dword ptr [edx+0Ch]
0x9033F9: add     edi, 4
0x9033FC: inc     esi
0x9033FD: cmp     esi, ebx
0x9033FF: jl      short loc_9033D0
0x903401: mov     ecx, large fs:2Ch
0x903408: mov     edx, ds:0BA9DE4h
0x90340E: mov     eax, [ecx+edx*4]
0x903411: mov     esi, [eax+1A4h]
0x903417: cmp     esi, [eax+1A8h]
0x90341D: jnb     short loc_903443
0x90341F: mov     esi, eax
0x903421: mov     ecx, [esi+1A4h]
0x903427: mov     dword ptr [ecx], offset aEt; "Et"
0x90342D: rdtsc
0x90342F: mov     [esp+24h+arg_0], eax
0x903433: mov     edx, [esp+24h+arg_0]
0x903437: mov     [ecx+4], edx
0x90343A: add     ecx, 0Ch
0x90343D: mov     [esi+1A4h], ecx
0x903443: pop     edi
0x903444: pop     esi
0x903445: pop     ebp
0x903446: pop     ebx
0x903447: add     esp, 14h
0x90344A: retn    10h
