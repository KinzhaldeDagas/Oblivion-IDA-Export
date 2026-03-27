0x47F750: mov     ecx, [esp+arg_0]
0x47F754: test    ecx, ecx
0x47F756: push    edi
0x47F757: jz      short loc_47F79F
0x47F759: mov     edi, [esp+4+arg_4]
0x47F75D: test    edi, edi
0x47F75F: jz      short loc_47F79F
0x47F761: push    esi
0x47F762: push    offset dword_B3CD7C
0x47F767: call    sub_700010
0x47F76C: mov     esi, eax
0x47F76E: test    esi, esi
0x47F770: jz      short loc_47F786
0x47F772: push    edi
0x47F773: mov     ecx, esi
0x47F775: call    sub_47C710
0x47F77A: movzx   eax, ax
0x47F77D: cmp     ax, ds:0A7A160h
0x47F784: jnz     short loc_47F78B
0x47F786: pop     esi
0x47F787: xor     eax, eax
0x47F789: pop     edi
0x47F78A: retn
0x47F78B: mov     ecx, [esi+3Ch]
0x47F78E: movzx   eax, ax
0x47F791: lea     eax, [eax+eax*2]
0x47F794: shl     eax, 4
0x47F797: movsx   eax, byte ptr [eax+ecx+10h]
0x47F79C: pop     esi
0x47F79D: pop     edi
0x47F79E: retn
0x47F79F: xor     eax, eax
0x47F7A1: pop     edi
0x47F7A2: retn
