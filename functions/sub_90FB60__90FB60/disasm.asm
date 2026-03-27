0x90FB60: push    ebp
0x90FB61: mov     ebp, esp
0x90FB63: and     esp, 0FFFFFFF0h
0x90FB66: sub     esp, 64h
0x90FB69: push    ebx
0x90FB6A: push    esi
0x90FB6B: mov     esi, ecx
0x90FB6D: mov     ebx, [esi+1Ch]
0x90FB70: push    edi
0x90FB71: mov     edi, [esi+18h]
0x90FB74: mov     ecx, [edi+50h]
0x90FB77: lea     eax, [esi+30h]
0x90FB7A: add     ecx, 10h
0x90FB7D: push    eax
0x90FB7E: push    ecx
0x90FB7F: lea     ecx, [esp+78h+var_40]
0x90FB83: call    sub_88FCC0
0x90FB88: mov     eax, [ebx+50h]
0x90FB8B: lea     edx, [esi+40h]
0x90FB8E: push    edx
0x90FB8F: add     eax, 10h
0x90FB92: push    eax
0x90FB93: lea     ecx, [esp+78h+var_50]
0x90FB97: call    sub_88FCC0
0x90FB9C: movaps  xmm0, [esp+70h+var_40]
0x90FBA1: movaps  xmm1, [esp+70h+var_50]
0x90FBA6: subps   xmm1, xmm0
0x90FBA9: movaps  xmm0, xmm1
0x90FBAC: mulps   xmm0, xmm1
0x90FBAF: movaps  xmm2, xmm0
0x90FBB2: shufps  xmm2, xmm0, 55h ; 'U'
0x90FBB6: movaps  xmm3, xmm0
0x90FBB9: addss   xmm2, xmm0
0x90FBBD: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x90FBC1: movaps  xmm0, xmm3
0x90FBC4: addss   xmm0, xmm2
0x90FBC8: movaps  [esp+70h+var_30], xmm0
0x90FBCD: sqrtss  xmm0, xmm0
0x90FBD1: movss   dword ptr [esp+70h+var_30], xmm0
0x90FBD7: movaps  xmm0, [esp+70h+var_30]
0x90FBDC: lea     ecx, [esp+70h+var_58]
0x90FBE0: movss   dword ptr [ecx], xmm0
0x90FBE4: fld     [esp+70h+var_58]
0x90FBE8: fcomp   dword ptr ds:0A37080h
0x90FBEE: fnstsw  ax
0x90FBF0: test    ah, 5
0x90FBF3: jnp     loc_90FD41
0x90FBF9: fld     dword ptr ds:0A2F948h
0x90FBFF: mov     al, [esi+5Ch]
0x90FC02: test    al, al
0x90FC04: fdiv    [esp+70h+var_58]
0x90FC08: fstp    [esp+70h+var_54]
0x90FC0C: movss   xmm0, [esp+70h+var_54]
0x90FC12: movaps  xmm2, xmm0
0x90FC15: shufps  xmm2, xmm0, 0
0x90FC19: movaps  xmm0, xmm2
0x90FC1C: mulps   xmm0, xmm1
0x90FC1F: movaps  [esp+70h+var_30], xmm0
0x90FC24: jnz     short loc_90FC38
0x90FC26: fld     [esp+70h+var_58]
0x90FC2A: fcomp   dword ptr [esi+50h]
0x90FC2D: fnstsw  ax
0x90FC2F: test    ah, 5
0x90FC32: jnp     loc_90FD41
0x90FC38: mov     al, [esi+5Dh]
0x90FC3B: test    al, al
0x90FC3D: jnz     short loc_90FC51
0x90FC3F: fld     [esp+70h+var_58]
0x90FC43: fcomp   dword ptr [esi+50h]
0x90FC46: fnstsw  ax
0x90FC48: test    ah, 41h
0x90FC4B: jz      loc_90FD41
0x90FC51: lea     edx, [esp+70h+var_20]
0x90FC55: push    edx
0x90FC56: lea     eax, [esp+74h+var_40]
0x90FC5A: push    eax
0x90FC5B: mov     ecx, edi
0x90FC5D: call    sub_8ABCE0
0x90FC62: lea     ecx, [esp+70h+var_10]
0x90FC66: push    ecx
0x90FC67: lea     edx, [esp+74h+var_50]
0x90FC6B: push    edx
0x90FC6C: mov     ecx, ebx
0x90FC6E: call    sub_8ABCE0
0x90FC73: fld     [esp+70h+var_58]
0x90FC77: fsub    dword ptr [esi+50h]
0x90FC7A: movaps  xmm0, [esp+70h+var_20]
0x90FC7F: movaps  xmm1, [esp+70h+var_10]
0x90FC84: mov     ecx, [ebp+arg_0]
0x90FC87: subps   xmm1, xmm0
0x90FC8A: movaps  xmm0, xmm1
0x90FC8D: movaps  xmm1, [esp+70h+var_30]
0x90FC92: mulps   xmm0, xmm1
0x90FC95: movaps  xmm2, xmm0
0x90FC98: shufps  xmm2, xmm0, 55h ; 'U'
0x90FC9C: addss   xmm2, xmm0
0x90FCA0: movaps  xmm3, xmm0
0x90FCA3: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x90FCA7: addss   xmm3, xmm2
0x90FCAB: lea     eax, [esp+70h+var_54]
0x90FCAF: movss   dword ptr [eax], xmm3
0x90FCB3: fmul    dword ptr [esi+54h]
0x90FCB6: fld     [esp+70h+var_54]
0x90FCBA: add     esi, 20h ; ' '
0x90FCBD: fmul    dword ptr [esi+38h]
0x90FCC0: faddp   st(1), st
0x90FCC2: fst     [esp+70h+var_58]
0x90FCC6: fchs
0x90FCC8: fstp    [esp+70h+var_54]
0x90FCCC: movss   xmm0, [esp+70h+var_54]
0x90FCD2: movaps  xmm2, xmm0
0x90FCD5: shufps  xmm2, xmm0, 0
0x90FCD9: mulps   xmm2, xmm1
0x90FCDC: movaps  xmmword ptr [esi], xmm2
0x90FCDF: mov     edx, [ecx+8]
0x90FCE2: mov     ecx, ebx
0x90FCE4: mov     [esp+70h+var_54], edx
0x90FCE8: call    sub_8A6410
0x90FCED: mov     ecx, [ebx+50h]
0x90FCF0: mov     eax, [ecx]
0x90FCF2: lea     edx, [esp+70h+var_50]
0x90FCF6: push    edx
0x90FCF7: mov     edx, [esp+74h+var_54]
0x90FCFB: push    esi
0x90FCFC: push    edx
0x90FCFD: call    dword ptr [eax+68h]
0x90FD00: mov     eax, [esp+70h+var_58]
0x90FD04: mov     ecx, [ebp+arg_0]
0x90FD07: mov     [esp+70h+var_54], eax
0x90FD0B: movss   xmm0, [esp+70h+var_54]
0x90FD11: movaps  xmm1, xmm0
0x90FD14: shufps  xmm1, xmm0, 0
0x90FD18: mulps   xmm1, [esp+70h+var_30]
0x90FD1D: movaps  xmmword ptr [esi], xmm1
0x90FD20: mov     edx, [ecx+8]
0x90FD23: mov     ecx, edi
0x90FD25: mov     [esp+70h+var_54], edx
0x90FD29: call    sub_8A6410
0x90FD2E: mov     ecx, [edi+50h]
0x90FD31: mov     eax, [ecx]
0x90FD33: lea     edx, [esp+70h+var_40]
0x90FD37: push    edx
0x90FD38: mov     edx, [esp+74h+var_54]
0x90FD3C: push    esi
0x90FD3D: push    edx
0x90FD3E: call    dword ptr [eax+68h]
0x90FD41: pop     edi
0x90FD42: pop     esi
0x90FD43: pop     ebx
0x90FD44: mov     esp, ebp
0x90FD46: pop     ebp
0x90FD47: retn    4
