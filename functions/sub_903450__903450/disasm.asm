0x903450: mov     edx, ds:0BA9DE4h
0x903456: sub     esp, 14h
0x903459: push    ebx
0x90345A: push    ebp
0x90345B: push    esi
0x90345C: push    edi
0x90345D: mov     edi, ecx
0x90345F: mov     ecx, large fs:2Ch
0x903466: mov     eax, [ecx+edx*4]
0x903469: mov     esi, [eax+1A4h]
0x90346F: cmp     esi, [eax+1A8h]
0x903475: jnb     short loc_90349B
0x903477: mov     ebx, eax
0x903479: mov     esi, [ebx+1A4h]
0x90347F: mov     dword ptr [esi], offset aTtlistagent; "TtListAgent"
0x903485: rdtsc
0x903487: mov     [esp+24h+var_14], eax
0x90348B: mov     eax, [esp+24h+var_14]
0x90348F: mov     [esi+4], eax
0x903492: add     esi, 0Ch
0x903495: mov     [ebx+1A4h], esi
0x90349B: mov     eax, [esp+24h+arg_0]
0x90349F: mov     ebx, [edi+10h]
0x9034A2: mov     edx, [eax+8]
0x9034A5: mov     ebp, [eax]
0x9034A7: mov     edi, [edi+0Ch]
0x9034AA: xor     esi, esi
0x9034AC: test    ebx, ebx
0x9034AE: mov     [esp+24h+var_4], eax
0x9034B2: mov     [esp+24h+var_8], edx
0x9034B6: jle     short loc_9034FD
0x9034B8: jmp     short loc_9034C0
0x9034BA: align 10h
0x9034C0: mov     eax, [ebp+10h]
0x9034C3: mov     ecx, [eax+esi*8]
0x9034C6: mov     eax, [esp+24h+arg_10]
0x9034CA: push    eax
0x9034CB: mov     eax, [esp+28h+arg_C]
0x9034CF: push    eax
0x9034D0: mov     eax, [esp+2Ch+arg_8]
0x9034D4: push    eax
0x9034D5: mov     eax, [esp+30h+arg_4]
0x9034D9: mov     [esp+30h+var_10], ecx
0x9034DD: mov     [esp+30h+var_C], esi
0x9034E1: mov     ecx, [edi]
0x9034E3: mov     edx, [ecx]
0x9034E5: push    eax
0x9034E6: lea     eax, [esp+34h+var_10]
0x9034EA: push    eax
0x9034EB: call    dword ptr [edx+10h]
0x9034EE: add     edi, 4
0x9034F1: inc     esi
0x9034F2: cmp     esi, ebx
0x9034F4: jl      short loc_9034C0
0x9034F6: mov     ecx, large fs:2Ch
0x9034FD: mov     edx, ds:0BA9DE4h
0x903503: mov     eax, [ecx+edx*4]
0x903506: mov     esi, [eax+1A4h]
0x90350C: cmp     esi, [eax+1A8h]
0x903512: jnb     short loc_903538
0x903514: mov     esi, eax
0x903516: mov     ecx, [esi+1A4h]
0x90351C: mov     dword ptr [ecx], offset aEt; "Et"
0x903522: rdtsc
0x903524: mov     [esp+24h+arg_0], eax
0x903528: mov     edx, [esp+24h+arg_0]
0x90352C: mov     [ecx+4], edx
0x90352F: add     ecx, 0Ch
0x903532: mov     [esi+1A4h], ecx
0x903538: pop     edi
0x903539: pop     esi
0x90353A: pop     ebp
0x90353B: pop     ebx
0x90353C: add     esp, 14h
0x90353F: retn    14h
