0x917F10: push    ebp
0x917F11: mov     ebp, esp
0x917F13: and     esp, 0FFFFFFF0h
0x917F16: sub     esp, 14h
0x917F19: push    ebx
0x917F1A: mov     ebx, [ebp+arg_0]
0x917F1D: push    esi
0x917F1E: mov     esi, ecx
0x917F20: mov     ecx, [esi+10h]
0x917F23: mov     eax, [ecx]
0x917F25: push    edi
0x917F26: push    ebx
0x917F27: call    dword ptr [eax+20h]
0x917F2A: mov     ecx, [esi+10h]
0x917F2D: mov     edx, [ecx]
0x917F2F: mov     edi, eax
0x917F31: lea     eax, [esp+20h+var_8]
0x917F35: push    eax
0x917F36: call    dword ptr [edx+1Ch]
0x917F39: mov     edx, [esp+20h+var_8]
0x917F3D: movaps  xmm1, xmmword ptr [esi+20h]
0x917F41: movaps  xmm2, xmmword ptr [esi+30h]
0x917F45: movaps  xmm3, xmmword ptr [esi+40h]
0x917F49: movaps  xmm4, xmmword ptr [esi+50h]
0x917F4D: mov     ecx, ebx
0x917F4F: mov     eax, edi
0x917F51: sub     ecx, edi
0x917F53: movaps  xmm0, xmmword ptr [eax]
0x917F56: fld     dword ptr [eax+0Ch]
0x917F59: movaps  xmm5, xmm0
0x917F5C: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x917F60: movaps  xmm6, xmm3
0x917F63: mulps   xmm6, xmm5
0x917F66: movaps  xmm5, xmm0
0x917F69: shufps  xmm5, xmm0, 55h ; 'U'
0x917F6D: movaps  xmm7, xmm2
0x917F70: mulps   xmm7, xmm5
0x917F73: movaps  xmm5, xmm0
0x917F76: shufps  xmm5, xmm0, 0
0x917F7A: movaps  xmm0, xmm1
0x917F7D: mulps   xmm0, xmm5
0x917F80: addps   xmm6, xmm4
0x917F83: addps   xmm0, xmm7
0x917F86: addps   xmm0, xmm6
0x917F89: movaps  xmmword ptr [ecx+eax], xmm0
0x917F8D: fstp    dword ptr [ecx+eax+0Ch]
0x917F91: add     eax, 10h
0x917F94: dec     edx
0x917F95: test    edx, edx
0x917F97: jg      short loc_917F53
0x917F99: pop     edi
0x917F9A: pop     esi
0x917F9B: mov     eax, ebx
0x917F9D: pop     ebx
0x917F9E: mov     esp, ebp
0x917FA0: pop     ebp
0x917FA1: retn    4
