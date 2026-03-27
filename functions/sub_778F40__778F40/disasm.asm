0x778F40: movzx   eax, byte ptr [ecx+18h]
0x778F44: mov     edx, [esp+arg_8]
0x778F48: push    0; int
0x778F4A: push    0; int
0x778F4C: push    eax; char
0x778F4D: mov     eax, [esp+0Ch+arg_4]
0x778F51: push    edx; NiSkinInstance *
0x778F52: mov     edx, [esp+10h+arg_0]
0x778F56: push    eax; NiGeometryData *
0x778F57: push    edx; NiGeometryGroup *
0x778F58: call    NiGeometryGroup__AddGeometryDataToGroup
0x778F5D: retn    0Ch
