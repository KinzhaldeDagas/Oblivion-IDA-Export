0xA10CE0: mov     ecx, offset stru_B429C9; this
0xA10CE5: call    OB_stRandom_ctor_010201A0; Oblivion stRandom constructor. The class has no per-instance generator state; if the shared SIdvRandomImpl state is not initialized, it invokes Reseed(-1).
0xA10CEA: push    offset sub_A26F30; void (__cdecl *)()
0xA10CEF: call    _atexit
0xA10CF4: pop     ecx
0xA10CF5: retn
