0x52B3F0: sub     esp, 8
0x52B3F3: push    esi
0x52B3F4: push    edi
0x52B3F5: mov     edi, [esp+10h+a1]
0x52B3F9: test    edi, edi
0x52B3FB: mov     esi, ecx
0x52B3FD: jz      short loc_52B431
0x52B3FF: mov     ecx, edi
0x52B401: call    TESFile_GetChunkType
0x52B406: cmp     eax, 41545351h
0x52B40B: jnz     short loc_52B431
0x52B40D: xor     eax, eax
0x52B40F: push    eax; a4
0x52B410: mov     dword ptr [esp+14h+Dst], eax
0x52B414: mov     [esp+14h+var_4], eax
0x52B418: lea     eax, [esp+14h+Dst]
0x52B41C: push    eax; Dst
0x52B41D: mov     ecx, edi; a1
0x52B41F: call    TESFile_GetChunkData
0x52B424: mov     ecx, dword ptr [esp+10h+Dst]
0x52B428: mov     dl, byte ptr [esp+10h+var_4]
0x52B42C: mov     [esi+0Ch], ecx
0x52B42F: mov     [esi], dl
0x52B431: pop     edi
0x52B432: pop     esi
0x52B433: add     esp, 8
0x52B436: retn    4
