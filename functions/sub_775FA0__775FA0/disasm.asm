0x775FA0: push    ebx
0x775FA1: push    ebp
0x775FA2: push    esi
0x775FA3: mov     edx, ecx
0x775FA5: mov     ebp, [edx+3Ch]
0x775FA8: push    edi
0x775FA9: xor     bl, bl
0x775FAB: mov     eax, 1
0x775FB0: mov     ecx, [edx+3Ch]
0x775FB3: mov     esi, ecx
0x775FB5: and     ecx, 1Fh
0x775FB8: mov     edi, eax
0x775FBA: shl     edi, cl
0x775FBC: shr     esi, 5
0x775FBF: mov     ecx, [edx+esi*4+40h]
0x775FC3: test    edi, ecx
0x775FC5: jnz     short loc_775FCF
0x775FC7: or      ecx, edi
0x775FC9: mov     [edx+esi*4+40h], ecx
0x775FCD: mov     bl, al
0x775FCF: add     [edx+3Ch], eax
0x775FD2: cmp     dword ptr [edx+3Ch], 1000h
0x775FD9: jnz     short loc_775FE2
0x775FDB: mov     dword ptr [edx+3Ch], 0
0x775FE2: test    bl, bl
0x775FE4: jz      short loc_775FB0
0x775FE6: pop     edi
0x775FE7: pop     esi
0x775FE8: mov     eax, ebp
0x775FEA: pop     ebp
0x775FEB: pop     ebx
0x775FEC: retn
