0x898C90: sub     esp, 8
0x898C93: push    esi
0x898C94: push    edi
0x898C95: stmxcsr [esp+10h+var_8]
0x898C9A: mov     edi, [esp+10h+var_8]
0x898C9E: stmxcsr [esp+10h+var_8]
0x898CA3: mov     eax, [esp+10h+var_8]
0x898CA7: or      eax, 8000h
0x898CAC: mov     [esp+10h+var_8], eax
0x898CB0: mov     eax, [esp+10h+arg_4]
0x898CB4: ldmxcsr [esp+10h+var_8]
0x898CB9: push    eax
0x898CBA: mov     eax, [esp+14h+arg_0]
0x898CBE: mov     esi, ecx
0x898CC0: mov     ecx, [esi+8]
0x898CC3: mov     edx, [ecx]
0x898CC5: push    eax
0x898CC6: and     edi, 8000h
0x898CCC: push    esi
0x898CCD: mov     [esp+1Ch+var_4], edi
0x898CD1: call    dword ptr [edx+8]
0x898CD4: test    eax, eax
0x898CD6: mov     [esp+10h+arg_0], eax
0x898CDA: jnz     loc_898D89
0x898CE0: mov     ecx, [esi+60h]
0x898CE3: test    ecx, ecx
0x898CE5: jz      loc_898D89
0x898CEB: mov     eax, ds:0BA7D98h
0x898CF0: mov     edx, [eax+28h]
0x898CF3: push    ebx
0x898CF4: mov     ebx, [eax+14h]
0x898CF7: mov     eax, [ecx+8]
0x898CFA: add     edx, ebx
0x898CFC: cmp     edx, eax
0x898CFE: jle     loc_898D88
0x898D04: mov     ebx, large fs:2Ch
0x898D0B: push    ebp
0x898D0C: mov     ebp, ds:0BA9DE4h
0x898D12: mov     eax, [ebx+ebp*4]
0x898D15: mov     edx, [eax+1A4h]
0x898D1B: cmp     edx, [eax+1A8h]
0x898D21: jnb     short loc_898D4C
0x898D23: mov     edi, [eax+1A4h]
0x898D29: mov     dword ptr [edi], offset aTtwatchdogFree; "TtWatchDog:FreeMem"
0x898D2F: rdtsc
0x898D31: mov     [esp+18h+arg_4], eax
0x898D35: mov     eax, [esp+18h+arg_4]
0x898D39: mov     [edi+4], eax
0x898D3C: mov     eax, [ebx+ebp*4]
0x898D3F: add     edi, 0Ch
0x898D42: mov     [eax+1A4h], edi
0x898D48: mov     edi, [esp+18h+var_4]
0x898D4C: mov     edx, [ecx]
0x898D4E: push    esi
0x898D4F: call    dword ptr [edx+8]
0x898D52: mov     eax, [ebx+ebp*4]
0x898D55: mov     ecx, [eax+1A4h]
0x898D5B: cmp     ecx, [eax+1A8h]
0x898D61: jnb     short loc_898D87
0x898D63: mov     ebx, eax
0x898D65: mov     ecx, [ebx+1A4h]
0x898D6B: mov     dword ptr [ecx], offset aEt; "Et"
0x898D71: rdtsc
0x898D73: mov     [esp+18h+arg_4], eax
0x898D77: mov     edx, [esp+18h+arg_4]
0x898D7B: mov     [ecx+4], edx
0x898D7E: add     ecx, 0Ch
0x898D81: mov     [ebx+1A4h], ecx
0x898D87: pop     ebp
0x898D88: pop     ebx
0x898D89: stmxcsr [esp+10h+arg_4]
0x898D8E: mov     eax, [esp+10h+arg_4]
0x898D92: and     eax, 0FFFF7FFFh
0x898D97: or      eax, edi
0x898D99: mov     [esp+10h+arg_4], eax
0x898D9D: ldmxcsr [esp+10h+arg_4]
0x898DA2: mov     eax, [esp+10h+arg_0]
0x898DA6: pop     edi
0x898DA7: pop     esi
0x898DA8: add     esp, 8
0x898DAB: retn    8
