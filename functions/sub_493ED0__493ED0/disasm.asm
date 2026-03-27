0x493ED0: sub     esp, 8
0x493ED3: push    ebp
0x493ED4: mov     ebp, [esp+0Ch+arg_8]
0x493ED8: test    ebp, ebp
0x493EDA: jbe     short loc_493F59
0x493EDC: push    ebx
0x493EDD: push    esi
0x493EDE: mov     esi, [esp+14h+arg_4]
0x493EE2: push    edi
0x493EE3: mov     edi, [esp+18h+arg_0]
0x493EE7: mov     ebx, 1
0x493EEC: lea     esp, [esp+0]
0x493EF0: mov     edx, [edi+4]
0x493EF3: push    ebx
0x493EF4: lea     eax, [esp+1Ch+var_4]
0x493EF8: push    eax
0x493EF9: push    ebx
0x493EFA: lea     ecx, [esp+24h+arg_8]
0x493EFE: push    ecx
0x493EFF: push    edi
0x493F00: mov     [esp+2Ch+var_4], ebx
0x493F04: call    edx
0x493F06: mov     al, byte ptr [esp+2Ch+arg_8]
0x493F0A: add     esp, 14h
0x493F0D: test    al, al
0x493F0F: jz      short loc_493F19
0x493F11: mov     [esi], al
0x493F13: add     esi, ebx
0x493F15: sub     ebp, ebx
0x493F17: jmp     short loc_493F4B
0x493F19: mov     edx, [edi+4]
0x493F1C: push    ebx
0x493F1D: lea     eax, [esp+1Ch+var_4]
0x493F21: push    eax
0x493F22: push    2
0x493F24: lea     ecx, [esp+24h+var_8]
0x493F28: push    ecx
0x493F29: push    edi
0x493F2A: mov     [esp+2Ch+var_4], ebx
0x493F2E: call    edx
0x493F30: movzx   eax, [esp+2Ch+var_8]
0x493F35: push    eax
0x493F36: push    0
0x493F38: push    esi
0x493F39: call    __memset
0x493F3E: movzx   ecx, [esp+38h+var_8]
0x493F43: add     esp, 20h
0x493F46: add     esi, ecx
0x493F48: sub     ebp, 3
0x493F4B: test    ebp, ebp
0x493F4D: ja      short loc_493EF0
0x493F4F: pop     edi
0x493F50: pop     esi
0x493F51: mov     al, bl
0x493F53: pop     ebx
0x493F54: pop     ebp
0x493F55: add     esp, 8
0x493F58: retn
0x493F59: mov     al, 1
0x493F5B: pop     ebp
0x493F5C: add     esp, 8
0x493F5F: retn
