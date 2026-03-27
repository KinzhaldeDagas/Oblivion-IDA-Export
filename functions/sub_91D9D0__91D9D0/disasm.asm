0x91D9D0: push    ebp
0x91D9D1: mov     ebp, esp
0x91D9D3: and     esp, 0FFFFFFF0h
0x91D9D6: sub     esp, 34h
0x91D9D9: mov     eax, [ebp+arg_0]
0x91D9DC: push    ebx
0x91D9DD: push    esi
0x91D9DE: xor     esi, esi
0x91D9E0: push    edi
0x91D9E1: mov     edi, [eax+10h]
0x91D9E4: mov     ebx, ecx
0x91D9E6: mov     [esp+40h+var_34], esi
0x91D9EA: mov     dword ptr [esp+40h+var_30+0Ch], esi
0x91D9EE: mov     edi, edi
0x91D9F0: fild    [esp+40h+var_34]
0x91D9F4: mov     eax, ds:0BA8454h
0x91D9F9: movaps  xmm1, xmmword ptr [edi]
0x91D9FC: mov     ecx, [ebx-10h]
0x91D9FF: fld     st
0x91DA01: push    eax
0x91DA02: fsin
0x91DA04: push    0FFFF0000h
0x91DA09: lea     eax, [esp+48h+var_20]
0x91DA0D: push    eax
0x91DA0E: push    edi
0x91DA0F: fstp    dword ptr [esp+50h+var_30]
0x91DA13: fld     st
0x91DA15: fcos
0x91DA17: fstp    dword ptr [esp+50h+var_30+4]
0x91DA1B: fmul    dword ptr ds:0A31E2Ch
0x91DA21: fsin
0x91DA23: fstp    dword ptr [esp+50h+var_30+8]
0x91DA27: movaps  xmm0, [esp+50h+var_30]
0x91DA2C: addps   xmm1, xmm0
0x91DA2F: movaps  [esp+50h+var_20], xmm1
0x91DA34: mov     edx, [ecx]
0x91DA36: call    dword ptr [edx+1Ch]
0x91DA39: inc     esi
0x91DA3A: cmp     esi, 14h
0x91DA3D: mov     [esp+40h+var_34], esi
0x91DA41: jl      short loc_91D9F0
0x91DA43: mov     edx, [ebp+arg_0]
0x91DA46: mov     eax, [edx]
0x91DA48: mov     ecx, [eax+0Ch]
0x91DA4B: test    ecx, ecx
0x91DA4D: jz      short loc_91DA59
0x91DA4F: nop
0x91DA50: mov     eax, ecx
0x91DA52: mov     ecx, [eax+0Ch]
0x91DA55: test    ecx, ecx
0x91DA57: jnz     short loc_91DA50
0x91DA59: cmp     byte ptr [eax+18h], 1
0x91DA5D: jnz     short loc_91DA6F
0x91DA5F: mov     ecx, [eax+10h]
0x91DA62: add     ecx, eax
0x91DA64: jz      short loc_91DA6F
0x91DA66: mov     word ptr [ecx+8Eh], 0
0x91DA6F: mov     esi, ds:0BA8454h
0x91DA75: mov     eax, [edx+10h]
0x91DA78: movaps  xmm0, xmmword ptr [eax+10h]
0x91DA7C: movaps  xmm1, xmmword ptr [eax]
0x91DA7F: mov     ecx, [ebx-10h]
0x91DA82: mov     edx, [edx+10h]
0x91DA85: push    esi
0x91DA86: push    0FFFF0000h
0x91DA8B: lea     esi, [esp+48h+var_10]
0x91DA8F: addps   xmm1, xmm0
0x91DA92: push    esi
0x91DA93: movaps  [esp+4Ch+var_10], xmm1
0x91DA98: mov     eax, [ecx]
0x91DA9A: push    edx
0x91DA9B: call    dword ptr [eax+1Ch]
0x91DA9E: pop     edi
0x91DA9F: pop     esi
0x91DAA0: pop     ebx
0x91DAA1: mov     esp, ebp
0x91DAA3: pop     ebp
0x91DAA4: retn    4
