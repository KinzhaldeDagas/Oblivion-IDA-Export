0x8FD590: push    ebp
0x8FD591: mov     ebp, esp
0x8FD593: and     esp, 0FFFFFFF0h
0x8FD596: push    ecx
0x8FD597: push    ebx
0x8FD598: mov     ebx, ds:0BA9DE4h
0x8FD59E: push    esi
0x8FD59F: push    edi
0x8FD5A0: mov     edi, large fs:2Ch
0x8FD5A7: mov     eax, [edi+ebx*4]
0x8FD5AA: mov     ecx, [eax+1A4h]
0x8FD5B0: cmp     ecx, [eax+1A8h]
0x8FD5B6: jnb     short loc_8FD5DC
0x8FD5B8: mov     esi, eax
0x8FD5BA: mov     ecx, [esi+1A4h]
0x8FD5C0: mov     dword ptr [ecx], offset aTtspheresphere; "TtSphereSphere"
0x8FD5C6: rdtsc
0x8FD5C8: mov     [esp+10h+var_4], eax
0x8FD5CC: mov     edx, [esp+10h+var_4]
0x8FD5D0: mov     [ecx+4], edx
0x8FD5D3: add     ecx, 0Ch
0x8FD5D6: mov     [esi+1A4h], ecx
0x8FD5DC: mov     edx, [ebp+arg_0]
0x8FD5DF: mov     esi, [ebp+arg_4]
0x8FD5E2: mov     eax, [edx+8]
0x8FD5E5: movaps  xmm1, xmmword ptr [eax+30h]
0x8FD5E9: mov     ecx, [esi+8]
0x8FD5EC: movaps  xmm0, xmmword ptr [ecx+30h]
0x8FD5F0: mov     ecx, [edx]
0x8FD5F2: fld     dword ptr [ecx+0Ch]
0x8FD5F5: subps   xmm0, xmm1
0x8FD5F8: mulps   xmm0, xmm0
0x8FD5FB: movaps  xmm1, xmm0
0x8FD5FE: shufps  xmm1, xmm0, 55h ; 'U'
0x8FD602: movaps  xmm2, xmm0
0x8FD605: lea     eax, [esp+10h+var_4]
0x8FD609: addss   xmm1, xmm0
0x8FD60D: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8FD611: addss   xmm2, xmm1
0x8FD615: movss   dword ptr [eax], xmm2
0x8FD619: mov     eax, [esi]
0x8FD61B: fadd    dword ptr [eax+0Ch]
0x8FD61E: fld     st
0x8FD620: fmul    st, st(1)
0x8FD622: fld     [esp+10h+var_4]
0x8FD626: fcompp
0x8FD628: fnstsw  ax
0x8FD62A: fstp    st
0x8FD62C: test    ah, 5
0x8FD62F: jp      short loc_8FD63B
0x8FD631: mov     ecx, [ebp+arg_C]
0x8FD634: mov     eax, [ecx]
0x8FD636: push    esi
0x8FD637: push    edx
0x8FD638: call    dword ptr [eax+4]
0x8FD63B: mov     eax, [edi+ebx*4]
0x8FD63E: mov     ecx, [eax+1A4h]
0x8FD644: cmp     ecx, [eax+1A8h]
0x8FD64A: jnb     short loc_8FD670
0x8FD64C: mov     esi, eax
0x8FD64E: mov     ecx, [esi+1A4h]
0x8FD654: mov     dword ptr [ecx], offset aEt; "Et"
0x8FD65A: rdtsc
0x8FD65C: mov     [esp+10h+var_4], eax
0x8FD660: mov     edx, [esp+10h+var_4]
0x8FD664: mov     [ecx+4], edx
0x8FD667: add     ecx, 0Ch
0x8FD66A: mov     [esi+1A4h], ecx
0x8FD670: pop     edi
0x8FD671: pop     esi
0x8FD672: pop     ebx
0x8FD673: mov     esp, ebp
0x8FD675: pop     ebp
0x8FD676: retn
