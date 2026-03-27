0x8FBE30: push    ebp
0x8FBE31: mov     ebp, esp
0x8FBE33: and     esp, 0FFFFFFF0h
0x8FBE36: sub     esp, 44h
0x8FBE39: mov     ecx, large fs:2Ch
0x8FBE40: mov     edx, ds:0BA9DE4h
0x8FBE46: mov     eax, [ecx+edx*4]
0x8FBE49: push    ebx
0x8FBE4A: push    esi
0x8FBE4B: mov     esi, [eax+1A4h]
0x8FBE51: push    edi
0x8FBE52: cmp     esi, [eax+1A8h]
0x8FBE58: jnb     short loc_8FBE7E
0x8FBE5A: mov     esi, eax
0x8FBE5C: mov     ecx, [esi+1A4h]
0x8FBE62: mov     dword ptr [ecx], offset aTtspheretri; "TtSphereTri"
0x8FBE68: rdtsc
0x8FBE6A: mov     [esp+50h+var_44], eax
0x8FBE6E: mov     eax, [esp+50h+var_44]
0x8FBE72: mov     [ecx+4], eax
0x8FBE75: add     ecx, 0Ch
0x8FBE78: mov     [esi+1A4h], ecx
0x8FBE7E: mov     edx, [ebp+arg_4]
0x8FBE81: mov     esi, [edx]
0x8FBE83: mov     ebx, [ebp+arg_0]
0x8FBE86: mov     ecx, [ebx]
0x8FBE88: lea     eax, [esp+50h+var_40]
0x8FBE8C: push    eax
0x8FBE8D: lea     edi, [esi+10h]
0x8FBE90: push    edi
0x8FBE91: mov     [esp+58h+var_44], ecx
0x8FBE95: call    sub_8D1DB0
0x8FBE9A: mov     ecx, [ebp+arg_4]
0x8FBE9D: mov     eax, [ecx+8]
0x8FBEA0: movaps  xmm3, xmmword ptr [eax+20h]
0x8FBEA4: movaps  xmm1, xmmword ptr [eax+30h]
0x8FBEA8: mov     edx, [ebx+8]
0x8FBEAB: movaps  xmm0, xmmword ptr [edx+30h]
0x8FBEAF: movaps  xmm2, xmmword ptr [eax]
0x8FBEB2: movaps  xmm5, xmmword ptr [eax+10h]
0x8FBEB6: subps   xmm0, xmm1
0x8FBEB9: movaps  xmm4, xmm3
0x8FBEBC: shufps  xmm4, xmm3, 44h ; 'D'
0x8FBEC0: movaps  xmm7, xmm3
0x8FBEC3: movaps  xmm1, xmm2
0x8FBEC6: shufps  xmm1, xmm5, 44h ; 'D'
0x8FBECA: shufps  xmm7, xmm3, 0EEh ; 'î'
0x8FBECE: shufps  xmm2, xmm5, 0EEh ; 'î'
0x8FBED2: movaps  xmm5, xmm1
0x8FBED5: lea     eax, [esp+58h+var_20]
0x8FBED9: push    eax
0x8FBEDA: movaps  xmm3, xmm0
0x8FBEDD: shufps  xmm3, xmm0, 55h ; 'U'
0x8FBEE1: shufps  xmm5, xmm4, 0DDh ; 'Ý'
0x8FBEE5: mulps   xmm5, xmm3
0x8FBEE8: lea     ecx, [esp+5Ch+var_40]
0x8FBEEC: shufps  xmm1, xmm4, 88h ; 'ˆ'
0x8FBEF0: push    ecx
0x8FBEF1: movaps  xmm3, xmm0
0x8FBEF4: movaps  xmm6, xmm0
0x8FBEF7: shufps  xmm3, xmm0, 0
0x8FBEFB: mulps   xmm1, xmm3
0x8FBEFE: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x8FBF02: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x8FBF06: lea     edx, [esp+60h+var_30]
0x8FBF0A: mulps   xmm2, xmm6
0x8FBF0D: addps   xmm1, xmm5
0x8FBF10: push    edi
0x8FBF11: addps   xmm1, xmm2
0x8FBF14: push    edx
0x8FBF15: movaps  [esp+68h+var_30], xmm1
0x8FBF1A: call    sub_8D20C0
0x8FBF1F: fld     dword ptr [esi+0Ch]
0x8FBF22: mov     eax, [esp+68h+var_44]
0x8FBF26: fadd    dword ptr [eax+0Ch]
0x8FBF29: add     esp, 18h
0x8FBF2C: fcomp   [esp+50h+var_10]
0x8FBF30: fnstsw  ax
0x8FBF32: test    ah, 41h
0x8FBF35: jnz     short loc_8FBF44
0x8FBF37: mov     eax, [ebp+arg_4]
0x8FBF3A: mov     ecx, [ebp+arg_C]
0x8FBF3D: mov     edx, [ecx]
0x8FBF3F: push    eax
0x8FBF40: push    ebx
0x8FBF41: call    dword ptr [edx+4]
0x8FBF44: mov     ecx, large fs:2Ch
0x8FBF4B: mov     edx, ds:0BA9DE4h
0x8FBF51: mov     eax, [ecx+edx*4]
0x8FBF54: mov     esi, [eax+1A4h]
0x8FBF5A: cmp     esi, [eax+1A8h]
0x8FBF60: jnb     short loc_8FBF86
0x8FBF62: mov     esi, eax
0x8FBF64: mov     ecx, [esi+1A4h]
0x8FBF6A: mov     dword ptr [ecx], offset aEt; "Et"
0x8FBF70: rdtsc
0x8FBF72: mov     [esp+50h+var_44], eax
0x8FBF76: mov     edx, [esp+50h+var_44]
0x8FBF7A: mov     [ecx+4], edx
0x8FBF7D: add     ecx, 0Ch
0x8FBF80: mov     [esi+1A4h], ecx
0x8FBF86: pop     edi
0x8FBF87: pop     esi
0x8FBF88: pop     ebx
0x8FBF89: mov     esp, ebp
0x8FBF8B: pop     ebp
0x8FBF8C: retn
