0xA10D00: mov     ecx, offset CWindEngine__s_windMatrixContainer; CRT dynamic initializer for the process-global Oblivion CWindMatrices object; constructs the four-matrix default and registers the matching atexit destructor.
0xA10D05: call    OB_CWindMatrices_ctor_010201A0; Constructs the shared CWindMatrices container, allocates four 0x40-byte identity transforms, then records size 4.
0xA10D0A: push    offset OB_CWindMatrices_GlobalDtor_010201A0; void (__cdecl *)()
0xA10D0F: call    _atexit
0xA10D14: pop     ecx
0xA10D15: retn
