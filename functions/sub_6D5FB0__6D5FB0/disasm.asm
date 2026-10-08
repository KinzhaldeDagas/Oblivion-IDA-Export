0x6D5FB0: mov     ecx, [ecx+2Ch]; Guarantees transform authored-data coverage for [start,end] in place by delegating to NiTransformData_GuaranteeTimeRange when data +0x2C is non-null.
0x6D5FB3: test    ecx, ecx
0x6D5FB5: jz      short locret_6D5FCE
0x6D5FB7: fld     [esp+arg_4]
0x6D5FBB: sub     esp, 8
0x6D5FBE: fstp    [esp+8+var_4]; float
0x6D5FC2: fld     [esp+8+arg_0]
0x6D5FC6: fstp    [esp+8+var_8]; float
0x6D5FC9: call    NiTransformData_GuaranteeTimeRange; Mutates every nonempty transform channel to guarantee keys at start/end: rotation content 2, translation content 1, scale content 0. Euler rotation is handled recursively by the generic key helper.
0x6D5FCE: retn    8
