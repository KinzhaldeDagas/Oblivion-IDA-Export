0x74E2B0: push    esi
0x74E2B1: push    edi
0x74E2B2: mov     edi, [esp+8+arg_0]
0x74E2B6: push    edi
0x74E2B7: mov     esi, ecx
0x74E2B9: call    nullsub_returnvVoid_1arg
0x74E2BE: cmp     dword ptr [edi+0D8h], 14000002h
0x74E2C8: jnb     short loc_74E2FD
0x74E2CA: mov     eax, [esi+10h]
0x74E2CD: mov     edx, [eax+0B4h]
0x74E2D3: mov     ecx, [edx+60h]
0x74E2D6: test    ecx, ecx
0x74E2D8: jz      short loc_74E2FD
0x74E2DA: xor     eax, eax
0x74E2DC: cmp     [edx+48h], ax
0x74E2E0: jbe     short loc_74E2FD
0x74E2E2: fld     dword ptr [esi+18h]
0x74E2E5: movzx   edx, ax
0x74E2E8: add     eax, 1
0x74E2EB: fstp    dword ptr [ecx+edx*4]
0x74E2EE: mov     edx, [esi+10h]
0x74E2F1: mov     edx, [edx+0B4h]
0x74E2F7: cmp     ax, [edx+48h]
0x74E2FB: jb      short loc_74E2E2
0x74E2FD: pop     edi
0x74E2FE: pop     esi
0x74E2FF: retn    4
