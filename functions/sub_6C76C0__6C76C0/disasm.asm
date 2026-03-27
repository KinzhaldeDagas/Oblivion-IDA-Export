0x6C76C0: push    esi
0x6C76C1: mov     esi, [esp+4+arg_0]
0x6C76C5: mov     eax, [esi]
0x6C76C7: push    edi
0x6C76C8: mov     edi, ecx
0x6C76CA: mov     ecx, [edi]
0x6C76CC: test    ecx, ecx
0x6C76CE: jz      short loc_6C76D6
0x6C76D0: test    eax, eax
0x6C76D2: jz      short loc_6C76EE
0x6C76D4: jmp     short loc_6C76DE
0x6C76D6: test    eax, eax
0x6C76D8: jnz     short loc_6C76EE
0x6C76DA: test    ecx, ecx
0x6C76DC: jz      short loc_6C76F5
0x6C76DE: test    eax, eax
0x6C76E0: jz      short loc_6C76F5
0x6C76E2: mov     edx, [ecx]
0x6C76E4: push    eax
0x6C76E5: mov     eax, [edx+2Ch]
0x6C76E8: call    eax
0x6C76EA: test    al, al
0x6C76EC: jnz     short loc_6C76F5
0x6C76EE: pop     edi
0x6C76EF: xor     al, al
0x6C76F1: pop     esi
0x6C76F2: retn    4
0x6C76F5: mov     ecx, [edi+4]
0x6C76F8: test    ecx, ecx
0x6C76FA: jz      short loc_6C7706
0x6C76FC: cmp     dword ptr [esi+4], 0
0x6C7700: jz      short loc_6C76EE
0x6C7702: test    ecx, ecx
0x6C7704: jnz     short loc_6C7710
0x6C7706: cmp     dword ptr [esi+4], 0
0x6C770A: jnz     short loc_6C76EE
0x6C770C: test    ecx, ecx
0x6C770E: jz      short loc_6C7723
0x6C7710: mov     eax, [esi+4]
0x6C7713: test    eax, eax
0x6C7715: jz      short loc_6C7723
0x6C7717: mov     edx, [ecx]
0x6C7719: push    eax
0x6C771A: mov     eax, [edx+2Ch]
0x6C771D: call    eax
0x6C771F: test    al, al
0x6C7721: jz      short loc_6C76EE
0x6C7723: mov     cl, [edi+0Dh]
0x6C7726: cmp     cl, [esi+0Dh]
0x6C7729: pop     edi
0x6C772A: setz    al
0x6C772D: pop     esi
0x6C772E: retn    4
