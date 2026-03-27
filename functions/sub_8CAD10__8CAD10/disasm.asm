0x8CAD10: mov     ecx, [ecx-4Ch]
0x8CAD13: test    ecx, ecx
0x8CAD15: jz      short locret_8CAD2B
0x8CAD17: mov     eax, [esp+arg_0]
0x8CAD1B: push    offset aActions; "Actions"
0x8CAD20: push    offset unk_BA84D0
0x8CAD25: push    eax
0x8CAD26: call    sub_8CA450
0x8CAD2B: retn    4
