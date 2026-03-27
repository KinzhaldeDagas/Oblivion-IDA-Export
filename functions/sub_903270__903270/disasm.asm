0x903270: mov     edx, ds:0BA9DE4h
0x903276: sub     esp, 14h
0x903279: push    ebx
0x90327A: push    ebp
0x90327B: push    esi
0x90327C: push    edi
0x90327D: mov     edi, ecx
0x90327F: mov     ecx, large fs:2Ch
0x903286: mov     eax, [ecx+edx*4]
0x903289: mov     esi, [eax+1A4h]
0x90328F: cmp     esi, [eax+1A8h]
0x903295: jnb     short loc_9032BB
0x903297: mov     ebx, eax
0x903299: mov     esi, [ebx+1A4h]
0x90329F: mov     dword ptr [esi], offset aTtlist; "Ttlist"
0x9032A5: rdtsc
0x9032A7: mov     [esp+24h+var_14], eax
0x9032AB: mov     eax, [esp+24h+var_14]
0x9032AF: mov     [esi+4], eax
0x9032B2: add     esi, 0Ch
0x9032B5: mov     [ebx+1A4h], esi
0x9032BB: mov     eax, [esp+24h+arg_0]
0x9032BF: mov     ebx, [edi+10h]
0x9032C2: mov     edx, [eax+8]
0x9032C5: mov     ebp, [eax]
0x9032C7: mov     edi, [edi+0Ch]
0x9032CA: xor     esi, esi
0x9032CC: test    ebx, ebx
0x9032CE: mov     [esp+24h+var_4], eax
0x9032D2: mov     [esp+24h+var_8], edx
0x9032D6: jle     short loc_903318
0x9032D8: jmp     short loc_9032E0
0x9032DA: align 10h
0x9032E0: mov     eax, [ebp+10h]
0x9032E3: mov     ecx, [eax+esi*8]
0x9032E6: mov     eax, [esp+24h+arg_C]
0x9032EA: push    eax
0x9032EB: mov     eax, [esp+28h+arg_8]
0x9032EF: push    eax
0x9032F0: mov     eax, [esp+2Ch+arg_4]
0x9032F4: mov     [esp+2Ch+var_10], ecx
0x9032F8: mov     [esp+2Ch+var_C], esi
0x9032FC: mov     ecx, [edi]
0x9032FE: mov     edx, [ecx]
0x903300: push    eax
0x903301: lea     eax, [esp+30h+var_10]
0x903305: push    eax
0x903306: call    dword ptr [edx+14h]
0x903309: add     edi, 4
0x90330C: inc     esi
0x90330D: cmp     esi, ebx
0x90330F: jl      short loc_9032E0
0x903311: mov     ecx, large fs:2Ch
0x903318: mov     edx, ds:0BA9DE4h
0x90331E: mov     eax, [ecx+edx*4]
0x903321: mov     esi, [eax+1A4h]
0x903327: cmp     esi, [eax+1A8h]
0x90332D: jnb     short loc_903353
0x90332F: mov     esi, eax
0x903331: mov     ecx, [esi+1A4h]
0x903337: mov     dword ptr [ecx], offset aEt; "Et"
0x90333D: rdtsc
0x90333F: mov     [esp+24h+arg_0], eax
0x903343: mov     edx, [esp+24h+arg_0]
0x903347: mov     [ecx+4], edx
0x90334A: add     ecx, 0Ch
0x90334D: mov     [esi+1A4h], ecx
0x903353: pop     edi
0x903354: pop     esi
0x903355: pop     ebp
0x903356: pop     ebx
0x903357: add     esp, 14h
0x90335A: retn    10h
