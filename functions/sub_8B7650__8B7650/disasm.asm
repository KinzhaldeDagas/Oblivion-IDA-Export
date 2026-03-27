0x8B7650: push    ebp
0x8B7651: mov     ebp, esp
0x8B7653: and     esp, 0FFFFFFF0h
0x8B7656: sub     esp, 14h
0x8B7659: mov     eax, [ebp+arg_0]
0x8B765C: push    ebx
0x8B765D: mov     ebx, [ebp+arg_4]
0x8B7660: push    esi
0x8B7661: push    edi
0x8B7662: mov     edi, ecx
0x8B7664: mov     edx, [edi]
0x8B7666: mov     edx, [edx+74h]
0x8B7669: mov     [esp+20h+var_4], eax
0x8B766D: lea     eax, [esp+20h+var_9]
0x8B7671: push    eax
0x8B7672: call    edx
0x8B7674: mov     esi, eax
0x8B7676: test    esi, esi
0x8B7678: jz      short loc_8B76C9
0x8B767A: fld     dword ptr [ebx+10h]
0x8B767D: fstp    [esp+20h+var_8]
0x8B7681: fld1
0x8B7683: fcomp   [esp+20h+var_8]
0x8B7687: fnstsw  ax
0x8B7689: test    ah, 44h
0x8B768C: jnp     short loc_8B76C9
0x8B768E: mov     ecx, [esi+8]
0x8B7691: test    ecx, ecx
0x8B7693: jz      short loc_8B76C9
0x8B7695: movss   xmm1, [esp+20h+var_8]
0x8B769B: xorps   xmm0, xmm0
0x8B769E: mov     edx, ecx
0x8B76A0: movss   xmm0, xmm1
0x8B76A4: shufps  xmm0, xmm0, 0
0x8B76A8: shl     edx, 4
0x8B76AB: jmp     short loc_8B76B0
0x8B76AD: align 10h
0x8B76B0: mov     eax, [esi+4]
0x8B76B3: sub     edx, 10h
0x8B76B6: movaps  xmm1, xmmword ptr [eax+edx]
0x8B76BA: add     eax, edx
0x8B76BC: sub     ecx, 1
0x8B76BF: test    ecx, ecx
0x8B76C1: mulps   xmm1, xmm0
0x8B76C4: movaps  xmmword ptr [eax], xmm1
0x8B76C7: jnz     short loc_8B76B0
0x8B76C9: mov     eax, [esp+20h+var_4]
0x8B76CD: push    ebx
0x8B76CE: push    eax
0x8B76CF: mov     ecx, edi
0x8B76D1: call    sub_8A2670
0x8B76D6: pop     edi
0x8B76D7: pop     esi
0x8B76D8: pop     ebx
0x8B76D9: mov     esp, ebp
0x8B76DB: pop     ebp
0x8B76DC: retn    8
