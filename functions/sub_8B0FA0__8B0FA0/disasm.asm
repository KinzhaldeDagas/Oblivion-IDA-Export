0x8B0FA0: mov     eax, [ecx+4]
0x8B0FA3: push    ebx
0x8B0FA4: dec     eax
0x8B0FA5: push    ebp
0x8B0FA6: mov     [ecx+4], eax
0x8B0FA9: mov     eax, [ecx]
0x8B0FAB: push    esi
0x8B0FAC: push    edi
0x8B0FAD: mov     edi, [esp+10h+arg_0]
0x8B0FB1: mov     dword ptr [eax+edi*4], 0
0x8B0FB8: mov     esi, [ecx+8]
0x8B0FBB: mov     edx, [ecx]
0x8B0FBD: lea     eax, [esi+edi]
0x8B0FC0: and     eax, esi
0x8B0FC2: cmp     dword ptr [edx+eax*4], 0
0x8B0FC6: jz      short loc_8B0FDA
0x8B0FC8: mov     ebx, edx
0x8B0FCA: lea     ebx, [ebx+0]
0x8B0FD0: add     eax, esi
0x8B0FD2: and     eax, esi
0x8B0FD4: cmp     dword ptr [ebx+eax*4], 0
0x8B0FD8: jnz     short loc_8B0FD0
0x8B0FDA: inc     eax
0x8B0FDB: and     eax, esi
0x8B0FDD: mov     [esp+10h+arg_0], eax
0x8B0FE1: lea     eax, [edi+1]
0x8B0FE4: and     eax, esi
0x8B0FE6: cmp     dword ptr [edx+eax*4], 0
0x8B0FEA: jz      short loc_8B1050
0x8B0FEC: lea     esp, [esp+0]
0x8B0FF0: mov     ebx, [ecx]
0x8B0FF2: mov     ebp, [ebx+eax*4]
0x8B0FF5: mov     edx, ebp
0x8B0FF7: shr     edx, 4
0x8B0FFA: imul    edx, 9E3779B1h
0x8B1000: and     edx, esi
0x8B1002: mov     esi, [esp+10h+arg_0]
0x8B1006: cmp     eax, esi
0x8B1008: jb      short loc_8B100E
0x8B100A: cmp     edx, edi
0x8B100C: ja      short loc_8B1042
0x8B100E: cmp     eax, edi
0x8B1010: jnb     short loc_8B101A
0x8B1012: cmp     edx, edi
0x8B1014: ja      short loc_8B1042
0x8B1016: cmp     edx, eax
0x8B1018: jbe     short loc_8B1042
0x8B101A: cmp     edx, edi
0x8B101C: jbe     short loc_8B1022
0x8B101E: cmp     edx, esi
0x8B1020: jb      short loc_8B1042
0x8B1022: mov     [ebx+edi*4], ebp
0x8B1025: mov     edx, [ecx+8]
0x8B1028: mov     esi, [ecx]
0x8B102A: lea     ebx, [edx+eax]
0x8B102D: add     edx, edi
0x8B102F: mov     edi, [esi+ebx*4+4]
0x8B1033: mov     [esi+edx*4+4], edi
0x8B1037: mov     edx, [ecx]
0x8B1039: mov     dword ptr [edx+eax*4], 0
0x8B1040: mov     edi, eax
0x8B1042: mov     esi, [ecx+8]
0x8B1045: mov     edx, [ecx]
0x8B1047: inc     eax
0x8B1048: and     eax, esi
0x8B104A: cmp     dword ptr [edx+eax*4], 0
0x8B104E: jnz     short loc_8B0FF0
0x8B1050: pop     edi
0x8B1051: pop     esi
0x8B1052: pop     ebp
0x8B1053: pop     ebx
0x8B1054: retn    4
