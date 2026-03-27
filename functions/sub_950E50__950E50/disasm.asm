0x950E50: push    ebp
0x950E51: mov     ebp, esp
0x950E53: and     esp, 0FFFFFFF0h
0x950E56: sub     esp, 234h
0x950E5C: mov     eax, ds:0B30AACh
0x950E61: push    ebx
0x950E62: push    esi
0x950E63: push    edi
0x950E64: mov     edi, ecx
0x950E66: mov     [esp+240h+var_4], eax
0x950E6D: mov     eax, [edi+20h]
0x950E70: xor     ebx, ebx
0x950E72: xor     esi, esi
0x950E74: cmp     eax, ebx
0x950E76: mov     [esp+240h+var_228], 0FF7FFFFFh
0x950E7E: jle     loc_950F31
0x950E84: mov     [esp+240h+var_22C], ebx
0x950E88: jmp     short loc_950E90
0x950E8A: align 10h
0x950E90: mov     ecx, [edi+18h]
0x950E93: mov     eax, [ecx]
0x950E95: lea     edx, [esp+240h+var_210]
0x950E99: push    edx
0x950E9A: mov     edx, [edi+1Ch]
0x950E9D: mov     edx, [edx+ebx*4]
0x950EA0: push    edx
0x950EA1: call    dword ptr [eax+28h]
0x950EA4: mov     edx, [eax]
0x950EA6: lea     ecx, [esp+240h+var_220]
0x950EAA: push    ecx
0x950EAB: mov     ecx, [ebp+arg_0]
0x950EAE: push    ecx
0x950EAF: mov     ecx, eax
0x950EB1: call    dword ptr [edx+24h]
0x950EB4: mov     edx, [ebp+arg_0]
0x950EB7: movaps  xmm2, xmmword ptr [edx]
0x950EBA: movaps  xmm1, [esp+240h+var_220]
0x950EBF: movaps  xmm0, xmm1
0x950EC2: mulps   xmm0, xmm2
0x950EC5: movaps  xmm2, xmm0
0x950EC8: shufps  xmm2, xmm0, 55h ; 'U'
0x950ECC: movaps  xmm3, xmm0
0x950ECF: lea     eax, [esp+240h+var_224]
0x950ED3: addss   xmm2, xmm0
0x950ED7: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x950EDB: addss   xmm3, xmm2
0x950EDF: movss   dword ptr [eax], xmm3
0x950EE3: fld     [esp+240h+var_224]
0x950EE7: fcomp   [esp+240h+var_228]
0x950EEB: fnstsw  ax
0x950EED: test    ah, 41h
0x950EF0: jnz     short loc_950F1A
0x950EF2: mov     edx, [ebp+arg_4]
0x950EF5: mov     eax, dword ptr [esp+240h+var_220+0Ch]
0x950EF9: mov     ecx, [esp+240h+var_224]
0x950EFD: and     eax, 0C0FFFFFFh
0x950F02: movaps  xmmword ptr [edx], xmm1
0x950F05: cdq
0x950F06: and     edx, 0Fh
0x950F09: add     eax, edx
0x950F0B: mov     esi, eax
0x950F0D: mov     eax, [esp+240h+var_22C]
0x950F11: sar     esi, 4
0x950F14: mov     [esp+240h+var_228], ecx
0x950F18: add     esi, eax
0x950F1A: mov     ecx, [esp+240h+var_22C]
0x950F1E: mov     eax, [edi+20h]
0x950F21: inc     ebx
0x950F22: add     ecx, 3
0x950F25: cmp     ebx, eax
0x950F27: mov     [esp+240h+var_22C], ecx
0x950F2B: jl      loc_950E90
0x950F31: mov     eax, [ebp+arg_4]
0x950F34: mov     ecx, [esp+240h+var_4]
0x950F3B: or      esi, 3F000000h
0x950F41: mov     [eax+0Ch], esi
0x950F44: call    @__security_check_cookie@4; __security_check_cookie(x)
0x950F49: pop     edi
0x950F4A: pop     esi
0x950F4B: pop     ebx
0x950F4C: mov     esp, ebp
0x950F4E: pop     ebp
0x950F4F: retn    8
