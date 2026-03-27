0x917E10: push    ebp
0x917E11: mov     ebp, esp
0x917E13: and     esp, 0FFFFFFF0h
0x917E16: push    ecx
0x917E17: mov     edx, [ebp+arg_0]
0x917E1A: push    ebx
0x917E1B: mov     ebx, [ebp+arg_4]
0x917E1E: push    esi
0x917E1F: push    edi
0x917E20: mov     edi, [ebp+arg_8]
0x917E23: push    edi
0x917E24: mov     esi, ecx
0x917E26: mov     ecx, [esi+10h]
0x917E29: mov     eax, [ecx]
0x917E2B: push    ebx
0x917E2C: push    edx
0x917E2D: call    dword ptr [eax+28h]
0x917E30: movaps  xmm1, xmmword ptr [esi+20h]
0x917E34: movaps  xmm2, xmmword ptr [esi+30h]
0x917E38: movaps  xmm3, xmmword ptr [esi+40h]
0x917E3C: movaps  xmm4, xmmword ptr [esi+50h]
0x917E40: mov     ecx, ebx
0x917E42: mov     eax, edi
0x917E44: movaps  xmm0, xmmword ptr [eax]
0x917E47: fld     dword ptr [eax+0Ch]
0x917E4A: movaps  xmm5, xmm0
0x917E4D: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x917E51: movaps  xmm6, xmm3
0x917E54: mulps   xmm6, xmm5
0x917E57: movaps  xmm5, xmm0
0x917E5A: shufps  xmm5, xmm0, 55h ; 'U'
0x917E5E: movaps  xmm7, xmm2
0x917E61: mulps   xmm7, xmm5
0x917E64: movaps  xmm5, xmm0
0x917E67: shufps  xmm5, xmm0, 0
0x917E6B: movaps  xmm0, xmm1
0x917E6E: mulps   xmm0, xmm5
0x917E71: addps   xmm6, xmm4
0x917E74: addps   xmm0, xmm7
0x917E77: addps   xmm0, xmm6
0x917E7A: movaps  xmmword ptr [eax], xmm0
0x917E7D: fstp    dword ptr [eax+0Ch]
0x917E80: add     eax, 10h
0x917E83: dec     ecx
0x917E84: test    ecx, ecx
0x917E86: jg      short loc_917E44
0x917E88: pop     edi
0x917E89: pop     esi
0x917E8A: pop     ebx
0x917E8B: mov     esp, ebp
0x917E8D: pop     ebp
0x917E8E: retn    0Ch
