0x898B70: sub     esp, 8
0x898B73: push    esi
0x898B74: push    edi
0x898B75: stmxcsr [esp+10h+var_8]
0x898B7A: mov     edi, [esp+10h+var_8]
0x898B7E: stmxcsr [esp+10h+var_8]
0x898B83: mov     eax, [esp+10h+var_8]
0x898B87: or      eax, 8000h
0x898B8C: mov     [esp+10h+var_8], eax
0x898B90: mov     eax, [esp+10h+arg_0]
0x898B94: ldmxcsr [esp+10h+var_8]
0x898B99: mov     esi, ecx
0x898B9B: mov     ecx, [esi+8]
0x898B9E: mov     edx, [ecx]
0x898BA0: push    eax
0x898BA1: push    eax
0x898BA2: and     edi, 8000h
0x898BA8: push    esi
0x898BA9: mov     [esp+1Ch+var_4], edi
0x898BAD: call    dword ptr [edx+8]
0x898BB0: test    eax, eax
0x898BB2: mov     [esp+10h+var_8], eax
0x898BB6: jnz     loc_898C65
0x898BBC: mov     ecx, [esi+60h]
0x898BBF: test    ecx, ecx
0x898BC1: jz      loc_898C65
0x898BC7: mov     eax, ds:0BA7D98h
0x898BCC: mov     edx, [eax+28h]
0x898BCF: push    ebx
0x898BD0: mov     ebx, [eax+14h]
0x898BD3: mov     eax, [ecx+8]
0x898BD6: add     edx, ebx
0x898BD8: cmp     edx, eax
0x898BDA: jle     loc_898C64
0x898BE0: mov     ebx, large fs:2Ch
0x898BE7: push    ebp
0x898BE8: mov     ebp, ds:0BA9DE4h
0x898BEE: mov     eax, [ebx+ebp*4]
0x898BF1: mov     edx, [eax+1A4h]
0x898BF7: cmp     edx, [eax+1A8h]
0x898BFD: jnb     short loc_898C28
0x898BFF: mov     edi, [eax+1A4h]
0x898C05: mov     dword ptr [edi], offset aTtwatchdogFree; "TtWatchDog:FreeMem"
0x898C0B: rdtsc
0x898C0D: mov     [esp+18h+arg_0], eax
0x898C11: mov     eax, [esp+18h+arg_0]
0x898C15: mov     [edi+4], eax
0x898C18: mov     eax, [ebx+ebp*4]
0x898C1B: add     edi, 0Ch
0x898C1E: mov     [eax+1A4h], edi
0x898C24: mov     edi, [esp+18h+var_4]
0x898C28: mov     edx, [ecx]
0x898C2A: push    esi
0x898C2B: call    dword ptr [edx+8]
0x898C2E: mov     eax, [ebx+ebp*4]
0x898C31: mov     ecx, [eax+1A4h]
0x898C37: cmp     ecx, [eax+1A8h]
0x898C3D: jnb     short loc_898C63
0x898C3F: mov     ebx, eax
0x898C41: mov     ecx, [ebx+1A4h]
0x898C47: mov     dword ptr [ecx], offset aEt; "Et"
0x898C4D: rdtsc
0x898C4F: mov     [esp+18h+arg_0], eax
0x898C53: mov     edx, [esp+18h+arg_0]
0x898C57: mov     [ecx+4], edx
0x898C5A: add     ecx, 0Ch
0x898C5D: mov     [ebx+1A4h], ecx
0x898C63: pop     ebp
0x898C64: pop     ebx
0x898C65: stmxcsr [esp+10h+arg_0]
0x898C6A: mov     eax, [esp+10h+arg_0]
0x898C6E: and     eax, 0FFFF7FFFh
0x898C73: or      eax, edi
0x898C75: mov     [esp+10h+arg_0], eax
0x898C79: ldmxcsr [esp+10h+arg_0]
0x898C7E: mov     eax, [esp+10h+var_8]
0x898C82: pop     edi
0x898C83: pop     esi
0x898C84: add     esp, 8
0x898C87: retn    4
