0x9433A0: push    ebx
0x9433A1: push    edi
0x9433A2: mov     edi, ecx
0x9433A4: mov     ecx, [edi+8]
0x9433A7: mov     eax, [ecx]
0x9433A9: mov     ebx, [edi+0Ch]
0x9433AC: call    dword ptr [eax+20h]
0x9433AF: test    ebx, ebx
0x9433B1: jle     short loc_9433D9
0x9433B3: push    esi
0x9433B4: mov     esi, [esp+0Ch+arg_0]
0x9433B8: jmp     short loc_9433C0
0x9433BA: align 10h
0x9433C0: mov     [esi], eax
0x9433C2: mov     dword ptr [esi+4], 0
0x9433C9: mov     ecx, [edi+8]
0x9433CC: mov     edx, [ecx]
0x9433CE: push    eax
0x9433CF: add     esi, 10h
0x9433D2: call    dword ptr [edx+24h]
0x9433D5: dec     ebx
0x9433D6: jnz     short loc_9433C0
0x9433D8: pop     esi
0x9433D9: pop     edi
0x9433DA: pop     ebx
0x9433DB: retn    4
