0x795ED0: push    ebp
0x795ED1: mov     ebp, esp
0x795ED3: push    0FFFFFFFFh
0x795ED5: push    offset SEH_795ED0
0x795EDA: mov     eax, large fs:0
0x795EE0: push    eax
0x795EE1: sub     esp, 1Ch
0x795EE4: push    ebx
0x795EE5: push    esi
0x795EE6: push    edi
0x795EE7: mov     eax, ds:0B30AACh
0x795EEC: xor     eax, ebp
0x795EEE: push    eax
0x795EEF: lea     eax, [ebp+var_C]
0x795EF2: mov     large fs:0, eax
0x795EF8: mov     [ebp+var_10], esp
0x795EFB: mov     esi, [ebp+arg_8]
0x795EFE: xor     ecx, ecx
0x795F00: mov     [ebp+var_14], esi
0x795F03: mov     [ebp+var_24], ecx
0x795F06: mov     [ebp+var_20], ecx
0x795F09: mov     [ebp+var_1C], ecx
0x795F0C: mov     edi, [ebp+arg_0]
0x795F0F: mov     [ebp+var_4], ecx
0x795F12: mov     bl, 1
0x795F14: cmp     edi, [ebp+arg_4]
0x795F17: mov     byte ptr [ebp+var_4], bl
0x795F1A: jz      short loc_795F8B
0x795F1C: mov     [ebp+arg_0], esi
0x795F1F: mov     [ebp+var_18], esi
0x795F22: cmp     esi, ecx
0x795F24: mov     byte ptr [ebp+var_4], 2
0x795F28: jz      short loc_795F37
0x795F2A: lea     eax, [ebp+var_28]
0x795F2D: push    eax
0x795F2E: mov     ecx, esi
0x795F30: call    sub_7A3580
0x795F35: xor     ecx, ecx
0x795F37: mov     edx, [edi+4]
0x795F3A: mov     eax, [esi+4]
0x795F3D: mov     [esi+4], edx
0x795F40: mov     [edi+4], eax
0x795F43: mov     edx, [edi+8]
0x795F46: mov     eax, [esi+8]
0x795F49: mov     [esi+8], edx
0x795F4C: mov     [edi+8], eax
0x795F4F: mov     edx, [edi+0Ch]
0x795F52: mov     eax, [esi+0Ch]
0x795F55: mov     [esi+0Ch], edx
0x795F58: add     esi, 10h
0x795F5B: mov     [edi+0Ch], eax
0x795F5E: mov     [ebp+arg_8], esi
0x795F61: add     edi, 10h
0x795F64: jmp     short loc_795F14
0x795F66: mov     esi, [ebp+var_14]
0x795F69: mov     edi, [ebp+arg_8]
0x795F6C: cmp     esi, edi
0x795F6E: jz      short loc_795F82
0x795F70: mov     ebx, [ebp+arg_C]
0x795F73: push    esi
0x795F74: mov     ecx, ebx
0x795F76: call    sub_79BFF0
0x795F7B: add     esi, 10h
0x795F7E: cmp     esi, edi
0x795F80: jnz     short loc_795F73
0x795F82: push    0
0x795F84: push    0
0x795F86: call    ThrowException??
0x795F8B: mov     eax, [ebp+var_24]
0x795F8E: cmp     eax, ecx
0x795F90: jz      short loc_795F9B
0x795F92: push    eax
0x795F93: call    FormHeapFree
0x795F98: add     esp, 4
0x795F9B: mov     eax, esi
0x795F9D: mov     ecx, [ebp+var_C]
0x795FA0: mov     large fs:0, ecx
0x795FA7: pop     ecx
0x795FA8: pop     edi
0x795FA9: pop     esi
0x795FAA: pop     ebx
0x795FAB: mov     esp, ebp
0x795FAD: pop     ebp
0x795FAE: retn
