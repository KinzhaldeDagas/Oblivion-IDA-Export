0x7C8B30: push    0FFFFFFFFh
0x7C8B32: push    offset ??0Lighting30Shader@@QAE@XZ_SEH
0x7C8B37: mov     eax, large fs:0
0x7C8B3D: push    eax
0x7C8B3E: push    ecx
0x7C8B3F: push    ebx
0x7C8B40: push    ebp
0x7C8B41: push    esi
0x7C8B42: push    edi
0x7C8B43: mov     eax, ds:0B30AACh
0x7C8B48: xor     eax, esp
0x7C8B4A: push    eax
0x7C8B4B: lea     eax, [esp+24h+var_C]
0x7C8B4F: mov     large fs:0, eax
0x7C8B55: mov     ebp, ecx
0x7C8B57: mov     [esp+24h+var_10], ebp
0x7C8B5B: mov     dword ptr [ebp+0], offset ??_7ShadowLightShader@@6B@; const ShadowLightShader::`vftable'
0x7C8B62: mov     [esp+24h+var_4], 8
0x7C8B6A: mov     edi, offset dword_B45290
0x7C8B6F: xor     ebx, ebx
0x7C8B71: mov     esi, [edi]
0x7C8B73: cmp     esi, ebx
0x7C8B75: jz      short loc_7C8B95
0x7C8B77: lea     eax, [esi+4]
0x7C8B7A: push    eax; lpAddend
0x7C8B7B: call    dword ptr ds:0A2807Ch
0x7C8B81: test    eax, eax
0x7C8B83: jnz     short loc_7C8B93
0x7C8B85: cmp     esi, ebx
0x7C8B87: jz      short loc_7C8B93
0x7C8B89: mov     edx, [esi]
0x7C8B8B: mov     eax, [edx]
0x7C8B8D: push    1
0x7C8B8F: mov     ecx, esi
0x7C8B91: call    eax
0x7C8B93: mov     [edi], ebx
0x7C8B95: add     edi, 4
0x7C8B98: cmp     edi, offset unk_B45494
0x7C8B9E: jl      short loc_7C8B71
0x7C8BA0: mov     edi, offset dword_B45088
0x7C8BA5: mov     esi, [edi]
0x7C8BA7: cmp     esi, ebx
0x7C8BA9: jz      short loc_7C8BC9
0x7C8BAB: lea     ecx, [esi+4]
0x7C8BAE: push    ecx; lpAddend
0x7C8BAF: call    dword ptr ds:0A2807Ch
0x7C8BB5: test    eax, eax
0x7C8BB7: jnz     short loc_7C8BC7
0x7C8BB9: cmp     esi, ebx
0x7C8BBB: jz      short loc_7C8BC7
0x7C8BBD: mov     edx, [esi]
0x7C8BBF: mov     eax, [edx]
0x7C8BC1: push    1
0x7C8BC3: mov     ecx, esi
0x7C8BC5: call    eax
0x7C8BC7: mov     [edi], ebx
0x7C8BC9: add     edi, 4
0x7C8BCC: cmp     edi, offset unk_B4528C
0x7C8BD2: jl      short loc_7C8BA5
0x7C8BD4: mov     esi, offset dword_B455A0
0x7C8BD9: lea     esp, [esp+0]
0x7C8BE0: mov     ecx, [esi]
0x7C8BE2: cmp     ecx, ebx
0x7C8BE4: jz      short loc_7C8BF3
0x7C8BE6: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7C8BEA: jnz     short loc_7C8BF1
0x7C8BEC: call    sub_7604D0
0x7C8BF1: mov     [esi], ebx
0x7C8BF3: add     esi, 4
0x7C8BF6: cmp     esi, offset unk_B45C2C
0x7C8BFC: jl      short loc_7C8BE0
0x7C8BFE: mov     edi, offset dword_B45018
0x7C8C03: mov     esi, [edi]
0x7C8C05: cmp     esi, ebx
0x7C8C07: jz      short loc_7C8C27
0x7C8C09: lea     ecx, [esi+4]
0x7C8C0C: push    ecx; lpAddend
0x7C8C0D: call    dword ptr ds:0A2807Ch
0x7C8C13: test    eax, eax
0x7C8C15: jnz     short loc_7C8C25
0x7C8C17: cmp     esi, ebx
0x7C8C19: jz      short loc_7C8C25
0x7C8C1B: mov     edx, [esi]
0x7C8C1D: mov     eax, [edx]
0x7C8C1F: push    1
0x7C8C21: mov     ecx, esi
0x7C8C23: call    eax
0x7C8C25: mov     [edi], ebx
0x7C8C27: add     edi, 4
0x7C8C2A: cmp     edi, offset dword_B45084
0x7C8C30: jl      short loc_7C8C03
0x7C8C32: mov     edi, offset dword_B45518
0x7C8C37: mov     esi, [edi]
0x7C8C39: cmp     esi, ebx
0x7C8C3B: jz      short loc_7C8C5B
0x7C8C3D: lea     ecx, [esi+4]
0x7C8C40: push    ecx; lpAddend
0x7C8C41: call    dword ptr ds:0A2807Ch
0x7C8C47: test    eax, eax
0x7C8C49: jnz     short loc_7C8C59
0x7C8C4B: cmp     esi, ebx
0x7C8C4D: jz      short loc_7C8C59
0x7C8C4F: mov     edx, [esi]
0x7C8C51: mov     eax, [edx]
0x7C8C53: push    1
0x7C8C55: mov     ecx, esi
0x7C8C57: call    eax
0x7C8C59: mov     [edi], ebx
0x7C8C5B: add     edi, 4
0x7C8C5E: cmp     edi, offset unk_B4555C
0x7C8C64: jl      short loc_7C8C37
0x7C8C66: mov     esi, [ebp+24h]
0x7C8C69: cmp     esi, ebx
0x7C8C6B: jz      short loc_7C8C8C
0x7C8C6D: lea     ecx, [esi+4]
0x7C8C70: push    ecx; lpAddend
0x7C8C71: call    dword ptr ds:0A2807Ch
0x7C8C77: test    eax, eax
0x7C8C79: jnz     short loc_7C8C89
0x7C8C7B: cmp     esi, ebx
0x7C8C7D: jz      short loc_7C8C89
0x7C8C7F: mov     edx, [esi]
0x7C8C81: mov     eax, [edx]
0x7C8C83: push    1
0x7C8C85: mov     ecx, esi
0x7C8C87: call    eax
0x7C8C89: mov     [ebp+24h], ebx
0x7C8C8C: mov     esi, [ebp+7Ch]
0x7C8C8F: cmp     esi, ebx
0x7C8C91: jz      short loc_7C8CB2
0x7C8C93: lea     ecx, [esi+4]
0x7C8C96: push    ecx; lpAddend
0x7C8C97: call    dword ptr ds:0A2807Ch
0x7C8C9D: test    eax, eax
0x7C8C9F: jnz     short loc_7C8CAF
0x7C8CA1: cmp     esi, ebx
0x7C8CA3: jz      short loc_7C8CAF
0x7C8CA5: mov     edx, [esi]
0x7C8CA7: mov     eax, [edx]
0x7C8CA9: push    1
0x7C8CAB: mov     ecx, esi
0x7C8CAD: call    eax
0x7C8CAF: mov     [ebp+7Ch], ebx
0x7C8CB2: mov     esi, [ebp+80h]
0x7C8CB8: cmp     esi, ebx
0x7C8CBA: jz      short loc_7C8CDE
0x7C8CBC: lea     ecx, [esi+4]
0x7C8CBF: push    ecx; lpAddend
0x7C8CC0: call    dword ptr ds:0A2807Ch
0x7C8CC6: test    eax, eax
0x7C8CC8: jnz     short loc_7C8CD8
0x7C8CCA: cmp     esi, ebx
0x7C8CCC: jz      short loc_7C8CD8
0x7C8CCE: mov     edx, [esi]
0x7C8CD0: mov     eax, [edx]
0x7C8CD2: push    1
0x7C8CD4: mov     ecx, esi
0x7C8CD6: call    eax
0x7C8CD8: mov     [ebp+80h], ebx
0x7C8CDE: mov     esi, [ebp+84h]
0x7C8CE4: cmp     esi, ebx
0x7C8CE6: jz      short loc_7C8D0A
0x7C8CE8: lea     ecx, [esi+4]
0x7C8CEB: push    ecx; lpAddend
0x7C8CEC: call    dword ptr ds:0A2807Ch
0x7C8CF2: test    eax, eax
0x7C8CF4: jnz     short loc_7C8D04
0x7C8CF6: cmp     esi, ebx
0x7C8CF8: jz      short loc_7C8D04
0x7C8CFA: mov     edx, [esi]
0x7C8CFC: mov     eax, [edx]
0x7C8CFE: push    1
0x7C8D00: mov     ecx, esi
0x7C8D02: call    eax
0x7C8D04: mov     [ebp+84h], ebx
0x7C8D0A: mov     esi, [ebp+88h]
0x7C8D10: cmp     esi, ebx
0x7C8D12: jz      short loc_7C8D36
0x7C8D14: lea     ecx, [esi+4]
0x7C8D17: push    ecx; lpAddend
0x7C8D18: call    dword ptr ds:0A2807Ch
0x7C8D1E: test    eax, eax
0x7C8D20: jnz     short loc_7C8D30
0x7C8D22: cmp     esi, ebx
0x7C8D24: jz      short loc_7C8D30
0x7C8D26: mov     edx, [esi]
0x7C8D28: mov     eax, [edx]
0x7C8D2A: push    1
0x7C8D2C: mov     ecx, esi
0x7C8D2E: call    eax
0x7C8D30: mov     [ebp+88h], ebx
0x7C8D36: mov     esi, [ebp+90h]
0x7C8D3C: cmp     esi, ebx
0x7C8D3E: jz      short loc_7C8D62
0x7C8D40: lea     ecx, [esi+4]
0x7C8D43: push    ecx; lpAddend
0x7C8D44: call    dword ptr ds:0A2807Ch
0x7C8D4A: test    eax, eax
0x7C8D4C: jnz     short loc_7C8D5C
0x7C8D4E: cmp     esi, ebx
0x7C8D50: jz      short loc_7C8D5C
0x7C8D52: mov     edx, [esi]
0x7C8D54: mov     eax, [edx]
0x7C8D56: push    1
0x7C8D58: mov     ecx, esi
0x7C8D5A: call    eax
0x7C8D5C: mov     [ebp+90h], ebx
0x7C8D62: mov     esi, [ebp+8Ch]
0x7C8D68: cmp     esi, ebx
0x7C8D6A: jz      short loc_7C8D8E
0x7C8D6C: lea     ecx, [esi+4]
0x7C8D6F: push    ecx; lpAddend
0x7C8D70: call    dword ptr ds:0A2807Ch
0x7C8D76: test    eax, eax
0x7C8D78: jnz     short loc_7C8D88
0x7C8D7A: cmp     esi, ebx
0x7C8D7C: jz      short loc_7C8D88
0x7C8D7E: mov     edx, [esi]
0x7C8D80: mov     eax, [edx]
0x7C8D82: push    1
0x7C8D84: mov     ecx, esi
0x7C8D86: call    eax
0x7C8D88: mov     [ebp+8Ch], ebx
0x7C8D8E: mov     esi, [ebp+98h]
0x7C8D94: cmp     esi, ebx
0x7C8D96: jz      short loc_7C8DBA
0x7C8D98: lea     ecx, [esi+4]
0x7C8D9B: push    ecx; lpAddend
0x7C8D9C: call    dword ptr ds:0A2807Ch
0x7C8DA2: test    eax, eax
0x7C8DA4: jnz     short loc_7C8DB4
0x7C8DA6: cmp     esi, ebx
0x7C8DA8: jz      short loc_7C8DB4
0x7C8DAA: mov     edx, [esi]
0x7C8DAC: mov     eax, [edx]
0x7C8DAE: push    1
0x7C8DB0: mov     ecx, esi
0x7C8DB2: call    eax
0x7C8DB4: mov     [ebp+98h], ebx
0x7C8DBA: mov     esi, [ebp+94h]
0x7C8DC0: cmp     esi, ebx
0x7C8DC2: jz      short loc_7C8DE6
0x7C8DC4: lea     ecx, [esi+4]
0x7C8DC7: push    ecx; lpAddend
0x7C8DC8: call    dword ptr ds:0A2807Ch
0x7C8DCE: test    eax, eax
0x7C8DD0: jnz     short loc_7C8DE0
0x7C8DD2: cmp     esi, ebx
0x7C8DD4: jz      short loc_7C8DE0
0x7C8DD6: mov     edx, [esi]
0x7C8DD8: mov     eax, [edx]
0x7C8DDA: push    1
0x7C8DDC: mov     ecx, esi
0x7C8DDE: call    eax
0x7C8DE0: mov     [ebp+94h], ebx
0x7C8DE6: mov     esi, [ebp+98h]
0x7C8DEC: cmp     esi, ebx
0x7C8DEE: mov     edi, ds:0A2807Ch
0x7C8DF4: mov     byte ptr [esp+24h+var_4], 7
0x7C8DF9: jz      short loc_7C8E13
0x7C8DFB: lea     ecx, [esi+4]
0x7C8DFE: push    ecx; lpAddend
0x7C8DFF: call    edi ; InterlockedDecrement
0x7C8E01: test    eax, eax
0x7C8E03: jnz     short loc_7C8E13
0x7C8E05: cmp     esi, ebx
0x7C8E07: jz      short loc_7C8E13
0x7C8E09: mov     edx, [esi]
0x7C8E0B: mov     eax, [edx]
0x7C8E0D: push    1
0x7C8E0F: mov     ecx, esi
0x7C8E11: call    eax
0x7C8E13: mov     esi, [ebp+94h]
0x7C8E19: cmp     esi, ebx
0x7C8E1B: mov     byte ptr [esp+24h+var_4], 6
0x7C8E20: jz      short loc_7C8E3A
0x7C8E22: lea     ecx, [esi+4]
0x7C8E25: push    ecx; lpAddend
0x7C8E26: call    edi ; InterlockedDecrement
0x7C8E28: test    eax, eax
0x7C8E2A: jnz     short loc_7C8E3A
0x7C8E2C: cmp     esi, ebx
0x7C8E2E: jz      short loc_7C8E3A
0x7C8E30: mov     edx, [esi]
0x7C8E32: mov     eax, [edx]
0x7C8E34: push    1
0x7C8E36: mov     ecx, esi
0x7C8E38: call    eax
0x7C8E3A: mov     esi, [ebp+90h]
0x7C8E40: cmp     esi, ebx
0x7C8E42: mov     byte ptr [esp+24h+var_4], 5
0x7C8E47: jz      short loc_7C8E61
0x7C8E49: lea     ecx, [esi+4]
0x7C8E4C: push    ecx; lpAddend
0x7C8E4D: call    edi ; InterlockedDecrement
0x7C8E4F: test    eax, eax
0x7C8E51: jnz     short loc_7C8E61
0x7C8E53: cmp     esi, ebx
0x7C8E55: jz      short loc_7C8E61
0x7C8E57: mov     edx, [esi]
0x7C8E59: mov     eax, [edx]
0x7C8E5B: push    1
0x7C8E5D: mov     ecx, esi
0x7C8E5F: call    eax
0x7C8E61: mov     esi, [ebp+8Ch]
0x7C8E67: cmp     esi, ebx
0x7C8E69: mov     byte ptr [esp+24h+var_4], 4
0x7C8E6E: jz      short loc_7C8E88
0x7C8E70: lea     ecx, [esi+4]
0x7C8E73: push    ecx; lpAddend
0x7C8E74: call    edi ; InterlockedDecrement
0x7C8E76: test    eax, eax
0x7C8E78: jnz     short loc_7C8E88
0x7C8E7A: cmp     esi, ebx
0x7C8E7C: jz      short loc_7C8E88
0x7C8E7E: mov     edx, [esi]
0x7C8E80: mov     eax, [edx]
0x7C8E82: push    1
0x7C8E84: mov     ecx, esi
0x7C8E86: call    eax
0x7C8E88: mov     esi, [ebp+88h]
0x7C8E8E: cmp     esi, ebx
0x7C8E90: mov     byte ptr [esp+24h+var_4], 3
0x7C8E95: jz      short loc_7C8EAF
0x7C8E97: lea     ecx, [esi+4]
0x7C8E9A: push    ecx; lpAddend
0x7C8E9B: call    edi ; InterlockedDecrement
0x7C8E9D: test    eax, eax
0x7C8E9F: jnz     short loc_7C8EAF
0x7C8EA1: cmp     esi, ebx
0x7C8EA3: jz      short loc_7C8EAF
0x7C8EA5: mov     edx, [esi]
0x7C8EA7: mov     eax, [edx]
0x7C8EA9: push    1
0x7C8EAB: mov     ecx, esi
0x7C8EAD: call    eax
0x7C8EAF: mov     esi, [ebp+84h]
0x7C8EB5: cmp     esi, ebx
0x7C8EB7: mov     byte ptr [esp+24h+var_4], 2
0x7C8EBC: jz      short loc_7C8ED6
0x7C8EBE: lea     ecx, [esi+4]
0x7C8EC1: push    ecx; lpAddend
0x7C8EC2: call    edi ; InterlockedDecrement
0x7C8EC4: test    eax, eax
0x7C8EC6: jnz     short loc_7C8ED6
0x7C8EC8: cmp     esi, ebx
0x7C8ECA: jz      short loc_7C8ED6
0x7C8ECC: mov     edx, [esi]
0x7C8ECE: mov     eax, [edx]
0x7C8ED0: push    1
0x7C8ED2: mov     ecx, esi
0x7C8ED4: call    eax
0x7C8ED6: mov     esi, [ebp+80h]
0x7C8EDC: cmp     esi, ebx
0x7C8EDE: mov     byte ptr [esp+24h+var_4], 1
0x7C8EE3: jz      short loc_7C8EFD
0x7C8EE5: lea     ecx, [esi+4]
0x7C8EE8: push    ecx; lpAddend
0x7C8EE9: call    edi ; InterlockedDecrement
0x7C8EEB: test    eax, eax
0x7C8EED: jnz     short loc_7C8EFD
0x7C8EEF: cmp     esi, ebx
0x7C8EF1: jz      short loc_7C8EFD
0x7C8EF3: mov     edx, [esi]
0x7C8EF5: mov     eax, [edx]
0x7C8EF7: push    1
0x7C8EF9: mov     ecx, esi
0x7C8EFB: call    eax
0x7C8EFD: mov     esi, [ebp+7Ch]
0x7C8F00: cmp     esi, ebx
0x7C8F02: mov     byte ptr [esp+24h+var_4], bl
0x7C8F06: jz      short loc_7C8F20
0x7C8F08: lea     ecx, [esi+4]
0x7C8F0B: push    ecx; lpAddend
0x7C8F0C: call    edi ; InterlockedDecrement
0x7C8F0E: test    eax, eax
0x7C8F10: jnz     short loc_7C8F20
0x7C8F12: cmp     esi, ebx
0x7C8F14: jz      short loc_7C8F20
0x7C8F16: mov     edx, [esi]
0x7C8F18: mov     eax, [edx]
0x7C8F1A: push    1
0x7C8F1C: mov     ecx, esi
0x7C8F1E: call    eax
0x7C8F20: mov     ecx, ebp; this
0x7C8F22: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7C8F2A: call    ??1BSShader@@UAE@XZ; BSShader::~BSShader(void)
0x7C8F2F: mov     ecx, dword ptr [esp+24h+var_C]
0x7C8F33: mov     large fs:0, ecx
0x7C8F3A: pop     ecx
0x7C8F3B: pop     edi
0x7C8F3C: pop     esi
0x7C8F3D: pop     ebp
0x7C8F3E: pop     ebx
0x7C8F3F: add     esp, 10h
0x7C8F42: retn
