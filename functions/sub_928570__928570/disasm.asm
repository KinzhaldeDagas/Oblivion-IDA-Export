0x928570: mov     eax, [esp+arg_0]
0x928574: add     ecx, 50h ; 'P'
0x928577: push    ecx
0x928578: mov     ecx, [esp+4+arg_4]
0x92857C: push    eax
0x92857D: call    hkTransform_TransformPosition; TES4 authoritative: transforms a local position by a Havok transform/matrix at a2: basis columns * local vector + translation.
0x928582: retn    8
