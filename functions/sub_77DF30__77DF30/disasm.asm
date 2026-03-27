0x77DF30: push    esi
0x77DF31: push    edi
0x77DF32: mov     edi, [esp+8+arg_0]
0x77DF36: mov     esi, [edi+28h]
0x77DF39: test    esi, esi
0x77DF3B: jz      short loc_77DF74
0x77DF3D: push    esi
0x77DF3E: call    sub_782930
0x77DF43: mov     eax, [esi+24h]
0x77DF46: test    eax, eax
0x77DF48: jz      short loc_77DF5D
0x77DF4A: mov     ecx, [esi+1Ch]
0x77DF4D: add     ecx, ecx
0x77DF4F: add     ecx, ecx
0x77DF51: push    ecx
0x77DF52: push    0
0x77DF54: push    eax
0x77DF55: call    __memset
0x77DF5A: add     esp, 0Ch
0x77DF5D: mov     ecx, esi
0x77DF5F: call    sub_778110
0x77DF64: push    esi
0x77DF65: call    FormHeapFree
0x77DF6A: add     esp, 4
0x77DF6D: mov     dword ptr [edi+28h], 0
0x77DF74: pop     edi
0x77DF75: pop     esi
0x77DF76: retn    4
