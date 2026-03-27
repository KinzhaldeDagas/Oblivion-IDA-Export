0x642E50: push    0FFFFFFFFh
0x642E52: push    offset SEH_616DB0
0x642E57: mov     eax, large fs:0
0x642E5D: push    eax
0x642E5E: sub     esp, 8
0x642E61: push    ebx
0x642E62: push    ebp
0x642E63: push    esi
0x642E64: push    edi
0x642E65: mov     eax, ds:0B30AACh
0x642E6A: xor     eax, esp
0x642E6C: push    eax
0x642E6D: lea     eax, [esp+28h+var_C]
0x642E71: mov     large fs:0, eax
0x642E77: mov     ebx, ecx
0x642E79: mov     esi, [ebx+14h]
0x642E7C: xor     edi, edi
0x642E7E: cmp     esi, edi
0x642E80: jz      loc_642F8F
0x642E86: mov     eax, [esi]
0x642E88: mov     ecx, esi
0x642E8A: mov     [esp+28h+a2], eax
0x642E8E: call    sub_43C4C0
0x642E93: push    esi
0x642E94: call    FormHeapFree
0x642E99: xor     edx, edx
0x642E9B: add     esp, 4
0x642E9E: cmp     [ebx+8], edi
0x642EA1: mov     [ebx+14h], edi
0x642EA4: mov     [ebx+18h], edi
0x642EA7: mov     [esp+28h+var_14], edx
0x642EAB: jbe     loc_642F5B
0x642EB1: mov     eax, [ebx+0Ch]
0x642EB4: lea     ecx, ds:0[edx*4]
0x642EBB: mov     esi, [eax+ecx]
0x642EBE: add     eax, ecx
0x642EC0: mov     eax, [ebx+0Ch]
0x642EC3: and     esi, 0FFFFFFFEh
0x642EC6: add     eax, ecx
0x642EC8: test    esi, esi
0x642ECA: mov     dword ptr [eax], 0
0x642ED0: jz      short loc_642F4B
0x642ED2: mov     ebp, [esi+8]
0x642ED5: mov     dword ptr [esi+8], 0
0x642EDC: mov     edi, [esi+4]
0x642EDF: and     ebp, 0FFFFFFFEh
0x642EE2: test    edi, edi
0x642EE4: jz      short loc_642F09
0x642EE6: lea     ecx, [edi+8]
0x642EE9: push    ecx; lpAddend
0x642EEA: call    dword ptr ds:0A2807Ch
0x642EF0: test    eax, eax
0x642EF2: jnz     short loc_642F02
0x642EF4: test    edi, edi
0x642EF6: jz      short loc_642F02
0x642EF8: mov     edx, [edi]
0x642EFA: mov     eax, [edx]
0x642EFC: push    1
0x642EFE: mov     ecx, edi
0x642F00: call    eax
0x642F02: mov     dword ptr [esi+4], 0
0x642F09: mov     edx, [ebx]
0x642F0B: mov     eax, [esi]
0x642F0D: mov     edx, [edx+20h]
0x642F10: push    eax
0x642F11: mov     ecx, ebx
0x642F13: call    edx
0x642F15: mov     edi, [esi+4]
0x642F18: test    edi, edi
0x642F1A: jz      short loc_642F38
0x642F1C: lea     eax, [edi+8]
0x642F1F: push    eax; lpAddend
0x642F20: call    dword ptr ds:0A2807Ch
0x642F26: test    eax, eax
0x642F28: jnz     short loc_642F38
0x642F2A: test    edi, edi
0x642F2C: jz      short loc_642F38
0x642F2E: mov     edx, [edi]
0x642F30: mov     eax, [edx]
0x642F32: push    1
0x642F34: mov     ecx, edi
0x642F36: call    eax
0x642F38: push    esi
0x642F39: call    FormHeapFree
0x642F3E: add     esp, 4
0x642F41: test    ebp, ebp
0x642F43: mov     esi, ebp
0x642F45: jnz     short loc_642ED2
0x642F47: mov     edx, [esp+28h+var_14]
0x642F4B: add     edx, 1
0x642F4E: cmp     edx, [ebx+8]
0x642F51: mov     [esp+28h+var_14], edx
0x642F55: jb      loc_642EB1
0x642F5B: cmp     byte ptr [esp+28h+arg_0], 0
0x642F60: jnz     short loc_642F8F
0x642F62: push    10h; Size
0x642F64: call    FormHeapAlloc
0x642F69: add     esp, 4
0x642F6C: mov     [esp+28h+arg_0], eax
0x642F70: test    eax, eax
0x642F72: mov     [esp+28h+var_4], 0
0x642F7A: jz      short loc_642F8A
0x642F7C: mov     ecx, [esp+28h+a2]
0x642F80: push    ecx; a2
0x642F81: mov     ecx, eax; this
0x642F83: call    ThreadSpecificInterfaceManager__ThreadSpecificInterfaceManager
0x642F88: jmp     short loc_642F8C
0x642F8A: xor     eax, eax
0x642F8C: mov     [ebx+14h], eax
0x642F8F: mov     ecx, dword ptr [esp+28h+var_C]
0x642F93: mov     large fs:0, ecx
0x642F9A: pop     ecx
0x642F9B: pop     edi
0x642F9C: pop     esi
0x642F9D: pop     ebp
0x642F9E: pop     ebx
0x642F9F: add     esp, 14h
0x642FA2: retn    4
