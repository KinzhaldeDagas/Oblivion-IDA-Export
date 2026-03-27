0x44FB20: mov     al, [esp+arg_0]
0x44FB24: push    esi
0x44FB25: mov     esi, [ecx+3D8h]
0x44FB2B: movzx   edx, al
0x44FB2E: and     esi, 0FFFFFFh
0x44FB34: shl     edx, 18h
0x44FB37: or      edx, esi
0x44FB39: mov     [ecx+3D8h], edx
0x44FB3F: mov     [ecx+400h], al
0x44FB45: pop     esi
0x44FB46: retn    4
