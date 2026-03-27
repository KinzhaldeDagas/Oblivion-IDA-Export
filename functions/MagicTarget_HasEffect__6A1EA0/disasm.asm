0x6A1EA0: mov     eax, [ecx]
0x6A1EA2: mov     edx, [eax+8]
0x6A1EA5: call    edx
0x6A1EA7: mov     ecx, eax
0x6A1EA9: xor     al, al
0x6A1EAB: test    ecx, ecx
0x6A1EAD: jz      short locret_6A1ED9
0x6A1EAF: push    esi
0x6A1EB0: mov     esi, [esp+4+arg_0]
0x6A1EB4: mov     edx, [ecx+4]
0x6A1EB7: test    edx, edx
0x6A1EB9: jnz     short loc_6A1EBF
0x6A1EBB: cmp     [ecx], edx
0x6A1EBD: jz      short loc_6A1ED8
0x6A1EBF: test    al, al
0x6A1EC1: jnz     short loc_6A1ED8
0x6A1EC3: mov     ecx, [ecx]
0x6A1EC5: test    ecx, ecx
0x6A1EC7: jz      short loc_6A1ED2
0x6A1EC9: mov     ecx, [ecx+0Ch]
0x6A1ECC: cmp     [ecx], esi
0x6A1ECE: jnz     short loc_6A1ED2
0x6A1ED0: mov     al, 1
0x6A1ED2: mov     ecx, edx
0x6A1ED4: test    ecx, ecx
0x6A1ED6: jnz     short loc_6A1EB4
0x6A1ED8: pop     esi
0x6A1ED9: retn    4
