0x76EA10: sub     esp, 14h
0x76EA13: push    ebx
0x76EA14: push    ebp
0x76EA15: push    esi
0x76EA16: mov     esi, [esp+20h+arg_0]
0x76EA1A: mov     edx, [esi+10h]
0x76EA1D: mov     ebx, [esi+24h]
0x76EA20: xor     ebp, ebp
0x76EA22: test    edx, edx
0x76EA24: push    edi
0x76EA25: mov     [esp+24h+var_10], ebp
0x76EA29: jnz     short loc_76EA67
0x76EA2B: xor     edi, edi
0x76EA2D: cmp     [esi+8], di
0x76EA31: jbe     loc_76EB27
0x76EA37: mov     eax, [esi+1Ch]
0x76EA3A: lea     ebx, [ebx+0]
0x76EA40: push    eax
0x76EA41: push    0
0x76EA43: push    ebx
0x76EA44: call    __memset
0x76EA49: mov     eax, [esi+1Ch]
0x76EA4C: add     ebx, [esi+20h]
0x76EA4F: add     edi, 1
0x76EA52: add     esp, 0Ch
0x76EA55: add     ebp, eax
0x76EA57: cmp     di, [esi+8]
0x76EA5B: jb      short loc_76EA40
0x76EA5D: pop     edi
0x76EA5E: pop     esi
0x76EA5F: mov     eax, ebp
0x76EA61: pop     ebp
0x76EA62: pop     ebx
0x76EA63: add     esp, 14h
0x76EA66: retn
0x76EA67: mov     ax, [esi+4]
0x76EA6B: mov     cx, [esi]
0x76EA6E: sub     ax, 0Ch
0x76EA72: add     cx, 1
0x76EA76: movzx   eax, ax
0x76EA79: movzx   ecx, cx
0x76EA7C: mov     edi, eax
0x76EA7E: sub     edi, ecx
0x76EA80: test    di, di
0x76EA83: mov     [esp+24h+var_4], ecx
0x76EA87: jle     short loc_76EA92
0x76EA89: movzx   eax, cx
0x76EA8C: mov     [esp+24h+arg_0], eax
0x76EA90: jmp     short loc_76EA99
0x76EA92: movzx   ecx, ax
0x76EA95: mov     [esp+24h+arg_0], ecx
0x76EA99: cmp     [esi+8], bp
0x76EA9D: mov     [esp+24h+var_C], ebp
0x76EAA1: jbe     loc_76EB27
0x76EAA7: fld     qword ptr ds:0A3D5A8h
0x76EAAD: fld1
0x76EAAF: mov     ecx, [esp+24h+arg_0]
0x76EAB3: test    cx, cx
0x76EAB6: mov     eax, edx
0x76EAB8: mov     edi, ebx
0x76EABA: mov     [esp+24h+var_14], 0
0x76EAC2: jbe     short loc_76EAEF
0x76EAC4: movzx   ecx, cx
0x76EAC7: movzx   ebp, cx
0x76EACA: mov     [esp+24h+var_14], ebp
0x76EACE: movsx   ebp, word ptr [eax]
0x76EAD1: mov     [esp+24h+var_8], ebp
0x76EAD5: add     edi, 4
0x76EAD8: add     eax, 2
0x76EADB: sub     ecx, 1
0x76EADE: fild    [esp+24h+var_8]
0x76EAE2: fdiv    st, st(2)
0x76EAE4: fsub    st, st(1)
0x76EAE6: fstp    dword ptr [edi-4]
0x76EAE9: jnz     short loc_76EACE
0x76EAEB: mov     ebp, [esp+24h+var_10]
0x76EAEF: mov     eax, [esp+24h+var_4]
0x76EAF3: mov     ecx, [esp+24h+var_14]
0x76EAF7: cmp     cx, ax
0x76EAFA: jnb     short loc_76EB05
0x76EAFC: sub     eax, ecx
0x76EAFE: movzx   ecx, ax
0x76EB01: xor     eax, eax
0x76EB03: rep stosd
0x76EB05: mov     eax, [esp+24h+var_C]
0x76EB09: add     ebp, [esi+1Ch]
0x76EB0C: add     edx, [esi+18h]
0x76EB0F: add     ebx, [esi+20h]
0x76EB12: add     eax, 1
0x76EB15: cmp     ax, [esi+8]
0x76EB19: mov     [esp+24h+var_10], ebp
0x76EB1D: mov     [esp+24h+var_C], eax
0x76EB21: jb      short loc_76EAAF
0x76EB23: fstp    st(1)
0x76EB25: fstp    st
0x76EB27: pop     edi
0x76EB28: pop     esi
0x76EB29: mov     eax, ebp
0x76EB2B: pop     ebp
0x76EB2C: pop     ebx
0x76EB2D: add     esp, 14h
0x76EB30: retn
