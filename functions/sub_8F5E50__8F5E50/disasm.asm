0x8F5E50: mov     dl, [esp+arg_8]
0x8F5E54: test    dl, dl
0x8F5E56: push    esi
0x8F5E57: mov     esi, ecx
0x8F5E59: mov     ecx, [esp+4+arg_4]
0x8F5E5D: push    edi
0x8F5E5E: mov     edi, [esp+8+arg_0]
0x8F5E62: mov     word ptr [esi+6], 1
0x8F5E68: mov     dword ptr [esi], offset off_A9B3BC
0x8F5E6E: mov     dword ptr [esi+8], 0
0x8F5E75: mov     [esi+0Ch], edi
0x8F5E78: mov     dword ptr [esi+10h], 0
0x8F5E7F: lea     eax, [ecx-1]
0x8F5E82: jnz     short loc_8F5E86
0x8F5E84: mov     eax, ecx
0x8F5E86: test    dl, dl
0x8F5E88: mov     [esi+14h], eax
0x8F5E8B: mov     byte ptr [esi+18h], 0
0x8F5E8F: jz      short loc_8F5E9D
0x8F5E91: push    ecx
0x8F5E92: push    0
0x8F5E94: push    edi
0x8F5E95: call    sub_8B18C0
0x8F5E9A: add     esp, 0Ch
0x8F5E9D: pop     edi
0x8F5E9E: mov     eax, esi
0x8F5EA0: pop     esi
0x8F5EA1: retn    0Ch
