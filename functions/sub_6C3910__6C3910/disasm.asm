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
0x6C3954: call    sub_6E1F60
0x6C3959: retn    4
