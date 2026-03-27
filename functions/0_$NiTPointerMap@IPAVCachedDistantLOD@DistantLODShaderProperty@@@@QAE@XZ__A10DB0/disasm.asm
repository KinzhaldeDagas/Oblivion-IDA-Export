0xA10DB0: xor     ecx, ecx
0xA10DB2: mov     eax, 25h ; '%'
0xA10DB7: mov     edx, 4
0xA10DBC: mul     edx
0xA10DBE: seto    cl
0xA10DC1: neg     ecx
0xA10DC3: or      ecx, eax
0xA10DC5: push    ecx; Size
0xA10DC6: call    FormHeapAlloc
0xA10DCB: mov     ecx, dword_B2C340
0xA10DD1: lea     edx, ds:0[ecx*4]
0xA10DD8: push    edx
0xA10DD9: push    0
0xA10DDB: push    eax
0xA10DDC: mov     dword_B2C344, eax
0xA10DE1: call    __memset
0xA10DE6: push    offset sub_A27100; void (__cdecl *)()
0xA10DEB: mov     off_B2C33C, offset ??_7?$NiTPointerMap@IPAVCachedDistantLOD@DistantLODShaderProperty@@@@6B@; const NiTPointerMap<uint,DistantLODShaderProperty::CachedDistantLOD *>::`vftable' ...
0xA10DF5: call    _atexit
0xA10DFA: add     esp, 14h
0xA10DFD: retn
