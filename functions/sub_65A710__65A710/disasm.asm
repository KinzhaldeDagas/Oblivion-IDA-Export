0x65A710: call    MobileObject_GetCharProxy; TES4 authoritative: MobileObject_GetCharProxy uses process vfunc GetCharProxy and releases the smart pointer wrapper. Use to confirm recovered owner maps back to the same proxy.
0x65A715: test    eax, eax
0x65A717: jz      short loc_65A738
0x65A719: mov     eax, [eax+8]
0x65A71C: test    eax, eax
0x65A71E: jz      short locret_65A756
0x65A720: mov     ecx, eax
0x65A722: call    bhkWorldObject_GetLinearVelocityPtr; TES4 authoritative: returns pointer to bhk collision object's velocity vector at object+0x10. 0x896000 copies this into proxy +0x2E0 before state update.
0x65A727: push    eax
0x65A728: mov     eax, [esp+4+arg_0]
0x65A72C: push    eax
0x65A72D: call    HavokVector_ToWorldVector; TES4 authoritative: converts Havok-unit vector to TES/world units using dbl_A372E0 (inverse hkFactor).
0x65A732: add     esp, 8
0x65A735: retn    4
0x65A738: mov     ecx, ds:0B3F9A8h
0x65A73E: mov     eax, [esp+arg_0]
0x65A742: mov     [eax], ecx
0x65A744: mov     edx, ds:0B3F9ACh
0x65A74A: mov     [eax+4], edx
0x65A74D: mov     ecx, ds:0B3F9B0h
0x65A753: mov     [eax+8], ecx
0x65A756: retn    4
