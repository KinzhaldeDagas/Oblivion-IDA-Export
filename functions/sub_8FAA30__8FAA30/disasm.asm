0x8FAA30: push    ebp
0x8FAA31: mov     ebp, esp
0x8FAA33: and     esp, 0FFFFFFF0h
0x8FAA36: sub     esp, 34h
0x8FAA39: mov     edx, ds:0BA9DE4h
0x8FAA3F: push    ebx
0x8FAA40: mov     [esp+38h+var_28], ecx
0x8FAA44: mov     ecx, large fs:2Ch
0x8FAA4B: mov     eax, [ecx+edx*4]
0x8FAA4E: push    esi
0x8FAA4F: mov     esi, [eax+1A4h]
0x8FAA55: push    edi
0x8FAA56: cmp     esi, [eax+1A8h]
0x8FAA5C: jnb     short loc_8FAA82
0x8FAA5E: mov     esi, eax
0x8FAA60: mov     ecx, [esi+1A4h]
0x8FAA66: mov     dword ptr [ecx], offset aTtspherebox; "TtSphereBox"
0x8FAA6C: rdtsc
0x8FAA6E: mov     [esp+40h+var_2C], eax
0x8FAA72: mov     eax, [esp+40h+var_2C]
0x8FAA76: mov     [ecx+4], eax
0x8FAA79: add     ecx, 0Ch
0x8FAA7C: mov     [esi+1A4h], ecx
0x8FAA82: mov     edx, [ebp+arg_0]
0x8FAA85: mov     ebx, [edx+8]
0x8FAA88: mov     ecx, [ebp+arg_C]
0x8FAA8B: mov     edi, [ebp+arg_4]
0x8FAA8E: mov     eax, [edi+8]
0x8FAA91: mov     esi, [ecx]
0x8FAA93: add     ebx, 30h ; '0'
0x8FAA96: push    ebx
0x8FAA97: push    eax
0x8FAA98: lea     ecx, [esp+48h+var_10]
0x8FAA9C: call    sub_88FD10
0x8FAAA1: movaps  xmm1, xmmword ptr ds:0A372D0h
0x8FAAA8: movaps  xmm3, [esp+40h+var_10]
0x8FAAAD: mov     ecx, [edi]
0x8FAAAF: mov     edx, [ebp+arg_0]
0x8FAAB2: mov     edx, [edx]
0x8FAAB4: movaps  xmm0, xmm3
0x8FAAB7: andps   xmm0, xmm1
0x8FAABA: movaps  xmm1, xmmword ptr [ecx+10h]
0x8FAABE: movaps  xmm2, xmm0
0x8FAAC1: minps   xmm2, xmm1
0x8FAAC4: subps   xmm2, xmm0
0x8FAAC7: movmskps eax, xmm2
0x8FAACA: test    al, 7
0x8FAACC: mov     [esp+40h+var_24], edx
0x8FAAD0: movaps  [esp+40h+var_20], xmm0
0x8FAAD5: jz      loc_8FABC9
0x8FAADB: fld     dword ptr [ecx+0Ch]
0x8FAADE: mov     ecx, [ebp+arg_8]
0x8FAAE1: fadd    dword ptr [edx+0Ch]
0x8FAAE4: movaps  xmm0, xmm2
0x8FAAE7: mulps   xmm0, xmm2
0x8FAAEA: movaps  xmm1, xmm0
0x8FAAED: shufps  xmm1, xmm0, 55h ; 'U'
0x8FAAF1: addss   xmm1, xmm0
0x8FAAF5: movaps  xmm4, xmm0
0x8FAAF8: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8FAAFC: movaps  xmm0, xmm4
0x8FAAFF: addss   xmm0, xmm1
0x8FAB03: movaps  [esp+40h+var_20], xmm0
0x8FAB08: rsqrtss xmm1, xmm0
0x8FAB0C: movss   dword ptr [esp+40h+var_20], xmm1
0x8FAB12: movaps  xmm1, [esp+40h+var_20]
0x8FAB17: movaps  xmm4, xmm0
0x8FAB1A: mulss   xmm4, xmm1
0x8FAB1E: mulss   xmm4, xmm1
0x8FAB22: mov     [esp+40h+var_2C], 40400000h
0x8FAB2A: movss   xmm5, [esp+40h+var_2C]
0x8FAB30: subss   xmm5, xmm4
0x8FAB34: mov     [esp+40h+var_2C], 3F000000h
0x8FAB3C: movss   xmm4, [esp+40h+var_2C]
0x8FAB42: mulss   xmm4, xmm1
0x8FAB46: movaps  xmm1, xmm4
0x8FAB49: mulss   xmm1, xmm5
0x8FAB4D: lea     eax, [esp+40h+var_2C]
0x8FAB51: shufps  xmm1, xmm1, 0
0x8FAB55: mulss   xmm0, xmm1
0x8FAB59: movss   dword ptr [eax], xmm0
0x8FAB5D: fsubr   [esp+40h+var_2C]
0x8FAB61: fld     st
0x8FAB63: fcomp   dword ptr [ecx+8]
0x8FAB66: fnstsw  ax
0x8FAB68: test    ah, 41h
0x8FAB6B: jz      loc_8FACE8
0x8FAB71: movaps  xmm0, xmmword ptr ds:0A965C0h
0x8FAB78: mov     eax, [edi+8]
0x8FAB7B: movaps  xmm4, xmmword ptr ds:0A965C0h
0x8FAB82: andps   xmm3, xmm0
0x8FAB85: mulps   xmm1, xmm2
0x8FAB88: movaps  xmm2, xmmword ptr [eax+20h]
0x8FAB8C: xorps   xmm1, xmm3
0x8FAB8F: movaps  xmm3, xmmword ptr [eax+10h]
0x8FAB93: movaps  xmm0, xmm1
0x8FAB96: xorps   xmm0, xmm4
0x8FAB99: movaps  xmm1, xmm0
0x8FAB9C: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8FABA0: mulps   xmm2, xmm1
0x8FABA3: movaps  xmm1, xmm0
0x8FABA6: shufps  xmm1, xmm0, 55h ; 'U'
0x8FABAA: mulps   xmm3, xmm1
0x8FABAD: movaps  xmm1, xmm0
0x8FABB0: shufps  xmm1, xmm0, 0
0x8FABB4: movaps  xmm0, xmmword ptr [eax]
0x8FABB7: mulps   xmm0, xmm1
0x8FABBA: addps   xmm0, xmm3
0x8FABBD: addps   xmm0, xmm2
0x8FABC0: movaps  xmmword ptr [esi+10h], xmm0
0x8FABC4: jmp     loc_8FAC84
0x8FABC9: fld     dword ptr [esp+40h+var_20]
0x8FABCD: mov     edx, [edi+8]
0x8FABD0: fsub    dword ptr [ecx+10h]
0x8FABD3: fstp    [esp+40h+var_30]
0x8FABD7: fld     dword ptr [esp+40h+var_20+4]
0x8FABDB: fsub    dword ptr [ecx+14h]
0x8FABDE: fstp    [esp+40h+var_2C]
0x8FABE2: fld     dword ptr [esp+40h+var_20+8]
0x8FABE6: fsub    dword ptr [ecx+18h]
0x8FABE9: fld     [esp+40h+var_30]
0x8FABED: fcomp   [esp+40h+var_2C]
0x8FABF1: fnstsw  ax
0x8FABF3: test    ah, 41h
0x8FABF6: jnz     short loc_8FAC1C
0x8FABF8: fld     [esp+40h+var_30]
0x8FABFC: fcomp   st(1)
0x8FABFE: fnstsw  ax
0x8FAC00: test    ah, 41h
0x8FAC03: jnz     short loc_8FAC44
0x8FAC05: movaps  xmm0, xmmword ptr [edx]
0x8FAC08: fstp    st
0x8FAC0A: fld     dword ptr [esi+1Ch]
0x8FAC0D: movaps  xmmword ptr [esi+10h], xmm0
0x8FAC11: fstp    dword ptr [esi+1Ch]
0x8FAC14: xor     eax, eax
0x8FAC16: fld     [esp+40h+var_30]
0x8FAC1A: jmp     short loc_8FAC57
0x8FAC1C: fld     [esp+40h+var_2C]
0x8FAC20: fcomp   st(1)
0x8FAC22: fnstsw  ax
0x8FAC24: test    ah, 41h
0x8FAC27: jnz     short loc_8FAC44
0x8FAC29: movaps  xmm0, xmmword ptr [edx+10h]
0x8FAC2D: fstp    st
0x8FAC2F: fld     dword ptr [esi+1Ch]
0x8FAC32: movaps  xmmword ptr [esi+10h], xmm0
0x8FAC36: fstp    dword ptr [esi+1Ch]
0x8FAC39: mov     eax, 1
0x8FAC3E: fld     [esp+40h+var_2C]
0x8FAC42: jmp     short loc_8FAC57
0x8FAC44: movaps  xmm0, xmmword ptr [edx+20h]
0x8FAC48: fld     dword ptr [esi+1Ch]
0x8FAC4B: movaps  xmmword ptr [esi+10h], xmm0
0x8FAC4F: fstp    dword ptr [esi+1Ch]
0x8FAC52: mov     eax, 2
0x8FAC57: fld     dword ptr [esp+eax*4+40h+var_10]
0x8FAC5B: fcomp   dword ptr ds:0A2FAA8h
0x8FAC61: fnstsw  ax
0x8FAC63: test    ah, 5
0x8FAC66: jp      short loc_8FAC7A
0x8FAC68: movaps  xmm0, xmmword ptr ds:0A965C0h
0x8FAC6F: movaps  xmm1, xmmword ptr [esi+10h]
0x8FAC73: xorps   xmm1, xmm0
0x8FAC76: movaps  xmmword ptr [esi+10h], xmm1
0x8FAC7A: fsub    dword ptr [ecx+0Ch]
0x8FAC7D: mov     edx, [esp+40h+var_24]
0x8FAC81: fsub    dword ptr [edx+0Ch]
0x8FAC84: movaps  xmm1, xmmword ptr [esi+10h]
0x8FAC88: fld     st
0x8FAC8A: fchs
0x8FAC8C: fsub    dword ptr [edx+0Ch]
0x8FAC8F: fstp    [esp+40h+var_24]
0x8FAC93: movss   xmm0, [esp+40h+var_24]
0x8FAC99: movaps  xmm2, xmm0
0x8FAC9C: shufps  xmm2, xmm0, 0
0x8FACA0: movaps  xmm0, xmmword ptr [ebx]
0x8FACA3: mov     ebx, [esp+40h+var_28]
0x8FACA7: mulps   xmm2, xmm1
0x8FACAA: addps   xmm0, xmm2
0x8FACAD: movaps  xmmword ptr [esi], xmm0
0x8FACB0: fstp    dword ptr [esi+1Ch]
0x8FACB3: cmp     word ptr [ebx+0Ch], 0FFFFh
0x8FACB9: jnz     short loc_8FACD1
0x8FACBB: mov     edx, [ebp+arg_8]
0x8FACBE: mov     ecx, [ebx+8]
0x8FACC1: mov     eax, [ecx]
0x8FACC3: push    esi
0x8FACC4: push    edx
0x8FACC5: mov     edx, [ebp+arg_0]
0x8FACC8: push    edi
0x8FACC9: push    edx
0x8FACCA: call    dword ptr [eax+8]
0x8FACCD: mov     [ebx+0Ch], ax
0x8FACD1: mov     bx, [ebx+0Ch]
0x8FACD5: cmp     bx, 0FFFFh
0x8FACDA: jz      short loc_8FAD09
0x8FACDC: mov     eax, [ebp+arg_C]
0x8FACDF: mov     [esi+20h], bx
0x8FACE3: add     dword ptr [eax], 30h ; '0'
0x8FACE6: jmp     short loc_8FAD09
0x8FACE8: mov     esi, [esp+40h+var_28]
0x8FACEC: fstp    st
0x8FACEE: xor     eax, eax
0x8FACF0: mov     ax, [esi+0Ch]
0x8FACF4: cmp     ax, 0FFFFh
0x8FACF8: jz      short loc_8FAD09
0x8FACFA: mov     ecx, [esi+8]
0x8FACFD: mov     edx, [ecx]
0x8FACFF: push    eax
0x8FAD00: call    dword ptr [edx+10h]
0x8FAD03: mov     word ptr [esi+0Ch], 0FFFFh
0x8FAD09: mov     ecx, large fs:2Ch
0x8FAD10: mov     edx, ds:0BA9DE4h
0x8FAD16: mov     eax, [ecx+edx*4]
0x8FAD19: mov     esi, [eax+1A4h]
0x8FAD1F: cmp     esi, [eax+1A8h]
0x8FAD25: jnb     short loc_8FAD4B
0x8FAD27: mov     esi, eax
0x8FAD29: mov     ecx, [esi+1A4h]
0x8FAD2F: mov     dword ptr [ecx], offset aEt; "Et"
0x8FAD35: rdtsc
0x8FAD37: mov     [esp+40h+var_24], eax
0x8FAD3B: mov     eax, [esp+40h+var_24]
0x8FAD3F: mov     [ecx+4], eax
0x8FAD42: add     ecx, 0Ch
0x8FAD45: mov     [esi+1A4h], ecx
0x8FAD4B: pop     edi
0x8FAD4C: pop     esi
0x8FAD4D: pop     ebx
0x8FAD4E: mov     esp, ebp
0x8FAD50: pop     ebp
0x8FAD51: retn    10h
