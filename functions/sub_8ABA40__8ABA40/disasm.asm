0x8ABA40: push    ebp
0x8ABA41: mov     ebp, esp
0x8ABA43: and     esp, 0FFFFFFF0h
0x8ABA46: sub     esp, 24h
0x8ABA49: mov     eax, [ebp+arg_0]
0x8ABA4C: movaps  xmm0, xmmword ptr [eax]
0x8ABA4F: push    ebx
0x8ABA50: push    esi
0x8ABA51: mov     esi, ecx
0x8ABA53: movaps  xmmword ptr [esi+70h], xmm0
0x8ABA57: movaps  xmm0, xmmword ptr [eax+10h]
0x8ABA5B: movaps  xmmword ptr [esi+80h], xmm0
0x8ABA62: movaps  xmm0, xmmword ptr [eax+20h]
0x8ABA66: movaps  xmmword ptr [esi+90h], xmm0
0x8ABA6D: movaps  xmm0, xmmword ptr [eax+30h]
0x8ABA71: movaps  xmmword ptr [esi+0A0h], xmm0
0x8ABA78: mov     edx, [esi+8]
0x8ABA7B: test    edx, edx
0x8ABA7D: push    edi
0x8ABA7E: jz      short loc_8ABAA8
0x8ABA80: mov     edx, [edx+74h]
0x8ABA83: fld     dword ptr [edx+8]
0x8ABA86: mov     ecx, [esi+14h]
0x8ABA89: fmul    dword ptr ds:0A3D65Ch
0x8ABA8F: mov     edi, [ecx]
0x8ABA91: lea     ebx, [esp+30h+var_20]
0x8ABA95: push    ebx
0x8ABA96: push    ecx
0x8ABA97: fstp    [esp+38h+var_38]
0x8ABA9A: push    eax
0x8ABA9B: call    dword ptr [edi+0Ch]
0x8ABA9E: mov     eax, ebx
0x8ABAA0: push    eax
0x8ABAA1: mov     ecx, esi
0x8ABAA3: call    sub_8DE950
0x8ABAA8: pop     edi
0x8ABAA9: pop     esi
0x8ABAAA: pop     ebx
0x8ABAAB: mov     esp, ebp
0x8ABAAD: pop     ebp
0x8ABAAE: retn    4
