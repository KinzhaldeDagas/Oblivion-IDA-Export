0x7B0D20: push    0FFFFFFFFh
0x7B0D22: push    offset SEH_7B0D20
0x7B0D27: mov     eax, large fs:0
0x7B0D2D: push    eax
0x7B0D2E: sub     esp, 10h
0x7B0D31: push    ebx
0x7B0D32: push    ebp
0x7B0D33: push    esi
0x7B0D34: push    edi
0x7B0D35: mov     eax, ds:0B30AACh
0x7B0D3A: xor     eax, esp
0x7B0D3C: push    eax
0x7B0D3D: lea     eax, [esp+30h+var_C]
0x7B0D41: mov     large fs:0, eax
0x7B0D47: mov     esi, ecx
0x7B0D49: mov     eax, [esi]
0x7B0D4B: mov     edx, [eax+80h]
0x7B0D51: xor     edi, edi
0x7B0D53: mov     [esp+30h+var_1C], edi
0x7B0D57: call    edx
0x7B0D59: xor     ebp, ebp
0x7B0D5B: mov     [esp+30h+var_18], ebp
0x7B0D5F: mov     eax, [esi+90h]
0x7B0D65: sub     eax, edi
0x7B0D67: mov     [esp+30h+var_4], edi
0x7B0D6B: jz      loc_7B0EBB
0x7B0D71: sub     eax, 1
0x7B0D74: jz      short loc_7B0DE5
0x7B0D76: sub     eax, 1
0x7B0D79: jnz     loc_7B0EEA
0x7B0D7F: mov     eax, [esi+70h]
0x7B0D82: mov     eax, [eax+24h]
0x7B0D85: mov     eax, [eax]
0x7B0D87: cmp     eax, edi
0x7B0D89: jz      short loc_7B0D95
0x7B0D8B: add     dword ptr [eax+5Ch], 1
0x7B0D8F: mov     ebp, eax
0x7B0D91: mov     [esp+30h+var_18], ebp
0x7B0D95: mov     ecx, [esi+7Ch]; this
0x7B0D98: call    BSRenderedTexture__GetInnerTexture
0x7B0D9D: push    eax; a2
0x7B0D9E: mov     ecx, ebp; this
0x7B0DA0: call    sub_76C910
0x7B0DA5: push    1
0x7B0DA7: mov     ecx, ebp
0x7B0DA9: call    sub_771640
0x7B0DAE: cmp     [esi+0E0h], edi
0x7B0DB4: jz      loc_7B0EEA
0x7B0DBA: mov     eax, [esi+70h]
0x7B0DBD: mov     ecx, [eax+24h]
0x7B0DC0: mov     eax, [ecx+4]
0x7B0DC3: push    eax
0x7B0DC4: lea     ecx, [esp+34h+var_18]
0x7B0DC8: call    sub_7AEC20
0x7B0DCD: mov     eax, [esi+0E0h]
0x7B0DD3: mov     ebp, [esp+30h+var_18]
0x7B0DD7: push    eax; a2
0x7B0DD8: mov     ecx, ebp; this
0x7B0DDA: call    sub_76C910
0x7B0DDF: push    edi
0x7B0DE0: jmp     loc_7B0EE3
0x7B0DE5: mov     [esp+30h+var_10], edi
0x7B0DE9: mov     eax, [esi+70h]
0x7B0DEC: mov     edx, [eax+24h]
0x7B0DEF: mov     eax, [esp+30h+var_10]
0x7B0DF3: mov     edi, [eax+edx]
0x7B0DF6: cmp     ebp, edi
0x7B0DF8: jz      short loc_7B0E19
0x7B0DFA: test    ebp, ebp
0x7B0DFC: jz      short loc_7B0E0B
0x7B0DFE: add     dword ptr [ebp+5Ch], 0FFFFFFFFh
0x7B0E02: jnz     short loc_7B0E0B
0x7B0E04: mov     ecx, ebp
0x7B0E06: call    sub_772560
0x7B0E0B: test    edi, edi
0x7B0E0D: mov     ebp, edi
0x7B0E0F: mov     [esp+30h+var_18], ebp
0x7B0E13: jz      short loc_7B0E19
0x7B0E15: add     dword ptr [edi+5Ch], 1
0x7B0E19: mov     eax, [esi+7Ch]
0x7B0E1C: test    eax, eax
0x7B0E1E: jz      short loc_7B0E29
0x7B0E20: mov     ecx, [esp+30h+var_14]
0x7B0E24: add     eax, 20h ; ' '
0x7B0E27: jmp     short loc_7B0E38
0x7B0E29: xor     ecx, ecx
0x7B0E2B: or      [esp+30h+var_1C], 1
0x7B0E30: mov     [esp+30h+var_14], ecx
0x7B0E34: lea     eax, [esp+30h+var_14]
0x7B0E38: test    byte ptr [esp+30h+var_1C], 1
0x7B0E3D: mov     ebx, [eax]
0x7B0E3F: jz      short loc_7B0E64
0x7B0E41: and     [esp+30h+var_1C], 0FFFFFFFEh
0x7B0E46: test    ecx, ecx
0x7B0E48: jz      short loc_7B0E64
0x7B0E4A: add     ecx, 4
0x7B0E4D: push    ecx; lpAddend
0x7B0E4E: call    dword ptr ds:0A2807Ch
0x7B0E54: test    eax, eax
0x7B0E56: jnz     short loc_7B0E64
0x7B0E58: mov     ecx, [esp+30h+var_14]
0x7B0E5C: mov     edx, [ecx]
0x7B0E5E: mov     eax, [edx]
0x7B0E60: push    1
0x7B0E62: call    eax
0x7B0E64: mov     edi, [ebp+4]
0x7B0E67: cmp     edi, ebx
0x7B0E69: jz      short loc_7B0E9C
0x7B0E6B: test    edi, edi
0x7B0E6D: jz      short loc_7B0E8B
0x7B0E6F: lea     ecx, [edi+4]
0x7B0E72: push    ecx; lpAddend
0x7B0E73: call    dword ptr ds:0A2807Ch
0x7B0E79: test    eax, eax
0x7B0E7B: jnz     short loc_7B0E8B
0x7B0E7D: test    edi, edi
0x7B0E7F: jz      short loc_7B0E8B
0x7B0E81: mov     edx, [edi]
0x7B0E83: mov     eax, [edx]
0x7B0E85: push    1
0x7B0E87: mov     ecx, edi
0x7B0E89: call    eax
0x7B0E8B: test    ebx, ebx
0x7B0E8D: mov     [ebp+4], ebx
0x7B0E90: jz      short loc_7B0E9C
0x7B0E92: add     ebx, 4
0x7B0E95: push    ebx; lpAddend
0x7B0E96: call    dword ptr ds:0A28078h
0x7B0E9C: push    0
0x7B0E9E: mov     ecx, ebp
0x7B0EA0: call    sub_771640
0x7B0EA5: mov     eax, [esp+30h+var_10]
0x7B0EA9: add     eax, 4
0x7B0EAC: cmp     eax, 10h
0x7B0EAF: mov     [esp+30h+var_10], eax
0x7B0EB3: jl      loc_7B0DE9
0x7B0EB9: jmp     short loc_7B0EEA
0x7B0EBB: mov     eax, [esi+70h]
0x7B0EBE: mov     ecx, [eax+24h]
0x7B0EC1: mov     eax, [ecx]
0x7B0EC3: cmp     eax, edi
0x7B0EC5: jz      short loc_7B0ED1
0x7B0EC7: add     dword ptr [eax+5Ch], 1
0x7B0ECB: mov     ebp, eax
0x7B0ECD: mov     [esp+30h+var_18], ebp
0x7B0ED1: mov     ecx, [esi+7Ch]; this
0x7B0ED4: call    BSRenderedTexture__GetInnerTexture
0x7B0ED9: push    eax; a2
0x7B0EDA: mov     ecx, ebp; this
0x7B0EDC: call    sub_76C910
0x7B0EE1: push    1
0x7B0EE3: mov     ecx, ebp
0x7B0EE5: call    sub_771640
0x7B0EEA: mov     ecx, [esi+70h]
0x7B0EED: mov     edx, [esi+90h]
0x7B0EF3: mov     eax, [esi+edx*4+94h]
0x7B0EFA: mov     edi, [ecx+58h]
0x7B0EFD: cmp     edi, eax
0x7B0EFF: lea     ebx, [esi+70h]
0x7B0F02: mov     [esp+30h+var_10], eax
0x7B0F06: mov     [esp+30h+var_14], ecx
0x7B0F0A: jz      short loc_7B0F45
0x7B0F0C: test    edi, edi
0x7B0F0E: jz      short loc_7B0F30
0x7B0F10: lea     eax, [edi+4]
0x7B0F13: push    eax; lpAddend
0x7B0F14: call    dword ptr ds:0A2807Ch
0x7B0F1A: test    eax, eax
0x7B0F1C: jnz     short loc_7B0F2C
0x7B0F1E: test    edi, edi
0x7B0F20: jz      short loc_7B0F2C
0x7B0F22: mov     edx, [edi]
0x7B0F24: mov     eax, [edx]
0x7B0F26: push    1
0x7B0F28: mov     ecx, edi
0x7B0F2A: call    eax
0x7B0F2C: mov     eax, [esp+30h+var_10]
0x7B0F30: test    eax, eax
0x7B0F32: mov     ecx, [esp+30h+var_14]
0x7B0F36: mov     [ecx+58h], eax
0x7B0F39: jz      short loc_7B0F45
0x7B0F3B: add     eax, 4
0x7B0F3E: push    eax; lpAddend
0x7B0F3F: call    dword ptr ds:0A28078h
0x7B0F45: mov     ecx, [ebx]
0x7B0F47: mov     edx, [esi+90h]
0x7B0F4D: mov     eax, [esi+edx*4+0A0h]
0x7B0F54: mov     edi, [ecx+44h]
0x7B0F57: cmp     edi, eax
0x7B0F59: mov     [esp+30h+var_10], eax
0x7B0F5D: mov     [esp+30h+var_14], ecx
0x7B0F61: jz      short loc_7B0F9C
0x7B0F63: test    edi, edi
0x7B0F65: jz      short loc_7B0F87
0x7B0F67: lea     eax, [edi+4]
0x7B0F6A: push    eax; lpAddend
0x7B0F6B: call    dword ptr ds:0A2807Ch
0x7B0F71: test    eax, eax
0x7B0F73: jnz     short loc_7B0F83
0x7B0F75: test    edi, edi
0x7B0F77: jz      short loc_7B0F83
0x7B0F79: mov     edx, [edi]
0x7B0F7B: mov     eax, [edx]
0x7B0F7D: push    1
0x7B0F7F: mov     ecx, edi
0x7B0F81: call    eax
0x7B0F83: mov     eax, [esp+30h+var_10]
0x7B0F87: test    eax, eax
0x7B0F89: mov     ecx, [esp+30h+var_14]
0x7B0F8D: mov     [ecx+44h], eax
0x7B0F90: jz      short loc_7B0F9C
0x7B0F92: add     eax, 4
0x7B0F95: push    eax; lpAddend
0x7B0F96: call    dword ptr ds:0A28078h
0x7B0F9C: mov     eax, [esi+0ACh]
0x7B0FA2: cmp     eax, 5
0x7B0FA5: jz      short loc_7B0FC9
0x7B0FA7: cmp     eax, 2
0x7B0FAA: jz      short loc_7B0FC9
0x7B0FAC: cmp     eax, 4
0x7B0FAF: jz      short loc_7B0FC9
0x7B0FB1: mov     edi, [ebx]
0x7B0FB3: cmp     dword ptr [edi+30h], 0
0x7B0FB7: jnz     short loc_7B0FC1
0x7B0FB9: call    sub_772DF0
0x7B0FBE: mov     [edi+30h], eax
0x7B0FC1: push    0
0x7B0FC3: push    0
0x7B0FC5: push    1Bh
0x7B0FC7: jmp     short loc_7B101B
0x7B0FC9: mov     edi, [ebx]
0x7B0FCB: cmp     dword ptr [edi+30h], 0
0x7B0FCF: jnz     short loc_7B0FD9
0x7B0FD1: call    sub_772DF0
0x7B0FD6: mov     [edi+30h], eax
0x7B0FD9: mov     ecx, [edi+30h]
0x7B0FDC: push    0
0x7B0FDE: push    1
0x7B0FE0: push    1Bh
0x7B0FE2: call    sub_772CD0
0x7B0FE7: mov     edi, [ebx]
0x7B0FE9: cmp     dword ptr [edi+30h], 0
0x7B0FED: jnz     short loc_7B0FF7
0x7B0FEF: call    sub_772DF0
0x7B0FF4: mov     [edi+30h], eax
0x7B0FF7: mov     ecx, [edi+30h]
0x7B0FFA: push    0
0x7B0FFC: push    2
0x7B0FFE: push    13h
0x7B1000: call    sub_772CD0
0x7B1005: mov     edi, [ebx]
0x7B1007: cmp     dword ptr [edi+30h], 0
0x7B100B: jnz     short loc_7B1015
0x7B100D: call    sub_772DF0
0x7B1012: mov     [edi+30h], eax
0x7B1015: push    0
0x7B1017: push    2
0x7B1019: push    14h
0x7B101B: mov     ecx, [edi+30h]
0x7B101E: call    sub_772CD0
0x7B1023: mov     edx, [esi+38h]
0x7B1026: push    ebx
0x7B1027: push    edx
0x7B1028: lea     ecx, [esi+40h]
0x7B102B: call    sub_76CE40
0x7B1030: add     dword ptr [esi+38h], 1
0x7B1034: or      eax, 0FFFFFFFFh
0x7B1037: test    ebp, ebp
0x7B1039: mov     [esp+30h+var_4], eax
0x7B103D: jz      short loc_7B104B
0x7B103F: add     [ebp+5Ch], eax
0x7B1042: jnz     short loc_7B104B
0x7B1044: mov     ecx, ebp
0x7B1046: call    sub_772560
0x7B104B: xor     eax, eax
0x7B104D: mov     ecx, [esp+30h+var_C]
0x7B1051: mov     large fs:0, ecx
0x7B1058: pop     ecx
0x7B1059: pop     edi
0x7B105A: pop     esi
0x7B105B: pop     ebp
0x7B105C: pop     ebx
0x7B105D: add     esp, 1Ch
0x7B1060: retn    1Ch
