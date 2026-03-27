0x93AE50: push    ebp
0x93AE51: mov     ebp, esp
0x93AE53: and     esp, 0FFFFFFF0h
0x93AE56: sub     esp, 18h
0x93AE59: push    ebx
0x93AE5A: mov     ebx, [ebp+arg_4]
0x93AE5D: push    esi
0x93AE5E: xor     esi, esi
0x93AE60: mov     [esp+20h+var_14], edi
0x93AE64: jmp     short loc_93AE70
0x93AE66: align 10h
0x93AE70: movsx   ecx, ds:byte_A99F0E[esi]
0x93AE77: movsx   edx, ds:byte_A99F0C[esi]
0x93AE7E: fld     dword ptr [ebx+ecx*4]
0x93AE81: fcomp   dword ptr ds:0A2FAA8h
0x93AE87: fnstsw  ax
0x93AE89: test    ah, 1
0x93AE8C: jnz     loc_93AF88
0x93AE92: fld     dword ptr [ebx+edx*4]
0x93AE95: fcomp   dword ptr ds:0A2FAA8h
0x93AE9B: fnstsw  ax
0x93AE9D: test    ah, 1
0x93AEA0: jnz     loc_93AF88
0x93AEA6: mov     eax, [esp+20h+var_14]
0x93AEAA: movaps  xmm0, xmmword ptr [eax]
0x93AEAD: movaps  xmm2, xmmword ptr [edi+30h]
0x93AEB1: mov     eax, ecx
0x93AEB3: shl     eax, 4
0x93AEB6: movaps  xmm3, xmmword ptr [eax+edi]
0x93AEBA: subps   xmm3, xmm0
0x93AEBD: subps   xmm2, xmm0
0x93AEC0: mov     eax, edx
0x93AEC2: shl     eax, 4
0x93AEC5: movaps  xmm4, xmmword ptr [eax+edi]
0x93AEC9: mov     eax, [ebp+arg_0]
0x93AECC: movaps  xmm1, xmmword ptr [eax]
0x93AECF: subps   xmm1, xmm0
0x93AED2: subps   xmm4, xmm0
0x93AED5: movaps  xmm0, xmm1
0x93AED8: mulps   xmm0, xmm3
0x93AEDB: movaps  xmm5, xmm0
0x93AEDE: shufps  xmm5, xmm0, 55h ; 'U'
0x93AEE2: addss   xmm5, xmm0
0x93AEE6: mulps   xmm1, xmm4
0x93AEE9: movaps  xmm6, xmm0
0x93AEEC: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x93AEF0: movaps  xmm0, xmm1
0x93AEF3: shufps  xmm0, xmm1, 55h ; 'U'
0x93AEF7: addss   xmm0, xmm1
0x93AEFB: addss   xmm6, xmm5
0x93AEFF: movaps  xmm5, xmm1
0x93AF02: shufps  xmm5, xmm1, 0AAh ; 'ª'
0x93AF06: addss   xmm5, xmm0
0x93AF0A: lea     eax, [esp+20h+var_C]
0x93AF0E: movss   dword ptr [eax], xmm6
0x93AF12: movaps  xmm0, xmm2
0x93AF15: mulps   xmm0, xmm3
0x93AF18: movaps  xmm1, xmm0
0x93AF1B: shufps  xmm1, xmm0, 55h ; 'U'
0x93AF1F: addss   xmm1, xmm0
0x93AF23: lea     eax, [esp+20h+var_4]
0x93AF27: movss   dword ptr [eax], xmm5
0x93AF2B: movaps  xmm3, xmm0
0x93AF2E: mulps   xmm2, xmm4
0x93AF31: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x93AF35: addss   xmm3, xmm1
0x93AF39: lea     eax, [esp+20h+var_8]
0x93AF3D: movss   dword ptr [eax], xmm3
0x93AF41: movaps  xmm0, xmm2
0x93AF44: shufps  xmm0, xmm2, 55h ; 'U'
0x93AF48: movaps  xmm1, xmm2
0x93AF4B: lea     eax, [esp+20h+var_10]
0x93AF4F: addss   xmm0, xmm2
0x93AF53: shufps  xmm1, xmm2, 0AAh ; 'ª'
0x93AF57: addss   xmm1, xmm0
0x93AF5B: movss   dword ptr [eax], xmm1
0x93AF5F: fld     [esp+20h+var_10]
0x93AF63: fmul    [esp+20h+var_C]
0x93AF67: fld     [esp+20h+var_8]
0x93AF6B: fmul    [esp+20h+var_4]
0x93AF6F: fcompp
0x93AF71: fnstsw  ax
0x93AF73: test    ah, 41h
0x93AF76: jnz     short loc_93AF81
0x93AF78: mov     dword ptr [ebx+edx*4], 0BF800000h
0x93AF7F: jmp     short loc_93AF88
0x93AF81: mov     dword ptr [ebx+ecx*4], 0BF800000h
0x93AF88: mov     ecx, [esp+20h+var_14]
0x93AF8C: inc     esi
0x93AF8D: add     ecx, 10h
0x93AF90: cmp     esi, 3
0x93AF93: mov     [esp+20h+var_14], ecx
0x93AF97: jl      loc_93AE70
0x93AF9D: fld     dword ptr [ebx]
0x93AF9F: fcomp   dword ptr ds:0A2FAA8h
0x93AFA5: fnstsw  ax
0x93AFA7: test    ah, 41h
0x93AFAA: jnz     short loc_93AFB4
0x93AFAC: xor     eax, eax
0x93AFAE: pop     esi
0x93AFAF: pop     ebx
0x93AFB0: mov     esp, ebp
0x93AFB2: pop     ebp
0x93AFB3: retn
0x93AFB4: fld     dword ptr [ebx+4]
0x93AFB7: fcomp   dword ptr ds:0A2FAA8h
0x93AFBD: fnstsw  ax
0x93AFBF: test    ah, 41h
0x93AFC2: jnz     short loc_93AFCF
0x93AFC4: mov     eax, 1
0x93AFC9: pop     esi
0x93AFCA: pop     ebx
0x93AFCB: mov     esp, ebp
0x93AFCD: pop     ebp
0x93AFCE: retn
0x93AFCF: fld     dword ptr [ebx+8]
0x93AFD2: fcomp   dword ptr ds:0A2FAA8h
0x93AFD8: fnstsw  ax
0x93AFDA: test    ah, 41h
0x93AFDD: jnz     short loc_93AFEA
0x93AFDF: mov     eax, 2
0x93AFE4: pop     esi
0x93AFE5: pop     ebx
0x93AFE6: mov     esp, ebp
0x93AFE8: pop     ebp
0x93AFE9: retn
0x93AFEA: pop     esi
0x93AFEB: or      eax, 0FFFFFFFFh
0x93AFEE: pop     ebx
0x93AFEF: mov     esp, ebp
0x93AFF1: pop     ebp
0x93AFF2: retn
