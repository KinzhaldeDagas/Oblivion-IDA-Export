0x8FBCE0: push    ebp
0x8FBCE1: mov     ebp, esp
0x8FBCE3: and     esp, 0FFFFFFF0h
0x8FBCE6: sub     esp, 34h
0x8FBCE9: mov     edx, large fs:2Ch
0x8FBCF0: push    ebx
0x8FBCF1: push    esi
0x8FBCF2: mov     esi, ds:0BA9DE4h
0x8FBCF8: mov     eax, [edx+esi*4]
0x8FBCFB: mov     ebx, [eax+1A8h]
0x8FBD01: push    edi
0x8FBD02: mov     edi, [eax+1A4h]
0x8FBD08: cmp     edi, ebx
0x8FBD0A: jnb     short loc_8FBD30
0x8FBD0C: mov     edi, eax
0x8FBD0E: mov     esi, [edi+1A4h]
0x8FBD14: mov     dword ptr [esi], offset aTtspheretri; "TtSphereTri"
0x8FBD1A: rdtsc
0x8FBD1C: mov     [esp+40h+var_34], eax
0x8FBD20: mov     eax, [esp+40h+var_34]
0x8FBD24: mov     [esi+4], eax
0x8FBD27: add     esi, 0Ch
0x8FBD2A: mov     [edi+1A4h], esi
0x8FBD30: mov     edi, [ebp+arg_0]
0x8FBD33: mov     edx, [edi]
0x8FBD35: mov     ebx, [ebp+arg_4]
0x8FBD38: mov     eax, [ebx+8]
0x8FBD3B: movaps  xmm3, xmmword ptr [eax+20h]
0x8FBD3F: movaps  xmm1, xmmword ptr [eax+30h]
0x8FBD43: movaps  xmm5, xmmword ptr [eax+10h]
0x8FBD47: movaps  xmm2, xmmword ptr [eax]
0x8FBD4A: mov     esi, [ebx]
0x8FBD4C: mov     [esp+40h+var_34], edx
0x8FBD50: mov     edx, [edi+8]
0x8FBD53: movaps  xmm0, xmmword ptr [edx+30h]
0x8FBD57: subps   xmm0, xmm1
0x8FBD5A: movaps  xmm4, xmm3
0x8FBD5D: shufps  xmm4, xmm3, 44h ; 'D'
0x8FBD61: movaps  xmm7, xmm3
0x8FBD64: movaps  xmm1, xmm2
0x8FBD67: shufps  xmm1, xmm5, 44h ; 'D'
0x8FBD6B: shufps  xmm7, xmm3, 0EEh ; 'î'
0x8FBD6F: shufps  xmm2, xmm5, 0EEh ; 'î'
0x8FBD73: movaps  xmm5, xmm1
0x8FBD76: lea     eax, [esp+40h+var_20]
0x8FBD7A: push    eax
0x8FBD7B: add     ecx, 10h
0x8FBD7E: movaps  xmm3, xmm0
0x8FBD81: shufps  xmm3, xmm0, 55h ; 'U'
0x8FBD85: push    ecx
0x8FBD86: shufps  xmm5, xmm4, 0DDh ; 'Ý'
0x8FBD8A: mulps   xmm5, xmm3
0x8FBD8D: shufps  xmm1, xmm4, 88h ; 'ˆ'
0x8FBD91: movaps  xmm3, xmm0
0x8FBD94: lea     ecx, [esi+10h]
0x8FBD97: movaps  xmm6, xmm0
0x8FBD9A: shufps  xmm3, xmm0, 0
0x8FBD9E: mulps   xmm1, xmm3
0x8FBDA1: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x8FBDA5: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x8FBDA9: push    ecx
0x8FBDAA: lea     edx, [esp+4Ch+var_30]
0x8FBDAE: mulps   xmm2, xmm6
0x8FBDB1: addps   xmm1, xmm5
0x8FBDB4: addps   xmm1, xmm2
0x8FBDB7: push    edx
0x8FBDB8: movaps  [esp+50h+var_30], xmm1
0x8FBDBD: call    sub_8D20C0
0x8FBDC2: fld     dword ptr [esi+0Ch]
0x8FBDC5: mov     eax, [esp+50h+var_34]
0x8FBDC9: fadd    dword ptr [eax+0Ch]
0x8FBDCC: add     esp, 10h
0x8FBDCF: fcomp   [esp+40h+var_10]
0x8FBDD3: fnstsw  ax
0x8FBDD5: test    ah, 41h
0x8FBDD8: jnz     short loc_8FBDE4
0x8FBDDA: mov     ecx, [ebp+arg_C]
0x8FBDDD: mov     edx, [ecx]
0x8FBDDF: push    ebx
0x8FBDE0: push    edi
0x8FBDE1: call    dword ptr [edx+4]
0x8FBDE4: mov     ecx, large fs:2Ch
0x8FBDEB: mov     edx, ds:0BA9DE4h
0x8FBDF1: mov     eax, [ecx+edx*4]
0x8FBDF4: mov     esi, [eax+1A4h]
0x8FBDFA: cmp     esi, [eax+1A8h]
0x8FBE00: jnb     short loc_8FBE26
0x8FBE02: mov     esi, eax
0x8FBE04: mov     ecx, [esi+1A4h]
0x8FBE0A: mov     dword ptr [ecx], offset aEt; "Et"
0x8FBE10: rdtsc
0x8FBE12: mov     [esp+40h+var_34], eax
0x8FBE16: mov     eax, [esp+40h+var_34]
0x8FBE1A: mov     [ecx+4], eax
0x8FBE1D: add     ecx, 0Ch
0x8FBE20: mov     [esi+1A4h], ecx
0x8FBE26: pop     edi
0x8FBE27: pop     esi
0x8FBE28: pop     ebx
0x8FBE29: mov     esp, ebp
0x8FBE2B: pop     ebp
0x8FBE2C: retn    10h
