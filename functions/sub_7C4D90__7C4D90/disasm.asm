0x7C4D90: push    0FFFFFFFFh
0x7C4D92: push    offset SEH_7B3E60
0x7C4D97: mov     eax, large fs:0
0x7C4D9D: push    eax
0x7C4D9E: sub     esp, 0Ch
0x7C4DA1: push    ebx
0x7C4DA2: push    ebp
0x7C4DA3: push    esi
0x7C4DA4: push    edi
0x7C4DA5: mov     eax, ds:0B30AACh
0x7C4DAA: xor     eax, esp
0x7C4DAC: push    eax
0x7C4DAD: lea     eax, [esp+2Ch+var_C]
0x7C4DB1: mov     large fs:0, eax
0x7C4DB7: call    sub_7C4CE0
0x7C4DBC: mov     ecx, ds:0B2CBD8h
0x7C4DC2: xor     ebx, ebx
0x7C4DC4: xor     eax, eax
0x7C4DC6: cmp     ecx, ebx
0x7C4DC8: jbe     short loc_7C4DE0
0x7C4DCA: mov     edx, ds:0B2CBDCh
0x7C4DD0: cmp     [edx+eax*4], ebx
0x7C4DD3: jnz     loc_7C4F3F
0x7C4DD9: add     eax, 1
0x7C4DDC: cmp     eax, ecx
0x7C4DDE: jb      short loc_7C4DD0
0x7C4DE0: xor     eax, eax
0x7C4DE2: xor     esi, esi
0x7C4DE4: mov     [esp+2Ch+var_14], eax
0x7C4DE8: mov     [esp+2Ch+var_18], esi
0x7C4DEC: cmp     ds:0B2CBE0h, ebx
0x7C4DF2: mov     ebp, ds:0A2807Ch
0x7C4DF8: mov     [esp+2Ch+var_4], ebx
0x7C4DFC: jbe     loc_7C4F0B
0x7C4E02: cmp     eax, ebx
0x7C4E04: jz      loc_7C4F01
0x7C4E0A: lea     ebx, [ebx+0]
0x7C4E10: lea     eax, [esp+2Ch+var_18]
0x7C4E14: push    eax
0x7C4E15: lea     ecx, [esp+30h+var_10]
0x7C4E19: push    ecx
0x7C4E1A: lea     edx, [esp+34h+var_14]
0x7C4E1E: push    edx
0x7C4E1F: mov     ecx, offset off_B2CBD4
0x7C4E24: call    sub_7B2600
0x7C4E29: mov     esi, [esp+2Ch+var_18]
0x7C4E2D: cmp     esi, ebx
0x7C4E2F: jz      loc_7C4EF7
0x7C4E35: cmp     [esi+32h], bl
0x7C4E38: jnz     loc_7C4EF7
0x7C4E3E: mov     edi, [esi+8]
0x7C4E41: cmp     edi, ebx
0x7C4E43: jz      short loc_7C4E60
0x7C4E45: lea     eax, [edi+4]
0x7C4E48: push    eax; lpAddend
0x7C4E49: call    ebp ; InterlockedDecrement
0x7C4E4B: test    eax, eax
0x7C4E4D: jnz     short loc_7C4E5D
0x7C4E4F: cmp     edi, ebx
0x7C4E51: jz      short loc_7C4E5D
0x7C4E53: mov     edx, [edi]
0x7C4E55: mov     eax, [edx]
0x7C4E57: push    1
0x7C4E59: mov     ecx, edi
0x7C4E5B: call    eax
0x7C4E5D: mov     [esi+8], ebx
0x7C4E60: mov     eax, [esi+0Ch]
0x7C4E63: push    eax
0x7C4E64: call    FormHeapFree
0x7C4E69: mov     [esi+0Ch], ebx
0x7C4E6C: mov     edi, [esi+14h]
0x7C4E6F: add     esp, 4
0x7C4E72: cmp     edi, ebx
0x7C4E74: jz      short loc_7C4E91
0x7C4E76: lea     ecx, [edi+4]
0x7C4E79: push    ecx; lpAddend
0x7C4E7A: call    ebp ; InterlockedDecrement
0x7C4E7C: test    eax, eax
0x7C4E7E: jnz     short loc_7C4E8E
0x7C4E80: cmp     edi, ebx
0x7C4E82: jz      short loc_7C4E8E
0x7C4E84: mov     edx, [edi]
0x7C4E86: mov     eax, [edx]
0x7C4E88: push    1
0x7C4E8A: mov     ecx, edi
0x7C4E8C: call    eax
0x7C4E8E: mov     [esi+14h], ebx
0x7C4E91: mov     edi, [esi+1Ch]
0x7C4E94: cmp     edi, ebx
0x7C4E96: jz      short loc_7C4EB3
0x7C4E98: lea     ecx, [edi+4]
0x7C4E9B: push    ecx; lpAddend
0x7C4E9C: call    ebp ; InterlockedDecrement
0x7C4E9E: test    eax, eax
0x7C4EA0: jnz     short loc_7C4EB0
0x7C4EA2: cmp     edi, ebx
0x7C4EA4: jz      short loc_7C4EB0
0x7C4EA6: mov     edx, [edi]
0x7C4EA8: mov     eax, [edx]
0x7C4EAA: push    1
0x7C4EAC: mov     ecx, edi
0x7C4EAE: call    eax
0x7C4EB0: mov     [esi+1Ch], ebx
0x7C4EB3: mov     edi, [esi+18h]
0x7C4EB6: cmp     edi, ebx
0x7C4EB8: jz      short loc_7C4ED5
0x7C4EBA: lea     ecx, [edi+4]
0x7C4EBD: push    ecx; lpAddend
0x7C4EBE: call    ebp ; InterlockedDecrement
0x7C4EC0: test    eax, eax
0x7C4EC2: jnz     short loc_7C4ED2
0x7C4EC4: cmp     edi, ebx
0x7C4EC6: jz      short loc_7C4ED2
0x7C4EC8: mov     edx, [edi]
0x7C4ECA: mov     eax, [edx]
0x7C4ECC: push    1
0x7C4ECE: mov     ecx, edi
0x7C4ED0: call    eax
0x7C4ED2: mov     [esi+18h], ebx
0x7C4ED5: mov     edi, [esi+20h]
0x7C4ED8: cmp     edi, ebx
0x7C4EDA: jz      short loc_7C4EF7
0x7C4EDC: lea     ecx, [edi+4]
0x7C4EDF: push    ecx; lpAddend
0x7C4EE0: call    ebp ; InterlockedDecrement
0x7C4EE2: test    eax, eax
0x7C4EE4: jnz     short loc_7C4EF4
0x7C4EE6: cmp     edi, ebx
0x7C4EE8: jz      short loc_7C4EF4
0x7C4EEA: mov     edx, [edi]
0x7C4EEC: mov     eax, [edx]
0x7C4EEE: push    1
0x7C4EF0: mov     ecx, edi
0x7C4EF2: call    eax
0x7C4EF4: mov     [esi+20h], ebx
0x7C4EF7: cmp     [esp+2Ch+var_14], ebx
0x7C4EFB: jnz     loc_7C4E10
0x7C4F01: mov     ecx, offset off_B2CBD4
0x7C4F06: call    NiTMap_Clear
0x7C4F0B: cmp     esi, ebx
0x7C4F0D: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x7C4F15: jz      short loc_7C4F2B
0x7C4F17: lea     ecx, [esi+4]
0x7C4F1A: push    ecx; lpAddend
0x7C4F1B: call    ebp ; InterlockedDecrement
0x7C4F1D: test    eax, eax
0x7C4F1F: jnz     short loc_7C4F2B
0x7C4F21: mov     edx, [esi]
0x7C4F23: mov     eax, [edx]
0x7C4F25: push    1
0x7C4F27: mov     ecx, esi
0x7C4F29: call    eax
0x7C4F2B: mov     ecx, dword ptr [esp+2Ch+var_C]
0x7C4F2F: mov     large fs:0, ecx
0x7C4F36: pop     ecx
0x7C4F37: pop     edi
0x7C4F38: pop     esi
0x7C4F39: pop     ebp
0x7C4F3A: pop     ebx
0x7C4F3B: add     esp, 18h
0x7C4F3E: retn
0x7C4F3F: mov     eax, [edx+eax*4]
0x7C4F42: jmp     loc_7C4DE2
