0x6EDE10: push    0FFFFFFFFh
0x6EDE12: push    offset SEH_6EDE10
0x6EDE17: mov     eax, large fs:0
0x6EDE1D: push    eax
0x6EDE1E: sub     esp, 50h
0x6EDE21: push    ebx
0x6EDE22: push    ebp
0x6EDE23: push    esi
0x6EDE24: push    edi
0x6EDE25: mov     eax, ds:0B30AACh
0x6EDE2A: xor     eax, esp
0x6EDE2C: push    eax
0x6EDE2D: lea     eax, [esp+70h+var_C]
0x6EDE31: mov     large fs:0, eax
0x6EDE37: mov     ebp, ecx
0x6EDE39: mov     ebx, [esp+70h+arg_0]
0x6EDE3D: cmp     ebx, 5
0x6EDE40: jl      short loc_6EDE54
0x6EDE42: push    0D9h ; 'Ù'; int
0x6EDE47: push    offset a_Fancontrols_c; ".\\FanControls.cpp"
0x6EDE4C: call    sub_6ED6D0
0x6EDE51: add     esp, 8
0x6EDE54: cmp     byte ptr [ebp+0], 0
0x6EDE58: jz      loc_6EDFF5
0x6EDE5E: fld     dword ptr ds:0A468FCh
0x6EDE64: mov     eax, [esp+70h+arg_8]
0x6EDE68: mov     edi, [esp+70h+arg_4]
0x6EDE6C: fstp    [esp+70h+var_54]
0x6EDE70: fld     dword ptr ds:0A63CD4h
0x6EDE76: lea     ecx, [esp+70h+var_54]
0x6EDE7A: fstp    [esp+70h+var_50]
0x6EDE7E: xor     esi, esi
0x6EDE80: fld     dword ptr ds:0A47800h
0x6EDE86: sub     eax, ecx
0x6EDE88: fstp    [esp+70h+var_4C]
0x6EDE8C: mov     [esp+70h+arg_8], eax
0x6EDE90: fld     dword ptr ds:0A46B10h
0x6EDE96: fstp    [esp+70h+var_48]
0x6EDE9A: fldz
0x6EDE9C: fst     [esp+70h+var_5C]
0x6EDEA0: fstp    [esp+70h+var_58]
0x6EDEA4: jmp     short loc_6EDEB4
0x6EDEA6: jmp     short loc_6EDEB0
0x6EDEA8: align 10h
0x6EDEB0: mov     eax, [esp+70h+arg_8]
0x6EDEB4: lea     ecx, [esp+esi*4+70h+var_54]
0x6EDEB8: fld     dword ptr [eax+ecx]
0x6EDEBB: fstp    [esp+70h+arg_0]
0x6EDEBF: fld     [esp+70h+arg_0]
0x6EDEC3: fld     dword ptr [ecx]
0x6EDEC5: fcompp
0x6EDEC7: fnstsw  ax
0x6EDEC9: test    ah, 41h
0x6EDECC: jnz     short loc_6EDED4
0x6EDECE: fld     dword ptr [ecx]
0x6EDED0: fstp    [esp+70h+arg_0]
0x6EDED4: fld     [esp+70h+arg_0]
0x6EDED8: fld     [esp+esi*4+70h+var_4C]
0x6EDEDC: fcompp
0x6EDEDE: fnstsw  ax
0x6EDEE0: test    ah, 5
0x6EDEE3: jp      short loc_6EDEED
0x6EDEE5: fld     [esp+esi*4+70h+var_4C]
0x6EDEE9: fstp    [esp+70h+arg_0]
0x6EDEED: mov     edx, [esp+70h+arg_C]
0x6EDEF4: fld     [esp+70h+arg_0]
0x6EDEF8: push    edx
0x6EDEF9: fstp    [esp+74h+var_44]
0x6EDEFD: push    edi
0x6EDEFE: push    esi
0x6EDEFF: push    ebx
0x6EDF00: mov     ecx, ebp
0x6EDF02: call    sub_6EDD30
0x6EDF07: fsubr   [esp+70h+var_44]
0x6EDF0B: add     esi, 1
0x6EDF0E: cmp     esi, 2
0x6EDF11: fstp    [esp+esi*4+70h+var_60]
0x6EDF15: jl      short loc_6EDEB0
0x6EDF17: lea     eax, [edi+ebx*2]
0x6EDF1A: shl     eax, 4
0x6EDF1D: fld     dword ptr [eax+ebp+0C38h]
0x6EDF24: lea     eax, [eax+ebp+0C34h]
0x6EDF2B: fld     [esp+70h+var_58]
0x6EDF2F: mov     edx, [esp+70h+arg_C]
0x6EDF36: fld     st
0x6EDF38: lea     ecx, [edi+edi*2]
0x6EDF3B: fmulp   st(2), st
0x6EDF3D: shl     ecx, 4
0x6EDF40: fld     dword ptr [eax]
0x6EDF42: add     ecx, edx
0x6EDF44: fld     [esp+70h+var_5C]
0x6EDF48: xor     esi, esi
0x6EDF4A: fld     st
0x6EDF4C: mov     [esp+70h+arg_C], ecx
0x6EDF53: fmulp   st(2), st
0x6EDF55: fxch    st(3)
0x6EDF57: faddp   st(1), st
0x6EDF59: fstp    [esp+70h+var_4C]
0x6EDF5D: fmul    dword ptr [eax+0Ch]
0x6EDF60: fld     dword ptr [eax+8]
0x6EDF63: lea     eax, [edi+ebx*4]
0x6EDF66: fmulp   st(2), st
0x6EDF68: shl     eax, 5
0x6EDF6B: lea     edi, [eax+ebp+25Ch]
0x6EDF72: or      ebp, 0FFFFFFFFh
0x6EDF75: faddp   st(1), st
0x6EDF77: fstp    [esp+70h+var_48]
0x6EDF7B: jmp     short loc_6EDF80
0x6EDF7D: align 10h
0x6EDF80: lea     ecx, [esp+70h+var_24]
0x6EDF84: push    ecx
0x6EDF85: mov     ecx, edi
0x6EDF87: call    sub_552730
0x6EDF8C: fld     [esp+esi*4+70h+var_4C]
0x6EDF90: push    ecx
0x6EDF91: lea     edx, [esp+74h+var_3C]
0x6EDF95: fstp    [esp+74h+var_74]; float
0x6EDF98: xor     ebx, ebx
0x6EDF9A: push    edx; int
0x6EDF9B: mov     ecx, eax
0x6EDF9D: mov     [esp+78h+var_4], ebx
0x6EDFA1: call    sub_552310
0x6EDFA6: mov     ecx, [esp+70h+arg_C]
0x6EDFAD: push    eax
0x6EDFAE: mov     byte ptr [esp+74h+var_4], 1
0x6EDFB3: call    sub_551DA0
0x6EDFB8: mov     eax, [esp+70h+var_30]
0x6EDFBC: cmp     eax, ebx
0x6EDFBE: jz      short loc_6EDFC9
0x6EDFC0: push    eax
0x6EDFC1: call    FormHeapFree
0x6EDFC6: add     esp, 4
0x6EDFC9: mov     eax, [esp+70h+var_18]
0x6EDFCD: cmp     eax, ebx
0x6EDFCF: mov     [esp+70h+var_30], ebx
0x6EDFD3: mov     [esp+70h+var_2C], ebx
0x6EDFD7: mov     [esp+70h+var_28], ebx
0x6EDFDB: mov     [esp+70h+var_4], ebp
0x6EDFDF: jz      short loc_6EDFEA
0x6EDFE1: push    eax
0x6EDFE2: call    FormHeapFree
0x6EDFE7: add     esp, 4
0x6EDFEA: add     esi, 1
0x6EDFED: add     edi, 40h ; '@'
0x6EDFF0: cmp     esi, 2
0x6EDFF3: jb      short loc_6EDF80
0x6EDFF5: mov     ecx, [esp+70h+var_C]
0x6EDFF9: mov     large fs:0, ecx
0x6EE000: pop     ecx
0x6EE001: pop     edi
0x6EE002: pop     esi
0x6EE003: pop     ebp
0x6EE004: pop     ebx
0x6EE005: add     esp, 5Ch
0x6EE008: retn    10h
