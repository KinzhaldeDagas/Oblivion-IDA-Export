0x565F3F: mov     edi, [esi+28h]
0x565F42: test    edi, edi
0x565F44: jz      short loc_565F56
0x565F46: mov     ecx, edi; void *
0x565F48: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x565F4D: push    edi
0x565F4E: call    FormHeapFree
0x565F53: add     esp, 4
0x565F56: mov     dword ptr [esi+28h], 0
0x565F5D: mov     ecx, [esp+arg_8]
0x565F61: mov     large fs:0, ecx
0x565F68: pop     ecx
0x565F69: pop     edi
0x565F6A: pop     esi
0x565F6B: add     esp, 0Ch
0x565F6E: retn    4
