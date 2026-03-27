0x947C50: sub     esp, 18h
0x947C53: push    ebx
0x947C54: push    ebp
0x947C55: push    esi
0x947C56: mov     ebp, ecx
0x947C58: mov     ecx, [ebp+18h]; lpCriticalSection
0x947C5B: push    edi
0x947C5C: mov     [esp+28h+var_18], ebp
0x947C60: xor     esi, esi
0x947C62: mov     byte ptr [esp+28h+var_14], 0
0x947C67: call    sub_8A7720
0x947C6C: mov     eax, [ebp+10h]
0x947C6F: xor     ebx, ebx
0x947C71: test    eax, eax
0x947C73: jle     short loc_947CB9
0x947C75: xor     edi, edi
0x947C77: jmp     short loc_947C80
0x947C79: align 10h
0x947C80: mov     eax, [ebp+0Ch]
0x947C83: mov     ecx, [esp+28h+arg_0]
0x947C87: mov     eax, [edi+eax]
0x947C8A: push    ecx
0x947C8B: push    eax
0x947C8C: call    sub_8B1770
0x947C91: add     esp, 8
0x947C94: test    eax, eax
0x947C96: jnz     short loc_947CA2
0x947C98: mov     esi, [ebp+0Ch]
0x947C9B: add     esi, edi
0x947C9D: mov     byte ptr [esp+28h+var_14], 1
0x947CA2: mov     eax, [ebp+10h]
0x947CA5: inc     ebx
0x947CA6: add     edi, 0Ch
0x947CA9: cmp     ebx, eax
0x947CAB: jl      short loc_947C80
0x947CAD: mov     al, byte ptr [esp+28h+var_14]
0x947CB1: test    al, al
0x947CB3: jnz     loc_947EC3
0x947CB9: mov     ebx, [ebp+10h]
0x947CBC: lea     edi, [ebp+0Ch]
0x947CBF: lea     ecx, [ebx+1]
0x947CC2: cmp     ecx, ebx
0x947CC4: jge     short loc_947CF5
0x947CC6: lea     esi, [ecx+ecx*2]
0x947CC9: mov     ebp, ebx
0x947CCB: shl     esi, 2
0x947CCE: sub     ebp, ecx
0x947CD0: mov     edx, [edi]
0x947CD2: mov     ecx, [esi+edx]
0x947CD5: mov     eax, [ecx-4]
0x947CD8: sub     ecx, 0Ch
0x947CDB: dec     eax
0x947CDC: mov     [ecx+8], eax
0x947CDF: jns     short loc_947CE6
0x947CE1: call    sub_8B1930
0x947CE6: add     esi, 0Ch
0x947CE9: dec     ebp
0x947CEA: jnz     short loc_947CD0
0x947CEC: mov     ebp, [esp+28h+var_18]
0x947CF0: jmp     loc_947E26
0x947CF5: mov     esi, [edi+8]
0x947CF8: mov     eax, esi
0x947CFA: and     eax, 3FFFFFFFh
0x947CFF: cmp     ecx, eax
0x947D01: mov     [esp+28h+var_10], esi
0x947D05: jle     loc_947DFA
0x947D0B: add     eax, eax
0x947D0D: cmp     ecx, eax
0x947D0F: jl      short loc_947D13
0x947D11: mov     eax, ecx
0x947D13: test    eax, eax
0x947D15: mov     ebp, [edi]
0x947D17: mov     [esp+28h+var_C], ebp
0x947D1B: mov     dword ptr [edi], 0
0x947D21: mov     dword ptr [edi+4], 0
0x947D28: mov     dword ptr [edi+8], 80000000h
0x947D2F: jle     short loc_947D47
0x947D31: xor     ecx, ecx
0x947D33: test    eax, eax
0x947D35: setl    cl
0x947D38: push    0Ch
0x947D3A: dec     ecx
0x947D3B: and     eax, ecx
0x947D3D: push    eax
0x947D3E: push    edi
0x947D3F: call    sub_8A6E40
0x947D44: add     esp, 0Ch
0x947D47: test    ebx, ebx
0x947D49: mov     eax, [edi]
0x947D4B: jle     short loc_947D89
0x947D4D: mov     esi, ebp
0x947D4F: mov     edx, ebp
0x947D51: lea     ecx, [eax+4]
0x947D54: sub     esi, eax
0x947D56: mov     ebp, ebx
0x947D58: lea     eax, [ecx-4]
0x947D5B: test    eax, eax
0x947D5D: jz      short loc_947D78
0x947D5F: mov     eax, [edx]
0x947D61: sub     eax, 0Ch
0x947D64: inc     dword ptr [eax+8]
0x947D67: add     eax, 0Ch
0x947D6A: mov     [ecx-4], eax
0x947D6D: mov     eax, [esi+ecx]
0x947D70: mov     [ecx], eax
0x947D72: mov     eax, [edx+8]
0x947D75: mov     [ecx+4], eax
0x947D78: add     ecx, 0Ch
0x947D7B: add     edx, 0Ch
0x947D7E: dec     ebp
0x947D7F: jnz     short loc_947D58
0x947D81: mov     ebp, [esp+28h+var_C]
0x947D85: mov     esi, [esp+28h+var_10]
0x947D89: test    ebx, ebx
0x947D8B: mov     [edi+4], ebx
0x947D8E: jle     short loc_947DBB
0x947D90: mov     esi, ebp
0x947D92: mov     [esp+28h+var_14], ebx
0x947D96: mov     ecx, [esi]
0x947D98: mov     eax, [ecx-4]
0x947D9B: sub     ecx, 0Ch
0x947D9E: dec     eax
0x947D9F: mov     [ecx+8], eax
0x947DA2: jns     short loc_947DA9
0x947DA4: call    sub_8B1930
0x947DA9: mov     eax, [esp+28h+var_14]
0x947DAD: add     esi, 0Ch
0x947DB0: dec     eax
0x947DB1: mov     [esp+28h+var_14], eax
0x947DB5: jnz     short loc_947D96
0x947DB7: mov     esi, [esp+28h+var_10]
0x947DBB: test    esi, esi
0x947DBD: js      short loc_947DF6
0x947DBF: mov     ecx, ds:0BA9DE4h
0x947DC5: mov     edx, large fs:2Ch
0x947DCC: mov     eax, [edx+ecx*4]
0x947DCF: mov     ecx, [eax+19Ch]
0x947DD5: test    ecx, ecx
0x947DD7: jnz     short loc_947DDF
0x947DD9: mov     ecx, ds:0BA7D9Ch
0x947DDF: and     esi, 3FFFFFFFh
0x947DE5: mov     eax, esi
0x947DE7: lea     edx, [eax+eax*2]
0x947DEA: push    14h
0x947DEC: shl     edx, 2
0x947DEF: push    edx
0x947DF0: push    ebp
0x947DF1: call    sub_8A75D0
0x947DF6: mov     ebp, [esp+28h+var_18]
0x947DFA: mov     eax, [edi]
0x947DFC: lea     ecx, [ebx+1]
0x947DFF: cmp     ebx, ecx
0x947E01: jge     short loc_947E26
0x947E03: lea     edx, [ebx+ebx*2]
0x947E06: lea     eax, [eax+edx*4]
0x947E09: sub     ecx, ebx
0x947E0B: jmp     short loc_947E10
0x947E0D: align 10h
0x947E10: test    eax, eax
0x947E12: jz      short loc_947E20
0x947E14: inc     dword ptr ds:0BA7FC0h
0x947E1A: mov     dword ptr [eax], offset unk_BA7FC4
0x947E20: add     eax, 0Ch
0x947E23: dec     ecx
0x947E24: jnz     short loc_947E10
0x947E26: mov     ecx, [edi]
0x947E28: lea     eax, [ebx+1]
0x947E2B: mov     [edi+4], eax
0x947E2E: lea     eax, [ebx+ebx*2]
0x947E31: mov     ebx, [esp+28h+arg_0]
0x947E35: test    ebx, ebx
0x947E37: lea     esi, [ecx+eax*4]
0x947E3A: jz      short loc_947E94
0x947E3C: cmp     byte ptr [ebx], 0
0x947E3F: jz      short loc_947E94
0x947E41: push    ebx
0x947E42: call    sub_8B1860
0x947E47: mov     edi, eax
0x947E49: mov     eax, [esi]
0x947E4B: mov     ecx, [eax-8]
0x947E4E: add     esp, 4
0x947E51: cmp     ecx, edi
0x947E53: jl      short loc_947E5C
0x947E55: mov     ecx, [eax-4]
0x947E58: test    ecx, ecx
0x947E5A: jle     short loc_947E7D
0x947E5C: mov     ecx, [eax-4]
0x947E5F: add     eax, 0FFFFFFF4h
0x947E62: dec     ecx
0x947E63: mov     [eax+8], ecx
0x947E66: jns     short loc_947E6F
0x947E68: mov     ecx, eax
0x947E6A: call    sub_8B1930
0x947E6F: push    edi
0x947E70: call    sub_8B1950
0x947E75: add     esp, 4
0x947E78: add     eax, 0Ch
0x947E7B: mov     [esi], eax
0x947E7D: mov     eax, [esi]
0x947E7F: lea     edx, [edi+1]
0x947E82: push    edx
0x947E83: push    ebx
0x947E84: push    eax
0x947E85: call    sub_8B1890
0x947E8A: mov     ecx, [esi]
0x947E8C: add     esp, 0Ch
0x947E8F: mov     [ecx-0Ch], edi
0x947E92: jmp     short loc_947EB3
0x947E94: mov     ecx, [esi]
0x947E96: mov     eax, [ecx-4]
0x947E99: sub     ecx, 0Ch
0x947E9C: dec     eax
0x947E9D: mov     [ecx+8], eax
0x947EA0: jns     short loc_947EA7
0x947EA2: call    sub_8B1930
0x947EA7: inc     dword ptr ds:0BA7FC0h
0x947EAD: mov     dword ptr [esi], offset unk_BA7FC4
0x947EB3: mov     edx, [esp+28h+arg_4]
0x947EB7: mov     [esi+4], edx
0x947EBA: mov     eax, [ebp+8]
0x947EBD: mov     [esi+8], eax
0x947EC0: inc     dword ptr [ebp+8]
0x947EC3: mov     ecx, [ebp+18h]
0x947EC6: push    ecx; lpCriticalSection
0x947EC7: call    dword ptr ds:0A28074h
0x947ECD: mov     eax, [esi+8]
0x947ED0: pop     edi
0x947ED1: pop     esi
0x947ED2: pop     ebp
0x947ED3: pop     ebx
0x947ED4: add     esp, 18h
0x947ED7: retn    8
