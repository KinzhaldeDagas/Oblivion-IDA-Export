0x5F44BA: mov     eax, [esp+arg_18]
0x5F44BE: test    eax, eax
0x5F44C0: jnz     short loc_5F44D8
0x5F44C2: mov     eax, [ebx]
0x5F44C4: mov     edx, [eax+30h]
0x5F44C7: call    edx
0x5F44C9: test    eax, eax
0x5F44CB: jnz     short loc_5F44E0
0x5F44CD: pop     edi
0x5F44CE: pop     esi
0x5F44CF: xor     al, al
0x5F44D1: pop     ebx
0x5F44D2: add     esp, 0Ch
0x5F44D5: retn    10h
0x5F44D8: mov     edi, eax
0x5F44DA: mov     [esp+arg_C], edi
0x5F44DE: jmp     short Actor_MagicCaster_IsMagicItemUseable___CheckGodMode
0x5F44E0: mov     eax, [ebx]
0x5F44E2: mov     edx, [eax+30h]
0x5F44E5: mov     ecx, ebx
0x5F44E7: call    edx
0x5F44E9: mov     [esp+arg_C], eax
0x5F44ED: mov     edi, eax
