0x598190: push    esi
0x598191: mov     esi, ecx
0x598193: call    sub_57BD80
0x598198: mov     ecx, [esi+34h]; this
0x59819B: test    ecx, ecx
0x59819D: mov     dword ptr [esi+3Ch], 0
0x5981A4: pop     esi
0x5981A5: jz      short locret_5981CD
0x5981A7: fld1
0x5981A9: push    ecx
0x5981AA: fstp    [esp+4+a2]; a3
0x5981AD: push    0FA1h; a2
0x5981B2: call    Tile_SetFloat
0x5981B7: push    1; arg1
0x5981B9: push    0; canCreate
0x5981BB: call    InterfaceManager_GetSingleton
0x5981C0: add     esp, 8
0x5981C3: mov     dword ptr [eax+88h], 0
0x5981CD: retn    8
