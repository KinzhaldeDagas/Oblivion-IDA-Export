0x56BDE0: fldz; Verified default restore constructor for type ID 0: installs BSTempEffectDecal vtable and clears its decal object pointer.
0x56BDE2: push    esi
0x56BDE3: push    ecx
0x56BDE4: fstp    [esp+8+durationSeconds]; durationSeconds
0x56BDE7: push    0; parentCell
0x56BDE9: mov     esi, ecx
0x56BDEB: call    BSTempEffect_Constructor; Verified BSTempEffect constructor: initializes NiObject base, stores duration at +0x08 and parent cell at +0x0C, zeros elapsed at +0x10, sets initializeCallbackDone (+0x14) false, and installs BSTempEffect vtable.
0x56BDF0: mov     dword ptr [esi], offset ??_7BSTempEffectDecal@@6B@; const BSTempEffectDecal::`vftable'
0x56BDF6: mov     dword ptr [esi+18h], 0
0x56BDFD: mov     eax, esi
0x56BDFF: pop     esi
0x56BE00: retn
