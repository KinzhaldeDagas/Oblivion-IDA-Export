0x6C3910: fld     [esp+arg_0]
0x6C3914: push    esi
0x6C3915: sub     esp, 8
0x6C3918: fstp    [esp+0Ch+X]; X
0x6C391B: mov     esi, ecx
0x6C391D: call    __isnan
0x6C3922: add     esp, 8
0x6C3925: test    eax, eax
0x6C3927: jnz     short loc_6C3946
0x6C3929: fld     [esp+4+arg_0]
0x6C392D: sub     esp, 8
0x6C3930: fstp    [esp+0Ch+X]; X
0x6C3933: call    __finite
0x6C3938: add     esp, 8
0x6C393B: test    eax, eax
0x6C393D: jz      short loc_6C3946
0x6C393F: fld     [esp+4+arg_0]
0x6C3943: fstp    dword ptr [esi+28h]
0x6C3946: mov     ecx, [esi+2Ch]
0x6C3949: test    ecx, ecx
0x6C394B: pop     esi
0x6C394C: jz      short locret_6C3959
0x6C394E: push    0
0x6C3950: push    0
0x6C3952: push    0
0x6C3954: call    NiTransformData_SetScaleKeys; Oblivion NiTransformData scale-key ownership setter. Destroys previous keys +0x28 through the destructor table indexed by type +0x18, then installs count +0x0C, pointer +0x28, type +0x18, and table-derived stride +0x1E. Null pointer or zero count clears the channel fields.
0x6C3959: retn    4
