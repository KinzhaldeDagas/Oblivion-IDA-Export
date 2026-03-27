0x568F30: push    ecx
0x568F31: push    ebx
0x568F32: push    esi
0x568F33: mov     ebx, ecx
0x568F35: cmp     dword ptr [ebx+4], 0
0x568F39: push    edi
0x568F3A: lea     edi, [ebx+4]
0x568F3D: mov     [esp+10h+var_4], ebx
0x568F41: jz      short loc_568F57
0x568F43: mov     eax, [edi]
0x568F45: mov     esi, [eax+4]
0x568F48: push    eax
0x568F49: call    FormHeapFree
0x568F4E: add     esp, 4
0x568F51: test    esi, esi
0x568F53: mov     [edi], esi
0x568F55: jnz     short loc_568F43
0x568F57: mov     eax, [esp+10h+arg_0]
0x568F5B: mov     dword ptr [ebx], 0
0x568F61: cmp     dword ptr [eax+4], 0
0x568F65: mov     [esp+10h+arg_0], eax
0x568F69: jnz     short loc_568F70
0x568F6B: cmp     dword ptr [eax], 0
0x568F6E: jz      short loc_568FC9
0x568F70: mov     eax, [esp+10h+arg_0]
0x568F74: mov     ebx, [eax]
0x568F76: test    ebx, ebx
0x568F78: jz      short loc_568FBA
0x568F7A: cmp     dword ptr [edi], 0
0x568F7D: mov     esi, [esp+10h+var_4]
0x568F81: jz      short loc_568F90
0x568F83: mov     eax, edi
0x568F85: mov     esi, [eax]
0x568F87: cmp     dword ptr [esi+4], 0
0x568F8B: lea     eax, [esi+4]
0x568F8E: jnz     short loc_568F85
0x568F90: cmp     dword ptr [esi], 0
0x568F93: jz      short loc_568FB8
0x568F95: push    8; Size
0x568F97: call    FormHeapAlloc
0x568F9C: add     esp, 4
0x568F9F: test    eax, eax
0x568FA1: jz      short loc_568FB1
0x568FA3: mov     [eax], ebx
0x568FA5: mov     dword ptr [eax+4], 0
0x568FAC: mov     [esi+4], eax
0x568FAF: jmp     short loc_568FBA
0x568FB1: xor     eax, eax
0x568FB3: mov     [esi+4], eax
0x568FB6: jmp     short loc_568FBA
0x568FB8: mov     [esi], ebx
0x568FBA: mov     ecx, [esp+10h+arg_0]
0x568FBE: mov     eax, [ecx+4]
0x568FC1: test    eax, eax
0x568FC3: mov     [esp+10h+arg_0], eax
0x568FC7: jnz     short loc_568F70
0x568FC9: pop     edi
0x568FCA: pop     esi
0x568FCB: pop     ebx
0x568FCC: pop     ecx
0x568FCD: retn    4
