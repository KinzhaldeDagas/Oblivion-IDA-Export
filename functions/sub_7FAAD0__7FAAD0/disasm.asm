0x7FAAD0: mov     eax, [esp+lightSlot]; Lighting30 LightData writer. Slot 0 maps to pixel c10; mode-5 SM3026 consumes c10.w as its view-space caster-depth divisor.
0x7FAAD4: cmp     eax, 13h
0x7FAAD7: ja      short locret_7FAAFC
0x7FAAD9: mov     ecx, [esp+x]
0x7FAADD: mov     edx, [esp+y]
0x7FAAE1: shl     eax, 5
0x7FAAE4: add     eax, offset unk_B47018; LightData bank slot 0 is pixel c10. SM3026 consumes c10.w as its caster depth divisor.
0x7FAAE9: mov     [eax], ecx
0x7FAAEB: mov     ecx, [esp+z]
0x7FAAEF: mov     [eax+4], edx
0x7FAAF2: mov     edx, [esp+w]
0x7FAAF6: mov     [eax+8], ecx
0x7FAAF9: mov     [eax+0Ch], edx
0x7FAAFC: retn
