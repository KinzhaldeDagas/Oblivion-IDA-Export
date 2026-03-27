0x573A32: movzx   ecx, al; jumptable 00573A25 default case
0x573A35: cmp     ecx, 100h
0x573A3B: jle     short loc_573A64
0x573A3D: xor     al, al
0x573A3F: movzx   eax, al
0x573A42: lea     ecx, ds:0[eax*8]
0x573A49: sub     ecx, eax
0x573A4B: mov     eax, [edi+38h]
0x573A4E: lea     eax, [eax+ecx*8+128h]
0x573A55: fld     dword ptr [eax+2Ch]
0x573A58: fadd    dword ptr [eax+24h]
0x573A5B: fadd    dword ptr [eax+30h]
0x573A5E: fadd    dword ptr [esi]
0x573A60: fstp    dword ptr [esi]
0x573A62: jmp     short loc_573A95
0x573A64: cmp     al, 9
0x573A66: jnz     short loc_573A3F
0x573A68: fstp    st(1)
0x573A6A: fld     dword ptr [esi]
0x573A6C: fxch    st(1)
0x573A6E: call    unknown_libname_14
0x573A73: fstp    [esp+arg_1C]
0x573A77: fld     [esp+arg_1C]
0x573A7B: mov     edx, [esp+arg_20]
0x573A7F: fld     qword ptr ds:0A68950h
0x573A85: fld     st
0x573A87: fsubrp  st(2), st
0x573A89: fld     dword ptr [esi]
0x573A8B: faddp   st(2), st
0x573A8D: fxch    st(1)
0x573A8F: fstp    dword ptr [esi]
0x573A91: fldz
0x573A93: fxch    st(1)
0x573A95: add     ebx, 1
0x573A98: cmp     byte ptr [ebx], 0Ah
0x573A9B: jnz     short loc_573AE0
0x573A9D: fld     dword ptr [esi]
0x573A9F: fld     [esp+arg_18]
0x573AA3: fcompp
0x573AA5: fnstsw  ax
0x573AA7: test    ah, 5
0x573AAA: jp      short loc_573AB2
0x573AAC: fld     dword ptr [esi]
0x573AAE: fstp    [esp+arg_18]; float
0x573AB2: cmp     [esp+arg_28], 0
0x573AB7: jz      short loc_573AC3
0x573AB9: mov     ecx, [edi+38h]
0x573ABC: fld     dword ptr [ecx]
0x573ABE: fadd    dword ptr [ebp+0]
0x573AC1: jmp     short loc_573AC9
0x573AC3: fld     dword ptr [ebp+0]
0x573AC6: fadd    dword ptr [edi+2Ch]
0x573AC9: cmp     edx, 0FFFFFFFEh
0x573ACC: fstp    dword ptr [ebp+0]
0x573ACF: jz      loc_573BC5
0x573AD5: add     [esp+arg_C], 1
0x573ADA: fxch    st(1)
0x573ADC: fst     dword ptr [esi]
0x573ADE: fxch    st(1)
0x573AE0: fld     st(1)
0x573AE2: fcomp   [esp+arg_24]
0x573AE6: fnstsw  ax
0x573AE8: test    ah, 44h
0x573AEB: jnp     loc_573BBC
0x573AF1: mov     al, [ebx]
0x573AF3: test    al, al
0x573AF5: jz      loc_573BC5
0x573AFB: test    edx, edx
0x573AFD: jz      loc_573BBC
0x573B03: movzx   ecx, al
0x573B06: add     ecx, 0FFFFFF6Fh; switch 4 cases
0x573B0C: cmp     ecx, 3
0x573B0F: ja      short def_573B11
0x573B11: jmp     ds:jpt_573B11[ecx*4]; switch jump
0x573B18: mov     al, 27h ; '''; jumptable 00573B11 cases 145,146
0x573B1A: jmp     short def_573B11
0x573B1C: mov     al, 22h ; '"'; jumptable 00573B11 cases 147,148
