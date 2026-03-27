0x76C890: push    esi
0x76C891: mov     esi, ecx
0x76C893: mov     ecx, [esi]
0x76C895: push    edi
0x76C896: mov     edi, [esp+8+arg_0]
0x76C89A: cmp     ecx, [edi]
0x76C89C: jz      short loc_76C8B9
0x76C89E: test    ecx, ecx
0x76C8A0: jz      short loc_76C8AD
0x76C8A2: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x76C8A6: jnz     short loc_76C8AD
0x76C8A8: call    sub_7604D0
0x76C8AD: mov     eax, [edi]
0x76C8AF: test    eax, eax
0x76C8B1: mov     [esi], eax
0x76C8B3: jz      short loc_76C8B9
0x76C8B5: add     dword ptr [eax+60h], 1
0x76C8B9: pop     edi
0x76C8BA: mov     eax, esi
0x76C8BC: pop     esi
0x76C8BD: retn    4
