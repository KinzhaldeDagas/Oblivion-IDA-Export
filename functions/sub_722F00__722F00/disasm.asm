0x722F00: mov     eax, [esp+arg_4]
0x722F04: push    ebx
0x722F05: mov     ebx, [esp+4+arg_0]
0x722F09: push    esi
0x722F0A: push    edi
0x722F0B: mov     edi, [esp+0Ch+arg_8]
0x722F0F: push    edi
0x722F10: push    eax
0x722F11: push    ebx
0x722F12: mov     esi, ecx
0x722F14: call    sub_707D80
0x722F19: cmp     dword ptr [esi+0B8h], 0
0x722F20: jz      short loc_722F32
0x722F22: or      word ptr [esi+18h], 4
0x722F27: mov     byte ptr [ebx], 1
0x722F2A: or      word ptr [esi+18h], 2
0x722F2F: mov     byte ptr [edi], 0
0x722F32: pop     edi
0x722F33: pop     esi
0x722F34: pop     ebx
0x722F35: retn    0Ch
