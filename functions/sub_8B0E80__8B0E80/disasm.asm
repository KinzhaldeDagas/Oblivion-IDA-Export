0x8B0E80: push    ebx
0x8B0E81: push    ebp
0x8B0E82: push    esi
0x8B0E83: mov     esi, ecx
0x8B0E85: mov     ecx, [esi+4]
0x8B0E88: mov     eax, [esi+8]
0x8B0E8B: shl     ecx, 1
0x8B0E8D: cmp     ecx, eax
0x8B0E8F: push    edi
0x8B0E90: jle     short loc_8B0E9E
0x8B0E92: lea     edx, [eax+eax+2]
0x8B0E96: push    edx
0x8B0E97: mov     ecx, esi
0x8B0E99: call    sub_8B1060
0x8B0E9E: mov     edi, [esp+10h+arg_0]
0x8B0EA2: mov     edx, [esi+8]
0x8B0EA5: mov     ecx, [esi]
0x8B0EA7: mov     eax, edi
0x8B0EA9: shr     eax, 4
0x8B0EAC: imul    eax, 9E3779B1h
0x8B0EB2: and     eax, edx
0x8B0EB4: cmp     dword ptr [ecx+eax*4], 0
0x8B0EB8: jz      short loc_8B0ED0
0x8B0EBA: lea     ebx, [ebx+0]
0x8B0EC0: cmp     [ecx+eax*4], edi
0x8B0EC3: jz      short loc_8B0ED0
0x8B0EC5: mov     ebx, [esi]
0x8B0EC7: inc     eax
0x8B0EC8: and     eax, edx
0x8B0ECA: cmp     dword ptr [ebx+eax*4], 0
0x8B0ECE: jnz     short loc_8B0EC0
0x8B0ED0: mov     ebp, [ecx+eax*4]
0x8B0ED3: mov     ebx, [esi+4]
0x8B0ED6: xor     edx, edx
0x8B0ED8: cmp     ebp, edi
0x8B0EDA: setnz   dl
0x8B0EDD: add     ebx, edx
0x8B0EDF: mov     [esi+4], ebx
0x8B0EE2: mov     [ecx+eax*4], edi
0x8B0EE5: mov     ecx, [esi+8]
0x8B0EE8: mov     edx, [esi]
0x8B0EEA: pop     edi
0x8B0EEB: pop     esi
0x8B0EEC: add     ecx, eax
0x8B0EEE: mov     eax, [esp+8+arg_4]
0x8B0EF2: pop     ebp
0x8B0EF3: mov     [edx+ecx*4+4], eax
0x8B0EF7: pop     ebx
0x8B0EF8: retn    8
