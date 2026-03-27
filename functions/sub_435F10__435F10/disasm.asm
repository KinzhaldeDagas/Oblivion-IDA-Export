0x435F10: push    ebx
0x435F11: mov     ebx, [esp+4+arg_8]
0x435F15: push    ebp
0x435F16: mov     ebp, [esp+8+arg_0]
0x435F1A: push    esi
0x435F1B: add     ebp, ebp
0x435F1D: push    edi
0x435F1E: mov     edi, [esp+10h+arg_4]
0x435F22: mov     esi, ecx
0x435F24: add     ebp, ebp
0x435F26: mov     eax, [esi]
0x435F28: mov     ecx, [eax+0Ch]
0x435F2B: add     ecx, ebp
0x435F2D: mov     [esi+10h], ecx
0x435F30: mov     edx, ecx
0x435F32: mov     eax, [edx]
0x435F34: mov     [esi+14h], eax
0x435F37: mov     ecx, [esi+14h]
0x435F3A: mov     edx, [esi+8]
0x435F3D: and     ecx, 0FFFFFFFEh
0x435F40: mov     [edx], ecx
0x435F42: mov     eax, [esi+14h]
0x435F45: and     eax, 0FFFFFFFEh
0x435F48: mov     [esp+10h+arg_0], eax
0x435F4C: mov     eax, [esp+10h+arg_0]
0x435F50: and     eax, 0FFFFFFFEh
0x435F53: mov     [esp+10h+arg_0], eax
0x435F57: mov     eax, [esi+10h]
0x435F5A: mov     eax, [eax]
0x435F5C: mov     ecx, [esp+10h+arg_0]
0x435F60: cmp     eax, ecx
0x435F62: jnz     short loc_435F26
0x435F64: mov     edx, [esi+14h]
0x435F67: test    edx, 0FFFFFFFEh
0x435F6D: jz      short loc_435FAF
0x435F6F: mov     ecx, [esi]
0x435F71: mov     eax, [ecx]
0x435F73: mov     edx, [edi]
0x435F75: mov     eax, [eax+20h]
0x435F78: push    edx
0x435F79: call    eax
0x435F7B: mov     eax, [esi+14h]
0x435F7E: mov     ecx, [esi]
0x435F80: mov     edx, [ecx]
0x435F82: mov     edx, [edx+24h]
0x435F85: and     eax, 0FFFFFFFEh
0x435F88: mov     eax, [eax]
0x435F8A: push    eax
0x435F8B: call    edx
0x435F8D: mov     [edi], eax
0x435F8F: mov     eax, [esi+14h]
0x435F92: and     eax, 0FFFFFFFEh
0x435F95: mov     ecx, [eax+4]
0x435F98: mov     [ebx], ecx
0x435F9A: mov     ecx, [esi+14h]
0x435F9D: and     ecx, 0FFFFFFFEh
0x435FA0: mov     edx, [ecx+8]
0x435FA3: mov     al, 1
0x435FA5: test    al, dl
0x435FA7: jnz     loc_435F26
0x435FAD: jmp     short loc_435FB1
0x435FAF: xor     al, al
0x435FB1: mov     ecx, [esi+4]
0x435FB4: mov     dword ptr [ecx], 0
0x435FBA: mov     edx, [esi+8]
0x435FBD: pop     edi
0x435FBE: mov     dword ptr [edx], 0
0x435FC4: mov     ecx, [esi+0Ch]
0x435FC7: pop     esi
0x435FC8: pop     ebp
0x435FC9: mov     dword ptr [ecx], 0
0x435FCF: pop     ebx
0x435FD0: retn    0Ch
