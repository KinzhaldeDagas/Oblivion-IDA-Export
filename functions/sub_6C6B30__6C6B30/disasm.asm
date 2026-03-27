0x6C6B30: sub     esp, 18h
0x6C6B33: fld     [esp+18h+arg_4]
0x6C6B37: push    ebx
0x6C6B38: push    ebp
0x6C6B39: push    esi
0x6C6B3A: push    edi
0x6C6B3B: mov     edi, [esp+28h+arg_0]
0x6C6B3F: xor     ebx, ebx
0x6C6B41: push    ebx; char
0x6C6B42: mov     esi, ecx
0x6C6B44: push    ecx
0x6C6B45: mov     ecx, edi
0x6C6B47: fstp    [esp+30h+var_30]; float
0x6C6B4A: mov     [esp+30h+var_10], esi
0x6C6B4E: call    sub_6C5FC0
0x6C6B53: fstp    [esp+28h+arg_4]
0x6C6B57: mov     eax, [edi+20h]
0x6C6B5A: fld     [esp+28h+arg_4]
0x6C6B5E: mov     ecx, [eax+0Ch]
0x6C6B61: mov     eax, [eax+10h]
0x6C6B64: xor     edx, edx
0x6C6B66: xor     ebp, ebp
0x6C6B68: test    ecx, ecx
0x6C6B6A: mov     [esp+28h+var_14], ebx
0x6C6B6E: mov     [esp+28h+var_4], edx
0x6C6B72: jbe     short loc_6C6BDD
0x6C6B74: fstp    st
0x6C6B76: mov     esi, eax
0x6C6B78: mov     [esp+28h+arg_0], ecx
0x6C6B7C: lea     esp, [esp+0]
0x6C6B80: mov     eax, [esi+4]
0x6C6B83: test    eax, eax
0x6C6B85: jz      short loc_6C6BC7
0x6C6B87: mov     ecx, ds:0B241C8h
0x6C6B8D: mov     edx, ds:0B241C4h
0x6C6B93: push    ecx; MaxCount
0x6C6B94: push    edx; Str2
0x6C6B95: push    eax; Str1
0x6C6B96: call    __strnicmp
0x6C6B9B: add     esp, 0Ch
0x6C6B9E: test    eax, eax
0x6C6BA0: jnz     short loc_6C6BC7
0x6C6BA2: test    ebp, ebp
0x6C6BA4: mov     [esp+28h+var_4], esi
0x6C6BA8: jnz     short loc_6C6BAC
0x6C6BAA: mov     ebp, esi
0x6C6BAC: fld     dword ptr [esi]
0x6C6BAE: fld     [esp+28h+arg_4]
0x6C6BB2: fcompp
0x6C6BB4: fnstsw  ax
0x6C6BB6: test    ah, 41h
0x6C6BB9: jnz     short loc_6C6BC1
0x6C6BBB: mov     [esp+28h+var_14], esi
0x6C6BBF: jmp     short loc_6C6BC7
0x6C6BC1: test    ebx, ebx
0x6C6BC3: jnz     short loc_6C6BC7
0x6C6BC5: mov     ebx, esi
0x6C6BC7: add     esi, 8
0x6C6BCA: sub     [esp+28h+arg_0], 1
0x6C6BCF: jnz     short loc_6C6B80
0x6C6BD1: fld     [esp+28h+arg_4]
0x6C6BD5: mov     esi, [esp+28h+var_10]
0x6C6BD9: mov     edx, [esp+28h+var_4]
0x6C6BDD: test    ebx, ebx
0x6C6BDF: mov     eax, [esp+28h+var_14]
0x6C6BE3: mov     [esp+28h+var_15], 0
0x6C6BE8: jz      short loc_6C6BF2
0x6C6BEA: test    eax, eax
0x6C6BEC: jz      short loc_6C6C1A
0x6C6BEE: fld     dword ptr [eax]
0x6C6BF0: jmp     short loc_6C6C26
0x6C6BF2: fld     dword ptr [eax]
0x6C6BF4: mov     ebx, ebp
0x6C6BF6: fstp    [esp+28h+arg_4]
0x6C6BFA: mov     [esp+28h+var_15], 1
0x6C6BFF: fld     [esp+28h+arg_4]
0x6C6C03: fld     st
0x6C6C05: fsubp   st(2), st
0x6C6C07: fld     dword ptr [edi+30h]
0x6C6C0A: fsub    dword ptr [edi+2Ch]
0x6C6C0D: fadd    dword ptr [ebp+0]
0x6C6C10: fstp    [esp+28h+arg_4]
0x6C6C14: fsubr   [esp+28h+arg_4]
0x6C6C18: jmp     short loc_6C6C34
0x6C6C1A: fld     dword ptr [edi+2Ch]
0x6C6C1D: mov     [esp+28h+var_14], edx
0x6C6C21: fsub    dword ptr [edi+30h]
0x6C6C24: fadd    dword ptr [edx]
0x6C6C26: fstp    [esp+28h+arg_4]
0x6C6C2A: fld     [esp+28h+arg_4]
0x6C6C2E: fld     st
0x6C6C30: fsubp   st(2), st
0x6C6C32: fsubr   dword ptr [ebx]
0x6C6C34: cmp     [esp+28h+var_14], 0
0x6C6C39: fdivp   st(1), st
0x6C6C3B: mov     eax, [esi+20h]
0x6C6C3E: mov     edi, [eax+0Ch]
0x6C6C41: mov     eax, [eax+10h]
0x6C6C44: setz    byte ptr [esp+28h+arg_0]
0x6C6C49: test    ebx, ebx
0x6C6C4B: setz    byte ptr [esp+28h+arg_4]
0x6C6C50: xor     edx, edx
0x6C6C52: xor     ecx, ecx
0x6C6C54: xor     ebp, ebp
0x6C6C56: test    edi, edi
0x6C6C58: mov     [esp+28h+var_C], edx
0x6C6C5C: mov     [esp+28h+var_8], ecx
0x6C6C60: fstp    [esp+28h+var_4]
0x6C6C64: jbe     short loc_6C6CD3
0x6C6C66: mov     esi, eax
0x6C6C68: cmp     byte ptr [esp+28h+arg_0], 0
0x6C6C6D: jz      short loc_6C6C78
0x6C6C6F: cmp     byte ptr [esp+28h+arg_4], 0
0x6C6C74: jnz     short loc_6C6CCF
0x6C6C76: jmp     short loc_6C6CA0
0x6C6C78: mov     ecx, [esp+28h+var_14]
0x6C6C7C: mov     eax, [ecx+4]
0x6C6C7F: mov     ecx, [esi+4]
0x6C6C82: push    eax; Str2
0x6C6C83: push    ecx; Str1
0x6C6C84: call    __strcmp
0x6C6C89: add     esp, 8
0x6C6C8C: test    eax, eax
0x6C6C8E: jnz     short loc_6C6C99
0x6C6C90: mov     [esp+28h+var_C], esi
0x6C6C94: mov     byte ptr [esp+28h+arg_0], 1
0x6C6C99: cmp     byte ptr [esp+28h+arg_4], 0
0x6C6C9E: jnz     short loc_6C6CBD
0x6C6CA0: mov     eax, [ebx+4]
0x6C6CA3: mov     ecx, [esi+4]
0x6C6CA6: push    eax; Str2
0x6C6CA7: push    ecx; Str1
0x6C6CA8: call    __strcmp
0x6C6CAD: add     esp, 8
0x6C6CB0: test    eax, eax
0x6C6CB2: jnz     short loc_6C6CBD
0x6C6CB4: mov     [esp+28h+var_8], esi
0x6C6CB8: mov     byte ptr [esp+28h+arg_4], 1
0x6C6CBD: mov     edx, [esp+28h+var_C]
0x6C6CC1: mov     ecx, [esp+28h+var_8]
0x6C6CC5: add     ebp, 1
0x6C6CC8: add     esi, 8
0x6C6CCB: cmp     ebp, edi
0x6C6CCD: jb      short loc_6C6C68
0x6C6CCF: mov     esi, [esp+28h+var_10]
0x6C6CD3: cmp     edx, ecx
0x6C6CD5: fldz
0x6C6CD7: fst     [esp+28h+arg_4]
0x6C6CDB: fstp    [esp+28h+arg_0]
0x6C6CDF: jnz     short loc_6C6D16
0x6C6CE1: cmp     [esp+28h+var_15], 0
0x6C6CE6: fld     dword ptr [edx]
0x6C6CE8: fstp    [esp+28h+arg_0]
0x6C6CEC: fld     dword ptr [ecx]
0x6C6CEE: fstp    [esp+28h+arg_4]
0x6C6CF2: jz      short loc_6C6D04
0x6C6CF4: fld     dword ptr [esi+30h]
0x6C6CF7: fsub    dword ptr [esi+2Ch]
0x6C6CFA: fadd    [esp+28h+arg_4]
0x6C6CFE: fstp    [esp+28h+arg_4]
0x6C6D02: jmp     short loc_6C6D4D
0x6C6D04: fld     [esp+28h+arg_0]
0x6C6D08: fld     dword ptr [esi+30h]
0x6C6D0B: fsub    dword ptr [esi+2Ch]
0x6C6D0E: fsubp   st(1), st
0x6C6D10: fstp    [esp+28h+arg_0]
0x6C6D14: jmp     short loc_6C6D4D
0x6C6D16: test    ecx, ecx
0x6C6D18: jz      short loc_6C6D20
0x6C6D1A: fld     dword ptr [ecx]
0x6C6D1C: fstp    [esp+28h+arg_4]
0x6C6D20: test    edx, edx
0x6C6D22: jz      short loc_6C6D2A
0x6C6D24: fld     dword ptr [edx]
0x6C6D26: fstp    [esp+28h+arg_0]
0x6C6D2A: fld     [esp+28h+arg_0]
0x6C6D2E: fld     [esp+28h+arg_4]
0x6C6D32: fcom    st(1)
0x6C6D34: fnstsw  ax
0x6C6D36: fstp    st(1)
0x6C6D38: test    ah, 5
0x6C6D3B: jp      short loc_6C6D4B
0x6C6D3D: fld     dword ptr [esi+30h]
0x6C6D40: fsub    dword ptr [esi+2Ch]
0x6C6D43: faddp   st(1), st
0x6C6D45: fstp    [esp+28h+arg_4]
0x6C6D49: jmp     short loc_6C6D4D
0x6C6D4B: fstp    st
0x6C6D4D: fld     [esp+28h+arg_4]
0x6C6D51: fld     [esp+28h+arg_0]
0x6C6D55: fld     st
0x6C6D57: fsubp   st(2), st
0x6C6D59: fld     [esp+28h+var_4]
0x6C6D5D: fmulp   st(2), st
0x6C6D5F: faddp   st(1), st
0x6C6D61: fstp    [esp+28h+arg_4]
0x6C6D65: fld     [esp+28h+arg_4]
0x6C6D69: fld     dword ptr [esi+2Ch]
0x6C6D6C: fcomp   st(1)
0x6C6D6E: fnstsw  ax
0x6C6D70: fld     dword ptr [esi+30h]
0x6C6D73: test    ah, 41h
0x6C6D76: jnz     short loc_6C6D8F
0x6C6D78: fsub    dword ptr [esi+2Ch]
0x6C6D7B: pop     edi
0x6C6D7C: pop     esi
0x6C6D7D: pop     ebp
0x6C6D7E: faddp   st(1), st
0x6C6D80: pop     ebx
0x6C6D81: fstp    [esp+18h+arg_4]
0x6C6D85: fld     [esp+18h+arg_4]
0x6C6D89: add     esp, 18h
0x6C6D8C: retn    8
0x6C6D8F: fcomp   st(1)
0x6C6D91: fnstsw  ax
0x6C6D93: test    ah, 5
0x6C6D96: jp      short loc_6C6DA8
0x6C6D98: fld     dword ptr [esi+30h]
0x6C6D9B: fsub    dword ptr [esi+2Ch]
0x6C6D9E: fsubp   st(1), st
0x6C6DA0: fstp    [esp+28h+arg_4]
0x6C6DA4: fld     [esp+28h+arg_4]
0x6C6DA8: pop     edi
0x6C6DA9: pop     esi
0x6C6DAA: pop     ebp
0x6C6DAB: pop     ebx
0x6C6DAC: add     esp, 18h
0x6C6DAF: retn    8
