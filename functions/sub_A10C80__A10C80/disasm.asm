0xA10C80: mov     ecx, offset stru_B42998; this
0xA10C85: call    OB_Normal_ctor_010201A0; Oblivion Normal constructor. Initializes the PosGen layout, reuses the static Normal sx/sfx/xi tables when available or builds them symmetrically once, then increments the shared instance count.
0xA10C8A: push    offset sub_A26F20; void (__cdecl *)()
0xA10C8F: call    _atexit
0xA10C94: pop     ecx
0xA10C95: retn
