0x45E180: push    ebx
0x45E181: mov     ebx, [esp+4+arg_0]
0x45E185: push    esi
0x45E186: mov     esi, [ecx+78h]
0x45E189: mov     ecx, [esi+0Ch]
0x45E18C: xor     eax, eax
0x45E18E: test    ecx, ecx
0x45E190: jbe     short loc_45E1A3
0x45E192: mov     edx, [esi+4]
0x45E195: cmp     [edx], ebx
0x45E197: jz      short loc_45E210
0x45E199: add     eax, 1
0x45E19C: add     edx, 4
0x45E19F: cmp     eax, ecx
0x45E1A1: jb      short loc_45E195
0x45E1A3: push    edi
0x45E1A4: mov     edi, ecx
0x45E1A6: cmp     edi, [esi+8]
0x45E1A9: jb      short loc_45E1B8
0x45E1AB: mov     eax, [esi+14h]
0x45E1AE: add     eax, edi
0x45E1B0: push    eax
0x45E1B1: mov     ecx, esi
0x45E1B3: call    sub_452910
0x45E1B8: cmp     edi, [esi+0Ch]
0x45E1BB: jb      short loc_45E1DA
0x45E1BD: test    ebx, ebx
0x45E1BF: lea     ecx, [edi+1]
0x45E1C2: mov     [esi+0Ch], ecx
0x45E1C5: jz      short loc_45E206
0x45E1C7: mov     ecx, [esi+4]
0x45E1CA: add     dword ptr [esi+10h], 1
0x45E1CE: mov     [ecx+edi*4], ebx
0x45E1D1: mov     ax, di
0x45E1D4: pop     edi
0x45E1D5: pop     esi
0x45E1D6: pop     ebx
0x45E1D7: retn    4
0x45E1DA: test    ebx, ebx
0x45E1DC: jz      short loc_45E1F9
0x45E1DE: mov     edx, [esi+4]
0x45E1E1: cmp     dword ptr [edx+edi*4], 0
0x45E1E5: jnz     short loc_45E206
0x45E1E7: add     dword ptr [esi+10h], 1
0x45E1EB: mov     ecx, edx
0x45E1ED: mov     [ecx+edi*4], ebx
0x45E1F0: mov     ax, di
0x45E1F3: pop     edi
0x45E1F4: pop     esi
0x45E1F5: pop     ebx
0x45E1F6: retn    4
0x45E1F9: mov     eax, [esi+4]
0x45E1FC: cmp     dword ptr [eax+edi*4], 0
0x45E200: jz      short loc_45E206
0x45E202: add     dword ptr [esi+10h], 0FFFFFFFFh
0x45E206: mov     ecx, [esi+4]
0x45E209: mov     [ecx+edi*4], ebx
0x45E20C: mov     ax, di
0x45E20F: pop     edi
0x45E210: pop     esi
0x45E211: pop     ebx
0x45E212: retn    4
