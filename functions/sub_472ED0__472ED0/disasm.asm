0x472ED0: push    0FFFFFFFFh
0x472ED2: push    offset SEH_6C4C20
0x472ED7: mov     eax, large fs:0
0x472EDD: push    eax
0x472EDE: sub     esp, 0Ch
0x472EE1: push    ebx
0x472EE2: push    ebp
0x472EE3: push    esi
0x472EE4: push    edi
0x472EE5: mov     eax, ds:0B30AACh
0x472EEA: xor     eax, esp
0x472EEC: push    eax
0x472EED: lea     eax, [esp+2Ch+var_C]
0x472EF1: mov     large fs:0, eax
0x472EF7: mov     ebx, ecx
0x472EF9: mov     edi, [esp+2Ch+arg_0]
0x472EFD: mov     eax, [edi]
0x472EFF: mov     eax, [eax+8]
0x472F02: xor     ebp, ebp
0x472F04: xor     esi, esi
0x472F06: mov     [esp+2Ch+var_14], esi
0x472F0A: mov     [esp+2Ch+var_18], 0FFh
0x472F12: mov     [esp+2Ch+var_10], ebp
0x472F16: cmp     eax, ebp
0x472F18: mov     [esp+2Ch+var_4], ebp
0x472F1C: jz      short loc_472F62
0x472F1E: mov     eax, [eax+8]
0x472F21: cmp     eax, ebp
0x472F23: jz      short loc_472F62
0x472F25: mov     ecx, eax
0x472F27: call    TESActorBaseData_GetMagicka
0x472F2C: movzx   eax, ax
0x472F2F: lea     ecx, [esp+2Ch+var_14]
0x472F33: push    ecx
0x472F34: mov     ecx, [ebx+9Ch]
0x472F3A: push    eax
0x472F3B: mov     [esp+34h+var_18], eax
0x472F3F: call    sub_470960
0x472F44: mov     esi, [esp+2Ch+var_14]
0x472F48: test    esi, esi
0x472F4A: jz      short loc_472F62
0x472F4C: mov     edx, [edi]
0x472F4E: mov     eax, [esi]
0x472F50: mov     edi, [edx+10h]
0x472F53: mov     edx, [eax+10h]
0x472F56: push    0FFFFFFFFh
0x472F58: mov     ecx, esi
0x472F5A: call    edx
0x472F5C: cmp     eax, edi
0x472F5E: jz      short loc_472F83
0x472F60: xor     esi, esi
0x472F62: mov     eax, [esp+2Ch+arg_0]
0x472F66: mov     ecx, [eax]
0x472F68: mov     eax, [ecx+10h]
0x472F6B: test    eax, eax
0x472F6D: jz      short loc_472F7F
0x472F6F: mov     ebp, eax
0x472F71: add     eax, 4
0x472F74: push    eax; lpAddend
0x472F75: mov     [esp+30h+var_10], ebp
0x472F79: call    dword ptr ds:0A28078h
0x472F7F: test    esi, esi
0x472F81: jz      short loc_472FC9
0x472F83: mov     edx, [esi]
0x472F85: mov     eax, [edx+10h]
0x472F88: mov     edi, [ebx+98h]
0x472F8E: push    0FFFFFFFFh
0x472F90: mov     ecx, esi
0x472F92: call    eax
0x472F94: push    eax
0x472F95: lea     ecx, [esp+30h+var_14]
0x472F99: push    ecx
0x472F9A: mov     ecx, edi
0x472F9C: call    sub_6C4A10
0x472FA1: mov     eax, [esp+2Ch+var_14]
0x472FA5: test    eax, eax
0x472FA7: jz      short loc_473004
0x472FA9: mov     edi, eax
0x472FAB: add     eax, 4
0x472FAE: push    eax; lpAddend
0x472FAF: call    dword ptr ds:0A2807Ch
0x472FB5: test    eax, eax
0x472FB7: jnz     short loc_473004
0x472FB9: test    edi, edi
0x472FBB: jz      short loc_473004
0x472FBD: mov     edx, [edi]
0x472FBF: mov     eax, [edx]
0x472FC1: push    1
0x472FC3: mov     ecx, edi
0x472FC5: call    eax
0x472FC7: jmp     short loc_473004
0x472FC9: test    ebp, ebp
0x472FCB: jz      short loc_473004
0x472FCD: mov     ecx, [ebx+98h]
0x472FD3: push    ebp
0x472FD4: lea     edx, [esp+30h+var_14]
0x472FD8: push    edx
0x472FD9: call    sub_6C4A10
0x472FDE: mov     eax, [esp+2Ch+var_14]
0x472FE2: test    eax, eax
0x472FE4: jz      short loc_473004
0x472FE6: mov     edi, eax
0x472FE8: add     eax, 4
0x472FEB: push    eax; lpAddend
0x472FEC: call    dword ptr ds:0A2807Ch
0x472FF2: test    eax, eax
0x472FF4: jnz     short loc_473004
0x472FF6: test    edi, edi
0x472FF8: jz      short loc_473004
0x472FFA: mov     eax, [edi]
0x472FFC: mov     edx, [eax]
0x472FFE: push    1
0x473000: mov     ecx, edi
0x473002: call    edx
0x473004: mov     eax, [esp+2Ch+arg_0]
0x473008: mov     edi, [eax]
0x47300A: test    edi, edi
0x47300C: jz      short loc_47301E
0x47300E: mov     ecx, edi
0x473010: call    sub_4729F0
0x473015: push    edi
0x473016: call    FormHeapFree
0x47301B: add     esp, 4
0x47301E: test    esi, esi
0x473020: mov     ecx, [esp+2Ch+arg_0]
0x473024: mov     dword ptr [ecx], 0
0x47302A: jz      short loc_473053
0x47302C: mov     edx, [esp+2Ch+var_18]
0x473030: mov     ecx, [ebx+9Ch]
0x473036: push    edx
0x473037: call    sub_4708B0
0x47303C: mov     eax, [esi]
0x47303E: mov     edx, [eax+4]
0x473041: push    0
0x473043: mov     ecx, esi
0x473045: call    edx
0x473047: mov     eax, [esi]
0x473049: mov     edx, [eax]
0x47304B: push    1
0x47304D: mov     ecx, esi
0x47304F: call    edx
0x473051: xor     esi, esi
0x473053: test    ebp, ebp
0x473055: jnz     short loc_47306B
0x473057: test    esi, esi
0x473059: jnz     short loc_47306B
0x47305B: mov     eax, [esp+2Ch+var_18]
0x47305F: mov     ecx, [ebx+9Ch]
0x473065: push    eax
0x473066: call    sub_4708B0
0x47306B: test    ebp, ebp
0x47306D: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x473075: jz      short loc_473090
0x473077: lea     ecx, [ebp+4]
0x47307A: push    ecx; lpAddend
0x47307B: call    dword ptr ds:0A2807Ch
0x473081: test    eax, eax
0x473083: jnz     short loc_473090
0x473085: mov     edx, [ebp+0]
0x473088: mov     eax, [edx]
0x47308A: push    1
0x47308C: mov     ecx, ebp
0x47308E: call    eax
0x473090: mov     ecx, dword ptr [esp+2Ch+var_C]
0x473094: mov     large fs:0, ecx
0x47309B: pop     ecx
0x47309C: pop     edi
0x47309D: pop     esi
0x47309E: pop     ebp
0x47309F: pop     ebx
0x4730A0: add     esp, 18h
0x4730A3: retn    4
