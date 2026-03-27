0x803E40: sub     esp, 18h
0x803E43: push    ebx
0x803E44: push    ebp
0x803E45: mov     ebp, [esp+20h+arg_4]
0x803E49: push    esi
0x803E4A: mov     esi, ecx
0x803E4C: mov     ecx, ds:0B474F0h
0x803E52: test    ecx, ecx
0x803E54: push    edi
0x803E55: jz      short loc_803E9C
0x803E57: mov     eax, [ecx]
0x803E59: mov     edx, [eax+4Ch]
0x803E5C: call    edx
0x803E5E: test    eax, eax
0x803E60: mov     [esp+28h+arg_4], eax
0x803E64: fild    [esp+28h+arg_4]
0x803E68: jge     short loc_803E70
0x803E6A: fadd    dword ptr ds:0A2FC78h
0x803E70: mov     ecx, ds:0B474F0h
0x803E76: fstp    [esp+28h+arg_4]
0x803E7A: mov     eax, [ecx]
0x803E7C: mov     edx, [eax+50h]
0x803E7F: call    edx
0x803E81: test    eax, eax
0x803E83: mov     [esp+28h+var_14], eax
0x803E87: fild    [esp+28h+var_14]
0x803E8B: jge     loc_803F46
0x803E91: fadd    dword ptr ds:0A2FC78h
0x803E97: jmp     loc_803F46
0x803E9C: mov     ecx, ds:0B474ECh
0x803EA2: test    ecx, ecx
0x803EA4: jz      short loc_803EE4
0x803EA6: mov     eax, [ecx]
0x803EA8: mov     edx, [eax+4Ch]
0x803EAB: call    edx
0x803EAD: test    eax, eax
0x803EAF: mov     [esp+28h+arg_4], eax
0x803EB3: fild    [esp+28h+arg_4]
0x803EB7: jge     short loc_803EBF
0x803EB9: fadd    dword ptr ds:0A2FC78h
0x803EBF: mov     ecx, ds:0B474ECh
0x803EC5: fstp    [esp+28h+arg_4]
0x803EC9: mov     eax, [ecx]
0x803ECB: mov     edx, [eax+50h]
0x803ECE: call    edx
0x803ED0: test    eax, eax
0x803ED2: mov     [esp+28h+var_14], eax
0x803ED6: fild    [esp+28h+var_14]
0x803EDA: jge     short loc_803F46
0x803EDC: fadd    dword ptr ds:0A2FC78h
0x803EE2: jmp     short loc_803F46
0x803EE4: mov     eax, [ebp+0]
0x803EE7: test    eax, eax
0x803EE9: jz      short loc_803F3C
0x803EEB: mov     ecx, [eax+20h]
0x803EEE: test    ecx, ecx
0x803EF0: jz      short loc_803EFB
0x803EF2: mov     eax, [ecx]
0x803EF4: mov     edx, [eax+4Ch]
0x803EF7: call    edx
0x803EF9: jmp     short loc_803EFD
0x803EFB: xor     eax, eax
0x803EFD: test    eax, eax
0x803EFF: mov     [esp+28h+arg_4], eax
0x803F03: fild    [esp+28h+arg_4]
0x803F07: jge     short loc_803F0F
0x803F09: fadd    dword ptr ds:0A2FC78h
0x803F0F: mov     eax, [ebp+0]
0x803F12: fstp    [esp+28h+arg_4]
0x803F16: mov     ecx, [eax+20h]
0x803F19: test    ecx, ecx
0x803F1B: jz      short loc_803F26
0x803F1D: mov     eax, [ecx]
0x803F1F: mov     edx, [eax+50h]
0x803F22: call    edx
0x803F24: jmp     short loc_803F28
0x803F26: xor     eax, eax
0x803F28: test    eax, eax
0x803F2A: mov     [esp+28h+var_14], eax
0x803F2E: fild    [esp+28h+var_14]
0x803F32: jge     short loc_803F46
0x803F34: fadd    dword ptr ds:0A2FC78h
0x803F3A: jmp     short loc_803F46
0x803F3C: fld     dword ptr ds:0A56670h
0x803F42: fst     [esp+28h+arg_4]
0x803F46: cmp     byte ptr ds:0B42E96h, 0
0x803F4D: fstp    [esp+28h+var_18]
0x803F51: mov     edi, [esp+28h+arg_8]
0x803F55: fld1
0x803F57: jz      short loc_803F66
0x803F59: fst     [esp+28h+arg_8]
0x803F5D: fst     [esp+28h+var_14]
0x803F61: jmp     loc_804032
0x803F66: mov     eax, [edi]
0x803F68: fstp    st
0x803F6A: test    eax, eax
0x803F6C: jz      short loc_803FBC
0x803F6E: mov     ecx, [eax+20h]
0x803F71: test    ecx, ecx
0x803F73: jz      short loc_803F7E
0x803F75: mov     eax, [ecx]
0x803F77: mov     edx, [eax+4Ch]
0x803F7A: call    edx
0x803F7C: jmp     short loc_803F80
0x803F7E: xor     eax, eax
0x803F80: test    eax, eax
0x803F82: mov     [esp+28h+arg_8], eax
0x803F86: fild    [esp+28h+arg_8]
0x803F8A: jge     short loc_803F92
0x803F8C: fadd    dword ptr ds:0A2FC78h
0x803F92: mov     eax, [edi]
0x803F94: fstp    [esp+28h+arg_8]
0x803F98: mov     ecx, [eax+20h]
0x803F9B: test    ecx, ecx
0x803F9D: jz      short loc_803FB0
0x803F9F: mov     eax, [ecx]
0x803FA1: mov     edx, [eax+50h]
0x803FA4: call    edx
0x803FA6: mov     [esp+28h+var_14], eax
0x803FAA: fild    [esp+28h+var_14]
0x803FAE: jmp     short loc_80400A
0x803FB0: xor     eax, eax
0x803FB2: mov     [esp+28h+var_14], eax
0x803FB6: fild    [esp+28h+var_14]
0x803FBA: jmp     short loc_80400A
0x803FBC: mov     ecx, ds:0B3F928h
0x803FC2: mov     eax, [ecx]
0x803FC4: mov     edx, [eax+7Ch]
0x803FC7: call    edx
0x803FC9: mov     edx, [eax]
0x803FCB: mov     ecx, eax
0x803FCD: mov     eax, [edx+4Ch]
0x803FD0: push    0
0x803FD2: call    eax
0x803FD4: test    eax, eax
0x803FD6: mov     [esp+28h+arg_8], eax
0x803FDA: fild    [esp+28h+arg_8]
0x803FDE: jge     short loc_803FE6
0x803FE0: fadd    dword ptr ds:0A2FC78h
0x803FE6: mov     ecx, ds:0B3F928h
0x803FEC: fstp    [esp+28h+arg_8]
0x803FF0: mov     edx, [ecx]
0x803FF2: mov     eax, [edx+7Ch]
0x803FF5: call    eax
0x803FF7: mov     edx, [eax]
0x803FF9: mov     ecx, eax
0x803FFB: mov     eax, [edx+50h]
0x803FFE: push    0
0x804000: call    eax
0x804002: mov     [esp+28h+var_14], eax
0x804006: fild    [esp+28h+var_14]
0x80400A: test    eax, eax
0x80400C: jge     short loc_804014
0x80400E: fadd    dword ptr ds:0A2FC78h
0x804014: fstp    [esp+28h+var_14]
0x804018: fld     [esp+28h+arg_8]
0x80401C: fdiv    [esp+28h+arg_4]
0x804020: fstp    [esp+28h+arg_8]
0x804024: fld     [esp+28h+var_14]
0x804028: fdiv    [esp+28h+var_18]
0x80402C: fstp    [esp+28h+var_14]
0x804030: fld1
0x804032: cmp     [esp+28h+arg_C], 0
0x804037: fld     [esp+28h+arg_8]
0x80403B: fst     dword ptr [esi+0A8h]
0x804041: fld     [esp+28h+var_14]
0x804045: fst     dword ptr [esi+0ACh]
0x80404B: fld     [esp+28h+arg_4]
0x80404F: fld     qword ptr ds:0A2FAA0h
0x804055: fld     st
0x804057: fdivrp  st(2), st
0x804059: fxch    st(1)
0x80405B: fstp    [esp+28h+arg_4]
0x80405F: fld     [esp+28h+arg_4]
0x804063: fldz
0x804065: fadd    st(1), st
0x804067: fxch    st(1)
0x804069: fstp    dword ptr [esi+0B0h]
0x80406F: fld     [esp+28h+var_18]
0x804073: fdivp   st(2), st
0x804075: fxch    st(1)
0x804077: fstp    [esp+28h+arg_4]
0x80407B: fadd    [esp+28h+arg_4]
0x80407F: fstp    dword ptr [esi+0B4h]
0x804085: fldz
0x804087: fst     [esp+28h+var_10]
0x80408B: fstp    [esp+28h+var_4]
0x80408F: jz      short loc_80409B
0x804091: fstp    st(1)
0x804093: fstp    st
0x804095: fst     [esp+28h+var_C]
0x804099: jmp     short loc_8040A1
0x80409B: fstp    st(2)
0x80409D: fstp    [esp+28h+var_C]
0x8040A1: mov     eax, ds:0B3F928h
0x8040A6: fstp    [esp+28h+var_8]
0x8040AA: cmp     dword ptr [eax+200h], 0
0x8040B1: mov     [esp+28h+arg_C], 0
0x8040B6: mov     ebx, 1
0x8040BB: jnz     short loc_8040E9
0x8040BD: cmp     dword ptr [eax+204h], 0
0x8040C4: jnz     short loc_8040E9
0x8040C6: mov     ecx, [edi]
0x8040C8: test    ecx, ecx
0x8040CA: mov     [esp+28h+arg_C], bl
0x8040CE: jz      short loc_8040DE
0x8040D0: call    BSRenderedTexture__UseTextureToRender
0x8040D5: push    eax; a2
0x8040D6: push    ebx; a1
0x8040D7: call    NiRenderer_BeginScene
0x8040DC: jmp     short loc_8040E6
0x8040DE: push    0; a2
0x8040E0: push    ebx; a1
0x8040E1: call    NiRenderer_BeginScene1
0x8040E6: add     esp, 8
0x8040E9: cmp     dword ptr ds:0B474ECh, 0
0x8040F0: jz      short loc_8040FE
0x8040F2: mov     dword ptr [esi+0A4h], 2
0x8040FC: jmp     short loc_804151
0x8040FE: cmp     dword ptr ds:0B474F0h, 0
0x804105: jz      short loc_80413C
0x804107: mov     [esi+0A4h], ebx
0x80410D: mov     ecx, ds:0B3F928h
0x804113: cmp     [ecx+200h], ebx
0x804119: jz      short loc_804123
0x80411B: cmp     [ecx+204h], ebx
0x804121: jnz     short loc_804184
0x804123: cmp     [ecx+20Ch], bl
0x804129: jnz     short loc_804184
0x80412B: mov     eax, [ecx]
0x80412D: mov     eax, [eax+144h]
0x804133: lea     edx, [esp+28h+var_10]
0x804137: push    edx
0x804138: call    eax
0x80413A: jmp     short loc_80417E
0x80413C: mov     dword ptr [esi+0A4h], 0
0x804146: mov     ecx, [ebp+0]
0x804149: push    ecx; a2
0x80414A: mov     ecx, esi; this
0x80414C: call    sub_802890
0x804151: mov     ecx, ds:0B3F928h
0x804157: cmp     [ecx+200h], ebx
0x80415D: jz      short loc_804167
0x80415F: cmp     [ecx+204h], ebx
0x804165: jnz     short loc_804184
0x804167: cmp     [ecx+20Ch], bl
0x80416D: jnz     short loc_804184
0x80416F: mov     edx, [ecx]
0x804171: mov     edx, [edx+144h]
0x804177: lea     eax, [esp+28h+var_10]
0x80417B: push    eax
0x80417C: call    edx
0x80417E: mov     ecx, ds:0B3F928h
0x804184: push    ecx
0x804185: mov     ecx, [esp+2Ch+arg_0]; this
0x804189: call    sub_709C60
0x80418E: cmp     [esp+28h+arg_C], 0
0x804193: jz      short loc_80419F
0x804195: cmp     dword ptr [edi], 0
0x804198: jz      short loc_80419F
0x80419A: call    NiRenderer_EndScene
0x80419F: pop     edi
0x8041A0: pop     esi
0x8041A1: pop     ebp
0x8041A2: pop     ebx
0x8041A3: add     esp, 18h
0x8041A6: retn    10h
