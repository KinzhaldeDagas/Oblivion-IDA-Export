0x8F8E00: push    ebp
0x8F8E01: mov     ebp, esp
0x8F8E03: and     esp, 0FFFFFFF0h
0x8F8E06: sub     esp, 0B4h
0x8F8E0C: mov     ecx, [ebp+arg_0]
0x8F8E0F: mov     eax, [ecx]
0x8F8E11: mov     edx, [ecx+4]
0x8F8E14: push    ebx
0x8F8E15: mov     ebx, [edx]
0x8F8E17: push    esi
0x8F8E18: push    edi
0x8F8E19: mov     edi, [eax]
0x8F8E1B: mov     eax, [eax+8]
0x8F8E1E: movaps  xmm1, xmmword ptr [eax]
0x8F8E21: movaps  xmm2, xmmword ptr [eax+10h]
0x8F8E25: movaps  xmm3, xmmword ptr [eax+20h]
0x8F8E29: movaps  xmm4, xmmword ptr [eax+30h]
0x8F8E2D: lea     ecx, [edi+10h]
0x8F8E30: lea     eax, [esp+0C0h+var_B0]
0x8F8E34: sub     eax, ecx
0x8F8E36: mov     esi, 2
0x8F8E3B: jmp     short loc_8F8E40
0x8F8E3D: align 10h
0x8F8E40: movaps  xmm0, xmmword ptr [ecx]
0x8F8E43: movaps  xmm5, xmm0
0x8F8E46: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F8E4A: movaps  xmm6, xmm3
0x8F8E4D: mulps   xmm6, xmm5
0x8F8E50: movaps  xmm5, xmm0
0x8F8E53: shufps  xmm5, xmm0, 55h ; 'U'
0x8F8E57: movaps  xmm7, xmm2
0x8F8E5A: mulps   xmm7, xmm5
0x8F8E5D: movaps  xmm5, xmm0
0x8F8E60: shufps  xmm5, xmm0, 0
0x8F8E64: movaps  xmm0, xmm1
0x8F8E67: mulps   xmm0, xmm5
0x8F8E6A: addps   xmm6, xmm4
0x8F8E6D: addps   xmm0, xmm7
0x8F8E70: addps   xmm0, xmm6
0x8F8E73: movaps  xmmword ptr [eax+ecx], xmm0
0x8F8E77: add     ecx, 10h
0x8F8E7A: dec     esi
0x8F8E7B: jnz     short loc_8F8E40
0x8F8E7D: mov     ecx, [edx+8]
0x8F8E80: movaps  xmm1, xmmword ptr [ecx]
0x8F8E83: movaps  xmm2, xmmword ptr [ecx+10h]
0x8F8E87: movaps  xmm3, xmmword ptr [ecx+20h]
0x8F8E8B: movaps  xmm4, xmmword ptr [ecx+30h]
0x8F8E8F: lea     eax, [ebx+10h]
0x8F8E92: lea     ecx, [esp+0C0h+var_30]
0x8F8E99: sub     ecx, eax
0x8F8E9B: mov     edx, 3
0x8F8EA0: movaps  xmm0, xmmword ptr [eax]
0x8F8EA3: movaps  xmm5, xmm0
0x8F8EA6: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F8EAA: movaps  xmm6, xmm3
0x8F8EAD: mulps   xmm6, xmm5
0x8F8EB0: movaps  xmm5, xmm0
0x8F8EB3: shufps  xmm5, xmm0, 55h ; 'U'
0x8F8EB7: movaps  xmm7, xmm2
0x8F8EBA: mulps   xmm7, xmm5
0x8F8EBD: movaps  xmm5, xmm0
0x8F8EC0: shufps  xmm5, xmm0, 0
0x8F8EC4: movaps  xmm0, xmm1
0x8F8EC7: mulps   xmm0, xmm5
0x8F8ECA: addps   xmm6, xmm4
0x8F8ECD: addps   xmm0, xmm7
0x8F8ED0: addps   xmm0, xmm6
0x8F8ED3: movaps  xmmword ptr [ecx+eax], xmm0
0x8F8ED7: add     eax, 10h
0x8F8EDA: dec     edx
0x8F8EDB: jnz     short loc_8F8EA0
0x8F8EDD: mov     ecx, [ebp+arg_4]
0x8F8EE0: mov     edx, [ebx+0Ch]
0x8F8EE3: lea     eax, [esp+0C0h+var_90]
0x8F8EE7: push    eax; int
0x8F8EE8: push    0; int
0x8F8EEA: push    7F7FFFFFh; float
0x8F8EEF: add     ecx, 8
0x8F8EF2: push    ecx; int
0x8F8EF3: mov     ecx, [edi+0Ch]
0x8F8EF6: push    edx; float
0x8F8EF7: lea     eax, [esp+0D4h+var_30]
0x8F8EFE: push    eax; int
0x8F8EFF: push    ecx; float
0x8F8F00: lea     edx, [esp+0DCh+var_B0]
0x8F8F04: push    edx; int
0x8F8F05: call    sub_8D0CA0
0x8F8F0A: fld     dword ptr [esp+0E0h+anonymous_0+0Ch]
0x8F8F0E: fcomp   dword ptr [esp+0E0h+anonymous_1+0Ch]
0x8F8F15: add     esp, 20h
0x8F8F18: fnstsw  ax
0x8F8F1A: test    ah, 5
0x8F8F1D: jp      short loc_8F8F31
0x8F8F1F: mov     eax, [ebp+arg_8]
0x8F8F22: movaps  xmm0, [esp+0C0h+anonymous_0]
0x8F8F27: movaps  xmmword ptr [eax], xmm0
0x8F8F2A: pop     edi
0x8F8F2B: pop     esi
0x8F8F2C: pop     ebx
0x8F8F2D: mov     esp, ebp
0x8F8F2F: pop     ebp
0x8F8F30: retn
0x8F8F31: mov     ecx, [ebp+arg_8]
0x8F8F34: movaps  xmm0, [esp+0C0h+anonymous_1]
0x8F8F39: pop     edi
0x8F8F3A: pop     esi
0x8F8F3B: movaps  xmmword ptr [ecx], xmm0
0x8F8F3E: pop     ebx
0x8F8F3F: mov     esp, ebp
0x8F8F41: pop     ebp
0x8F8F42: retn
