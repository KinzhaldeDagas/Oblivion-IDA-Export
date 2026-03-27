0x413A41: mov     esi, [esp+arg_24]
0x413A45: mov     dword ptr [esi], 0
0x413A4B: mov     word ptr [esi+4], 0
0x413A51: mov     word ptr [esi+6], 0
0x413A57: mov     eax, [eax]
0x413A59: push    0; a3
0x413A5B: push    eax; a2
0x413A5C: mov     ecx, esi; this
0x413A5E: call    BSStringT_Set
0x413A63: or      ebx, 2
0x413A66: test    bl, 1
0x413A69: jz      short EffectItem_GetName___Done
