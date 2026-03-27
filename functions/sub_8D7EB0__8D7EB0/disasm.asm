0x8D7EB0: sub     esp, 10h
0x8D7EB3: mov     eax, [esp+10h+arg_C]
0x8D7EB7: push    ebx
0x8D7EB8: push    ebp
0x8D7EB9: mov     ebp, ecx
0x8D7EBB: mov     ecx, eax
0x8D7EBD: mov     edx, [ecx]
0x8D7EBF: mov     [esp+18h+var_10], edx
0x8D7EC3: mov     edx, [ecx+4]
0x8D7EC6: mov     [esp+18h+var_C], edx
0x8D7ECA: mov     edx, [ecx+8]
0x8D7ECD: mov     ecx, [ecx+0Ch]
0x8D7ED0: push    esi
0x8D7ED1: mov     esi, [esp+1Ch+arg_8]
0x8D7ED5: mov     ebx, [esi+74h]
0x8D7ED8: mov     [esp+1Ch+var_4], ecx
0x8D7EDC: mov     ecx, [eax]
0x8D7EDE: push    edi
0x8D7EDF: mov     [esp+20h+var_8], edx
0x8D7EE3: lea     edi, [ebx+10h]
0x8D7EE6: mov     edx, edi
0x8D7EE8: mov     [edx], ecx
0x8D7EEA: mov     ecx, [eax+4]
0x8D7EED: mov     [edx+4], ecx
0x8D7EF0: mov     ecx, [eax+8]
0x8D7EF3: mov     [edx+8], ecx
0x8D7EF6: mov     eax, [eax+0Ch]
0x8D7EF9: mov     [edx+0Ch], eax
0x8D7EFC: mov     ecx, [esi+88h]
0x8D7F02: mov     edx, [esp+20h+arg_0]
0x8D7F06: inc     ecx
0x8D7F07: mov     [esi+88h], ecx
0x8D7F0D: mov     ecx, [esp+20h+arg_4]
0x8D7F11: push    esi
0x8D7F12: push    ecx
0x8D7F13: push    edx
0x8D7F14: call    sub_8D7400
0x8D7F19: mov     eax, [esp+2Ch+arg_4]
0x8D7F1D: mov     ecx, [esp+2Ch+arg_0]
0x8D7F21: add     esp, 0Ch
0x8D7F24: push    offset sub_8D6D80
0x8D7F29: push    ebx
0x8D7F2A: push    eax
0x8D7F2B: push    ecx
0x8D7F2C: mov     ecx, ebp
0x8D7F2E: call    sub_8D72F0
0x8D7F33: dec     dword ptr [esi+88h]
0x8D7F39: jnz     short loc_8D7F56
0x8D7F3B: mov     eax, [esi+84h]
0x8D7F41: test    eax, eax
0x8D7F43: jz      short loc_8D7F56
0x8D7F45: mov     al, [esi+90h]
0x8D7F4B: test    al, al
0x8D7F4D: jnz     short loc_8D7F56
0x8D7F4F: mov     ecx, esi
0x8D7F51: call    sub_899210
0x8D7F56: mov     edx, [esp+20h+var_10]
0x8D7F5A: mov     eax, [esp+20h+var_C]
0x8D7F5E: mov     ecx, [esp+20h+var_8]
0x8D7F62: mov     [edi], edx
0x8D7F64: mov     edx, [esp+20h+var_4]
0x8D7F68: mov     [edi+4], eax
0x8D7F6B: mov     [edi+8], ecx
0x8D7F6E: mov     [edi+0Ch], edx
0x8D7F71: pop     edi
0x8D7F72: pop     esi
0x8D7F73: pop     ebp
0x8D7F74: pop     ebx
0x8D7F75: add     esp, 10h
0x8D7F78: retn    10h
