0x6C3650: push    esi; Oblivion NiTransformController binary load. Uses generic single-interpolator controller loading, but for stream versions below 0x0A010068 additionally reads a legacy object link that represents NiTransformData.
0x6C3651: mov     esi, [esp+4+arg_0]
0x6C3655: push    esi
0x6C3656: call    NiSingleInterpController_LoadBinary; Loads NiTimeController state. For stream versions >= 0x0A010068, reads and smart-assigns the serialized interpolator reference at +0x3C; older formats leave concrete controllers to migrate legacy data.
0x6C365B: cmp     dword ptr [esi+0D8h], 0A010068h
0x6C3665: jnb     short loc_6C366E
0x6C3667: mov     ecx, esi
0x6C3669: call    sub_712A20
0x6C366E: pop     esi
0x6C366F: retn    4
