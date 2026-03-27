0x7F3E00: push    0FFFFFFFFh
0x7F3E02: push    offset SEH_8122A0
0x7F3E07: mov     eax, large fs:0
0x7F3E0D: push    eax
0x7F3E0E: push    ecx
0x7F3E0F: push    ebx
0x7F3E10: push    esi
0x7F3E11: push    edi
0x7F3E12: mov     eax, ds:0B30AACh
0x7F3E17: xor     eax, esp
0x7F3E19: push    eax
0x7F3E1A: lea     eax, [esp+20h+var_C]
0x7F3E1E: mov     large fs:0, eax
0x7F3E24: push    8; Size
0x7F3E26: call    FormHeapAlloc
0x7F3E2B: add     esp, 4
0x7F3E2E: mov     [esp+20h+var_10], eax
0x7F3E32: xor     esi, esi
0x7F3E34: cmp     eax, esi
0x7F3E36: mov     [esp+20h+var_4], esi
0x7F3E3A: jz      short loc_7F3E45
0x7F3E3C: mov     ecx, eax; this
0x7F3E3E: call    ShaderDefinition__Init
0x7F3E43: mov     esi, eax
0x7F3E45: mov     eax, ds:0B43104h
0x7F3E4A: push    1; StreamCount
0x7F3E4C: push    5; a2
0x7F3E4E: push    eax; a1
0x7F3E4F: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x7F3E57: call    CreateDX9ShaderDeclaration
0x7F3E5C: mov     edi, [esi]
0x7F3E5E: mov     ebx, eax
0x7F3E60: add     esp, 0Ch
0x7F3E63: cmp     edi, ebx
0x7F3E65: jz      short loc_7F3E97
0x7F3E67: test    edi, edi
0x7F3E69: jz      short loc_7F3E87
0x7F3E6B: lea     ecx, [edi+4]
0x7F3E6E: push    ecx; lpAddend
0x7F3E6F: call    dword ptr ds:0A2807Ch
0x7F3E75: test    eax, eax
0x7F3E77: jnz     short loc_7F3E87
0x7F3E79: test    edi, edi
0x7F3E7B: jz      short loc_7F3E87
0x7F3E7D: mov     edx, [edi]
0x7F3E7F: mov     eax, [edx]
0x7F3E81: push    1
0x7F3E83: mov     ecx, edi
0x7F3E85: call    eax
0x7F3E87: test    ebx, ebx
0x7F3E89: mov     [esi], ebx
0x7F3E8B: jz      short loc_7F3E97
0x7F3E8D: add     ebx, 4
0x7F3E90: push    ebx; lpAddend
0x7F3E91: call    dword ptr ds:0A28078h
0x7F3E97: mov     ecx, [esi]
0x7F3E99: mov     edx, [ecx]
0x7F3E9B: mov     eax, [edx+50h]
0x7F3E9E: push    0
0x7F3EA0: push    2
0x7F3EA2: push    0
0x7F3EA4: push    0
0x7F3EA6: push    0
0x7F3EA8: call    eax
0x7F3EAA: mov     ecx, [esi]
0x7F3EAC: mov     edx, [ecx]
0x7F3EAE: mov     eax, [edx+50h]
0x7F3EB1: push    0
0x7F3EB3: push    2
0x7F3EB5: push    3
0x7F3EB7: push    3
0x7F3EB9: push    1
0x7F3EBB: call    eax
0x7F3EBD: mov     ecx, [esi]
0x7F3EBF: mov     edx, [ecx]
0x7F3EC1: mov     eax, [edx+50h]
0x7F3EC4: push    0
0x7F3EC6: push    3
0x7F3EC8: push    4
0x7F3ECA: push    5
0x7F3ECC: push    2
0x7F3ECE: call    eax
0x7F3ED0: mov     ecx, [esi]
0x7F3ED2: mov     edx, [ecx]
0x7F3ED4: mov     eax, [edx+50h]
0x7F3ED7: push    0
0x7F3ED9: push    1
0x7F3EDB: push    5
0x7F3EDD: push    7
0x7F3EDF: push    3
0x7F3EE1: call    eax
0x7F3EE3: mov     ecx, [esi]
0x7F3EE5: mov     edx, [ecx]
0x7F3EE7: mov     eax, [edx+4Ch]
0x7F3EEA: push    0
0x7F3EEC: push    1
0x7F3EEE: push    0Ah
0x7F3EF0: push    0
0x7F3EF2: push    80000000h
0x7F3EF7: push    6
0x7F3EF9: push    4
0x7F3EFB: push    0
0x7F3EFD: call    eax
0x7F3EFF: mov     edi, [esi]
0x7F3F01: test    edi, edi
0x7F3F03: jz      short loc_7F3F2A
0x7F3F05: mov     edx, [edi]
0x7F3F07: mov     eax, [edx+4]
0x7F3F0A: mov     ecx, edi
0x7F3F0C: call    eax
0x7F3F0E: test    eax, eax
0x7F3F10: jz      short loc_7F3F20
0x7F3F12: cmp     eax, offset dword_B3F684
0x7F3F17: jz      short loc_7F3F53
0x7F3F19: mov     eax, [eax+4]
0x7F3F1C: test    eax, eax
0x7F3F1E: jnz     short loc_7F3F12
0x7F3F20: xor     al, al
0x7F3F22: neg     al
0x7F3F24: sbb     eax, eax
0x7F3F26: and     eax, edi
0x7F3F28: mov     edi, eax
0x7F3F2A: push    1A4h; Size
0x7F3F2F: call    FormHeapAlloc
0x7F3F34: add     esp, 4
0x7F3F37: mov     [esp+20h+var_10], eax
0x7F3F3B: test    eax, eax
0x7F3F3D: mov     [esp+20h+var_4], 1
0x7F3F45: jz      short loc_7F3F57
0x7F3F47: push    edi; a2
0x7F3F48: mov     ecx, eax; this
0x7F3F4A: call    ??0BoltShader@@QAE@XZ; BoltShader::BoltShader(void)
0x7F3F4F: mov     edi, eax
0x7F3F51: jmp     short loc_7F3F59
0x7F3F53: mov     al, 1
0x7F3F55: jmp     short loc_7F3F22
0x7F3F57: xor     edi, edi
0x7F3F59: mov     edx, [edi]
0x7F3F5B: mov     eax, [edx+84h]
0x7F3F61: mov     ecx, edi
0x7F3F63: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7F3F6B: call    eax
0x7F3F6D: mov     edx, [edi]
0x7F3F6F: mov     eax, [edx+0A8h]
0x7F3F75: mov     ecx, edi
0x7F3F77: call    eax
0x7F3F79: mov     edx, [edi]
0x7F3F7B: mov     eax, [edx+0ACh]
0x7F3F81: mov     ecx, edi
0x7F3F83: call    eax
0x7F3F85: mov     edx, [edi]
0x7F3F87: mov     eax, [edx+88h]
0x7F3F8D: mov     ecx, edi
0x7F3F8F: call    eax
0x7F3F91: mov     ebx, [esi+4]
0x7F3F94: cmp     ebx, edi
0x7F3F96: jz      short loc_7F3FC5
0x7F3F98: test    ebx, ebx
0x7F3F9A: jz      short loc_7F3FB8
0x7F3F9C: lea     ecx, [ebx+4]
0x7F3F9F: push    ecx; lpAddend
0x7F3FA0: call    dword ptr ds:0A2807Ch
0x7F3FA6: test    eax, eax
0x7F3FA8: jnz     short loc_7F3FB8
0x7F3FAA: test    ebx, ebx
0x7F3FAC: jz      short loc_7F3FB8
0x7F3FAE: mov     edx, [ebx]
0x7F3FB0: mov     eax, [edx]
0x7F3FB2: push    1
0x7F3FB4: mov     ecx, ebx
0x7F3FB6: call    eax
0x7F3FB8: mov     [esi+4], edi
0x7F3FBB: add     edi, 4
0x7F3FBE: push    edi; lpAddend
0x7F3FBF: call    dword ptr ds:0A28078h
0x7F3FC5: mov     ecx, [esi+4]
0x7F3FC8: mov     edx, [ecx]
0x7F3FCA: mov     eax, [esi]
0x7F3FCC: mov     edx, [edx+54h]
0x7F3FCF: push    eax
0x7F3FD0: call    edx
0x7F3FD2: mov     eax, esi
0x7F3FD4: mov     ecx, dword ptr [esp+20h+var_C]
0x7F3FD8: mov     large fs:0, ecx
0x7F3FDF: pop     ecx
0x7F3FE0: pop     edi
0x7F3FE1: pop     esi
0x7F3FE2: pop     ebx
0x7F3FE3: add     esp, 10h
0x7F3FE6: retn
