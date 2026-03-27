0x453480: push    ebx
0x453481: push    edi
0x453482: mov     edi, [esp+8+arg_0]
0x453486: test    edi, edi
0x453488: mov     ebx, ecx
0x45348A: jz      short loc_4534C8
0x45348C: mov     eax, [esp+8+arg_4]
0x453490: push    esi
0x453491: push    3
0x453493: push    eax
0x453494: push    edi
0x453495: call    Savegame_Rename
0x45349A: mov     esi, eax
0x45349C: test    esi, esi
0x45349E: jnz     short loc_4534A2
0x4534A0: mov     esi, edi
0x4534A2: lea     ecx, [esi+3Ch]
0x4534A5: push    ecx; lpFileName
0x4534A6: call    dword ptr ds:0A280ACh
0x4534AC: test    esi, esi
0x4534AE: jz      short loc_4534C7
0x4534B0: mov     ecx, [ebx+6Ch]
0x4534B3: test    ecx, ecx
0x4534B5: jz      short loc_4534BD
0x4534B7: push    esi
0x4534B8: call    BSSimpleList_Remove
0x4534BD: mov     edx, [esi]
0x4534BF: mov     eax, [edx]
0x4534C1: push    1
0x4534C3: mov     ecx, esi
0x4534C5: call    eax
0x4534C7: pop     esi
0x4534C8: pop     edi
0x4534C9: pop     ebx
0x4534CA: retn    8
