0xA26F20: mov     ecx, offset stru_B42998; this
0xA26F25: jmp     OB_Normal_dtor_010201A0; Oblivion Normal destructor. Decrements the shared Normal instance count; non-final instances mark their PosGen base notReady so only the final owner releases the shared sx/sfx tables.
