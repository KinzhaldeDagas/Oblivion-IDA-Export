0x47FBD0: sub     esp, 20h
0x47FBD3: push    ebp
0x47FBD4: mov     ebp, [esp+24h+arg_0]
0x47FBD8: xor     al, al
0x47FBDA: test    ebp, ebp
0x47FBDC: mov     [esp+24h+var_1D], al
0x47FBE0: jz      loc_47FCF9
0x47FBE6: push    esi
0x47FBE7: mov     esi, [esp+28h+arg_10]
0x47FBEB: test    esi, esi
0x47FBED: jz      loc_47FCF8
0x47FBF3: cmp     [ebp+11h], al
0x47FBF6: jz      short loc_47FC02
0x47FBF8: test    byte ptr [esi+18h], 1
0x47FBFC: jnz     loc_47FCF8
0x47FC02: mov     eax, [esi+20h]
0x47FC05: mov     ecx, [esi+24h]
0x47FC08: mov     edx, [esi+28h]
0x47FC0B: mov     [esp+28h+var_10], eax
0x47FC0F: fld     [esp+28h+var_10]
0x47FC13: push    ebx
0x47FC14: mov     ebx, [esp+2Ch+arg_4]
0x47FC18: fsub    dword ptr [ebx]
0x47FC1A: mov     [esp+2Ch+var_C], ecx
0x47FC1E: mov     [esp+2Ch+var_8], edx
0x47FC22: mov     eax, [esi+2Ch]
0x47FC25: fstp    [esp+2Ch+var_1C]
0x47FC29: mov     [esp+2Ch+var_4], eax
0x47FC2D: fld     [esp+2Ch+var_C]
0x47FC31: fsub    dword ptr [ebx+4]
0x47FC34: fstp    [esp+2Ch+var_18]
0x47FC38: fld     [esp+2Ch+var_8]
0x47FC3C: fsub    dword ptr [ebx+8]
0x47FC3F: fstp    [esp+2Ch+var_14]
0x47FC43: fld     [esp+2Ch+var_18]
0x47FC47: fld     [esp+2Ch+var_1C]
0x47FC4B: fld     [esp+2Ch+var_14]
0x47FC4F: fld     st(1)
0x47FC51: fmulp   st(2), st
0x47FC53: fld     st(2)
0x47FC55: fmulp   st(3), st
0x47FC57: fxch    st(1)
0x47FC59: faddp   st(2), st
0x47FC5B: fmul    st, st
0x47FC5D: faddp   st(1), st
0x47FC5F: fstp    [esp+2Ch+arg_0]
0x47FC63: fld     [esp+2Ch+arg_0]
0x47FC67: call    __CIsqrt
0x47FC6C: fstp    [esp+2Ch+arg_0]
0x47FC70: fld     [esp+2Ch+arg_0]
0x47FC74: fld     [esp+2Ch+var_4]
0x47FC78: fadd    [esp+2Ch+arg_C]
0x47FC7C: fcompp
0x47FC7E: fnstsw  ax
0x47FC80: test    ah, 41h
0x47FC83: jnz     loc_47FD23
0x47FC89: mov     edx, [esi]
0x47FC8B: mov     eax, [edx+8]
0x47FC8E: push    edi
0x47FC8F: mov     ecx, esi
0x47FC91: call    eax
0x47FC93: mov     edi, eax
0x47FC95: test    edi, edi
0x47FC97: jz      short loc_47FCFE
0x47FC99: movzx   eax, word ptr [edi+0B6h]
0x47FCA0: xor     esi, esi
0x47FCA2: test    eax, eax
0x47FCA4: mov     [esp+30h+arg_0], eax
0x47FCA8: jle     short loc_47FCF2
0x47FCAA: lea     ebx, [ebx+0]
0x47FCB0: movzx   ecx, word ptr [edi+0B6h]
0x47FCB7: cmp     ecx, esi
0x47FCB9: ja      short loc_47FCBF
0x47FCBB: xor     eax, eax
0x47FCBD: jmp     short loc_47FCC8
0x47FCBF: mov     edx, [edi+0B0h]
0x47FCC5: mov     eax, [edx+esi*4]
0x47FCC8: fld     [esp+30h+arg_C]
0x47FCCC: push    eax; int
0x47FCCD: mov     eax, [esp+34h+arg_8]
0x47FCD1: push    ecx
0x47FCD2: fstp    [esp+38h+var_38]; float
0x47FCD5: push    eax; int
0x47FCD6: push    ebx; int
0x47FCD7: push    ebp; int
0x47FCD8: call    sub_47FBD0
0x47FCDD: add     esp, 14h
0x47FCE0: test    al, al
0x47FCE2: jz      short loc_47FCE9
0x47FCE4: mov     [esp+30h+var_1D], 1
0x47FCE9: add     esi, 1
0x47FCEC: cmp     esi, [esp+30h+arg_0]
0x47FCF0: jl      short loc_47FCB0
0x47FCF2: mov     al, [esp+30h+var_1D]
0x47FCF6: pop     edi
0x47FCF7: pop     ebx
0x47FCF8: pop     esi
0x47FCF9: pop     ebp
0x47FCFA: add     esp, 20h
0x47FCFD: retn
0x47FCFE: push    esi
0x47FCFF: mov     ecx, ebp
0x47FD01: call    sub_441920
0x47FD06: mov     ecx, [esp+30h+arg_8]
0x47FD0A: push    1
0x47FD0C: push    ecx
0x47FD0D: push    ebx
0x47FD0E: mov     ecx, ebp
0x47FD10: call    sub_959D60
0x47FD15: test    al, al
0x47FD17: jz      short loc_47FCF2
0x47FD19: pop     edi
0x47FD1A: pop     ebx
0x47FD1B: pop     esi
0x47FD1C: mov     al, 1
0x47FD1E: pop     ebp
0x47FD1F: add     esp, 20h
0x47FD22: retn
0x47FD23: mov     al, [esp+2Ch+var_1D]
0x47FD27: pop     ebx
0x47FD28: pop     esi
0x47FD29: pop     ebp
0x47FD2A: add     esp, 20h
0x47FD2D: retn
