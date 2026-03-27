0x6C8920: push    ecx
0x6C8921: push    ebx
0x6C8922: push    ebp
0x6C8923: push    esi
0x6C8924: push    edi
0x6C8925: mov     edi, [esp+14h+arg_0]
0x6C8929: mov     eax, [edi]
0x6C892B: mov     edx, [eax+2Ch]
0x6C892E: mov     esi, ecx
0x6C8930: mov     ecx, [esi]
0x6C8932: push    ecx
0x6C8933: mov     ecx, edi
0x6C8935: call    edx
0x6C8937: movzx   eax, word ptr [esi+4]
0x6C893B: or      ebp, 0FFFFFFFFh
0x6C893E: cmp     ax, 0FFFFh
0x6C8942: jnz     short loc_6C894A
0x6C8944: mov     [esp+14h+arg_0], ebp
0x6C8948: jmp     short loc_6C8951
0x6C894A: movzx   eax, ax
0x6C894D: mov     [esp+14h+arg_0], eax
0x6C8951: mov     eax, [edi+220h]
0x6C8957: push    1
0x6C8959: lea     ecx, [esp+18h+var_4]
0x6C895D: push    ecx
0x6C895E: mov     ebx, 4
0x6C8963: push    ebx
0x6C8964: lea     edx, [esp+20h+arg_0]
0x6C8968: push    edx
0x6C8969: push    eax
0x6C896A: mov     eax, [eax+8]
0x6C896D: mov     [esp+28h+var_4], ebx
0x6C8971: call    eax
0x6C8973: movzx   eax, word ptr [esi+6]
0x6C8977: add     esp, 14h
0x6C897A: cmp     ax, 0FFFFh
0x6C897E: jnz     short loc_6C8986
0x6C8980: mov     [esp+14h+arg_0], ebp
0x6C8984: jmp     short loc_6C898D
0x6C8986: movzx   ecx, ax
0x6C8989: mov     [esp+14h+arg_0], ecx
0x6C898D: mov     eax, [edi+220h]
0x6C8993: push    1
0x6C8995: lea     edx, [esp+18h+var_4]
0x6C8999: push    edx
0x6C899A: mov     edx, [eax+8]
0x6C899D: push    ebx
0x6C899E: lea     ecx, [esp+20h+arg_0]
0x6C89A2: push    ecx
0x6C89A3: push    eax
0x6C89A4: mov     [esp+28h+var_4], ebx
0x6C89A8: call    edx
0x6C89AA: movzx   eax, word ptr [esi+8]
0x6C89AE: add     esp, 14h
0x6C89B1: cmp     ax, 0FFFFh
0x6C89B5: jnz     short loc_6C89BD
0x6C89B7: mov     [esp+14h+arg_0], ebp
0x6C89BB: jmp     short loc_6C89C4
0x6C89BD: movzx   eax, ax
0x6C89C0: mov     [esp+14h+arg_0], eax
0x6C89C4: mov     eax, [edi+220h]
0x6C89CA: push    1
0x6C89CC: lea     ecx, [esp+18h+var_4]
0x6C89D0: push    ecx
0x6C89D1: push    ebx
0x6C89D2: lea     edx, [esp+20h+arg_0]
0x6C89D6: push    edx
0x6C89D7: push    eax
0x6C89D8: mov     eax, [eax+8]
0x6C89DB: mov     [esp+28h+var_4], ebx
0x6C89DF: call    eax
0x6C89E1: movzx   eax, word ptr [esi+0Ah]
0x6C89E5: add     esp, 14h
0x6C89E8: cmp     ax, 0FFFFh
0x6C89EC: jnz     short loc_6C89F4
0x6C89EE: mov     [esp+14h+arg_0], ebp
0x6C89F2: jmp     short loc_6C89FB
0x6C89F4: movzx   ecx, ax
0x6C89F7: mov     [esp+14h+arg_0], ecx
0x6C89FB: mov     eax, [edi+220h]
0x6C8A01: push    1
0x6C8A03: lea     edx, [esp+18h+var_4]
0x6C8A07: push    edx
0x6C8A08: mov     edx, [eax+8]
0x6C8A0B: push    ebx
0x6C8A0C: lea     ecx, [esp+20h+arg_0]
0x6C8A10: push    ecx
0x6C8A11: push    eax
0x6C8A12: mov     [esp+28h+var_4], ebx
0x6C8A16: call    edx
0x6C8A18: movzx   eax, word ptr [esi+0Ch]
0x6C8A1C: add     esp, 14h
0x6C8A1F: cmp     ax, 0FFFFh
0x6C8A23: jnz     short loc_6C8A2B
0x6C8A25: mov     [esp+14h+arg_0], ebp
0x6C8A29: jmp     short loc_6C8A32
0x6C8A2B: movzx   eax, ax
0x6C8A2E: mov     [esp+14h+arg_0], eax
0x6C8A32: mov     edi, [edi+220h]
0x6C8A38: mov     eax, [edi+8]
0x6C8A3B: push    1
0x6C8A3D: lea     ecx, [esp+18h+var_4]
0x6C8A41: push    ecx
0x6C8A42: push    ebx
0x6C8A43: lea     edx, [esp+20h+arg_0]
0x6C8A47: push    edx
0x6C8A48: push    edi
0x6C8A49: mov     [esp+28h+var_4], ebx
0x6C8A4D: call    eax
0x6C8A4F: add     esp, 14h
0x6C8A52: pop     edi
0x6C8A53: pop     esi
0x6C8A54: pop     ebp
0x6C8A55: pop     ebx
0x6C8A56: pop     ecx
0x6C8A57: retn    4
