0x732C50: push    esi
0x732C51: push    edi
0x732C52: mov     edi, [esp+8+arg_0]
0x732C56: push    edi
0x732C57: mov     esi, ecx
0x732C59: call    sub_729450
0x732C5E: movzx   eax, word ptr [esi+8]
0x732C62: push    eax; Size
0x732C63: call    FormHeapAlloc
0x732C68: push    1
0x732C6A: lea     edx, [esp+10h+arg_0]
0x732C6E: push    edx
0x732C6F: movzx   edx, word ptr [esi+8]
0x732C73: push    edx
0x732C74: mov     [esi+40h], eax
0x732C77: mov     ecx, [edi+21Ch]
0x732C7D: push    eax
0x732C7E: mov     eax, [ecx+4]
0x732C81: push    ecx
0x732C82: mov     [esp+20h+arg_0], 1
0x732C8A: call    eax
0x732C8C: add     esp, 18h
0x732C8F: pop     edi
0x732C90: pop     esi
0x732C91: retn    4
