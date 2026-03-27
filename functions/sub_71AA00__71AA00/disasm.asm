0x71AA00: sub     esp, 10h
0x71AA03: push    esi
0x71AA04: mov     esi, ecx
0x71AA06: cmp     dword ptr [esi+1Ch], 0
0x71AA0A: jnz     short loc_71AA12
0x71AA0C: lea     eax, [esi+0Ch]
0x71AA0F: mov     [esi+1Ch], eax
0x71AA12: mov     ecx, [esi+1Ch]
0x71AA15: mov     eax, [ecx+0Ch]
0x71AA18: test    eax, eax
0x71AA1A: mov     [esi+20h], eax
0x71AA1D: jz      loc_71AB6A
0x71AA23: cmp     eax, [esi+24h]
0x71AA26: jle     short loc_71AA78
0x71AA28: mov     edx, [esi+28h]
0x71AA2B: push    edx
0x71AA2C: call    FormHeapFree
0x71AA31: mov     eax, [esi+20h]
0x71AA34: xor     ecx, ecx
0x71AA36: mov     [esi+24h], eax
0x71AA39: mov     edx, 4
0x71AA3E: mul     edx
0x71AA40: seto    cl
0x71AA43: neg     ecx
0x71AA45: or      ecx, eax
0x71AA47: push    ecx; Size
0x71AA48: call    FormHeapAlloc
0x71AA4D: mov     [esi+28h], eax
0x71AA50: mov     eax, [esi+2Ch]
0x71AA53: push    eax
0x71AA54: call    FormHeapFree
0x71AA59: mov     eax, [esi+24h]
0x71AA5C: xor     ecx, ecx
0x71AA5E: mov     edx, 4
0x71AA63: mul     edx
0x71AA65: seto    cl
0x71AA68: neg     ecx
0x71AA6A: or      ecx, eax
0x71AA6C: push    ecx; Size
0x71AA6D: call    FormHeapAlloc
0x71AA72: add     esp, 10h
0x71AA75: mov     [esi+2Ch], eax
0x71AA78: mov     eax, [esi+1Ch]
0x71AA7B: mov     ecx, [eax+4]
0x71AA7E: mov     eax, [esi+8]
0x71AA81: fld     dword ptr [eax+64h]
0x71AA84: add     eax, 64h ; 'd'
0x71AA87: cmp     byte ptr [esi+35h], 0
0x71AA8B: fstp    [esp+14h+var_C]
0x71AA8F: fld     dword ptr [eax+0Ch]
0x71AA92: push    edi
0x71AA93: fstp    [esp+18h+var_8]
0x71AA97: fld     dword ptr [eax+18h]
0x71AA9A: fstp    [esp+18h+var_4]
0x71AA9E: jz      short loc_71AB01
0x71AAA0: xor     eax, eax
0x71AAA2: cmp     [esi+20h], eax
0x71AAA5: jle     loc_71AB59
0x71AAAB: fld     [esp+18h+var_4]
0x71AAAF: fld     [esp+18h+var_8]
0x71AAB3: fld     [esp+18h+var_C]
0x71AAB7: mov     edi, [esi+28h]
0x71AABA: lea     edx, [ecx+8]
0x71AABD: mov     edx, [edx]
0x71AABF: mov     ecx, [ecx]
0x71AAC1: mov     [edi+eax*4], edx
0x71AAC4: mov     edx, [esi+28h]
0x71AAC7: mov     edx, [edx+eax*4]
0x71AACA: fld     dword ptr [edx+24h]
0x71AACD: add     eax, 1
0x71AAD0: fmul    st, st(2)
0x71AAD2: fld     st(1)
0x71AAD4: fmul    dword ptr [edx+20h]
0x71AAD7: faddp   st(1), st
0x71AAD9: fld     dword ptr [edx+28h]
0x71AADC: fmul    st, st(4)
0x71AADE: faddp   st(1), st
0x71AAE0: fstp    [esp+18h+var_10]
0x71AAE4: fld     [esp+18h+var_10]
0x71AAE8: fsub    dword ptr [edx+2Ch]
0x71AAEB: mov     edx, [esi+2Ch]
0x71AAEE: fstp    [esp+18h+var_10]
0x71AAF2: fld     [esp+18h+var_10]
0x71AAF6: fstp    dword ptr [edx+eax*4-4]
0x71AAFA: cmp     eax, [esi+20h]
0x71AAFD: jl      short loc_71AAB7
0x71AAFF: jmp     short loc_71AB53
0x71AB01: xor     edx, edx
0x71AB03: cmp     [esi+20h], edx
0x71AB06: jle     short loc_71AB59
0x71AB08: fld     [esp+18h+var_4]
0x71AB0C: fld     [esp+18h+var_8]
0x71AB10: fld     [esp+18h+var_C]
0x71AB14: mov     edi, [esi+28h]
0x71AB17: lea     eax, [ecx+8]
0x71AB1A: mov     eax, [eax]
0x71AB1C: mov     ecx, [ecx]
0x71AB1E: mov     [edi+edx*4], eax
0x71AB21: mov     eax, [esi+28h]
0x71AB24: mov     eax, [eax+edx*4]
0x71AB27: fld     dword ptr [eax+24h]
0x71AB2A: add     eax, 20h ; ' '
0x71AB2D: fmul    st, st(2)
0x71AB2F: add     edx, 1
0x71AB32: fld     dword ptr [eax]
0x71AB34: fmul    st, st(2)
0x71AB36: faddp   st(1), st
0x71AB38: fld     dword ptr [eax+8]
0x71AB3B: mov     eax, [esi+2Ch]
0x71AB3E: fmul    st, st(4)
0x71AB40: faddp   st(1), st
0x71AB42: fstp    [esp+18h+var_10]
0x71AB46: fld     [esp+18h+var_10]
0x71AB4A: fstp    dword ptr [eax+edx*4-4]
0x71AB4E: cmp     edx, [esi+20h]
0x71AB51: jl      short loc_71AB14
0x71AB53: fstp    st(2)
0x71AB55: fstp    st
0x71AB57: fstp    st
0x71AB59: mov     ecx, [esi+20h]
0x71AB5C: sub     ecx, 1
0x71AB5F: push    ecx
0x71AB60: push    0
0x71AB62: mov     ecx, esi
0x71AB64: call    sub_733380
0x71AB69: pop     edi
0x71AB6A: pop     esi
0x71AB6B: add     esp, 10h
0x71AB6E: retn
