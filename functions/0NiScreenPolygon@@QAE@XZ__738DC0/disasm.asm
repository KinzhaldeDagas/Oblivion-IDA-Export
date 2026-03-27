0x738DC0: push    0FFFFFFFFh
0x738DC2: push    offset ??0NiScreenPolygon@@QAE@XZ_SEH
0x738DC7: mov     eax, large fs:0
0x738DCD: push    eax
0x738DCE: push    ecx
0x738DCF: push    ebx
0x738DD0: push    ebp
0x738DD1: push    esi
0x738DD2: push    edi
0x738DD3: mov     eax, ds:0B30AACh
0x738DD8: xor     eax, esp
0x738DDA: push    eax
0x738DDB: lea     eax, [esp+24h+var_C]
0x738DDF: mov     large fs:0, eax
0x738DE5: mov     edi, ecx
0x738DE7: mov     [esp+24h+var_10], edi
0x738DEB: call    NiObject_constr
0x738DF0: xor     ebx, ebx
0x738DF2: mov     dword ptr [edi], offset ??_7NiScreenPolygon@@6B@; const NiScreenPolygon::`vftable'
0x738DF8: mov     [esp+24h+var_4], ebx
0x738DFC: mov     [edi+8], ebx
0x738DFF: mov     ax, word ptr [esp+24h+arg_0]
0x738E04: movzx   esi, ax
0x738E07: mov     [edi+0Ch], ax
0x738E0B: xor     ecx, ecx
0x738E0D: mov     eax, esi
0x738E0F: mov     edx, 0Ch
0x738E14: mul     edx
0x738E16: seto    cl
0x738E19: mov     byte ptr [esp+24h+var_4], 1
0x738E1E: neg     ecx
0x738E20: or      ecx, eax
0x738E22: push    ecx; Size
0x738E23: call    FormHeapAlloc
0x738E28: lea     ecx, [esi+esi*2]
0x738E2B: add     ecx, ecx
0x738E2D: add     ecx, ecx
0x738E2F: push    ecx; Size
0x738E30: mov     ecx, [esp+2Ch+Src]
0x738E34: push    ecx; Src
0x738E35: push    eax; Dst
0x738E36: mov     [edi+10h], eax
0x738E39: call    _memcpy
0x738E3E: mov     ebp, [esp+34h+arg_8]
0x738E42: add     esp, 10h
0x738E45: cmp     ebp, ebx
0x738E47: jz      short loc_738E78
0x738E49: xor     ecx, ecx
0x738E4B: mov     eax, esi
0x738E4D: mov     edx, 8
0x738E52: mul     edx
0x738E54: seto    cl
0x738E57: neg     ecx
0x738E59: or      ecx, eax
0x738E5B: push    ecx; Size
0x738E5C: call    FormHeapAlloc
0x738E61: lea     ecx, ds:0[esi*8]
0x738E68: push    ecx; Size
0x738E69: push    ebp; Src
0x738E6A: push    eax; Dst
0x738E6B: mov     [edi+14h], eax
0x738E6E: call    _memcpy
0x738E73: add     esp, 10h
0x738E76: jmp     short loc_738E7B
0x738E78: mov     [edi+14h], ebx
0x738E7B: mov     ebx, [esp+24h+arg_C]
0x738E7F: test    ebx, ebx
0x738E81: jz      short loc_738ED9
0x738E83: xor     ecx, ecx
0x738E85: mov     eax, esi
0x738E87: mov     edx, 10h
0x738E8C: mul     edx
0x738E8E: seto    cl
0x738E91: neg     ecx
0x738E93: or      ecx, eax
0x738E95: push    ecx; Size
0x738E96: call    FormHeapAlloc
0x738E9B: mov     ebp, eax
0x738E9D: add     esp, 4
0x738EA0: mov     [esp+24h+arg_0], ebp
0x738EA4: test    ebp, ebp
0x738EA6: mov     byte ptr [esp+24h+var_4], 2
0x738EAB: jz      short loc_738EBF
0x738EAD: push    offset sub_47EA50
0x738EB2: push    esi
0x738EB3: push    10h
0x738EB5: push    ebp
0x738EB6: call    sub_401080
0x738EBB: mov     eax, ebp
0x738EBD: jmp     short loc_738EC1
0x738EBF: xor     eax, eax
0x738EC1: shl     esi, 4
0x738EC4: push    esi; Size
0x738EC5: push    ebx; Src
0x738EC6: push    eax; Dst
0x738EC7: mov     byte ptr [esp+30h+var_4], 1
0x738ECC: mov     [edi+18h], eax
0x738ECF: call    _memcpy
0x738ED4: add     esp, 0Ch
0x738ED7: jmp     short loc_738EE0
0x738ED9: mov     dword ptr [edi+18h], 0
0x738EE0: push    30h ; '0'; Size
0x738EE2: call    FormHeapAlloc
0x738EE7: add     esp, 4
0x738EEA: mov     [esp+24h+arg_0], eax
0x738EEE: test    eax, eax
0x738EF0: mov     byte ptr [esp+24h+var_4], 3
0x738EF5: jz      short loc_738F02
0x738EF7: mov     ecx, eax
0x738EF9: call    sub_7319E0
0x738EFE: mov     ebp, eax
0x738F00: jmp     short loc_738F04
0x738F02: xor     ebp, ebp
0x738F04: mov     esi, [edi+8]
0x738F07: cmp     esi, ebp
0x738F09: mov     byte ptr [esp+24h+var_4], 1
0x738F0E: jz      short loc_738F41
0x738F10: test    esi, esi
0x738F12: jz      short loc_738F30
0x738F14: lea     eax, [esi+4]
0x738F17: push    eax; lpAddend
0x738F18: call    dword ptr ds:0A2807Ch
0x738F1E: test    eax, eax
0x738F20: jnz     short loc_738F30
0x738F22: test    esi, esi
0x738F24: jz      short loc_738F30
0x738F26: mov     edx, [esi]
0x738F28: mov     eax, [edx]
0x738F2A: push    1
0x738F2C: mov     ecx, esi
0x738F2E: call    eax
0x738F30: test    ebp, ebp
0x738F32: mov     [edi+8], ebp
0x738F35: jz      short loc_738F41
0x738F37: add     ebp, 4
0x738F3A: push    ebp; lpAddend
0x738F3B: call    dword ptr ds:0A28078h
0x738F41: mov     eax, edi
0x738F43: mov     ecx, dword ptr [esp+24h+var_C]
0x738F47: mov     large fs:0, ecx
0x738F4E: pop     ecx
0x738F4F: pop     edi
0x738F50: pop     esi
0x738F51: pop     ebp
0x738F52: pop     ebx
0x738F53: add     esp, 10h
0x738F56: retn    10h
