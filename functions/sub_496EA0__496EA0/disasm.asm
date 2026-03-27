0x496EA0: sub     esp, 8
0x496EA3: push    ebx
0x496EA4: push    ebp
0x496EA5: push    esi
0x496EA6: mov     esi, ecx
0x496EA8: push    edi
0x496EA9: mov     edi, [esp+18h+arg_0]
0x496EAD: mov     bl, 1
0x496EAF: lea     ebp, [esi+80h]
0x496EB5: jmp     short loc_496EC0
0x496EB7: align 10h
0x496EC0: push    offset unk_A2F830; lpCriticalSection
0x496EC5: mov     ecx, ebp
0x496EC7: call    NiEnterCriticalSection
0x496ECC: xor     eax, eax
0x496ECE: mov     [esp+18h+var_8], eax
0x496ED2: mov     [esp+18h+var_4], eax
0x496ED6: lea     eax, [esp+18h+var_8]
0x496EDA: push    eax
0x496EDB: push    edi
0x496EDC: mov     ecx, esi
0x496EDE: call    sub_496DF0
0x496EE3: test    al, al
0x496EE5: jnz     short loc_496EF6
0x496EE7: mov     ebp, 1
0x496EEC: call    dword ptr ds:0A2808Ch
0x496EF2: push    ebp
0x496EF3: push    eax
0x496EF4: jmp     short loc_496F0D
0x496EF6: call    dword ptr ds:0A2808Ch
0x496EFC: mov     ecx, [esp+18h+var_8]
0x496F00: cmp     ecx, eax
0x496F02: jnz     short loc_496F17
0x496F04: mov     eax, [esp+18h+var_4]
0x496F08: add     eax, 1
0x496F0B: push    eax
0x496F0C: push    ecx
0x496F0D: push    edi
0x496F0E: mov     ecx, esi
0x496F10: call    sub_496D50
0x496F15: xor     bl, bl
0x496F17: lea     ebp, [esi+80h]
0x496F1D: mov     ecx, ebp; lpCriticalSection
0x496F1F: call    NiLeaveCriticalSection_0
0x496F24: test    bl, bl
0x496F26: jz      short loc_496F3B
0x496F28: mov     ecx, [esi+100h]
0x496F2E: push    1; char
0x496F30: push    ecx; dwMilliseconds
0x496F31: call    sub_498EE0
0x496F36: add     esp, 8
0x496F39: jmp     short loc_496EC0
0x496F3B: pop     edi
0x496F3C: pop     esi
0x496F3D: pop     ebp
0x496F3E: pop     ebx
0x496F3F: add     esp, 8
0x496F42: retn    4
