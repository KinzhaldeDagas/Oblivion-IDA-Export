0x7B3E60: push    0FFFFFFFFh
0x7B3E62: push    offset SEH_7B3E60
0x7B3E67: mov     eax, large fs:0
0x7B3E6D: push    eax
0x7B3E6E: sub     esp, 0Ch
0x7B3E71: push    ebx
0x7B3E72: push    ebp
0x7B3E73: push    esi
0x7B3E74: push    edi
0x7B3E75: mov     eax, ds:0B30AACh
0x7B3E7A: xor     eax, esp
0x7B3E7C: push    eax
0x7B3E7D: lea     eax, [esp+2Ch+var_C]
0x7B3E81: mov     large fs:0, eax
0x7B3E87: call    sub_7B3DB0
0x7B3E8C: mov     ecx, ds:0B2C350h
0x7B3E92: xor     ebx, ebx
0x7B3E94: xor     eax, eax
0x7B3E96: cmp     ecx, ebx
0x7B3E98: jbe     short loc_7B3EB0
0x7B3E9A: mov     edx, ds:0B2C354h
0x7B3EA0: cmp     [edx+eax*4], ebx
0x7B3EA3: jnz     loc_7B4006
0x7B3EA9: add     eax, 1
0x7B3EAC: cmp     eax, ecx
0x7B3EAE: jb      short loc_7B3EA0
0x7B3EB0: xor     eax, eax
0x7B3EB2: xor     esi, esi
0x7B3EB4: mov     [esp+2Ch+var_14], eax
0x7B3EB8: mov     [esp+2Ch+var_18], esi
0x7B3EBC: cmp     ds:0B2C358h, ebx
0x7B3EC2: mov     ebp, ds:0A2807Ch
0x7B3EC8: mov     [esp+2Ch+var_4], ebx
0x7B3ECC: jbe     loc_7B3FD2
0x7B3ED2: cmp     eax, ebx
0x7B3ED4: jz      loc_7B3FC8
0x7B3EDA: lea     ebx, [ebx+0]
0x7B3EE0: lea     eax, [esp+2Ch+var_18]
0x7B3EE4: push    eax
0x7B3EE5: lea     ecx, [esp+30h+var_10]
0x7B3EE9: push    ecx
0x7B3EEA: lea     edx, [esp+34h+var_14]
0x7B3EEE: push    edx
0x7B3EEF: mov     ecx, offset off_B2C34C
0x7B3EF4: call    sub_7B2600
0x7B3EF9: mov     esi, [esp+2Ch+var_18]
0x7B3EFD: cmp     esi, ebx
0x7B3EFF: jz      loc_7B3FBE
0x7B3F05: mov     edi, [esi+8]
0x7B3F08: cmp     edi, ebx
0x7B3F0A: jz      short loc_7B3F27
0x7B3F0C: lea     eax, [edi+4]
0x7B3F0F: push    eax; lpAddend
0x7B3F10: call    ebp ; InterlockedDecrement
0x7B3F12: test    eax, eax
0x7B3F14: jnz     short loc_7B3F24
0x7B3F16: cmp     edi, ebx
0x7B3F18: jz      short loc_7B3F24
0x7B3F1A: mov     edx, [edi]
0x7B3F1C: mov     eax, [edx]
0x7B3F1E: push    1
0x7B3F20: mov     ecx, edi
0x7B3F22: call    eax
0x7B3F24: mov     [esi+8], ebx
0x7B3F27: mov     eax, [esi+10h]
0x7B3F2A: push    eax
0x7B3F2B: call    FormHeapFree
0x7B3F30: mov     [esi+10h], ebx
0x7B3F33: mov     edi, [esi+18h]
0x7B3F36: add     esp, 4
0x7B3F39: cmp     edi, ebx
0x7B3F3B: jz      short loc_7B3F58
0x7B3F3D: lea     ecx, [edi+4]
0x7B3F40: push    ecx; lpAddend
0x7B3F41: call    ebp ; InterlockedDecrement
0x7B3F43: test    eax, eax
0x7B3F45: jnz     short loc_7B3F55
0x7B3F47: cmp     edi, ebx
0x7B3F49: jz      short loc_7B3F55
0x7B3F4B: mov     edx, [edi]
0x7B3F4D: mov     eax, [edx]
0x7B3F4F: push    1
0x7B3F51: mov     ecx, edi
0x7B3F53: call    eax
0x7B3F55: mov     [esi+18h], ebx
0x7B3F58: mov     edi, [esi+20h]
0x7B3F5B: cmp     edi, ebx
0x7B3F5D: jz      short loc_7B3F7A
0x7B3F5F: lea     ecx, [edi+4]
0x7B3F62: push    ecx; lpAddend
0x7B3F63: call    ebp ; InterlockedDecrement
0x7B3F65: test    eax, eax
0x7B3F67: jnz     short loc_7B3F77
0x7B3F69: cmp     edi, ebx
0x7B3F6B: jz      short loc_7B3F77
0x7B3F6D: mov     edx, [edi]
0x7B3F6F: mov     eax, [edx]
0x7B3F71: push    1
0x7B3F73: mov     ecx, edi
0x7B3F75: call    eax
0x7B3F77: mov     [esi+20h], ebx
0x7B3F7A: mov     edi, [esi+1Ch]
0x7B3F7D: cmp     edi, ebx
0x7B3F7F: jz      short loc_7B3F9C
0x7B3F81: lea     ecx, [edi+4]
0x7B3F84: push    ecx; lpAddend
0x7B3F85: call    ebp ; InterlockedDecrement
0x7B3F87: test    eax, eax
0x7B3F89: jnz     short loc_7B3F99
0x7B3F8B: cmp     edi, ebx
0x7B3F8D: jz      short loc_7B3F99
0x7B3F8F: mov     edx, [edi]
0x7B3F91: mov     eax, [edx]
0x7B3F93: push    1
0x7B3F95: mov     ecx, edi
0x7B3F97: call    eax
0x7B3F99: mov     [esi+1Ch], ebx
0x7B3F9C: mov     edi, [esi+24h]
0x7B3F9F: cmp     edi, ebx
0x7B3FA1: jz      short loc_7B3FBE
0x7B3FA3: lea     ecx, [edi+4]
0x7B3FA6: push    ecx; lpAddend
0x7B3FA7: call    ebp ; InterlockedDecrement
0x7B3FA9: test    eax, eax
0x7B3FAB: jnz     short loc_7B3FBB
0x7B3FAD: cmp     edi, ebx
0x7B3FAF: jz      short loc_7B3FBB
0x7B3FB1: mov     edx, [edi]
0x7B3FB3: mov     eax, [edx]
0x7B3FB5: push    1
0x7B3FB7: mov     ecx, edi
0x7B3FB9: call    eax
0x7B3FBB: mov     [esi+24h], ebx
0x7B3FBE: cmp     [esp+2Ch+var_14], ebx
0x7B3FC2: jnz     loc_7B3EE0
0x7B3FC8: mov     ecx, offset off_B2C34C
0x7B3FCD: call    NiTMap_Clear
0x7B3FD2: cmp     esi, ebx
0x7B3FD4: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x7B3FDC: jz      short loc_7B3FF2
0x7B3FDE: lea     ecx, [esi+4]
0x7B3FE1: push    ecx; lpAddend
0x7B3FE2: call    ebp ; InterlockedDecrement
0x7B3FE4: test    eax, eax
0x7B3FE6: jnz     short loc_7B3FF2
0x7B3FE8: mov     edx, [esi]
0x7B3FEA: mov     eax, [edx]
0x7B3FEC: push    1
0x7B3FEE: mov     ecx, esi
0x7B3FF0: call    eax
0x7B3FF2: mov     ecx, dword ptr [esp+2Ch+var_C]
0x7B3FF6: mov     large fs:0, ecx
0x7B3FFD: pop     ecx
0x7B3FFE: pop     edi
0x7B3FFF: pop     esi
0x7B4000: pop     ebp
0x7B4001: pop     ebx
0x7B4002: add     esp, 18h
0x7B4005: retn
0x7B4006: mov     eax, [edx+eax*4]
0x7B4009: jmp     loc_7B3EB2
