0x506F00: sub     esp, 8
0x506F03: mov     ecx, [esp+8+arg_8]
0x506F07: add     ecx, 0FFFFFFFFh
0x506F0A: mov     eax, 38E38E39h
0x506F0F: imul    ecx
0x506F11: sar     edx, 1
0x506F13: mov     eax, edx
0x506F15: shr     eax, 1Fh
0x506F18: push    edi
0x506F19: mov     edi, 1
0x506F1E: add     eax, edx
0x506F20: cmp     eax, edi
0x506F22: mov     [esp+0Ch+var_4], ecx
0x506F26: jl      short loc_506F38
0x506F28: lea     edi, [edi+edi*2+1]
0x506F2C: cmp     edi, eax
0x506F2E: jle     short loc_506F28
0x506F30: test    edi, edi
0x506F32: jle     loc_506FC3
0x506F38: push    ebx
0x506F39: push    ebp
0x506F3A: push    esi
0x506F3B: jmp     short loc_506F40
0x506F3D: align 10h
0x506F40: cmp     edi, ecx
0x506F42: mov     ebp, edi
0x506F44: jg      short loc_506FAC
0x506F46: mov     eax, [esp+18h+arg_0]
0x506F4A: mov     ebx, eax
0x506F4C: mov     [esp+18h+var_8], eax
0x506F50: cmp     ebp, edi
0x506F52: mov     edx, [eax+ebp*4]
0x506F55: mov     esi, ebp
0x506F57: mov     [esp+18h+arg_8], edx
0x506F5B: jl      short loc_506F93
0x506F5D: lea     ecx, [ecx+0]
0x506F60: mov     eax, [ebx]
0x506F62: mov     ecx, [esp+18h+arg_8]
0x506F66: push    eax
0x506F67: push    ecx
0x506F68: call    [esp+20h+arg_4]
0x506F6C: add     esp, 8
0x506F6F: test    eax, eax
0x506F71: jge     short loc_506F8B
0x506F73: mov     edx, [ebx]
0x506F75: mov     eax, [esp+18h+arg_0]
0x506F79: mov     [eax+esi*4], edx
0x506F7C: lea     eax, ds:0[edi*4]
0x506F83: sub     esi, edi
0x506F85: sub     ebx, eax
0x506F87: cmp     esi, edi
0x506F89: jge     short loc_506F60
0x506F8B: mov     eax, [esp+18h+arg_0]
0x506F8F: mov     ecx, [esp+18h+var_4]
0x506F93: mov     ebx, [esp+18h+var_8]
0x506F97: mov     edx, [esp+18h+arg_8]
0x506F9B: add     ebp, 1
0x506F9E: add     ebx, 4
0x506FA1: cmp     ebp, ecx
0x506FA3: mov     [eax+esi*4], edx
0x506FA6: mov     [esp+18h+var_8], ebx
0x506FAA: jle     short loc_506F50
0x506FAC: mov     eax, 55555556h
0x506FB1: imul    edi
0x506FB3: mov     eax, edx
0x506FB5: shr     eax, 1Fh
0x506FB8: add     eax, edx
0x506FBA: mov     edi, eax
0x506FBC: test    edi, edi
0x506FBE: jg      short loc_506F40
0x506FC0: pop     esi
0x506FC1: pop     ebp
0x506FC2: pop     ebx
0x506FC3: pop     edi
0x506FC4: add     esp, 8
0x506FC7: retn    0Ch
