0x8FAD60: push    ebp
0x8FAD61: mov     ebp, esp
0x8FAD63: and     esp, 0FFFFFFF0h
0x8FAD66: sub     esp, 64h
0x8FAD69: mov     ecx, large fs:2Ch
0x8FAD70: mov     edx, ds:0BA9DE4h
0x8FAD76: mov     eax, [ecx+edx*4]
0x8FAD79: push    ebx
0x8FAD7A: push    esi
0x8FAD7B: mov     esi, [eax+1A4h]
0x8FAD81: push    edi
0x8FAD82: cmp     esi, [eax+1A8h]
0x8FAD88: jnb     short loc_8FADAE
0x8FAD8A: mov     esi, eax
0x8FAD8C: mov     ecx, [esi+1A4h]
0x8FAD92: mov     dword ptr [ecx], offset aTtspherebox; "TtSphereBox"
0x8FAD98: rdtsc
0x8FAD9A: mov     [esp+70h+var_54], eax
0x8FAD9E: mov     eax, [esp+70h+var_54]
0x8FADA2: mov     [ecx+4], eax
0x8FADA5: add     ecx, 0Ch
0x8FADA8: mov     [esi+1A4h], ecx
0x8FADAE: mov     edi, [ebp+arg_0]
0x8FADB1: mov     ebx, [edi+8]
0x8FADB4: mov     esi, [ebp+arg_4]
0x8FADB7: mov     ecx, [esi+8]
0x8FADBA: add     ebx, 30h ; '0'
0x8FADBD: push    ebx
0x8FADBE: push    ecx
0x8FADBF: lea     ecx, [esp+78h+var_40]
0x8FADC3: mov     [esp+78h+var_10], edi
0x8FADC7: mov     [esp+78h+var_C], esi
0x8FADCB: call    sub_88FD10
0x8FADD0: movaps  xmm1, xmmword ptr ds:0A372D0h
0x8FADD7: movaps  xmm3, [esp+70h+var_40]
0x8FADDC: mov     ecx, [esi]
0x8FADDE: mov     edi, [edi]
0x8FADE0: movaps  xmm0, xmm3
0x8FADE3: andps   xmm0, xmm1
0x8FADE6: movaps  xmm1, xmmword ptr [ecx+10h]
0x8FADEA: movaps  xmm2, xmm0
0x8FADED: minps   xmm2, xmm1
0x8FADF0: subps   xmm2, xmm0
0x8FADF3: movmskps edx, xmm2
0x8FADF6: test    dl, 7
0x8FADF9: movaps  [esp+70h+var_50], xmm0
0x8FADFE: jz      loc_8FAEF3
0x8FAE04: fld     dword ptr [ecx+0Ch]
0x8FAE07: mov     ecx, [ebp+arg_8]
0x8FAE0A: fadd    dword ptr [edi+0Ch]
0x8FAE0D: movaps  xmm0, xmm2
0x8FAE10: mulps   xmm0, xmm2
0x8FAE13: movaps  xmm1, xmm0
0x8FAE16: shufps  xmm1, xmm0, 55h ; 'U'
0x8FAE1A: addss   xmm1, xmm0
0x8FAE1E: movaps  xmm4, xmm0
0x8FAE21: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8FAE25: movaps  xmm0, xmm4
0x8FAE28: addss   xmm0, xmm1
0x8FAE2C: movaps  [esp+70h+var_50], xmm0
0x8FAE31: rsqrtss xmm1, xmm0
0x8FAE35: movss   dword ptr [esp+70h+var_50], xmm1
0x8FAE3B: movaps  xmm1, [esp+70h+var_50]
0x8FAE40: movaps  xmm4, xmm0
0x8FAE43: mulss   xmm4, xmm1
0x8FAE47: mulss   xmm4, xmm1
0x8FAE4B: mov     [esp+70h+var_54], 40400000h
0x8FAE53: movss   xmm5, [esp+70h+var_54]
0x8FAE59: subss   xmm5, xmm4
0x8FAE5D: mov     [esp+70h+var_54], 3F000000h
0x8FAE65: movss   xmm4, [esp+70h+var_54]
0x8FAE6B: mulss   xmm4, xmm1
0x8FAE6F: movaps  xmm1, xmm4
0x8FAE72: mulss   xmm1, xmm5
0x8FAE76: lea     eax, [esp+70h+var_54]
0x8FAE7A: shufps  xmm1, xmm1, 0
0x8FAE7E: mulss   xmm0, xmm1
0x8FAE82: movss   dword ptr [eax], xmm0
0x8FAE86: fsubr   [esp+70h+var_54]
0x8FAE8A: fld     st
0x8FAE8C: fcomp   dword ptr [ecx+8]
0x8FAE8F: fnstsw  ax
0x8FAE91: test    ah, 41h
0x8FAE94: jz      loc_8FAFEE
0x8FAE9A: movaps  xmm0, xmmword ptr ds:0A965C0h
0x8FAEA1: mov     esi, [esi+8]
0x8FAEA4: movaps  xmm4, xmmword ptr ds:0A965C0h
0x8FAEAB: andps   xmm3, xmm0
0x8FAEAE: mulps   xmm1, xmm2
0x8FAEB1: movaps  xmm2, xmmword ptr [esi+20h]
0x8FAEB5: xorps   xmm1, xmm3
0x8FAEB8: movaps  xmm3, xmmword ptr [esi+10h]
0x8FAEBC: movaps  xmm0, xmm1
0x8FAEBF: xorps   xmm0, xmm4
0x8FAEC2: movaps  xmm1, xmm0
0x8FAEC5: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8FAEC9: mulps   xmm2, xmm1
0x8FAECC: movaps  xmm1, xmm0
0x8FAECF: shufps  xmm1, xmm0, 55h ; 'U'
0x8FAED3: mulps   xmm3, xmm1
0x8FAED6: movaps  xmm1, xmm0
0x8FAED9: shufps  xmm1, xmm0, 0
0x8FAEDD: movaps  xmm0, xmmword ptr [esi]
0x8FAEE0: mulps   xmm0, xmm1
0x8FAEE3: addps   xmm0, xmm3
0x8FAEE6: addps   xmm0, xmm2
0x8FAEE9: movaps  [esp+70h+var_20], xmm0
0x8FAEEE: jmp     loc_8FAFB5
0x8FAEF3: fld     dword ptr [esp+70h+var_50]
0x8FAEF7: mov     edx, [esi+8]
0x8FAEFA: fsub    dword ptr [ecx+10h]
0x8FAEFD: fstp    [esp+70h+var_58]
0x8FAF01: fld     dword ptr [esp+70h+var_50+4]
0x8FAF05: fsub    dword ptr [ecx+14h]
0x8FAF08: fstp    [esp+70h+var_54]
0x8FAF0C: fld     dword ptr [esp+70h+var_50+8]
0x8FAF10: fsub    dword ptr [ecx+18h]
0x8FAF13: fld     [esp+70h+var_58]
0x8FAF17: fcomp   [esp+70h+var_54]
0x8FAF1B: fnstsw  ax
0x8FAF1D: test    ah, 41h
0x8FAF20: jnz     short loc_8FAF49
0x8FAF22: fld     [esp+70h+var_58]
0x8FAF26: fcomp   st(1)
0x8FAF28: fnstsw  ax
0x8FAF2A: test    ah, 41h
0x8FAF2D: jnz     short loc_8FAF74
0x8FAF2F: movaps  xmm0, xmmword ptr [edx]
0x8FAF32: fstp    st
0x8FAF34: fld     dword ptr [esp+70h+var_20+0Ch]
0x8FAF38: movaps  [esp+70h+var_20], xmm0
0x8FAF3D: fstp    dword ptr [esp+70h+var_20+0Ch]
0x8FAF41: xor     eax, eax
0x8FAF43: fld     [esp+70h+var_58]
0x8FAF47: jmp     short loc_8FAF8A
0x8FAF49: fld     [esp+70h+var_54]
0x8FAF4D: fcomp   st(1)
0x8FAF4F: fnstsw  ax
0x8FAF51: test    ah, 41h
0x8FAF54: jnz     short loc_8FAF74
0x8FAF56: movaps  xmm0, xmmword ptr [edx+10h]
0x8FAF5A: fstp    st
0x8FAF5C: fld     dword ptr [esp+70h+var_20+0Ch]
0x8FAF60: movaps  [esp+70h+var_20], xmm0
0x8FAF65: fstp    dword ptr [esp+70h+var_20+0Ch]
0x8FAF69: mov     eax, 1
0x8FAF6E: fld     [esp+70h+var_54]
0x8FAF72: jmp     short loc_8FAF8A
0x8FAF74: movaps  xmm0, xmmword ptr [edx+20h]
0x8FAF78: fld     dword ptr [esp+70h+var_20+0Ch]
0x8FAF7C: movaps  [esp+70h+var_20], xmm0
0x8FAF81: fstp    dword ptr [esp+70h+var_20+0Ch]
0x8FAF85: mov     eax, 2
0x8FAF8A: fld     dword ptr [esp+eax*4+70h+var_40]
0x8FAF8E: movaps  xmm0, [esp+70h+var_20]
0x8FAF93: fcomp   dword ptr ds:0A2FAA8h
0x8FAF99: fnstsw  ax
0x8FAF9B: test    ah, 5
0x8FAF9E: jp      short loc_8FAFAF
0x8FAFA0: movaps  xmm1, xmmword ptr ds:0A965C0h
0x8FAFA7: xorps   xmm0, xmm1
0x8FAFAA: movaps  [esp+70h+var_20], xmm0
0x8FAFAF: fsub    dword ptr [ecx+0Ch]
0x8FAFB2: fsub    dword ptr [edi+0Ch]
0x8FAFB5: mov     ecx, [ebp+arg_C]
0x8FAFB8: fld     st
0x8FAFBA: mov     eax, [ecx]
0x8FAFBC: fchs
0x8FAFBE: fsub    dword ptr [edi+0Ch]
0x8FAFC1: lea     edx, [esp+70h+var_30]
0x8FAFC5: push    edx
0x8FAFC6: fstp    [esp+74h+var_54]
0x8FAFCA: movss   xmm1, [esp+74h+var_54]
0x8FAFD0: movaps  xmm2, xmm1
0x8FAFD3: shufps  xmm2, xmm1, 0
0x8FAFD7: mulps   xmm2, xmm0
0x8FAFDA: movaps  xmm0, xmmword ptr [ebx]
0x8FAFDD: fstp    dword ptr [esp+74h+var_20+0Ch]
0x8FAFE1: addps   xmm0, xmm2
0x8FAFE4: movaps  [esp+74h+var_30], xmm0
0x8FAFE9: call    dword ptr [eax+4]
0x8FAFEC: jmp     short loc_8FAFF0
0x8FAFEE: fstp    st
0x8FAFF0: mov     ecx, large fs:2Ch
0x8FAFF7: mov     edx, ds:0BA9DE4h
0x8FAFFD: mov     eax, [ecx+edx*4]
0x8FB000: mov     esi, [eax+1A4h]
0x8FB006: cmp     esi, [eax+1A8h]
0x8FB00C: jnb     short loc_8FB032
0x8FB00E: mov     esi, eax
0x8FB010: mov     ecx, [esi+1A4h]
0x8FB016: mov     dword ptr [ecx], offset aEt; "Et"
0x8FB01C: rdtsc
0x8FB01E: mov     [esp+70h+var_54], eax
0x8FB022: mov     eax, [esp+70h+var_54]
0x8FB026: mov     [ecx+4], eax
0x8FB029: add     ecx, 0Ch
0x8FB02C: mov     [esi+1A4h], ecx
0x8FB032: pop     edi
0x8FB033: pop     esi
0x8FB034: pop     ebx
0x8FB035: mov     esp, ebp
0x8FB037: pop     ebp
0x8FB038: retn    10h
