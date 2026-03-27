0x7C6DE0: sub     esp, 10h
0x7C6DE3: push    ebp
0x7C6DE4: mov     ebp, ecx
0x7C6DE6: mov     eax, [ebp+10Ch]
0x7C6DEC: test    eax, eax
0x7C6DEE: mov     [esp+14h+var_C], ebp
0x7C6DF2: mov     [esp+14h+var_10], 0
0x7C6DFA: lea     ecx, [ebp+0F4h]
0x7C6E00: jnz     short loc_7C6E1C
0x7C6E02: lea     eax, [ebp+114h]
0x7C6E08: push    eax
0x7C6E09: call    sub_749800
0x7C6E0E: mov     ecx, [ebp+0F8h]
0x7C6E14: mov     [ebp+10Ch], ecx
0x7C6E1A: jmp     short loc_7C6E29
0x7C6E1C: mov     edx, [ebp+0F8h]
0x7C6E22: push    edx
0x7C6E23: push    eax
0x7C6E24: call    sub_7C58F0
0x7C6E29: mov     eax, [ebp+108h]
0x7C6E2F: test    eax, eax
0x7C6E31: lea     ecx, [ebp+0F4h]
0x7C6E37: jnz     short loc_7C6E53
0x7C6E39: lea     eax, [ebp+110h]
0x7C6E3F: push    eax
0x7C6E40: call    sub_749800
0x7C6E45: mov     ecx, [ebp+0F8h]
0x7C6E4B: mov     [ebp+108h], ecx
0x7C6E51: jmp     short loc_7C6E60
0x7C6E53: mov     edx, [ebp+0F8h]
0x7C6E59: push    edx
0x7C6E5A: push    eax
0x7C6E5B: call    sub_7C58F0
0x7C6E60: mov     eax, [ebp+10Ch]
0x7C6E66: test    eax, eax
0x7C6E68: jz      loc_7C6FE8
0x7C6E6E: push    esi
0x7C6E6F: mov     esi, [eax]
0x7C6E71: test    esi, esi
0x7C6E73: jz      loc_7C6FE7
0x7C6E79: push    ebx
0x7C6E7A: push    edi
0x7C6E7B: jmp     short loc_7C6E84
0x7C6E7D: align 10h
0x7C6E80: mov     esi, [esp+20h+var_8]
0x7C6E84: mov     edi, [esi+8]
0x7C6E87: test    edi, edi
0x7C6E89: mov     ecx, [esi]
0x7C6E8B: lea     eax, [esi+8]
0x7C6E8E: mov     [esp+20h+var_8], ecx
0x7C6E92: jz      loc_7C6FDA
0x7C6E98: fld     dword ptr [edi+0DCh]
0x7C6E9E: fcomp   qword ptr ds:0A2FC80h
0x7C6EA4: fnstsw  ax
0x7C6EA6: test    ah, 41h
0x7C6EA9: jp      short loc_7C6F2A
0x7C6EAB: fld     dword ptr [edi+0E0h]
0x7C6EB1: fld     dword ptr ds:0B2C680h
0x7C6EB7: fcompp
0x7C6EB9: fnstsw  ax
0x7C6EBB: test    ah, 41h
0x7C6EBE: jnz     short loc_7C6F2A
0x7C6EC0: mov     ecx, [ebp+108h]
0x7C6EC6: cmp     esi, ecx
0x7C6EC8: jz      loc_7C6FDA
0x7C6ECE: cmp     [ebp+0F8h], esi
0x7C6ED4: jnz     short loc_7C6EDE
0x7C6ED6: mov     edx, [esi]
0x7C6ED8: mov     [ebp+0F8h], edx
0x7C6EDE: cmp     [ebp+0F8h], ecx
0x7C6EE4: jnz     short loc_7C6EEC
0x7C6EE6: mov     [ebp+0F8h], esi
0x7C6EEC: cmp     [ebp+0FCh], esi
0x7C6EF2: jnz     short loc_7C6EFD
0x7C6EF4: mov     eax, [esi+4]
0x7C6EF7: mov     [ebp+0FCh], eax
0x7C6EFD: mov     eax, [esi]
0x7C6EFF: test    eax, eax
0x7C6F01: jz      short loc_7C6F09
0x7C6F03: mov     edx, [esi+4]
0x7C6F06: mov     [eax+4], edx
0x7C6F09: mov     eax, [esi+4]
0x7C6F0C: test    eax, eax
0x7C6F0E: jz      short loc_7C6F14
0x7C6F10: mov     edx, [esi]
0x7C6F12: mov     [eax], edx
0x7C6F14: mov     eax, [ecx+4]
0x7C6F17: test    eax, eax
0x7C6F19: mov     [esi+4], eax
0x7C6F1C: mov     [esi], ecx
0x7C6F1E: jz      short loc_7C6F22
0x7C6F20: mov     [eax], esi
0x7C6F22: mov     [ecx+4], esi
0x7C6F25: jmp     loc_7C6FDA
0x7C6F2A: lea     ecx, [esp+20h+var_4]
0x7C6F2E: push    ecx
0x7C6F2F: mov     ecx, edi
0x7C6F31: call    sub_405AD0
0x7C6F36: mov     edx, [eax]
0x7C6F38: or      [esp+20h+var_10], 1
0x7C6F3D: test    byte ptr [edx+18h], 1
0x7C6F41: jnz     short loc_7C6F6F
0x7C6F43: fld     dword ptr [edi+0DCh]
0x7C6F49: fcomp   qword ptr ds:0A6E700h
0x7C6F4F: fnstsw  ax
0x7C6F51: test    ah, 1
0x7C6F54: jnz     short loc_7C6F6B
0x7C6F56: fld     dword ptr [edi+0E0h]
0x7C6F5C: fld     dword ptr ds:0B2C680h
0x7C6F62: fcompp
0x7C6F64: fnstsw  ax
0x7C6F66: test    ah, 41h
0x7C6F69: jz      short loc_7C6F6F
0x7C6F6B: mov     bl, 1
0x7C6F6D: jmp     short loc_7C6F71
0x7C6F6F: xor     bl, bl
0x7C6F71: test    byte ptr [esp+20h+var_10], 1
0x7C6F76: jz      short loc_7C6FA8
0x7C6F78: mov     eax, [esp+20h+var_4]
0x7C6F7C: and     [esp+20h+var_10], 0FFFFFFFEh
0x7C6F81: test    eax, eax
0x7C6F83: jz      short loc_7C6FA8
0x7C6F85: mov     ebp, eax
0x7C6F87: add     eax, 4
0x7C6F8A: push    eax; lpAddend
0x7C6F8B: call    dword ptr ds:0A2807Ch
0x7C6F91: test    eax, eax
0x7C6F93: jnz     short loc_7C6FA4
0x7C6F95: test    ebp, ebp
0x7C6F97: jz      short loc_7C6FA4
0x7C6F99: mov     eax, [ebp+0]
0x7C6F9C: mov     edx, [eax]
0x7C6F9E: push    1
0x7C6FA0: mov     ecx, ebp
0x7C6FA2: call    edx
0x7C6FA4: mov     ebp, [esp+20h+var_C]
0x7C6FA8: test    bl, bl
0x7C6FAA: jz      short loc_7C6FDA
0x7C6FAC: cmp     edi, [esp+20h+arg_0]
0x7C6FB0: jnz     short loc_7C6FC7
0x7C6FB2: mov     eax, [ebp+108h]
0x7C6FB8: push    eax
0x7C6FB9: push    esi
0x7C6FBA: lea     ecx, [ebp+0F4h]
0x7C6FC0: call    sub_7C5950
0x7C6FC5: jmp     short loc_7C6FDA
0x7C6FC7: mov     ecx, [ebp+10Ch]
0x7C6FCD: push    ecx
0x7C6FCE: push    esi
0x7C6FCF: lea     ecx, [ebp+0F4h]
0x7C6FD5: call    sub_7C58F0
0x7C6FDA: cmp     [esp+20h+var_8], 0
0x7C6FDF: jnz     loc_7C6E80
0x7C6FE5: pop     edi
0x7C6FE6: pop     ebx
0x7C6FE7: pop     esi
0x7C6FE8: pop     ebp
0x7C6FE9: add     esp, 10h
0x7C6FEC: retn    4
