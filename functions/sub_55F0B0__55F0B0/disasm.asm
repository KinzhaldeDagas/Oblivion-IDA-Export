0x55F0B0: push    ecx
0x55F0B1: push    ebx
0x55F0B2: push    edi
0x55F0B3: mov     ebx, ecx
0x55F0B5: xor     edi, edi
0x55F0B7: cmp     [ebx], edi
0x55F0B9: jbe     short loc_55F103
0x55F0BB: push    esi
0x55F0BC: lea     esp, [esp+0]
0x55F0C0: mov     eax, [ebx+8]
0x55F0C3: mov     ecx, [eax+edi*8+4]
0x55F0C7: mov     [esp+10h+var_4], ecx
0x55F0CB: mov     edx, [esp+10h+var_4]
0x55F0CF: mov     [esp+10h+var_4], edx
0x55F0D3: mov     eax, [esp+10h+var_4]
0x55F0D7: test    eax, eax
0x55F0D9: jz      short loc_55F0FB
0x55F0DB: mov     esi, [esp+10h+var_4]
0x55F0DF: cmp     dword ptr [esi+20h], 0
0x55F0E3: jz      short loc_55F0F2
0x55F0E5: mov     ecx, esi
0x55F0E7: call    sub_435FE0
0x55F0EC: cmp     dword ptr [esi+20h], 0
0x55F0F0: jnz     short loc_55F0E5
0x55F0F2: push    esi
0x55F0F3: call    FormHeapFree
0x55F0F8: add     esp, 4
0x55F0FB: add     edi, 1
0x55F0FE: cmp     edi, [ebx]
0x55F100: jb      short loc_55F0C0
0x55F102: pop     esi
0x55F103: mov     ecx, [ebx+8]
0x55F106: push    ecx
0x55F107: call    FormHeapFree
0x55F10C: mov     edx, [ebx+4]
0x55F10F: add     esp, 4
0x55F112: push    edx; dwTlsIndex
0x55F113: call    dword ptr ds:0A28154h
0x55F119: pop     edi
0x55F11A: pop     ebx
0x55F11B: pop     ecx
0x55F11C: retn
