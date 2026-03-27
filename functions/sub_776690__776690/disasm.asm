0x776690: mov     eax, [ecx+4]
0x776693: test    eax, eax
0x776695: push    ebx
0x776696: mov     ebx, [esp+4+arg_0]
0x77669A: push    esi
0x77669B: push    edi
0x77669C: jz      short loc_7766B0
0x77669E: mov     edi, [ebx]
0x7766A0: cmp     edi, [eax+8]
0x7766A3: lea     edx, [eax+8]
0x7766A6: mov     esi, eax
0x7766A8: mov     eax, [eax]
0x7766AA: jz      short loc_7766B2
0x7766AC: test    eax, eax
0x7766AE: jnz     short loc_7766A0
0x7766B0: xor     esi, esi
0x7766B2: test    esi, esi
0x7766B4: mov     [esp+0Ch+arg_0], esi
0x7766B8: jz      short loc_7766CA
0x7766BA: lea     eax, [esp+0Ch+arg_0]
0x7766BE: push    eax
0x7766BF: call    sub_7AA860
0x7766C4: pop     edi
0x7766C5: pop     esi
0x7766C6: pop     ebx
0x7766C7: retn    4
0x7766CA: mov     eax, [ebx]
0x7766CC: pop     edi
0x7766CD: pop     esi
0x7766CE: pop     ebx
0x7766CF: retn    4
