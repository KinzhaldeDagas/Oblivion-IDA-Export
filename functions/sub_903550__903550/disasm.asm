0x903550: sub     esp, 14h
0x903553: push    ebx
0x903554: push    ebp
0x903555: push    esi
0x903556: push    edi
0x903557: mov     edi, large fs:2Ch
0x90355E: mov     ebx, ecx
0x903560: mov     ecx, ds:0BA9DE4h
0x903566: mov     eax, [edi+ecx*4]
0x903569: mov     edx, [eax+1A4h]
0x90356F: cmp     edx, [eax+1A8h]
0x903575: jnb     short loc_90359B
0x903577: mov     esi, eax
0x903579: mov     ecx, [esi+1A4h]
0x90357F: mov     dword ptr [ecx], offset aTtlistagent; "TtListAgent"
0x903585: rdtsc
0x903587: mov     [esp+24h+var_14], eax
0x90358B: mov     eax, [esp+24h+var_14]
0x90358F: mov     [ecx+4], eax
0x903592: add     ecx, 0Ch
0x903595: mov     [esi+1A4h], ecx
0x90359B: mov     eax, [esp+24h+arg_0]
0x90359F: mov     ecx, [eax+8]
0x9035A2: mov     ebp, [eax]
0x9035A4: mov     [esp+24h+var_4], eax
0x9035A8: mov     eax, [ebx+10h]
0x9035AB: xor     esi, esi
0x9035AD: test    eax, eax
0x9035AF: mov     [esp+24h+var_8], ecx
0x9035B3: jle     short loc_9035FF
0x9035B5: mov     edi, [esp+24h+arg_C]
0x9035B9: lea     esp, [esp+0]
0x9035C0: mov     edx, [ebp+10h]
0x9035C3: mov     eax, [edx+esi*8]
0x9035C6: mov     ecx, [ebx+0Ch]
0x9035C9: mov     [esp+24h+var_10], eax
0x9035CD: mov     eax, [esp+24h+arg_8]
0x9035D1: push    edi
0x9035D2: push    eax
0x9035D3: mov     eax, [esp+2Ch+arg_4]
0x9035D7: mov     [esp+2Ch+var_C], esi
0x9035DB: mov     ecx, [ecx+esi*4]
0x9035DE: mov     edx, [ecx]
0x9035E0: push    eax
0x9035E1: lea     eax, [esp+30h+var_10]
0x9035E5: push    eax
0x9035E6: call    dword ptr [edx+8]
0x9035E9: mov     al, [edi+4]
0x9035EC: test    al, al
0x9035EE: jnz     short loc_9035F8
0x9035F0: mov     eax, [ebx+10h]
0x9035F3: inc     esi
0x9035F4: cmp     esi, eax
0x9035F6: jl      short loc_9035C0
0x9035F8: mov     edi, large fs:2Ch
0x9035FF: mov     ecx, ds:0BA9DE4h
0x903605: mov     eax, [edi+ecx*4]
0x903608: mov     edx, [eax+1A4h]
0x90360E: cmp     edx, [eax+1A8h]
0x903614: jnb     short loc_90363A
0x903616: mov     edi, eax
0x903618: mov     ecx, [edi+1A4h]
0x90361E: mov     dword ptr [ecx], offset aEt; "Et"
0x903624: rdtsc
0x903626: mov     [esp+24h+arg_0], eax
0x90362A: mov     eax, [esp+24h+arg_0]
0x90362E: mov     [ecx+4], eax
0x903631: add     ecx, 0Ch
0x903634: mov     [edi+1A4h], ecx
0x90363A: pop     edi
0x90363B: pop     esi
0x90363C: pop     ebp
0x90363D: pop     ebx
0x90363E: add     esp, 14h
0x903641: retn    10h
