0x94B8B0: push    ebp
0x94B8B1: mov     ebp, esp
0x94B8B3: and     esp, 0FFFFFFF0h
0x94B8B6: sub     esp, 24h
0x94B8B9: push    ebx
0x94B8BA: push    esi
0x94B8BB: mov     esi, eax
0x94B8BD: push    edi
0x94B8BE: mov     ecx, esi
0x94B8C0: call    sub_916BC0
0x94B8C5: mov     edi, eax
0x94B8C7: xor     eax, eax
0x94B8C9: mov     [esp+30h+var_C], eax
0x94B8CD: mov     [esp+30h+var_8], eax
0x94B8D1: lea     eax, [esp+30h+var_C]
0x94B8D5: push    eax
0x94B8D6: mov     ecx, esi
0x94B8D8: mov     [esp+34h+var_4], 80000000h
0x94B8E0: call    sub_917200
0x94B8E5: mov     eax, [esp+30h+var_8]
0x94B8E9: test    eax, eax
0x94B8EB: mov     ebx, [edi+4]
0x94B8EE: mov     [esp+30h+var_18], 0C47A0000h
0x94B8F6: jle     short loc_94B965
0x94B8F8: mov     esi, [esp+30h+var_C]
0x94B8FC: mov     [esp+30h+var_14], eax
0x94B900: test    ebx, ebx
0x94B902: jle     short loc_94B957
0x94B904: movaps  xmm1, xmmword ptr [esi]
0x94B907: mov     ecx, [edi]
0x94B909: mov     edx, ebx
0x94B90B: jmp     short loc_94B910
0x94B90D: align 10h
0x94B910: movaps  xmm2, xmmword ptr [ecx]
0x94B913: movaps  xmm0, xmm1
0x94B916: mulps   xmm0, xmm2
0x94B919: movaps  xmm2, xmm0
0x94B91C: shufps  xmm2, xmm0, 55h ; 'U'
0x94B920: movaps  xmm3, xmm0
0x94B923: lea     eax, [esp+30h+var_10]
0x94B927: addss   xmm2, xmm0
0x94B92B: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x94B92F: addss   xmm3, xmm2
0x94B933: movss   dword ptr [eax], xmm3
0x94B937: fld     [esp+30h+var_10]
0x94B93B: fadd    dword ptr [ecx+0Ch]
0x94B93E: fcom    [esp+30h+var_18]
0x94B942: fnstsw  ax
0x94B944: test    ah, 41h
0x94B947: jnz     short loc_94B94F
0x94B949: fstp    [esp+30h+var_18]
0x94B94D: jmp     short loc_94B951
0x94B94F: fstp    st
0x94B951: add     ecx, 10h
0x94B954: dec     edx
0x94B955: jnz     short loc_94B910
0x94B957: mov     eax, [esp+30h+var_14]
0x94B95B: add     esi, 10h
0x94B95E: dec     eax
0x94B95F: mov     [esp+30h+var_14], eax
0x94B963: jnz     short loc_94B900
0x94B965: mov     eax, [esp+30h+var_4]
0x94B969: test    eax, eax
0x94B96B: js      short loc_94B9A2
0x94B96D: mov     ecx, ds:0BA9DE4h
0x94B973: mov     edx, large fs:2Ch
0x94B97A: mov     ecx, [edx+ecx*4]
0x94B97D: mov     ecx, [ecx+19Ch]
0x94B983: test    ecx, ecx
0x94B985: jnz     short loc_94B98D
0x94B987: mov     ecx, ds:0BA7D9Ch
0x94B98D: mov     edx, [esp+30h+var_C]
0x94B991: and     eax, 3FFFFFFFh
0x94B996: push    14h
0x94B998: shl     eax, 4
0x94B99B: push    eax
0x94B99C: push    edx
0x94B99D: call    sub_8A75D0
0x94B9A2: fld     [esp+30h+var_18]
0x94B9A6: pop     edi
0x94B9A7: pop     esi
0x94B9A8: pop     ebx
0x94B9A9: mov     esp, ebp
0x94B9AB: pop     ebp
0x94B9AC: retn
