0x4470B0: push    edi
0x4470B1: mov     edi, ecx
0x4470B3: cmp     dword ptr [edi+8C4h], 0
0x4470BA: jnz     short loc_4470C2
0x4470BC: xor     al, al
0x4470BE: pop     edi
0x4470BF: retn    8
0x4470C2: push    esi
0x4470C3: mov     esi, [esp+8+arg_0]
0x4470C7: push    0FFFFFFFFh; a2
0x4470C9: mov     ecx, esi; this
0x4470CB: call    TESForm_GetOverrideFile
0x4470D0: mov     ecx, [edi+8C4h]
0x4470D6: cmp     eax, ecx
0x4470D8: jnz     short loc_4470E3
0x4470DA: call    TESFile_GetIsMaster
0x4470DF: test    al, al
0x4470E1: jz      short loc_4470EC
0x4470E3: mov     eax, [esi+8]
0x4470E6: shr     eax, 1
0x4470E8: test    al, 1
0x4470EA: jz      short loc_447111
0x4470EC: test    byte ptr [esi+8], 1
0x4470F0: jz      short loc_447107
0x4470F2: mov     edx, [esi]
0x4470F4: mov     eax, [edi+8C4h]
0x4470FA: mov     edx, [edx+2Ch]
0x4470FD: push    eax
0x4470FE: mov     ecx, esi
0x447100: call    edx
0x447102: pop     esi
0x447103: pop     edi
0x447104: retn    8
0x447107: mov     eax, [esi+8]
0x44710A: shr     eax, 5
0x44710D: test    al, 1
0x44710F: jz      short loc_447118
0x447111: pop     esi
0x447112: xor     al, al
0x447114: pop     edi
0x447115: retn    8
0x447118: mov     edx, [esi]
0x44711A: mov     eax, [edi+8C4h]
0x447120: mov     edx, [edx+20h]
0x447123: push    eax
0x447124: mov     ecx, esi
0x447126: call    edx
0x447128: pop     esi
0x447129: pop     edi
0x44712A: retn    8
