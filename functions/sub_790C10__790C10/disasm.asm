0x790C10: sub     esp, 8
0x790C13: push    ebx
0x790C14: mov     ebx, [esp+0Ch+arg_0]
0x790C18: push    ebp
0x790C19: push    esi
0x790C1A: push    edi
0x790C1B: mov     edi, [esp+18h+arg_4]
0x790C1F: mov     eax, edi
0x790C21: sub     eax, ebx
0x790C23: sar     eax, 2
0x790C26: cmp     eax, 20h ; ' '
0x790C29: jle     short loc_790CA7
0x790C2B: mov     esi, [esp+18h+arg_8]
0x790C2F: nop
0x790C30: test    esi, esi
0x790C32: jle     loc_790CC3
0x790C38: mov     eax, [esp+18h+arg_C]
0x790C3C: push    eax
0x790C3D: push    edi
0x790C3E: lea     ecx, [esp+20h+var_8]
0x790C42: push    ebx
0x790C43: push    ecx
0x790C44: call    sub_7905D0
0x790C49: mov     ebp, [esp+28h+var_4]
0x790C4D: mov     eax, esi
0x790C4F: cdq
0x790C50: sub     eax, edx
0x790C52: sar     eax, 1
0x790C54: mov     esi, eax
0x790C56: cdq
0x790C57: sub     eax, edx
0x790C59: sar     eax, 1
0x790C5B: add     esi, eax
0x790C5D: mov     eax, [esp+28h+var_8]
0x790C61: mov     edx, edi
0x790C63: mov     ecx, eax
0x790C65: sub     edx, ebp
0x790C67: sub     ecx, ebx
0x790C69: and     edx, 0FFFFFFFCh
0x790C6C: and     ecx, 0FFFFFFFCh
0x790C6F: add     esp, 10h
0x790C72: cmp     ecx, edx
0x790C74: jge     short loc_790C87
0x790C76: mov     edx, [esp+18h+arg_C]
0x790C7A: push    edx
0x790C7B: push    esi
0x790C7C: push    eax
0x790C7D: push    ebx
0x790C7E: call    sub_790C10
0x790C83: mov     ebx, ebp
0x790C85: jmp     short loc_790C98
0x790C87: mov     eax, [esp+18h+arg_C]
0x790C8B: push    eax
0x790C8C: push    esi
0x790C8D: push    edi
0x790C8E: push    ebp
0x790C8F: call    sub_790C10
0x790C94: mov     edi, [esp+28h+var_8]
0x790C98: mov     eax, edi
0x790C9A: sub     eax, ebx
0x790C9C: sar     eax, 2
0x790C9F: add     esp, 10h
0x790CA2: cmp     eax, 20h ; ' '
0x790CA5: jg      short loc_790C30
0x790CA7: cmp     eax, 1
0x790CAA: jle     short loc_790CBB
0x790CAC: mov     ecx, [esp+18h+arg_C]
0x790CB0: push    ecx
0x790CB1: push    edi
0x790CB2: push    ebx
0x790CB3: call    sub_790930
0x790CB8: add     esp, 0Ch
0x790CBB: pop     edi
0x790CBC: pop     esi
0x790CBD: pop     ebp
0x790CBE: pop     ebx
0x790CBF: add     esp, 8
0x790CC2: retn
0x790CC3: cmp     eax, 20h ; ' '
0x790CC6: jle     short loc_790CA7
0x790CC8: mov     ecx, edi
0x790CCA: sub     ecx, ebx
0x790CCC: and     ecx, 0FFFFFFFCh
0x790CCF: cmp     ecx, 4
0x790CD2: jle     short loc_790CE7
0x790CD4: mov     edx, [esp+18h+arg_C]
0x790CD8: push    0
0x790CDA: push    0
0x790CDC: push    edx
0x790CDD: push    edi
0x790CDE: push    ebx
0x790CDF: call    sub_790560
0x790CE4: add     esp, 14h
0x790CE7: mov     eax, [esp+18h+arg_C]
0x790CEB: push    eax
0x790CEC: push    edi
0x790CED: push    ebx
0x790CEE: call    sub_790AB0
0x790CF3: add     esp, 0Ch
0x790CF6: pop     edi
0x790CF7: pop     esi
0x790CF8: pop     ebp
0x790CF9: pop     ebx
0x790CFA: add     esp, 8
0x790CFD: retn
